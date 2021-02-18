// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed into the Public Domain, for any use,
// without warranty, 2017 by Wilson Snyder.
//======================================================================

// Include common routines


#include "VRISCV32I_SV.h"
#include "verilated.h"
#include "verilated_vcd_c.h"


unsigned int main_time = 0;

double sc_time_stamp () 
{
return main_time;
}

int
main (int argc, char **argv, char **env)
{
    Verilated::commandArgs(argc, argv);

    VRISCV32I_SV* top = new VRISCV32I_SV;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace (tfp, 99);
    //Verilated::mkdir("logs");
    tfp->open("RISCV_SSC.vcd");

    top -> clock = 0;
    top -> reset = 0;

   
    while (main_time < 1000 && !Verilated::gotFinish()) 
    { 
        top->clock = top->clock ? 0 : 1;       // Toggle clock
        top->eval(); 

        top -> eval();

        if (tfp) tfp -> dump(main_time);

        main_time ++;
    }

    top -> final();

    if (tfp) tfp -> close();

    delete top;

    exit(0);
}
