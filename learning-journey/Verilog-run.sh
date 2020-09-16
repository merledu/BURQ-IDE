#!/bin/bash
#define password 


clear
clear
echo "Running Code in System Verilog Mode"
sleep 0.5
cd ~
cd learning-journey/Buraq_Core_SV32I_5SP
make
gtkwave RISCV_SSC.vcd

exit


$SHELL

