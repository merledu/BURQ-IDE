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


cd /opt/riscv32/bin
export PATH=/opt/riscv32/bin/:$PATH
clear

echo "Testing Output"


sleep 0.5
echo "Verifying Output with the IDE"
sleep 0.5
sleep 0.5
cd /home/monis/learning-journey/
export PATH=home/monis/learning-journey/:$PATH
python3 /home/monis/learning-journey/automate.py
  
exit
$SHELL

