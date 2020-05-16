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

riscv32-unknown-elf-gcc /home/monis/learning-journey/test.c -o /home/monis/learning-journey/test | gcc /home/monis/learning-journey/test.c 2> /home/monis/learning-journey/meralog.txt 
sleep 0.5
echo "Compiling Sources from editor !!"
riscv32-unknown-elf-objdump -d /home/monis/learning-journey/test >/home/monis/learning-journey/test.txt
sleep 0.5
python3 /home/monis/learning-journey/python.py
sleep 0.5
echo "Compilation Completed !!"
cd /home/monis/learning-journey/
export PATH=home/monis/learning-journey/:$PATH
gcc test.c
./a.out > output.txt
  
exit
$SHELL

