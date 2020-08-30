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

echo "Compilation Started !!"


sleep 0.5
echo "Compiling Sources from editor !!"
sleep 0.5
sleep 0.5
cd /home/monis/learning-journey/
export PATH=home/monis/learning-journey/:$PATH
gcc test.c
./a.out > output.txt
python3 /home/monis/learning-journey/autocheck.py
  
exit
$SHELL

