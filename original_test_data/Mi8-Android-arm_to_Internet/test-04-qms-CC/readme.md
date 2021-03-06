Research and Implementation of Applying MPTCP to Edge Wireless Network

Original test data

Mi8-Android-arm_to_Internet

cd paper-2---A-MPTCP-Scheduler---testing---results/test-04-qms-CC




grep "QOE_send: name:wlan0" test-04-qms-CC-cubic-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1224.473641,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-cubic-qoe01.txt---wlan0

grep "QOE_send: name:rmnet_data" test-04-qms-CC-cubic-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1224.473641,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-cubic-qoe01.txt---rmnet_data


grep "QOE_send: name:wlan0" test-04-qms-CC-cubic-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1389.859187,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-cubic-qoe02.txt---wlan0

grep "QOE_send: name:rmnet_data" test-04-qms-CC-cubic-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1389.859187,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-cubic-qoe02.txt---rmnet_data


grep "QOE_send: name:wlan0" test-04-qms-CC-cubic-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1467.775086,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-cubic-qoe03.txt---wlan0

grep "QOE_send: name:rmnet_data" test-04-qms-CC-cubic-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1467.775086,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-cubic-qoe03.txt---rmnet_data


grep "QOE_send: name:wlan0" test-04-qms-CC-cubic-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1547.102192,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-cubic-qoe27.txt---wlan0

grep "QOE_send: name:rmnet_data" test-04-qms-CC-cubic-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1547.102192,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-cubic-qoe27.txt---rmnet_data


grep "QOE_send: name:wlan0" test-04-qms-CC-cubic-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1623.976162,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-cubic-qoe31.txt---wlan0

grep "QOE_send: name:rmnet_data" test-04-qms-CC-cubic-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1623.976162,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-cubic-qoe31.txt---rmnet_data



grep "QOE_send: name:wlan0" test-04-qms-CC-olia-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1788.015391,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-olia-qoe01.txt---wlan0

grep "QOE_send: name:rmnet_data" test-04-qms-CC-olia-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1788.015391,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-olia-qoe01.txt---rmnet_data


grep "QOE_send: name:wlan0" test-04-qms-CC-olia-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1931.305708,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-olia-qoe02.txt---wlan0

grep "QOE_send: name:rmnet_data" test-04-qms-CC-olia-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1931.305708,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-olia-qoe02.txt---rmnet_data


grep "QOE_send: name:wlan0" test-04-qms-CC-olia-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2009.678325,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-olia-qoe03.txt---wlan0

grep "QOE_send: name:rmnet_data" test-04-qms-CC-olia-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2009.678325,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-olia-qoe03.txt---rmnet_data


grep "QOE_send: name:wlan0" test-04-qms-CC-olia-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2092.537566,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-olia-qoe27.txt---wlan0

grep "QOE_send: name:rmnet_data" test-04-qms-CC-olia-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2092.537566,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-olia-qoe27.txt---rmnet_data


grep "QOE_send: name:wlan0" test-04-qms-CC-olia-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2193.120447,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-olia-qoe31.txt---wlan0

grep "QOE_send: name:rmnet_data" test-04-qms-CC-olia-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-2193.120447,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-olia-qoe31.txt---rmnet_data



grep "QOE_send: name:wlan0" test-04-qms-CC-qcc-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-699.346784,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe01.txt---wlan0

grep "QOE_send: name:rmnet_data" test-04-qms-CC-qcc-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-699.346784,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe01.txt---rmnet_data


grep "QOE_send: name:wlan0" test-04-qms-CC-qcc-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.862889,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe02.txt---wlan0

grep "QOE_send: name:rmnet_data" test-04-qms-CC-qcc-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.862889,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe02.txt---rmnet_data


grep "QOE_send: name:wlan0" test-04-qms-CC-qcc-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-887.116825,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe03.txt---wlan0

grep "QOE_send: name:rmnet_data" test-04-qms-CC-qcc-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-887.116825,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe03.txt---rmnet_data


grep "QOE_send: name:wlan0" test-04-qms-CC-qcc-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-975.344525,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe27.txt---wlan0

grep "QOE_send: name:rmnet_data" test-04-qms-CC-qcc-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-975.344525,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe27.txt---rmnet_data


grep "QOE_send: name:wlan0" test-04-qms-CC-qcc-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1061.687906,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe31.txt---wlan0

grep "QOE_send: name:rmnet_data" test-04-qms-CC-qcc-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1061.687906,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe31.txt---rmnet_data

#-------------------------------



grep "QOE_send: name:wlan0" test-04-qms-CC-qcc-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-699.346784,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe01.txt---wlan0---more

grep "QOE_send: name:rmnet_data" test-04-qms-CC-qcc-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-699.346784,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe01.txt---rmnet_data---more


grep "QOE_send: name:wlan0" test-04-qms-CC-qcc-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.862889,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe02.txt---wlan0---more

grep "QOE_send: name:rmnet_data" test-04-qms-CC-qcc-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-806.862889,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe02.txt---rmnet_data---more


grep "QOE_send: name:wlan0" test-04-qms-CC-qcc-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-887.116825,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe03.txt---wlan0---more

grep "QOE_send: name:rmnet_data" test-04-qms-CC-qcc-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-887.116825,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe03.txt---rmnet_data---more


grep "QOE_send: name:wlan0" test-04-qms-CC-qcc-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-975.344525,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe27.txt---wlan0---more

grep "QOE_send: name:rmnet_data" test-04-qms-CC-qcc-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-975.344525,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe27.txt---rmnet_data---more


grep "QOE_send: name:wlan0" test-04-qms-CC-qcc-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1061.687906,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe31.txt---wlan0---more

grep "QOE_send: name:rmnet_data" test-04-qms-CC-qcc-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-1061.687906,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-04-qms-CC-qcc-qoe31.txt---rmnet_data---more

