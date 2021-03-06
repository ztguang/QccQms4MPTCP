Research and Implementation of Applying MPTCP to Edge Wireless Network

Original test data

Mi8-Android-arm_to_Internet




cd paper-2---A-MPTCP-Scheduler---testing---results/test-05-qms-qcc-qoe03-loss



grep "QOE_send: name:wlan0" test-05-cubic-def-qoe03-0.00.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2271.026316,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.00.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-cubic-def-qoe03-0.00.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2271.026316,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.00.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-cubic-def-qoe03-0.02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2487.252461,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.02.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-cubic-def-qoe03-0.02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2487.252461,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.02.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-cubic-def-qoe03-0.04.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2762.550795,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.04.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-cubic-def-qoe03-0.04.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2762.550795,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.04.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-cubic-def-qoe03-0.06.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-3061.455579,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.06.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-cubic-def-qoe03-0.06.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-3061.455579,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.06.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-cubic-def-qoe03-0.08.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-4093.539444,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.08.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-cubic-def-qoe03-0.08.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-4093.539444,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.08.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-cubic-def-qoe03-0.1.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-3595.760523,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.1.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-cubic-def-qoe03-0.1.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-3595.760523,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.1.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-qms-qcc-qoe03-0.00.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2167.553740,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.00.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-qms-qcc-qoe03-0.00.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2167.553740,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.00.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-qms-qcc-qoe03-0.02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2374.309358,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.02.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-qms-qcc-qoe03-0.02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2374.309358,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.02.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-qms-qcc-qoe03-0.04.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2640.083080,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.04.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-qms-qcc-qoe03-0.04.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2640.083080,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.04.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-qms-qcc-qoe03-0.06.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2929.262807,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.06.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-qms-qcc-qoe03-0.06.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2929.262807,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.06.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-qms-qcc-qoe03-0.08.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-3910.632808,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.08.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-qms-qcc-qoe03-0.08.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-3910.632808,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.08.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-qms-qcc-qoe03-0.1.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-3356.781213,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.1.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-qms-qcc-qoe03-0.1.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-3356.781213,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.1.txt---rmnet_data

