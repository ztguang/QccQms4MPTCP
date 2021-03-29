/*
 1. passing QoE parameter to Android Kernel								in	tcp_v4_connect()		net/ipv4/tcp_ipv4.c
 2. set rwnd send to sender according to QoE & trigger (set in QCC)				in	__tcp_transmit_skb()	net/ipv4/tcp_output.c
 3. set cwnd & ssthresh according to QoE 								in	QCC
 4. select subflow according to sort_rtt & & sort_cwnd & QoE					in	QMS
 */

/*
 *	MPTCP implementation - QoE-Driven Congestion Controller (QCC)
 *	QCC is a bandwidth, delay and loss-based coupled congestion controller
 *	for MPTCP over wireless networks and is used in Android kernel.
 *
 *	QCC is based on TCP CUBIC.
 *
 *	Algorithm design: Tongguang Zhang <jsjoscpu@163.com>
 *
 *	Implementation: Tongguang Zhang <jsjoscpu@163.com>
 *
 *	This program is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU General Public License
 *	as published by the Free Software Foundation; either version
 *	2 of the License, or (at your option) any later version.
 */

/*
 * TCP CUBIC: Binary Increase Congestion control for TCP v2.3
 * Home page:
 *      http://netsrv.csc.ncsu.edu/twiki/bin/view/Main/BIC
 * This is from the implementation of CUBIC TCP in
 * Sangtae Ha, Injong Rhee and Lisong Xu,
 *  "CUBIC: A New TCP-Friendly High-Speed TCP Variant"
 *  in ACM SIGOPS Operating System Review, July 2008.
 * Available from:
 *  http://netsrv.csc.ncsu.edu/export/cubic_a_new_tcp_2008.pdf
 *
 * CUBIC integrates a new slow start algorithm, called HyStart.
 * The details of HyStart are presented in
 *  Sangtae Ha and Injong Rhee,
 *  "Taming the Elephants: New TCP Slow Start", NCSU TechReport 2008.
 * Available from:
 *  http://netsrv.csc.ncsu.edu/export/hystart_techreport_2008.pdf
 *
 * All testing results are available from:
 * http://netsrv.csc.ncsu.edu/wiki/index.php/TCP_Testing
 *
 * Unless CUBIC is enabled and congestion window is large
 * this behaves the same as the original Reno.
 */

#include <linux/mm.h>
#include <linux/module.h>
#include <linux/math64.h>
#include <net/tcp.h>
#include <net/mptcp.h>

#define MPTCP_QCC_BETA_SCALE    1024	/* Scale factor beta calculation
					 * max_cwnd = snd_cwnd * beta
					 */
#define	MPTCP_QCC_HZ		10	/* BIC HZ 2^10 = 1024 */

/* Two methods of hybrid slow start */
#define HYSTART_ACK_TRAIN	0x1
#define HYSTART_DELAY		0x2

/* Number of delay samples for detecting the increase of delay */
#define HYSTART_MIN_SAMPLES	8
#define HYSTART_DELAY_MIN	(4U<<3)
#define HYSTART_DELAY_MAX	(16U<<3)
#define HYSTART_DELAY_THRESH(x)	clamp(x, HYSTART_DELAY_MIN, HYSTART_DELAY_MAX)

static int fast_convergence __read_mostly = 1;
static int beta __read_mostly = 717;	/* = 717/1024 (MPTCP_QCC_BETA_SCALE) */
static int initial_ssthresh __read_mostly;
static int bic_scale __read_mostly = 41;
static int tcp_friendliness __read_mostly = 1;

static int hystart __read_mostly = 1;
static int hystart_detect __read_mostly = HYSTART_ACK_TRAIN | HYSTART_DELAY;
static int hystart_low_window __read_mostly = 16;
static int hystart_ack_delta __read_mostly = 2;

static u32 cube_rtt_scale __read_mostly;
static u32 beta_scale __read_mostly;
static u64 cube_factor __read_mostly;

/* Note parameters that are used for precomputing scale factors are read-only */
module_param(fast_convergence, int, 0644);
MODULE_PARM_DESC(fast_convergence, "turn on/off fast convergence");
module_param(beta, int, 0644);
MODULE_PARM_DESC(beta, "beta for multiplicative increase");
module_param(initial_ssthresh, int, 0644);
MODULE_PARM_DESC(initial_ssthresh, "initial value of slow start threshold");
module_param(bic_scale, int, 0444);
MODULE_PARM_DESC(bic_scale, "scale (scaled by 1024) value for bic function (bic_scale/1024)");
module_param(tcp_friendliness, int, 0644);
MODULE_PARM_DESC(tcp_friendliness, "turn on/off tcp friendliness");
module_param(hystart, int, 0644);
MODULE_PARM_DESC(hystart, "turn on/off hybrid slow start algorithm");
module_param(hystart_detect, int, 0644);
MODULE_PARM_DESC(hystart_detect, "hyrbrid slow start detection mechanisms"
		 " 1: packet-train 2: delay 3: both packet-train and delay");
module_param(hystart_low_window, int, 0644);
MODULE_PARM_DESC(hystart_low_window, "lower bound cwnd for hybrid slow start");
module_param(hystart_ack_delta, int, 0644);
MODULE_PARM_DESC(hystart_ack_delta, "spacing between ack's indicating train (msecs)");


/* BIC TCP Parameters */
struct mptcp_qcc {
	u32	cnt;		/* increase cwnd by 1 after ACKs */
	u32	last_max_cwnd;	/* last maximum snd_cwnd */
	u32	loss_cwnd;	/* congestion window at last loss */
	u32	last_cwnd;	/* the last snd_cwnd */
	u32	last_time;	/* time when updated last_cwnd */
	u32	bic_origin_point;/* origin point of bic function */
	u32	bic_K;		/* time to origin point
				   from the beginning of the current epoch */
	u32	delay_min;	/* min delay (msec << 3) */
	u32	epoch_start;	/* beginning of an epoch */
	u32	ack_cnt;	/* number of acks */
	u32	tcp_cwnd;	/* estimated tcp cwnd */
	u16	unused;
	u8	sample_cnt;	/* number of samples to decide curr_rtt */
	u8	found;		/* the exit point is found? */
	u32	round_start;	/* beginning of each round */
	u32	end_seq;	/* end_seq of the round */
	u32	last_ack;	/* last time when the ACK spacing is close */
	u32	curr_rtt;	/* the minimum rtt of current round */
};

static inline void mptcp_qcc_reset(struct mptcp_qcc *qcc, struct sock *sk)
{
	// QCC ADD
	struct tcp_sock *tp = tcp_sk(sk);

	qcc->cnt = 0;
	qcc->last_max_cwnd = 0;
	qcc->last_cwnd = 0;
	qcc->last_time = 0;
	qcc->bic_origin_point = 0;
	qcc->bic_K = 0;
	qcc->delay_min = 0;
	qcc->epoch_start = 0;
	qcc->ack_cnt = 0;
	qcc->tcp_cwnd = 0;
	qcc->found = 0;

	//--------------------------------------------------------------------------
	// QCC ADD
	//--------------------------------------------------------------------------
	tp->qccqms.cntRTT = 0;
	tp->qccqms.cumRTT = 0;
	//--------------------------------------------------------------------------
}

static inline u32 mptcp_qcc_clock(void)
{
#if HZ < 1000
	return ktime_to_ms(ktime_get_real());
#else
	return jiffies_to_msecs(jiffies);
#endif
}

static inline void mptcp_qcc_hystart_reset(struct sock *sk)
{
	struct tcp_sock *tp = tcp_sk(sk);
	struct mptcp_qcc *qcc = inet_csk_ca(sk);

	qcc->round_start = qcc->last_ack = mptcp_qcc_clock();
	qcc->end_seq = tp->snd_nxt;
	qcc->curr_rtt = 0;
	qcc->sample_cnt = 0;
}

static void mptcp_qcc_init(struct sock *sk)
{
	struct mptcp_qcc *qcc = inet_csk_ca(sk);

	// QCC ADD
	struct tcp_sock *tp = tcp_sk(sk);

	mptcp_qcc_reset(qcc, sk);
	qcc->loss_cwnd = 0;

	if (hystart)
		mptcp_qcc_hystart_reset(sk);

	if (!hystart && initial_ssthresh)
		tcp_sk(sk)->snd_ssthresh = initial_ssthresh;

	//--------------------------------------------------------------------------
	// QCC ADD
	//--------------------------------------------------------------------------
	tp->qccqms.triRound = 3;			// the trigger for QoE, The initial value is 3
	tp->qccqms.trigger = 0;			// Triggered after three rounds (triRound) of congestion control

	tp->qccqms.baseRTT = 0x7fffffff;
	//--------------------------------------------------------------------------
}

static void mptcp_qcc_cwnd_event(struct sock *sk, enum tcp_ca_event event)
{
	if (event == CA_EVENT_TX_START) {
		struct mptcp_qcc *qcc = inet_csk_ca(sk);
		u32 now = tcp_time_stamp;
		s32 delta;

		delta = now - tcp_sk(sk)->lsndtime;

		/* We were application limited (idle) for a while.
		 * Shift epoch_start to keep cwnd growth to cubic curve.
		 */
		if (qcc->epoch_start && delta > 0) {
			qcc->epoch_start += delta;
			if (after(qcc->epoch_start, now))
				qcc->epoch_start = now;
		}
		return;
	}
}

/* calculate the cubic root of x using a table lookup followed by one
 * Newton-Raphson iteration.
 * Avg err ~= 0.195%
 */
static u32 cubic_root(u64 a)
{
	u32 x, b, shift;
	/*
	 * cbrt(x) MSB values for x MSB values in [0..63].
	 * Precomputed then refined by hand - Willy Tarreau
	 *
	 * For x in [0..63],
	 *   v = cbrt(x << 18) - 1
	 *   cbrt(x) = (v[x] + 10) >> 6
	 */
	static const u8 v[] = {
		/* 0x00 */    0,   54,   54,   54,  118,  118,  118,  118,
		/* 0x08 */  123,  129,  134,  138,  143,  147,  151,  156,
		/* 0x10 */  157,  161,  164,  168,  170,  173,  176,  179,
		/* 0x18 */  181,  185,  187,  190,  192,  194,  197,  199,
		/* 0x20 */  200,  202,  204,  206,  209,  211,  213,  215,
		/* 0x28 */  217,  219,  221,  222,  224,  225,  227,  229,
		/* 0x30 */  231,  232,  234,  236,  237,  239,  240,  242,
		/* 0x38 */  244,  245,  246,  248,  250,  251,  252,  254,
	};

	b = fls64(a);
	if (b < 7) {
		/* a in [0..63] */
		return ((u32)v[(u32)a] + 35) >> 6;
	}

	b = ((b * 84) >> 8) - 1;
	shift = (a >> (b * 3));

	x = ((u32)(((u32)v[shift] + 10) << b)) >> 6;

	/*
	 * Newton-Raphson iteration
	 *                         2
	 * x    = ( 2 * x  +  a / x  ) / 3
	 *  k+1          k         k
	 */
	x = (2 * x + (u32)div64_u64(a, (u64)x * (u64)(x - 1)));
	x = ((x * 341) >> 10);
	return x;
}

/*
 * Compute congestion window to use.
 */
static inline void mptcp_qcc_update(struct sock *sk, struct mptcp_qcc *qcc, u32 cwnd, u32 acked)
{
	// QCC ADD
	struct tcp_sock *tp = tcp_sk(sk);

	u32 delta, bic_target, max_cnt;
	u64 offs, t;

	qcc->ack_cnt += acked;	/* count the number of ACKed packets */

	if (qcc->last_cwnd == cwnd &&
	    (s32)(tcp_time_stamp - qcc->last_time) <= HZ / 32)
		return;

	/* The CUBIC function can update qcc->cnt at most once per jiffy.
	 * On all cwnd reduction events, qcc->epoch_start is set to 0,
	 * which will force a recalculation of qcc->cnt.
	 */
	if (qcc->epoch_start && tcp_time_stamp == qcc->last_time)
		goto tcp_friendliness;

	qcc->last_cwnd = cwnd;
	qcc->last_time = tcp_time_stamp;

	if (qcc->epoch_start == 0) {
		qcc->epoch_start = tcp_time_stamp;	/* record beginning */
		qcc->ack_cnt = acked;			/* start counting */
		qcc->tcp_cwnd = cwnd;			/* syn with cubic */

		if (qcc->last_max_cwnd <= cwnd) {
			qcc->bic_K = 0;
			qcc->bic_origin_point = cwnd;
		} else {
			/* Compute new K based on
			 * (wmax-cwnd) * (srtt>>3 / HZ) / c * 2^(3*mptcp_qcc_HZ)
			 */
			qcc->bic_K = cubic_root(cube_factor
					       * (qcc->last_max_cwnd - cwnd));
			qcc->bic_origin_point = qcc->last_max_cwnd;
		}
	}

	/* cubic function - calc*/
	/* calculate c * time^3 / rtt,
	 *  while considering overflow in calculation of time^3
	 * (so time^3 is done by using 64 bit)
	 * and without the support of division of 64bit numbers
	 * (so all divisions are done by using 32 bit)
	 *  also NOTE the unit of those veriables
	 *	  time  = (t - K) / 2^mptcp_qcc_HZ
	 *	  c = bic_scale >> 10
	 * rtt  = (srtt >> 3) / HZ
	 * !!! The following code does not have overflow problems,
	 * if the cwnd < 1 million packets !!!
	 */

	t = (s32)(tcp_time_stamp - qcc->epoch_start);
	t += msecs_to_jiffies(qcc->delay_min >> 3);
	/* change the unit from HZ to mptcp_qcc_HZ */
	t <<= MPTCP_QCC_HZ;
	do_div(t, HZ);

	if (t < qcc->bic_K)		/* t - K */
		offs = qcc->bic_K - t;
	else
		offs = t - qcc->bic_K;

	/* c/rtt * (t-K)^3 */
	delta = (cube_rtt_scale * offs * offs * offs) >> (10+3*MPTCP_QCC_HZ);
	if (t < qcc->bic_K)                            /* below origin*/
		bic_target = qcc->bic_origin_point - delta;
	else                                          /* above origin*/
		bic_target = qcc->bic_origin_point + delta;

	/* cubic function - calc mptcp_qcc_cnt*/
	if (bic_target > cwnd) {
		qcc->cnt = cwnd / (bic_target - cwnd);
	} else {
		qcc->cnt = 100 * cwnd;              /* very small increment*/
	}

	/*
	 * The initial growth of cubic function may be too conservative
	 * when the available bandwidth is still unknown.
	 */
	if (qcc->last_max_cwnd == 0 && qcc->cnt > 20)
		qcc->cnt = 20;	/* increase cwnd 5% per RTT */

tcp_friendliness:
	/* TCP Friendly */
	if (tcp_friendliness) {
		u32 scale = beta_scale;

		delta = (cwnd * scale) >> 3;
		while (qcc->ack_cnt > delta) {		/* update tcp cwnd */
			qcc->ack_cnt -= delta;
			qcc->tcp_cwnd++;
		}

		if (qcc->tcp_cwnd > cwnd) {	/* if bic is slower than tcp */
			delta = qcc->tcp_cwnd - cwnd;
			max_cnt = cwnd / delta;

	// QCC ADD
//			if (qcc->cnt > max_cnt) qcc->cnt = max_cnt;
			//--------------------------------------------------------------------------
			// QCC ADD
			//--------------------------------------------------------------------------
			if (tp->qccqms.trigger && (tp->qccqms.qoe==3 || tp->qccqms.qoe == 31) )
				if (qcc->cnt < max_cnt) qcc->cnt = max_cnt;				// let qcc faster
			else
				if (qcc->cnt > max_cnt) qcc->cnt = max_cnt;

		}
	}

	/* The maximum rate of cwnd increase CUBIC allows is 1 packet per
	 * 2 packets ACKed, meaning cwnd grows at 1.5x per RTT.
	 */
	qcc->cnt = max(qcc->cnt, 2U);
}


/* In theory this is tp->snd_cwnd += 1 / tp->snd_cwnd (or alternative w),
 * for every packet that was ACKed.
 */
//void tcp_cong_avoid_ai(struct tcp_sock *tp, u32 w, u32 acked)				// come from tcp_cong.c
static inline void mptcp_qcc_avoid_ai(struct tcp_sock *tp, u32 w, u32 acked)		// come from tcp_cong.c
{
	/* If credits accumulated at a higher w, apply them gently now. */
	if (tp->snd_cwnd_cnt >= w) {
		tp->snd_cwnd_cnt = 0;
		tp->snd_cwnd++;
	}

	tp->snd_cwnd_cnt += acked;
	if (tp->snd_cwnd_cnt >= w) {
		u32 delta = tp->snd_cwnd_cnt / w;

		tp->snd_cwnd_cnt -= delta * w;
		tp->snd_cwnd += delta;
	}
	tp->snd_cwnd = min(tp->snd_cwnd, tp->snd_cwnd_clamp);
}


static void mptcp_qcc_cong_avoid(struct sock *sk, u32 ack, u32 acked)
{
	struct tcp_sock *tp = tcp_sk(sk);
	struct mptcp_qcc *qcc = inet_csk_ca(sk);

	//--------------------------------------------------------------------------
	// QCC ADD
	//--------------------------------------------------------------------------
	u32 rtt;
	if (!tp->qccqms.trigger && !tp->qccqms.triRound) tp->qccqms.trigger = 1; 	// Triggered after three rounds of congestion control
	if (!tp->qccqms.trigger) tp->qccqms.triRound--;

	if (tp->qccqms.trigger == 1 && tp->qccqms.cntRTT) { 
		rtt = tp->qccqms.cumRTT / tp->qccqms.cntRTT;		// average RTT measured within last RTT (in usec) on a subflow
		tp->qccqms.aver_rtt = rtt;				// used by QMS	// QCC ADD
	}
	//--------------------------------------------------------------------------


	//--------------------------------------------------------------------------
	// QCC ADD
	//--------------------------------------------------------------------------
	if (tp->qccqms.trigger == 1) { 		// after three rounds of congestion control, sort aver_rtt & snd_cwnd, which used by QMS
		// get the subflow that has min rrt, get the subflow that has max cwnd
		u32 min_rrt = 0xffffffff;
		u8 min_rrt_subfid = 0xff;
		u32 max_cwnd = 0;
		u8 max_cwnd_subfid = 0xff;
		struct mptcp_tcp_sock *mptcp;
		mptcp_for_each_sub(tp->mpcb, mptcp) {
			struct sock *sub_sk = mptcp_to_sock(mptcp);
			struct tcp_sock *sub_tp = tcp_sk(sub_sk);
			if(min_rrt > sub_tp->qccqms.aver_rtt) {
				min_rrt = sub_tp->qccqms.aver_rtt;
				min_rrt_subfid = sub_tp->mptcp->path_index;
			}
			if(max_cwnd < sub_tp->snd_cwnd) {
				max_cwnd = sub_tp->snd_cwnd;
				max_cwnd_subfid = sub_tp->mptcp->path_index;
			}
		}
		mptcp_for_each_sub(tp->mpcb, mptcp) {
			struct sock *sub_sk = mptcp_to_sock(mptcp);
			struct tcp_sock *sub_tp = tcp_sk(sub_sk);
			if (sub_tp->mptcp->path_index == min_rrt_subfid) sub_tp->qccqms.sort_rtt = 1;		// get the subflow that has min rrt
			else sub_tp->qccqms.sort_rtt = 2;
			if (sub_tp->mptcp->path_index == max_cwnd_subfid) sub_tp->qccqms.sort_cwnd = 1;		// get the subflow that has max cwnd
			else sub_tp->qccqms.sort_cwnd = 2;
		}

		if(tp->qccqms.qoe == 27 && tp->qccqms.sort_rtt == 1) {	// QoE, small file
			tp->qccqms.ann_win = 0;
		} else {									// used in __dev_queue_xmit()	net/core/dev.c
			tp->qccqms.ann_win = 1;
		}

		if(tp->qccqms.qoe == 31 && tp->qccqms.sort_cwnd == 1) {	// QoE, large file
			tp->qccqms.ann_win = 0;
		} else {									// used in __dev_queue_xmit()	net/core/dev.c
			tp->qccqms.ann_win = 1;
		}
	}

	// Wipe the slate clean for the next cong_avoid.
	// new round, reset cntRTT, cumRTT
	tp->qccqms.cntRTT = 0;
	tp->qccqms.cumRTT = 0;
	//--------------------------------------------------------------------------

	// QCC ADD 添加代码 必须放在下面代码之前，否则，死机

	if (!tcp_is_cwnd_limited(sk))
		return;

	if (tcp_in_slow_start(tp)) {
		if (hystart && after(ack, qcc->end_seq))
			mptcp_qcc_hystart_reset(sk);
		acked = tcp_slow_start(tp, acked);
		if (!acked)
			return;
	}
	mptcp_qcc_update(sk, qcc, tp->snd_cwnd, acked);
	mptcp_qcc_avoid_ai(tp, qcc->cnt, acked);

	// QCC ADD
	tp->qccqms.cnt = qcc->cnt;
}

/*
-----------------------------------------------------------------------------------------------------
		TABLE I   definition of QoE parameters
-----------------------------------------------------------------------------------------------------
NULL	NULL	NULL	energy 	realtime	filesize	cellular 	WiFi	QoE
0	0	0	0		0		0		0		1	1	// only use WiFi
0	0	0	0		0		0		1		0	2	// only use cellular
0	0	0	0		0		0		1		1	3	// use all subflows normally
0	0	0	1		1		0		1		1	27	// small file
0	0	0	1		1		1		1		1	31	// large file
-----------------------------------------------------------------------------------------------------
 */


static u32 mptcp_qcc_recalc_ssthresh(struct sock *sk)
{
	const struct tcp_sock *tp = tcp_sk(sk);
	struct mptcp_qcc *qcc = inet_csk_ca(sk);

	qcc->epoch_start = 0;	/* end of epoch */

	/* Wmax and fast convergence */
	if (tp->snd_cwnd < qcc->last_max_cwnd && fast_convergence)
		qcc->last_max_cwnd = (tp->snd_cwnd * (MPTCP_QCC_BETA_SCALE + beta))
			/ (2 * MPTCP_QCC_BETA_SCALE);
	else
		qcc->last_max_cwnd = tp->snd_cwnd;

	qcc->loss_cwnd = tp->snd_cwnd;

//	return max((tp->snd_cwnd * beta) / MPTCP_QCC_BETA_SCALE, 2U);
	//--------------------------------------------------------------------------
	// QCC ADD
	//--------------------------------------------------------------------------
	if (tp->qccqms.trigger && (tp->qccqms.qoe==3 || tp->qccqms.qoe == 31) )
		return max((tp->snd_cwnd * 929) / 1024, 2U);
	else
		return max((tp->snd_cwnd * beta) / MPTCP_QCC_BETA_SCALE, 2U);
}

static u32 mptcp_qcc_undo_cwnd(struct sock *sk)
{
	struct mptcp_qcc *qcc = inet_csk_ca(sk);

	return max(tcp_sk(sk)->snd_cwnd, qcc->loss_cwnd);
}

static void mptcp_qcc_state(struct sock *sk, u8 new_state)
{
	if (new_state == TCP_CA_Loss) {
		mptcp_qcc_reset(inet_csk_ca(sk), sk);
		mptcp_qcc_hystart_reset(sk);
	}
}

static void hystart_update(struct sock *sk, u32 delay)
{
	struct tcp_sock *tp = tcp_sk(sk);
	struct mptcp_qcc *qcc = inet_csk_ca(sk);

	if (qcc->found & hystart_detect)
		return;

	if (hystart_detect & HYSTART_ACK_TRAIN) {
		u32 now = mptcp_qcc_clock();

		/* first detection parameter - ack-train detection */
		if ((s32)(now - qcc->last_ack) <= hystart_ack_delta) {
			qcc->last_ack = now;
			if ((s32)(now - qcc->round_start) > qcc->delay_min >> 4) {
				qcc->found |= HYSTART_ACK_TRAIN;
				NET_INC_STATS(sock_net(sk),
					      LINUX_MIB_TCPHYSTARTTRAINDETECT);
				NET_ADD_STATS(sock_net(sk),
					      LINUX_MIB_TCPHYSTARTTRAINCWND,
					      tp->snd_cwnd);
				tp->snd_ssthresh = tp->snd_cwnd;
			}
		}
	}

	if (hystart_detect & HYSTART_DELAY) {
		/* obtain the minimum delay of more than sampling packets */
		if (qcc->curr_rtt > delay)
			qcc->curr_rtt = delay;
		if (qcc->sample_cnt < HYSTART_MIN_SAMPLES) {
			if (qcc->curr_rtt == 0 || qcc->curr_rtt > delay)
				qcc->curr_rtt = delay;

			qcc->sample_cnt++;
		} else {
			if (qcc->curr_rtt > qcc->delay_min +
			    HYSTART_DELAY_THRESH(qcc->delay_min >> 3)) {
				qcc->found |= HYSTART_DELAY;
				NET_INC_STATS(sock_net(sk),
					      LINUX_MIB_TCPHYSTARTDELAYDETECT);
				NET_ADD_STATS(sock_net(sk),
					      LINUX_MIB_TCPHYSTARTDELAYCWND,
					      tp->snd_cwnd);
				tp->snd_ssthresh = tp->snd_cwnd;
			}
		}
	}
}

/* Track delayed acknowledgment ratio using sliding window
 * ratio = (15*ratio + sample) / 16
 */
static void mptcp_qcc_acked(struct sock *sk, const struct ack_sample *sample)
{
	// QCC ADD
	//const struct tcp_sock *tp = tcp_sk(sk);
	struct tcp_sock *tp = tcp_sk(sk);

	struct mptcp_qcc *qcc = inet_csk_ca(sk);
	u32 delay;

	// QCC ADD
	u32 vrtt;

	/* Some calls are for duplicates without timetamps */
	if (sample->rtt_us < 0)
		return;

	/* Discard delay samples right after fast recovery */
	if (qcc->epoch_start && (s32)(tcp_time_stamp - qcc->epoch_start) < HZ)
		return;

	delay = (sample->rtt_us << 3) / USEC_PER_MSEC;
	if (delay == 0)
		delay = 1;

	/* first time call or link delay decreases */
	if (qcc->delay_min == 0 || qcc->delay_min > delay)
		qcc->delay_min = delay;

	/* hystart triggers when cwnd is larger than some threshold */
	if (hystart && tcp_in_slow_start(tp) &&
	    tp->snd_cwnd >= hystart_low_window)
		hystart_update(sk, delay);

	//--------------------------------------------------------------------------
	// QCC ADD
	//--------------------------------------------------------------------------
	/* Never allow zero rtt or baseRTT */
	vrtt = sample->rtt_us + 1;

	/* Filter to find propagation delay: */
	if (vrtt < tp->qccqms.baseRTT)
		tp->qccqms.baseRTT = vrtt;

	/* Find the min RTT during the last RTT to find
	 * the current prop. delay + queuing delay:
	 */
	tp->qccqms.cumRTT += vrtt;
	tp->qccqms.cntRTT++;
	//--------------------------------------------------------------------------
}

static struct tcp_congestion_ops mptcpqcc __read_mostly = {
	.init		= mptcp_qcc_init,
	.ssthresh	= mptcp_qcc_recalc_ssthresh,
	.cong_avoid	= mptcp_qcc_cong_avoid,
	.set_state	= mptcp_qcc_state,
	.undo_cwnd	= mptcp_qcc_undo_cwnd,
	.cwnd_event	= mptcp_qcc_cwnd_event,
	.pkts_acked  = mptcp_qcc_acked,
	.owner	= THIS_MODULE,
	.name		= "qcc",
};

static int __init mptcp_qcc_register(void)
{
	BUILD_BUG_ON(sizeof(struct mptcp_qcc) > ICSK_CA_PRIV_SIZE);

	/* Precompute a bunch of the scaling factors that are used per-packet
	 * based on SRTT of 100ms
	 */

	beta_scale = 8*(MPTCP_QCC_BETA_SCALE+beta) / 3
		/ (MPTCP_QCC_BETA_SCALE - beta);

	cube_rtt_scale = (bic_scale * 10);	/* 1024*c/rtt */

	/* calculate the "K" for (wmax-cwnd) = c/rtt * K^3
	 *  so K = cubic_root( (wmax-cwnd)*rtt/c )
	 * the unit of K is mptcp_qcc_HZ=2^10, not HZ
	 *
	 *  c = bic_scale >> 10
	 *  rtt = 100ms
	 *
	 * the following code has been designed and tested for
	 * cwnd < 1 million packets
	 * RTT < 100 seconds
	 * HZ < 1,000,00  (corresponding to 10 nano-second)
	 */

	/* 1/c * 2^2*mptcp_qcc_HZ * srtt */
	cube_factor = 1ull << (10+3*MPTCP_QCC_HZ); /* 2^40 */

	/* divide by bic_scale and by constant Srtt (100ms) */
	do_div(cube_factor, bic_scale * 10);

	return tcp_register_congestion_control(&mptcpqcc);
}

static void __exit mptcp_qcc_unregister(void)
{
	tcp_unregister_congestion_control(&mptcpqcc);
}

module_init(mptcp_qcc_register);
module_exit(mptcp_qcc_unregister);

MODULE_AUTHOR("Tongguang Zhang");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MPTCP QoE-Driven Congestion Controller (QCC)");
MODULE_VERSION("0.1");
