#!/bin/bash
#define password 
export TERM=xterm
export pass = "your-root-password"
spawn ssh root@remotehost 

# detect password prompt
expect "*?assword:*"

# send $password
send -- "$pass\r"

#return 
send -- "\r"
expect eof


cd /home/monis/Desktop/Burq/riscv32/bin
export PATH=/home/monis/Desktop/Burq/riscv32/bin/:$PATH
clear

echo "Testing Output"


sleep 0.5
echo "Verifying Output with the IDE"
sleep 0.5
sleep 0.5
cd /home/monis/Desktop/Burq/
export PATH=home/monis/learning-journey/:$PATH
python3 /home/monis/Desktop/Burq/automate.py
  
exit
$SHELL

