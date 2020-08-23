// DESCRIPTION: Verilator: Wrapper File for Buraq_Mini_RV32IM
//
//======================================================================


#include "VBuraq_Mini_top.h"
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

    VBuraq_Mini_top* top = new VBuraq_Mini_top;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace (tfp, 99);
    Verilated::mkdir("logs");
    tfp->open("logs/Buraq_Mini.vcd");

    top -> brq_clk = 0;
    top -> brq_rst = 0;

   
    while (main_time < 1000 && !Verilated::gotFinish()) 
    { 
        top->brq_clk = top->brq_clk ? 0 : 1;       // Toggle clock
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