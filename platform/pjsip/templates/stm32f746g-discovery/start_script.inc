"ifconfig eth0 192.168.0.128 netmask 255.255.255.0 hw ether AA:BB:CC:DD:EE:02 up",
"route add 192.168.0.0 netmask 255.255.255.0 eth0",
"route add default gw 192.168.0.1 eth0",
