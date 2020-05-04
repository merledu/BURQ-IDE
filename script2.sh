#!/bin/bash
#define password 
export TERM=xterm
cd /opt/riscv32/bin
export PATH=/opt/riscv32/bin/:$PATH
clear

echo "BURQ GCC -COMPILER FOR MERL_UIT"

riscv32-unknown-elf-gcc /home/monis/learning-journey/test.c -o /home/monis/learning-journey/test | gcc /home/monis/learning-journey/test.c 2> /home/monis/learning-journey/meralog.txt 

riscv32-unknown-elf-objdump -d /home/monis/learning-journey/test >/home/monis/learning-journey/test.txt
sleep 1
python3 /home/monis/learning-journey/python.py
sleep 1

$SHELL

