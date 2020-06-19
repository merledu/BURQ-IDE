// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VRISCV32I_SV__Syms_H_
#define _VRISCV32I_SV__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VRISCV32I_SV.h"

// SYMS CLASS
class VRISCV32I_SV__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    VRISCV32I_SV*                  TOPp;
    
    // COVERAGE
    uint32_t	__Vcoverage[1152];
    
    // SCOPE NAMES
    
    // CREATORS
    VRISCV32I_SV__Syms(VRISCV32I_SV* topp, const char* namep);
    ~VRISCV32I_SV__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
