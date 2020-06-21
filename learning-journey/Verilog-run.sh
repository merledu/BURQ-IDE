#!/bin/bash
#define password 
export pass = "junior9398"

spawn ssh root@remotehost 

# detect password prompt
expect "*?assword:*"

# send $password
send -- "$pass\r"

#return 
send -- "\r"
expect eof

clear
clear
echo "Running Code in System Verilog Mode"
sleep 0.5
cd ~
cd home/monis/learning-journey/

$SHELL

