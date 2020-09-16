// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop2.h for the primary calling header

#ifndef _VTOP2___024UNIT_H_
#define _VTOP2___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class VTop2__Syms;
class VTop2_VerilatedVcd;


//----------

VL_MODULE(VTop2___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VTop2__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTop2___024unit);  ///< Copying not allowed
  public:
    VTop2___024unit(const char* name = "TOP");
    ~VTop2___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VTop2__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
