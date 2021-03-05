Research and Implementation of Applying MPTCP to Edge Wireless Network

Original test data

Mi8-Android-arm_to_Internet




cd paper-2---A-MPTCP-Scheduler---testing---results/test-05-qms-qcc-qoe03-loss


grep "QOE_send: name:wlan0" test-05-cubic-def-qoe03-0.00.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.00.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-cubic-def-qoe03-0.00.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.00.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-cubic-def-qoe03-0.02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.02.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-cubic-def-qoe03-0.02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.02.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-cubic-def-qoe03-0.04.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.04.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-cubic-def-qoe03-0.04.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.04.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-cubic-def-qoe03-0.06.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.06.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-cubic-def-qoe03-0.06.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.06.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-cubic-def-qoe03-0.08.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.08.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-cubic-def-qoe03-0.08.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.08.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-cubic-def-qoe03-0.1.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.1.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-cubic-def-qoe03-0.1.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-cubic-def-qoe03-0.1.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-qms-qcc-qoe03-0.00.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.00.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-qms-qcc-qoe03-0.00.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.00.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-qms-qcc-qoe03-0.02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.02.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-qms-qcc-qoe03-0.02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.02.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-qms-qcc-qoe03-0.04.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.04.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-qms-qcc-qoe03-0.04.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.04.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-qms-qcc-qoe03-0.06.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.06.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-qms-qcc-qoe03-0.06.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.06.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-qms-qcc-qoe03-0.08.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.08.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-qms-qcc-qoe03-0.08.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.08.txt---rmnet_data


grep "QOE_send: name:wlan0" test-05-qms-qcc-qoe03-0.1.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.1.txt---wlan0

grep "QOE_send: name:rmnet_data" test-05-qms-qcc-qoe03-0.1.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.383121,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-05-qms-qcc-qoe03-0.1.txt---rmnet_data

