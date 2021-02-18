#!/bin/bash
#define password 
export TERM=xterm
clear
clear
cd ~ 
echo "Starting Run Test"
echo "Code Output Saved to Output Tab"
trap "exit" INT
cd ~
cd /home/monis/Desktop/Burq/5-stage-Pipelined-CPU/RV32i/Top2.vcd
sbt "test:runMain datapath.Launcher Top2 --backend-name verilator" !  
exit



