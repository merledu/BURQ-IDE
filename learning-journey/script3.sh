#!/bin/bash
#define password 
export TERM=xterm
clear
clear
cd ~ 
echo "Starting Run Test"
echo "Code Output Saved to Output Tab"
trap "exit" INT
cd learning-journey/5-stage-Pipelined-CPU/RV32i
sbt "test:runMain datapath.Launcher Top2 --backend-name verilator" !  
exit



