// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPC__Syms.h"


//======================

void VPC::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VPC::traceInit, &VPC::traceFull, &VPC::traceChg, this);
}
void VPC::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VPC* t=(VPC*)userthis;
    VPC__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VPC::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPC* t=(VPC*)userthis;
    VPC__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VPC::traceInitThis(VPC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VPC::traceFullThis(VPC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPC::traceInitThis__1(VPC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBus  (c+3,"io_input",-1,31,0);
	vcdp->declBus  (c+4,"io_pc",-1,31,0);
	vcdp->declBus  (c+5,"io_pc4",-1,31,0);
	vcdp->declBit  (c+1,"PC clock",-1);
	vcdp->declBit  (c+2,"PC reset",-1);
	vcdp->declBus  (c+3,"PC io_input",-1,31,0);
	vcdp->declBus  (c+4,"PC io_pc",-1,31,0);
	vcdp->declBus  (c+5,"PC io_pc4",-1,31,0);
    }
}

void VPC::traceFullThis__1(VPC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBus  (c+3,(vlTOPp->io_input),32);
	vcdp->fullBus  (c+4,(vlTOPp->io_pc),32);
	vcdp->fullBus  (c+5,(vlTOPp->io_pc4),32);
    }
}
