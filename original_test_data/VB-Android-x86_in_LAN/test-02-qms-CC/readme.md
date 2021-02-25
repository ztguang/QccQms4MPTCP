Research and Implementation of Applying MPTCP to Edge Wireless Network

Original test data

VB-Android-x86_in_LAN

===============================================================================================================

cd paper/paper-2---A-MPTCP-Scheduler---testing---results/test-02-qms-CC


grep "QOE_send: name:wifi_eth" test-02-qms-CC-cubic-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-772.477896,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-cubic-qoe01.txt---wifi_eth

grep "QOE_send: name:eth1" test-02-qms-CC-cubic-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-772.477896,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-cubic-qoe01.txt---eth1


grep "QOE_send: name:wifi_eth" test-02-qms-CC-cubic-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-56.797650,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-cubic-qoe02.txt---wifi_eth

grep "QOE_send: name:eth1" test-02-qms-CC-cubic-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-56.797650,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-cubic-qoe02.txt---eth1


grep "QOE_send: name:wifi_eth" test-02-qms-CC-cubic-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-204.815757,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-cubic-qoe03.txt---wifi_eth

grep "QOE_send: name:eth1" test-02-qms-CC-cubic-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-204.815757,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-cubic-qoe03.txt---eth1


grep "QOE_send: name:wifi_eth" test-02-qms-CC-cubic-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-341.479366,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-cubic-qoe27.txt---wifi_eth

grep "QOE_send: name:eth1" test-02-qms-CC-cubic-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-341.479366,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-cubic-qoe27.txt---eth1


grep "QOE_send: name:wifi_eth" test-02-qms-CC-cubic-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-478.862900,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-cubic-qoe31.txt---wifi_eth

grep "QOE_send: name:eth1" test-02-qms-CC-cubic-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-478.862900,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-cubic-qoe31.txt---eth1



grep "QOE_send: name:wifi_eth" test-02-qms-CC-olia-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-813.883858,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-olia-qoe01.txt---wifi_eth

grep "QOE_send: name:eth1" test-02-qms-CC-olia-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-813.883858,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-olia-qoe01.txt---eth1


grep "QOE_send: name:wifi_eth" test-02-qms-CC-olia-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-69.002810,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-olia-qoe02.txt---wifi_eth

grep "QOE_send: name:eth1" test-02-qms-CC-olia-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-69.002810,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-olia-qoe02.txt---eth1


grep "QOE_send: name:wifi_eth" test-02-qms-CC-olia-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-219.226094,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-olia-qoe03.txt---wifi_eth

grep "QOE_send: name:eth1" test-02-qms-CC-olia-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-219.226094,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-olia-qoe03.txt---eth1


grep "QOE_send: name:wifi_eth" test-02-qms-CC-olia-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-333.022141,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-olia-qoe27.txt---wifi_eth

grep "QOE_send: name:eth1" test-02-qms-CC-olia-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-333.022141,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-olia-qoe27.txt---eth1


grep "QOE_send: name:wifi_eth" test-02-qms-CC-olia-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-443.042210,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-olia-qoe31.txt---wifi_eth

grep "QOE_send: name:eth1" test-02-qms-CC-olia-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-443.042210,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-olia-qoe31.txt---eth1



grep "QOE_send: name:wifi_eth" test-02-qms-CC-qcc-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-853.076465,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe01.txt---wifi_eth

grep "QOE_send: name:eth1" test-02-qms-CC-qcc-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-853.076465,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe01.txt---eth1


grep "QOE_send: name:wifi_eth" test-02-qms-CC-qcc-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-60.000688,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe02.txt---wifi_eth

grep "QOE_send: name:eth1" test-02-qms-CC-qcc-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-60.000688,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe02.txt---eth1


grep "QOE_send: name:wifi_eth" test-02-qms-CC-qcc-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-202.164858,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe03.txt---wifi_eth

grep "QOE_send: name:eth1" test-02-qms-CC-qcc-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-202.164858,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe03.txt---eth1


grep "QOE_send: name:wifi_eth" test-02-qms-CC-qcc-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-317.272209,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe27.txt---wifi_eth

grep "QOE_send: name:eth1" test-02-qms-CC-qcc-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-317.272209,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe27.txt---eth1


grep "QOE_send: name:wifi_eth" test-02-qms-CC-qcc-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-473.511058,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe31.txt---wifi_eth

grep "QOE_send: name:eth1" test-02-qms-CC-qcc-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-473.511058,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f %.3f %s %s\n",$1,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe31.txt---eth1

#------------------------------------------------------------------

cd paper/paper-2---A-MPTCP-Scheduler---testing---results/test-02-qms-CC


grep "QOE_send: name:wifi_eth" test-02-qms-CC-qcc-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-853.076465,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe01.txt---wifi_eth---more

grep "QOE_send: name:eth1" test-02-qms-CC-qcc-qoe01.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-853.076465,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe01.txt---eth1---more


grep "QOE_send: name:wifi_eth" test-02-qms-CC-qcc-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-60.000688,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe02.txt---wifi_eth---more

grep "QOE_send: name:eth1" test-02-qms-CC-qcc-qoe02.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-60.000688,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe02.txt---eth1---more


grep "QOE_send: name:wifi_eth" test-02-qms-CC-qcc-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-202.164858,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe03.txt---wifi_eth---more

grep "QOE_send: name:eth1" test-02-qms-CC-qcc-qoe03.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-202.164858,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe03.txt---eth1---more


grep "QOE_send: name:wifi_eth" test-02-qms-CC-qcc-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-317.272209,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe27.txt---wifi_eth---more

grep "QOE_send: name:eth1" test-02-qms-CC-qcc-qoe27.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-317.272209,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe27.txt---eth1---more


grep "QOE_send: name:wifi_eth" test-02-qms-CC-qcc-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-473.511058,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe31.txt---wifi_eth---more

grep "QOE_send: name:eth1" test-02-qms-CC-qcc-qoe31.txt | awk '{printf("%.6f: %s %s %s %s %s %s %s\n",$2-473.511058,$7,$11,$12,$13,$14,$15,$16)}' | awk -F: '{printf("%.6f: %s %s %s %s %.3f %s %s\n",$1,$3,$5,$7,$9,$11/1000,$13,$15)}' > test-02-qms-CC-qcc-qoe31.txt---eth1---more

#------------------------------------------------------------------

