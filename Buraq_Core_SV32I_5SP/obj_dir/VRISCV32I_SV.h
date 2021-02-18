// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRISCV32I_SV_H_
#define _VRISCV32I_SV_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class VRISCV32I_SV__Syms;
class VRISCV32I_SV_VerilatedVcd;


//----------

VL_MODULE(VRISCV32I_SV) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN16(address_in,9,0);
    VL_IN(program_in,31,0);
    VL_OUT(Reg_Out,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*2:0*/ RISCV32I_SV__DOT__function3;
        CData/*0:0*/ RISCV32I_SV__DOT__D_mem_readEn;
        CData/*0:0*/ RISCV32I_SV__DOT__D_mem_writeEn;
        CData/*1:0*/ RISCV32I_SV__DOT__Core__DOT__NEXT_PC_SEL;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__BRANCH;
        CData/*4:0*/ RISCV32I_SV__DOT__Core__DOT__DEST_REG;
        CData/*4:0*/ RISCV32I_SV__DOT__Core__DOT__DEST_REGISTER;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__MEM_TO_REG_DEC_EX;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__MEM_READ_EN_DEC_EX;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__MEM_WRITE_EN_DEC_EX;
        CData/*2:0*/ RISCV32I_SV__DOT__Core__DOT__ALU_OPCODE;
        CData/*2:0*/ RISCV32I_SV__DOT__Core__DOT__FUNC_3;
        CData/*1:0*/ RISCV32I_SV__DOT__Core__DOT__FUNC_7;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__RF_EN_DEC_to_EX;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__RF_EN_EX_to_WB;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__FLUSH;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__mem_to_register;
        CData/*4:0*/ RISCV32I_SV__DOT__Core__DOT__reg_WB;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__EN_reg_file;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__Mem2Reg;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Branch_controller;
        CData/*1:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmSel;
        CData/*1:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__OPERAND_A_SEL;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__OPERAND_B_SEL;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__regFileWriteEn;
        CData/*2:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ALU_Op;
        CData/*2:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__op_A_sel;
        CData/*2:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__op_B_sel;
        CData/*5:0*/ RISCV32I_SV__DOT__Core__DOT__Execute_unit__DOT__ALU_MUX_CONTROL;
        SData/*9:0*/ RISCV32I_SV__DOT__D_mem_addr_in;
        SData/*11:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__I_type;
        SData/*11:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__S_type;
        SData/*12:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__SB_type;
        IData/*31:0*/ RISCV32I_SV__DOT__Ins_mem_out;
        IData/*31:0*/ RISCV32I_SV__DOT__D_mem_out;
        IData/*31:0*/ RISCV32I_SV__DOT__D_mem_data_in;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Mem_WB_Data;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__ALUresult;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__PROGRAM_COUNTER;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__BRANCH_TARG;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__JAL_TARG;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__JALR_TARG;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__WB_DATA;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__SOURCE1;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__SOURCE2;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__aluOutput;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Mem_Data_WB;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__ALU_RESULT;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Fetch_unit__DOT__PC_reg;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmOUT;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__readData1;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__readData2;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__SOURCE_A;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__SOURCE_B;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Forwarded_SOURCE_A;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Forwarded_SOURCE_B;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__I_imm;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__S_imm;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__U_imm;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__i;
        IData/*19:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__U_type;
        IData/*20:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__UJ_type;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[32];
    };
    struct {
        CData/*7:0*/ RISCV32I_SV__DOT__DataMemory__DOT__memory[1024];
        IData/*31:0*/ RISCV32I_SV__DOT__InstructionMemory__DOT__memory_array[1024];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ RISCV32I_SV__DOT____Vtogcov__clock;
        CData/*0:0*/ RISCV32I_SV__DOT____Vtogcov__reset;
        CData/*2:0*/ RISCV32I_SV__DOT____Vtogcov__function3;
        CData/*0:0*/ RISCV32I_SV__DOT____Vtogcov__Ins_mem_readEn;
        CData/*0:0*/ RISCV32I_SV__DOT____Vtogcov__D_mem_readEn;
        CData/*0:0*/ RISCV32I_SV__DOT____Vtogcov__D_mem_writeEn;
        CData/*1:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__NEXT_PC_SEL;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__BRANCH;
        CData/*4:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__WB_REG;
        CData/*4:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__DEST_REG;
        CData/*4:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__DEST_REGISTER;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__MEM_TO_REG_DEC_EX;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__MEM_READ_EN_DEC_EX;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__MEM_WRITE_EN_DEC_EX;
        CData/*2:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__ALU_OPCODE;
        CData/*2:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__FUNC_3;
        CData/*1:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__FUNC_7;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__RF_EN_DEC_to_EX;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__RF_EN_EX_to_WB;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__FLUSH;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__mem_to_register;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__EN_reg_file;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__Mem2Reg;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__Branch_controller;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__Branch_control_unit;
        CData/*1:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__ImmSel;
        CData/*1:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__OPERAND_A_SEL;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__OPERAND_B_SEL;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__mem_Read;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__mem_write;
        CData/*0:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__regFileWriteEn;
        CData/*2:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__ALU_Op;
        CData/*2:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__op_A_sel;
        CData/*2:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__op_B_sel;
        CData/*5:0*/ RISCV32I_SV__DOT__Core__DOT__Execute_unit__DOT____Vtogcov__ALU_MUX_CONTROL;
        CData/*7:0*/ __Vtableidx1;
        CData/*0:0*/ __Vclklast__TOP__clock;
        SData/*9:0*/ RISCV32I_SV__DOT____Vtogcov__address_in;
        SData/*9:0*/ RISCV32I_SV__DOT____Vtogcov__Ins_mem_addr_in;
        SData/*9:0*/ RISCV32I_SV__DOT____Vtogcov__D_mem_addr_in;
        SData/*11:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT____Vtogcov__I_type;
        SData/*11:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT____Vtogcov__S_type;
        SData/*12:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT____Vtogcov__SB_type;
        IData/*31:0*/ RISCV32I_SV__DOT____Vtogcov__program_in;
        IData/*31:0*/ RISCV32I_SV__DOT____Vtogcov__Reg_Out;
        IData/*31:0*/ RISCV32I_SV__DOT____Vtogcov__Ins_mem_out;
        IData/*31:0*/ RISCV32I_SV__DOT____Vtogcov__D_mem_out;
        IData/*31:0*/ RISCV32I_SV__DOT____Vtogcov__Ins_mem_data_in;
        IData/*31:0*/ RISCV32I_SV__DOT____Vtogcov__D_mem_data_in;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__Mem_WB_Data;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__ALUresult;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__PROGRAM_COUNTER;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__BRANCH_TARG;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__JAL_TARG;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__JALR_TARG;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__WB_DATA;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__SOURCE1;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__SOURCE2;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__aluOutput;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__Mem_Data_WB;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT____Vtogcov__ALU_RESULT;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Fetch_unit__DOT____Vtogcov__PC_reg;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__Instruction;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__ImmOUT;
    };
    struct {
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__readData1;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__readData2;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__SOURCE_A;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__SOURCE_B;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__Forwarded_SOURCE_A;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__Forwarded_SOURCE_B;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__I_imm;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__S_imm;
        IData/*31:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__U_imm;
        IData/*19:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT____Vtogcov__U_type;
        IData/*20:0*/ RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT____Vtogcov__UJ_type;
        IData/*31:0*/ __Vm_traceActivity;
    };
    static CData/*5:0*/ __Vtable1_RISCV32I_SV__DOT__Core__DOT__Execute_unit__DOT__ALU_MUX_CONTROL[256];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VRISCV32I_SV__Syms* __VlSymsp;  // Symbol table
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VRISCV32I_SV);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VRISCV32I_SV(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VRISCV32I_SV();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VRISCV32I_SV__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VRISCV32I_SV__Syms* symsp, bool first);
  private:
    static QData _change_request(VRISCV32I_SV__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VRISCV32I_SV__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(VRISCV32I_SV__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VRISCV32I_SV__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VRISCV32I_SV__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VRISCV32I_SV__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__2(VRISCV32I_SV__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(VRISCV32I_SV__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(VRISCV32I_SV__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__5(VRISCV32I_SV__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
