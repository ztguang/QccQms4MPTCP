Research and Implementation of Applying MPTCP to Edge Wireless Network

Original test data

VB-Android-x86_in_LAN

==============================================================================

cd paper/paper-2---A-MPTCP-Scheduler---testing---results/test-01-scheduler


grep "QOE_send: name:wifi_eth" test-01-scheduler-def-cubic-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-def-cubic-qoe01.txt---wifi_eth

grep "QOE_send: name:eth1" test-01-scheduler-def-cubic-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-def-cubic-qoe01.txt---eth1


grep "QOE_send: name:wifi_eth" test-01-scheduler-def-cubic-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-61.203326,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-def-cubic-qoe02.txt---wifi_eth

grep "QOE_send: name:eth1" test-01-scheduler-def-cubic-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-61.203326,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-def-cubic-qoe02.txt---eth1


grep "QOE_send: name:wifi_eth" test-01-scheduler-def-cubic-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-192.728722,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-def-cubic-qoe03.txt---wifi_eth

grep "QOE_send: name:eth1" test-01-scheduler-def-cubic-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-192.728722,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-def-cubic-qoe03.txt---eth1


grep "QOE_send: name:wifi_eth" test-01-scheduler-def-cubic-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-306.995972,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-def-cubic-qoe27.txt---wifi_eth

grep "QOE_send: name:eth1" test-01-scheduler-def-cubic-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-306.995972,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-def-cubic-qoe27.txt---eth1


grep "QOE_send: name:wifi_eth" test-01-scheduler-def-cubic-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-457.327033,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-def-cubic-qoe31.txt---wifi_eth

grep "QOE_send: name:eth1" test-01-scheduler-def-cubic-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-457.327033,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-def-cubic-qoe31.txt---eth1



grep "QOE_send: name:wifi_eth" test-01-scheduler-qms-cubic-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-319.197766,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-qms-cubic-qoe01.txt---wifi_eth

grep "QOE_send: name:eth1" test-01-scheduler-qms-cubic-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-319.197766,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-qms-cubic-qoe01.txt---eth1


grep "QOE_send: name:wifi_eth" test-01-scheduler-qms-cubic-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-111.199216,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-qms-cubic-qoe02.txt---wifi_eth

grep "QOE_send: name:eth1" test-01-scheduler-qms-cubic-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-111.199216,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-qms-cubic-qoe02.txt---eth1


grep "QOE_send: name:wifi_eth" test-01-scheduler-qms-cubic-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-269.254003,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-qms-cubic-qoe03.txt---wifi_eth

grep "QOE_send: name:eth1" test-01-scheduler-qms-cubic-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-269.254003,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-qms-cubic-qoe03.txt---eth1


grep "QOE_send: name:wifi_eth" test-01-scheduler-qms-cubic-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-395.232184,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-qms-cubic-qoe27.txt---wifi_eth

grep "QOE_send: name:eth1" test-01-scheduler-qms-cubic-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-395.232184,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-qms-cubic-qoe27.txt---eth1


grep "QOE_send: name:wifi_eth" test-01-scheduler-qms-cubic-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-529.645905,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-qms-cubic-qoe31.txt---wifi_eth

grep "QOE_send: name:eth1" test-01-scheduler-qms-cubic-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-529.645905,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-qms-cubic-qoe31.txt---eth1



grep "QOE_send: name:wifi_eth" test-01-scheduler-rr-cubic-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-813.192958,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-rr-cubic-qoe01.txt---wifi_eth

grep "QOE_send: name:eth1" test-01-scheduler-rr-cubic-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-813.192958,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-rr-cubic-qoe01.txt---eth1


grep "QOE_send: name:wifi_eth" test-01-scheduler-rr-cubic-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-62.356281,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-rr-cubic-qoe02.txt---wifi_eth

grep "QOE_send: name:eth1" test-01-scheduler-rr-cubic-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-62.356281,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-rr-cubic-qoe02.txt---eth1


grep "QOE_send: name:wifi_eth" test-01-scheduler-rr-cubic-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-223.577418,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-rr-cubic-qoe03.txt---wifi_eth

grep "QOE_send: name:eth1" test-01-scheduler-rr-cubic-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-223.577418,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-rr-cubic-qoe03.txt---eth1


grep "QOE_send: name:wifi_eth" test-01-scheduler-rr-cubic-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-336.957584,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-rr-cubic-qoe27.txt---wifi_eth

grep "QOE_send: name:eth1" test-01-scheduler-rr-cubic-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-336.957584,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-rr-cubic-qoe27.txt---eth1


grep "QOE_send: name:wifi_eth" test-01-scheduler-rr-cubic-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-471.827201,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-rr-cubic-qoe31.txt---wifi_eth

grep "QOE_send: name:eth1" test-01-scheduler-rr-cubic-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-471.827201,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-01-scheduler-rr-cubic-qoe31.txt---eth1
