// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLoadMemory__Syms.h"


//======================

void VLoadMemory::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VLoadMemory* t=(VLoadMemory*)userthis;
    VLoadMemory__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VLoadMemory::traceChgThis(VLoadMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VLoadMemory::traceChgThis__2(VLoadMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->LoadMemory__DOT__mem___05FT_28_data),32);
    }
}

void VLoadMemory::traceChgThis__3(VLoadMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+2,(vlTOPp->LoadMemory__DOT__mem___05FT_28_addr_pipe_0),10);
    }
}

void VLoadMemory::traceChgThis__4(VLoadMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+3,(vlTOPp->clock));
	vcdp->chgBit  (c+4,(vlTOPp->reset));
	vcdp->chgBus  (c+5,(vlTOPp->io_wrAddr),8);
	vcdp->chgBus  (c+6,(vlTOPp->io_wrData),32);
	vcdp->chgBit  (c+7,(vlTOPp->io_MemoryWrite));
	vcdp->chgBit  (c+8,(vlTOPp->io_MemoryRead));
	vcdp->chgBus  (c+9,(vlTOPp->io_Data),32);
	vcdp->chgBus  (c+10,(vlTOPp->io_wrAddr),10);
    }
}
