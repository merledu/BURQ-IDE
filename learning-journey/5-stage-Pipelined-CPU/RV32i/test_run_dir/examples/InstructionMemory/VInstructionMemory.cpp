// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstructionMemory.h for the primary calling header

#include "VInstructionMemory.h" // For This
#include "VInstructionMemory__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VInstructionMemory) {
    VInstructionMemory__Syms* __restrict vlSymsp = __VlSymsp = new VInstructionMemory__Syms(this, name());
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VInstructionMemory::__Vconfigure(VInstructionMemory__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VInstructionMemory::~VInstructionMemory() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VInstructionMemory::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VInstructionMemory::eval\n"); );
    VInstructionMemory__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VInstructionMemory::_eval_initial_loop(VInstructionMemory__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void VInstructionMemory::_initial__TOP__1(VInstructionMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionMemory::_initial__TOP__1\n"); );
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1,479,0,15);
    // Body
    // INITIAL at /home/monis/Desktop/Ghaznavi-5-Stage-Pipeline-master/Ghaznavi/test_run_dir/examples/InstructionMemory/InstructionMemory.InstructionMemory.mem.v:8
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x2f357374U;
    __Vtemp1[2U] = 0x6e617669U;
    __Vtemp1[3U] = 0x4768617aU;
    __Vtemp1[4U] = 0x7465722fU;
    __Vtemp1[5U] = 0x2d6d6173U;
    __Vtemp1[6U] = 0x436f7265U;
    __Vtemp1[7U] = 0x6176692dU;
    __Vtemp1[8U] = 0x68617a6eU;
    __Vtemp1[9U] = 0x6f702f47U;
    __Vtemp1[0xaU] = 0x65736b74U;
    __Vtemp1[0xbU] = 0x69732f44U;
    __Vtemp1[0xcU] = 0x2f6d6f6eU;
    __Vtemp1[0xdU] = 0x686f6d65U;
    __Vtemp1[0xeU] = 0x2fU;
    VL_READMEM_W (true,32,1024, 0,15, __Vtemp1, vlTOPp->InstructionMemory__DOT__mem
		  ,0,~0);
}

VL_INLINE_OPT void VInstructionMemory::_combo__TOP__2(VInstructionMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionMemory::_combo__TOP__2\n"); );
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_rdData = vlTOPp->InstructionMemory__DOT__mem
	[(0x3ffU & vlTOPp->io_wrAddr)];
}

void VInstructionMemory::_eval(VInstructionMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionMemory::_eval\n"); );
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VInstructionMemory::_eval_initial(VInstructionMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionMemory::_eval_initial\n"); );
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VInstructionMemory::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionMemory::final\n"); );
    // Variables
    VInstructionMemory__Syms* __restrict vlSymsp = this->__VlSymsp;
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VInstructionMemory::_eval_settle(VInstructionMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionMemory::_eval_settle\n"); );
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VInstructionMemory::_change_request(VInstructionMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionMemory::_change_request\n"); );
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VInstructionMemory::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionMemory::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VInstructionMemory::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionMemory::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_wrAddr = VL_RAND_RESET_I(32);
    io_rdData = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    InstructionMemory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
