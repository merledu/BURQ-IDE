// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC.h for the primary calling header

#include "VPC.h"               // For This
#include "VPC__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VPC) {
    VPC__Syms* __restrict vlSymsp = __VlSymsp = new VPC__Syms(this, name());
    VPC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VPC::__Vconfigure(VPC__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPC::~VPC() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VPC::eval() {
    VPC__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VPC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VPC::eval\n"); );
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

void VPC::_eval_initial_loop(VPC__Syms* __restrict vlSymsp) {
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

void VPC::_initial__TOP__1(VPC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VPC::_initial__TOP__1\n"); );
    VPC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at PC.v:8
    vlTOPp->io_pc = 0U;
    // INITIAL at PC.v:9
    vlTOPp->io_pc4 = 4U;
}

void VPC::_eval(VPC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VPC::_eval\n"); );
    VPC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Tracing activity check at PC.v:1
}

void VPC::_eval_initial(VPC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VPC::_eval_initial\n"); );
    VPC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VPC::final() {
    VL_DEBUG_IF(VL_PRINTF("    VPC::final\n"); );
    // Variables
    VPC__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPC::_eval_settle(VPC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VPC::_eval_settle\n"); );
    VPC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData VPC::_change_request(VPC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VPC::_change_request\n"); );
    VPC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VPC::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VPC::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_input = VL_RAND_RESET_I(32);
    io_pc = VL_RAND_RESET_I(32);
    io_pc4 = VL_RAND_RESET_I(32);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VPC::_configure_coverage(VPC__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VPC::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
