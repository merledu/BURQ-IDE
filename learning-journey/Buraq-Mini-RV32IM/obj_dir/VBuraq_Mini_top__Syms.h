// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VBURAQ_MINI_TOP__SYMS_H_
#define _VBURAQ_MINI_TOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VBuraq_Mini_top.h"

// SYMS CLASS
class VBuraq_Mini_top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VBuraq_Mini_top*               TOPp;
    
    // COVERAGE
    uint32_t __Vcoverage[1582];
    
    // CREATORS
    VBuraq_Mini_top__Syms(VBuraq_Mini_top* topp, const char* namep);
    ~VBuraq_Mini_top__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
