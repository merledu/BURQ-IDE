// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLoadMemory__Syms.h"


//======================

void VLoadMemory::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VLoadMemory::traceInit, &VLoadMemory::traceFull, &VLoadMemory::traceChg, this);
}
void VLoadMemory::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VLoadMemory* t=(VLoadMemory*)userthis;
    VLoadMemory__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VLoadMemory::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VLoadMemory* t=(VLoadMemory*)userthis;
    VLoadMemory__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VLoadMemory::traceInitThis(VLoadMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VLoadMemory::traceFullThis(VLoadMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VLoadMemory::traceInitThis__1(VLoadMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+3,"clock",-1);
	vcdp->declBit  (c+4,"reset",-1);
	vcdp->declBus  (c+5,"io_wrAddr",-1,7,0);
	vcdp->declBus  (c+6,"io_wrData",-1,31,0);
	vcdp->declBit  (c+7,"io_MemoryWrite",-1);
	vcdp->declBit  (c+8,"io_MemoryRead",-1);
	vcdp->declBus  (c+9,"io_Data",-1,31,0);
	vcdp->declBit  (c+3,"LoadMemory clock",-1);
	vcdp->declBit  (c+4,"LoadMemory reset",-1);
	vcdp->declBus  (c+5,"LoadMemory io_wrAddr",-1,7,0);
	vcdp->declBus  (c+6,"LoadMemory io_wrData",-1,31,0);
	vcdp->declBit  (c+7,"LoadMemory io_MemoryWrite",-1);
	vcdp->declBit  (c+8,"LoadMemory io_MemoryRead",-1);
	vcdp->declBus  (c+9,"LoadMemory io_Data",-1,31,0);
	// Tracing: LoadMemory mem // Ignored: Wide memory > --trace-max-array ents at LoadMemory.v:10
	// Tracing: LoadMemory _RAND_0 // Ignored: Inlined leading underscore at LoadMemory.v:11
	vcdp->declBus  (c+1,"LoadMemory mem__T_28_data",-1,31,0);
	vcdp->declBus  (c+2,"LoadMemory mem__T_28_addr",-1,9,0);
	vcdp->declBus  (c+6,"LoadMemory mem__T_20_data",-1,31,0);
	vcdp->declBus  (c+10,"LoadMemory mem__T_20_addr",-1,9,0);
	vcdp->declBit  (c+11,"LoadMemory mem__T_20_mask",-1);
	vcdp->declBit  (c+7,"LoadMemory mem__T_20_en",-1);
	// Tracing: LoadMemory _T_26 // Ignored: Inlined leading underscore at LoadMemory.v:18
	// Tracing: LoadMemory _GEN_9 // Ignored: Inlined leading underscore at LoadMemory.v:19
	vcdp->declBus  (c+2,"LoadMemory mem__T_28_addr_pipe_0",-1,9,0);
	// Tracing: LoadMemory _RAND_1 // Ignored: Inlined leading underscore at LoadMemory.v:21
	// Tracing: LoadMemory _GEN_13 // Ignored: Inlined leading underscore at LoadMemory.v:22
    }
}

void VLoadMemory::traceFullThis__1(VLoadMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->LoadMemory__DOT__mem___05FT_28_data),32);
	vcdp->fullBus  (c+2,(vlTOPp->LoadMemory__DOT__mem___05FT_28_addr_pipe_0),10);
	vcdp->fullBit  (c+3,(vlTOPp->clock));
	vcdp->fullBit  (c+4,(vlTOPp->reset));
	vcdp->fullBus  (c+5,(vlTOPp->io_wrAddr),8);
	vcdp->fullBus  (c+6,(vlTOPp->io_wrData),32);
	vcdp->fullBit  (c+7,(vlTOPp->io_MemoryWrite));
	vcdp->fullBit  (c+8,(vlTOPp->io_MemoryRead));
	vcdp->fullBus  (c+9,(vlTOPp->io_Data),32);
	vcdp->fullBus  (c+10,(vlTOPp->io_wrAddr),10);
	vcdp->fullBit  (c+11,(1U));
    }
}
