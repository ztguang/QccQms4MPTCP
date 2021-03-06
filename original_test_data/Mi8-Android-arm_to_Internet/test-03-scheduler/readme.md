Research and Implementation of Applying MPTCP to Edge Wireless Network

Original test data

Mi8-Android-arm_to_Internet


cd paper-2---A-MPTCP-Scheduler---testing---results/test-03-scheduler




grep "QOE_send: name:wlan0" test-03-scheduler-def-cubic-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1563.818571,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-def-cubic-qoe01.txt---wlan0

grep "QOE_send: name:rmnet_data" test-03-scheduler-def-cubic-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1563.818571,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-def-cubic-qoe01.txt---rmnet_data


grep "QOE_send: name:wlan0" test-03-scheduler-def-cubic-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1653.970972,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-def-cubic-qoe02.txt---wlan0

grep "QOE_send: name:rmnet_data" test-03-scheduler-def-cubic-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1653.970972,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-def-cubic-qoe02.txt---rmnet_data


grep "QOE_send: name:wlan0" test-03-scheduler-def-cubic-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1736.716449,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-def-cubic-qoe03.txt---wlan0

grep "QOE_send: name:rmnet_data" test-03-scheduler-def-cubic-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1736.716449,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-def-cubic-qoe03.txt---rmnet_data


grep "QOE_send: name:wlan0" test-03-scheduler-def-cubic-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1816.224783,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-def-cubic-qoe27.txt---wlan0

grep "QOE_send: name:rmnet_data" test-03-scheduler-def-cubic-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1816.224783,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-def-cubic-qoe27.txt---rmnet_data


grep "QOE_send: name:wlan0" test-03-scheduler-def-cubic-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1896.331280,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-def-cubic-qoe31.txt---wlan0

grep "QOE_send: name:rmnet_data" test-03-scheduler-def-cubic-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1896.331280,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-def-cubic-qoe31.txt---rmnet_data



grep "QOE_send: name:wlan0" test-03-scheduler-qms-cubic-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-294.111189,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-qms-cubic-qoe01.txt---wlan0

grep "QOE_send: name:rmnet_data" test-03-scheduler-qms-cubic-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-294.111189,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-qms-cubic-qoe01.txt---rmnet_data


grep "QOE_send: name:wlan0" test-03-scheduler-qms-cubic-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-403.334965,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-qms-cubic-qoe02.txt---wlan0

grep "QOE_send: name:rmnet_data" test-03-scheduler-qms-cubic-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-403.334965,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-qms-cubic-qoe02.txt---rmnet_data


grep "QOE_send: name:wlan0" test-03-scheduler-qms-cubic-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-504.622529,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-qms-cubic-qoe03.txt---wlan0

grep "QOE_send: name:rmnet_data" test-03-scheduler-qms-cubic-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-504.622529,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-qms-cubic-qoe03.txt---rmnet_data


grep "QOE_send: name:wlan0" test-03-scheduler-qms-cubic-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-592.107515,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-qms-cubic-qoe27.txt---wlan0

grep "QOE_send: name:rmnet_data" test-03-scheduler-qms-cubic-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-592.107515,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-qms-cubic-qoe27.txt---rmnet_data


grep "QOE_send: name:wlan0" test-03-scheduler-qms-cubic-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-669.945567,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-qms-cubic-qoe31.txt---wlan0

grep "QOE_send: name:rmnet_data" test-03-scheduler-qms-cubic-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-669.945567,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-qms-cubic-qoe31.txt---rmnet_data



grep "QOE_send: name:wlan0" test-03-scheduler-rr-cubic-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-978.264982,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-rr-cubic-qoe01.txt---wlan0

grep "QOE_send: name:rmnet_data" test-03-scheduler-rr-cubic-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-978.264982,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-rr-cubic-qoe01.txt---rmnet_data


grep "QOE_send: name:wlan0" test-03-scheduler-rr-cubic-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1149.048152,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-rr-cubic-qoe02.txt---wlan0

grep "QOE_send: name:rmnet_data" test-03-scheduler-rr-cubic-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1149.048152,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-rr-cubic-qoe02.txt---rmnet_data


grep "QOE_send: name:wlan0" test-03-scheduler-rr-cubic-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1232.905901,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-rr-cubic-qoe03.txt---wlan0

grep "QOE_send: name:rmnet_data" test-03-scheduler-rr-cubic-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1232.905901,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-rr-cubic-qoe03.txt---rmnet_data


grep "QOE_send: name:wlan0" test-03-scheduler-rr-cubic-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1313.493487,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-rr-cubic-qoe27.txt---wlan0

grep "QOE_send: name:rmnet_data" test-03-scheduler-rr-cubic-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1313.493487,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-rr-cubic-qoe27.txt---rmnet_data


grep "QOE_send: name:wlan0" test-03-scheduler-rr-cubic-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1397.811891,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-rr-cubic-qoe31.txt---wlan0

grep "QOE_send: name:rmnet_data" test-03-scheduler-rr-cubic-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1397.811891,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-03-scheduler-rr-cubic-qoe31.txt---rmnet_data

