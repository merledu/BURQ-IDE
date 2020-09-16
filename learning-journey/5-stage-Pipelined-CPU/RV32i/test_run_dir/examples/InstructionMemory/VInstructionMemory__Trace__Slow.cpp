// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInstructionMemory__Syms.h"


//======================

void VInstructionMemory::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VInstructionMemory::traceInit, &VInstructionMemory::traceFull, &VInstructionMemory::traceChg, this);
}
void VInstructionMemory::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VInstructionMemory* t=(VInstructionMemory*)userthis;
    VInstructionMemory__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VInstructionMemory::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VInstructionMemory* t=(VInstructionMemory*)userthis;
    VInstructionMemory__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VInstructionMemory::traceInitThis(VInstructionMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VInstructionMemory::traceFullThis(VInstructionMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VInstructionMemory::traceInitThis__1(VInstructionMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBus  (c+3,"io_wrAddr",-1,31,0);
	vcdp->declBus  (c+4,"io_rdData",-1,31,0);
	vcdp->declBit  (c+1,"InstructionMemory clock",-1);
	vcdp->declBit  (c+2,"InstructionMemory reset",-1);
	vcdp->declBus  (c+3,"InstructionMemory io_wrAddr",-1,31,0);
	vcdp->declBus  (c+4,"InstructionMemory io_rdData",-1,31,0);
	// Tracing: InstructionMemory mem // Ignored: Wide memory > --trace-max-array ents at InstructionMemory.v:7
	// Tracing: InstructionMemory _RAND_0 // Ignored: Inlined leading underscore at InstructionMemory.v:8
	vcdp->declBus  (c+5,"InstructionMemory mem__T_12_data",-1,31,0);
	vcdp->declBus  (c+6,"InstructionMemory mem__T_12_addr",-1,9,0);
	vcdp->declBit  (c+1,"InstructionMemory BindsTo_0_InstructionMemory_Inst clock",-1);
	vcdp->declBit  (c+2,"InstructionMemory BindsTo_0_InstructionMemory_Inst reset",-1);
	vcdp->declBus  (c+3,"InstructionMemory BindsTo_0_InstructionMemory_Inst io_wrAddr",-1,31,0);
	vcdp->declBus  (c+4,"InstructionMemory BindsTo_0_InstructionMemory_Inst io_rdData",-1,31,0);
    }
}

void VInstructionMemory::traceFullThis__1(VInstructionMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBus  (c+3,(vlTOPp->io_wrAddr),32);
	vcdp->fullBus  (c+4,(vlTOPp->io_rdData),32);
	vcdp->fullBus  (c+5,(vlTOPp->InstructionMemory__DOT__mem
			     [(0x3ffU & vlTOPp->io_wrAddr)]),32);
	vcdp->fullBus  (c+6,((0x3ffU & vlTOPp->io_wrAddr)),10);
    }
}
