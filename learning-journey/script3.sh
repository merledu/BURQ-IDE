#!/bin/bash
#define password 
export TERM=xterm
clear
clear
echo "Starting Run-Test"
echo "Code Output Saved to Output Tab"
cd ~ 
trap "exit" INT
cd learning-journey/5-stage-Pipelined-CPU/RV32i
sbt "test:runMain datapath.Launcher Top2 --backend-name verilator" !  
cd ~
cd learning-journey/5-stage-Pipelined-CPU/RV32i/test_run_dir/examples/Top2   
gtkwave Top2.vcd 

echo "Run Test Complete Check GTK-Wave for Wave-Forms"
cp -l Top2.vcd check.txt
exit

$SHELL

