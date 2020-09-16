// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoadMemory.h for the primary calling header

#include "VLoadMemory.h"       // For This
#include "VLoadMemory__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VLoadMemory) {
    VLoadMemory__Syms* __restrict vlSymsp = __VlSymsp = new VLoadMemory__Syms(this, name());
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VLoadMemory::__Vconfigure(VLoadMemory__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VLoadMemory::~VLoadMemory() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VLoadMemory::eval() {
    VLoadMemory__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VLoadMemory::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VLoadMemory::_eval_initial_loop(VLoadMemory__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VLoadMemory::_sequent__TOP__1(VLoadMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VLoadMemory::_sequent__TOP__1\n"); );
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvset__LoadMemory__DOT__mem__v0,0,0);
    //char	__VpadToAlign5[1];
    VL_SIG16(__Vdlyvdim0__LoadMemory__DOT__mem__v0,9,0);
    VL_SIG(__Vdlyvval__LoadMemory__DOT__mem__v0,31,0);
    // Body
    __Vdlyvset__LoadMemory__DOT__mem__v0 = 0U;
    // ALWAYS at LoadMemory.v:72
    if (vlTOPp->io_MemoryRead) {
	vlTOPp->LoadMemory__DOT__mem___05FT_28_addr_pipe_0 
	    = vlTOPp->io_wrAddr;
    }
    // ALWAYS at LoadMemory.v:69
    if (vlTOPp->io_MemoryWrite) {
	__Vdlyvval__LoadMemory__DOT__mem__v0 = vlTOPp->io_wrData;
	__Vdlyvset__LoadMemory__DOT__mem__v0 = 1U;
	__Vdlyvdim0__LoadMemory__DOT__mem__v0 = vlTOPp->io_wrAddr;
    }
    // ALWAYSPOST at LoadMemory.v:70
    if (__Vdlyvset__LoadMemory__DOT__mem__v0) {
	vlTOPp->LoadMemory__DOT__mem[__Vdlyvdim0__LoadMemory__DOT__mem__v0] 
	    = __Vdlyvval__LoadMemory__DOT__mem__v0;
    }
    vlTOPp->LoadMemory__DOT__mem___05FT_28_data = vlTOPp->LoadMemory__DOT__mem
	[vlTOPp->LoadMemory__DOT__mem___05FT_28_addr_pipe_0];
}

void VLoadMemory::_settle__TOP__2(VLoadMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VLoadMemory::_settle__TOP__2\n"); );
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoadMemory__DOT__mem___05FT_28_data = vlTOPp->LoadMemory__DOT__mem
	[vlTOPp->LoadMemory__DOT__mem___05FT_28_addr_pipe_0];
    vlTOPp->io_Data = ((IData)(vlTOPp->io_MemoryRead)
		        ? vlTOPp->LoadMemory__DOT__mem___05FT_28_data
		        : 0U);
}

VL_INLINE_OPT void VLoadMemory::_combo__TOP__3(VLoadMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VLoadMemory::_combo__TOP__3\n"); );
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_Data = ((IData)(vlTOPp->io_MemoryRead)
		        ? vlTOPp->LoadMemory__DOT__mem___05FT_28_data
		        : 0U);
}

void VLoadMemory::_eval(VLoadMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VLoadMemory::_eval\n"); );
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VLoadMemory::_eval_initial(VLoadMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VLoadMemory::_eval_initial\n"); );
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VLoadMemory::final() {
    VL_DEBUG_IF(VL_PRINTF("    VLoadMemory::final\n"); );
    // Variables
    VLoadMemory__Syms* __restrict vlSymsp = this->__VlSymsp;
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VLoadMemory::_eval_settle(VLoadMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VLoadMemory::_eval_settle\n"); );
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VLoadMemory::_change_request(VLoadMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VLoadMemory::_change_request\n"); );
    VLoadMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VLoadMemory::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VLoadMemory::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_wrAddr = VL_RAND_RESET_I(8);
    io_wrData = VL_RAND_RESET_I(32);
    io_MemoryWrite = VL_RAND_RESET_I(1);
    io_MemoryRead = VL_RAND_RESET_I(1);
    io_Data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    LoadMemory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    LoadMemory__DOT__mem___05FT_28_data = VL_RAND_RESET_I(32);
    LoadMemory__DOT__mem___05FT_28_addr_pipe_0 = VL_RAND_RESET_I(10);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VLoadMemory::_configure_coverage(VLoadMemory__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VLoadMemory::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
