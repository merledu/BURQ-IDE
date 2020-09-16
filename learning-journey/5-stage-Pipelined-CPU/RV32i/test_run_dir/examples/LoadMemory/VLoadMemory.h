// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VLoadMemory_H_
#define _VLoadMemory_H_

#include "verilated.h"
class VLoadMemory__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VLoadMemory) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_wrAddr,7,0);
    VL_IN8(io_MemoryWrite,0,0);
    VL_IN8(io_MemoryRead,0,0);
    //char	__VpadToAlign5[3];
    VL_IN(io_wrData,31,0);
    VL_OUT(io_Data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG16(LoadMemory__DOT__mem___05FT_28_addr_pipe_0,9,0);
    //char	__VpadToAlign22[2];
    VL_SIG(LoadMemory__DOT__mem___05FT_28_data,31,0);
    //char	__VpadToAlign28[4];
    VL_SIG(LoadMemory__DOT__mem[1024],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    //char	__VpadToAlign4133[3];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VLoadMemory__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VLoadMemory& operator= (const VLoadMemory&);	///< Copying not allowed
    VLoadMemory(const VLoadMemory&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VLoadMemory(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VLoadMemory();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VLoadMemory__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VLoadMemory__Syms* symsp, bool first);
  private:
    static QData	_change_request(VLoadMemory__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__3(VLoadMemory__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VLoadMemory__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VLoadMemory__Syms* __restrict vlSymsp);
    static void	_eval_initial(VLoadMemory__Syms* __restrict vlSymsp);
    static void	_eval_settle(VLoadMemory__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(VLoadMemory__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(VLoadMemory__Syms* __restrict vlSymsp);
    static void	traceChgThis(VLoadMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VLoadMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VLoadMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VLoadMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VLoadMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VLoadMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VLoadMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VLoadMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
