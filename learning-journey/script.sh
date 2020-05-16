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
cd /opt/riscv32/bin
export PATH=/opt/riscv32/bin/:$PATH
clear

echo "Initializing Burq THE SIMULATOR"
echo -ne '#####                     (33%)\r'
sleep 4 
echo -ne '#############             (66%)\r'
sleep 3
echo -ne '#######################   (100%)\r'
sleep 1
echo -ne '\n'
clear
vim /home/monis/learning-journey/test.c

riscv32-unknown-elf-gcc /home/monis/learning-journey/test.c -o /home/monis/learning-journey/test | gcc /home/monis/learning-journey/test.c 2> /home/monis/learning-journey/meralog.txt 


while true; do
    echo -en "If there is no error Press 'N'  or any key to continue\t: "
    read -s -n 1 input
    clear 
if [[ $input = "n" ]] || [[ $input = "N" ]] 
        then break
    else 
       vim /home/monis/learning-journey/test.c
       riscv32-unknown-elf-gcc /home/monis/learning-journey/test.c -o /home/monis/learning-journey/test | gcc /home/monis/learning-journey/test.c 2> /home/monis/learning-journey/meralog.txt 
riscv32-unknown-elf-objdump -d /home/monis/learning-journey/test >/home/monis/learning-journey/test.txt
python3 /home/monis/learning-journey/python.py
 fi
 done

while true; do
    echo -en "Press 'c' to run c code to 5-stage core or 'q' to quit\t: "
    read -s -n 1 input
    clear 
if [[ $input = "q" ]] || [[ $input = "Q" ]] 
        then break
    else 
   cd ~   
   cd learning-journey/5-stage-Pipelined-CPU/RV32i
   sbt "test:runMain datapath.Launcher Top" !
   sbt "test:runMain datapath.Launcher Top --backend-name verilator" !   
   cd ~
   cd learning-journey/5-stage-Pipelined-CPU/RV32i/test_run_dir/examples/Top   
   gtkwave Top.vcd
    fi
done


echo "Terminating...."

echo -ne '#####                     (33%)\r'
sleep 3
echo -ne '#############             (66%)\r'
sleep 3
echo -ne '#######################   (100%)\r'
sleep 1
echo -ne '\n'

echo "BURQ GCC -COMPILER FOR MERL_UIT"

$SHELL

