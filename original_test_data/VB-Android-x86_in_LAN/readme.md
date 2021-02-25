[root@fedora test-01-scheduler]# ls
tcpdump---test-01-scheduler-def-cubic-qoe01.txt  tcpdump---test-01-scheduler-rr-cubic-qoe01.txt  test-01-scheduler-qms-cubic-qoe01.txt
tcpdump---test-01-scheduler-def-cubic-qoe02.txt  tcpdump---test-01-scheduler-rr-cubic-qoe02.txt  test-01-scheduler-qms-cubic-qoe02.txt
tcpdump---test-01-scheduler-def-cubic-qoe03.txt  tcpdump---test-01-scheduler-rr-cubic-qoe03.txt  test-01-scheduler-qms-cubic-qoe03.txt
tcpdump---test-01-scheduler-def-cubic-qoe27.txt  tcpdump---test-01-scheduler-rr-cubic-qoe27.txt  test-01-scheduler-qms-cubic-qoe27.txt
tcpdump---test-01-scheduler-def-cubic-qoe31.txt  tcpdump---test-01-scheduler-rr-cubic-qoe31.txt  test-01-scheduler-qms-cubic-qoe31.txt
tcpdump---test-01-scheduler-def-cubic.txt        tcpdump---test-01-scheduler-rr-cubic.txt        test-01-scheduler-qms-cubic.txt
tcpdump---test-01-scheduler-qms-cubic-qoe01.txt  test-01-scheduler-def-cubic-qoe01.txt           test-01-scheduler-rr-cubic-qoe01.txt
tcpdump---test-01-scheduler-qms-cubic-qoe02.txt  test-01-scheduler-def-cubic-qoe02.txt           test-01-scheduler-rr-cubic-qoe02.txt
tcpdump---test-01-scheduler-qms-cubic-qoe03.txt  test-01-scheduler-def-cubic-qoe03.txt           test-01-scheduler-rr-cubic-qoe03.txt
tcpdump---test-01-scheduler-qms-cubic-qoe27.txt  test-01-scheduler-def-cubic-qoe27.txt           test-01-scheduler-rr-cubic-qoe27.txt
tcpdump---test-01-scheduler-qms-cubic-qoe31.txt  test-01-scheduler-def-cubic-qoe31.txt           test-01-scheduler-rr-cubic-qoe31.txt
tcpdump---test-01-scheduler-qms-cubic.txt        test-01-scheduler-def-cubic.txt                 test-01-scheduler-rr-cubic.txt

[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-qms-cubic.txt | grep "192.168.0.101." | wc -l
221915
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-qms-cubic.txt | grep "192.168.0.102." | wc -l
207392
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-qms-cubic-qoe01.txt | grep "192.168.0.101." | wc -l
219320
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-qms-cubic-qoe01.txt | grep "192.168.0.102." | wc -l
209965
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-qms-cubic-qoe02.txt | grep "192.168.0.101." | wc -l
429842
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-qms-cubic-qoe02.txt | grep "192.168.0.102." | wc -l
0
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-qms-cubic-qoe03.txt | grep "192.168.0.101." | wc -l
213753
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-qms-cubic-qoe03.txt | grep "192.168.0.102." | wc -l
215824
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-qms-cubic-qoe27.txt | grep "192.168.0.101." | wc -l
232948
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-qms-cubic-qoe27.txt | grep "192.168.0.102." | wc -l
196208
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-qms-cubic-qoe31.txt | grep "192.168.0.101." | wc -l
215571
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-qms-cubic-qoe31.txt | grep "192.168.0.102." | wc -l
213773


[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-rr-cubic.txt | grep "192.168.0.101." | wc -l
235273
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-rr-cubic.txt | grep "192.168.0.102." | wc -l
193859
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-rr-cubic-qoe01.txt | grep "192.168.0.101." | wc -l
233680
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-rr-cubic-qoe01.txt | grep "192.168.0.102." | wc -l
195445
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-rr-cubic-qoe02.txt | grep "192.168.0.101." | wc -l
429467
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-rr-cubic-qoe02.txt | grep "192.168.0.102." | wc -l
0
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-rr-cubic-qoe03.txt | grep "192.168.0.101." | wc -l
234358
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-rr-cubic-qoe03.txt | grep "192.168.0.102." | wc -l
194846
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-rr-cubic-qoe27.txt | grep "192.168.0.101." | wc -l
235321
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-rr-cubic-qoe27.txt | grep "192.168.0.102." | wc -l
193831
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-rr-cubic-qoe31.txt | grep "192.168.0.101." | wc -l
234733
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-rr-cubic-qoe31.txt | grep "192.168.0.102." | wc -l
194403


[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-def-cubic.txt | grep "192.168.0.101." | wc -l
235819
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-def-cubic.txt | grep "192.168.0.102." | wc -l
193327
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-def-cubic-qoe01.txt | grep "192.168.0.101." | wc -l
237833
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-def-cubic-qoe01.txt | grep "192.168.0.102." | wc -l
191325
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-def-cubic-qoe02.txt | grep "192.168.0.101." | wc -l
429114
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-def-cubic-qoe02.txt | grep "192.168.0.102." | wc -l
0
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-def-cubic-qoe03.txt | grep "192.168.0.101." | wc -l
234530
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-def-cubic-qoe03.txt | grep "192.168.0.102." | wc -l
194658
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-def-cubic-qoe27.txt | grep "192.168.0.101." | wc -l
233498
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-def-cubic-qoe27.txt | grep "192.168.0.102." | wc -l
195699
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-def-cubic-qoe31.txt | grep "192.168.0.101." | wc -l
236098
[root@fedora test-01-scheduler]# grep "length 1428" tcpdump---test-01-scheduler-def-cubic-qoe31.txt | grep "192.168.0.102." | wc -l
193047
[root@fedora test-01-scheduler]# 


=========================================================================================================================

[root@fedora test-02-qms-CC]# ls
tcpdump---test-02-qms-CC-cubic-qoe01.txt  tcpdump---test-02-qms-CC-olia-qoe27.txt  test-02-qms-CC-cubic-qoe01.txt  test-02-qms-CC-olia-qoe27.txt
tcpdump---test-02-qms-CC-cubic-qoe02.txt  tcpdump---test-02-qms-CC-olia-qoe31.txt  test-02-qms-CC-cubic-qoe02.txt  test-02-qms-CC-olia-qoe31.txt
tcpdump---test-02-qms-CC-cubic-qoe03.txt  tcpdump---test-02-qms-CC-olia.txt        test-02-qms-CC-cubic-qoe03.txt  test-02-qms-CC-olia.txt
tcpdump---test-02-qms-CC-cubic-qoe27.txt  tcpdump---test-02-qms-CC-qcc-qoe01.txt   test-02-qms-CC-cubic-qoe27.txt  test-02-qms-CC-qcc-qoe01.txt
tcpdump---test-02-qms-CC-cubic-qoe31.txt  tcpdump---test-02-qms-CC-qcc-qoe02.txt   test-02-qms-CC-cubic-qoe31.txt  test-02-qms-CC-qcc-qoe02.txt
tcpdump---test-02-qms-CC-cubic.txt        tcpdump---test-02-qms-CC-qcc-qoe03.txt   test-02-qms-CC-cubic.txt        test-02-qms-CC-qcc-qoe03.txt
tcpdump---test-02-qms-CC-olia-qoe01.txt   tcpdump---test-02-qms-CC-qcc-qoe27.txt   test-02-qms-CC-olia-qoe01.txt   test-02-qms-CC-qcc-qoe27.txt
tcpdump---test-02-qms-CC-olia-qoe02.txt   tcpdump---test-02-qms-CC-qcc-qoe31.txt   test-02-qms-CC-olia-qoe02.txt   test-02-qms-CC-qcc-qoe31.txt
tcpdump---test-02-qms-CC-olia-qoe03.txt   tcpdump---test-02-qms-CC-qcc.txt         test-02-qms-CC-olia-qoe03.txt   test-02-qms-CC-qcc.txt


[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-qcc.txt | grep "192.168.0.101." | wc -l
239127
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-qcc.txt | grep "192.168.0.102." | wc -l
190007
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-qcc-qoe01.txt | grep "192.168.0.101." | wc -l
15
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-qcc-qoe01.txt | grep "192.168.0.102." | wc -l
429124
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-qcc-qoe02.txt | grep "192.168.0.101." | wc -l
429272
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-qcc-qoe02.txt | grep "192.168.0.102." | wc -l
0
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-qcc-qoe03.txt | grep "192.168.0.101." | wc -l
239494
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-qcc-qoe03.txt | grep "192.168.0.102." | wc -l
189762
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-qcc-qoe27.txt | grep "192.168.0.101." | wc -l
429422
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-qcc-qoe27.txt | grep "192.168.0.102." | wc -l
16
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-qcc-qoe31.txt | grep "192.168.0.101." | wc -l
429475
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-qcc-qoe31.txt | grep "192.168.0.102." | wc -l
16


[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-cubic.txt | grep "192.168.0.101." | wc -l
237773
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-cubic.txt | grep "192.168.0.102." | wc -l
191359
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-cubic-qoe01.txt | grep "192.168.0.101." | wc -l
230131
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-cubic-qoe01.txt | grep "192.168.0.102." | wc -l
199107
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-cubic-qoe02.txt | grep "192.168.0.101." | wc -l
429160
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-cubic-qoe02.txt | grep "192.168.0.102." | wc -l
0
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-cubic-qoe03.txt | grep "192.168.0.101." | wc -l
237578
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-cubic-qoe03.txt | grep "192.168.0.102." | wc -l
191571
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-cubic-qoe27.txt | grep "192.168.0.101." | wc -l
235369
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-cubic-qoe27.txt | grep "192.168.0.102." | wc -l
193783
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-cubic-qoe31.txt | grep "192.168.0.101." | wc -l
237323
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-cubic-qoe31.txt | grep "192.168.0.102." | wc -l
191821


[root@fedora test-02-qms-CC]# grep "length 1448" tcpdump---test-02-qms-CC-olia.txt | grep "192.168.0.101." | wc -l
50242
[root@fedora test-02-qms-CC]# grep "length 1448" tcpdump---test-02-qms-CC-olia.txt | grep "192.168.0.102." | wc -l
0
[root@fedora test-02-qms-CC]# grep "length 2896" tcpdump---test-02-qms-CC-olia.txt | grep "192.168.0.101." | wc -l
174906
[root@fedora test-02-qms-CC]# grep "length 2896" tcpdump---test-02-qms-CC-olia.txt | grep "192.168.0.102." | wc -l
0
[root@fedora test-02-qms-CC]# grep "length 4344" tcpdump---test-02-qms-CC-olia.txt | grep "192.168.0.101." | wc -l
7671
[root@fedora test-02-qms-CC]# grep "length 4344" tcpdump---test-02-qms-CC-olia.txt | grep "192.168.0.102." | wc -l
0
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-olia-qoe01.txt | grep "192.168.0.101." | wc -l
236070
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-olia-qoe01.txt | grep "192.168.0.102." | wc -l
193089
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-olia-qoe02.txt | grep "192.168.0.101." | wc -l
429338
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-olia-qoe02.txt | grep "192.168.0.102." | wc -l
0
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-olia-qoe03.txt | grep "192.168.0.101." | wc -l
238268
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-olia-qoe03.txt | grep "192.168.0.102." | wc -l
190888
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-olia-qoe27.txt | grep "192.168.0.101." | wc -l
218748
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-olia-qoe27.txt | grep "192.168.0.102." | wc -l
210525
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-olia-qoe31.txt | grep "192.168.0.101." | wc -l
236804
[root@fedora test-02-qms-CC]# grep "length 1428" tcpdump---test-02-qms-CC-olia-qoe31.txt | grep "192.168.0.102." | wc -l
192339
[root@fedora test-02-qms-CC]# 

=========================================================================================================================



