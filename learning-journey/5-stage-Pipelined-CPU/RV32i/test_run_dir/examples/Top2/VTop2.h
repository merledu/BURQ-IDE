// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP2_H_
#define _VTOP2_H_  // guard

#include "verilated_heavy.h"

//==========

class VTop2__Syms;
class VTop2_VerilatedVcd;


//----------

VL_MODULE(VTop2) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_branch_stall,0,0);
    VL_OUT(io_instruction,31,0);
    VL_OUT(io_reg_out,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*1:0*/ Top2__DOT__forward_io_forward_a;
        CData/*1:0*/ Top2__DOT__forward_io_forward_b;
        CData/*0:0*/ Top2__DOT__hazardDetection_io_ctrl_forward;
        CData/*3:0*/ Top2__DOT__branchforward_io_forward_a;
        CData/*0:0*/ Top2__DOT___T_82;
        CData/*0:0*/ Top2__DOT___T_91;
        CData/*0:0*/ Top2__DOT__control__DOT__InstDecode_io_Load;
        CData/*0:0*/ Top2__DOT__control__DOT__InstDecode_io_Store;
        CData/*0:0*/ Top2__DOT__control__DOT__InstDecode_io_Branch;
        CData/*0:0*/ Top2__DOT__control__DOT__InstDecode_io_I_Type;
        CData/*0:0*/ Top2__DOT__control__DOT__InstDecode_io_JALR;
        CData/*0:0*/ Top2__DOT__control__DOT__InstDecode_io_JAL;
        CData/*0:0*/ Top2__DOT__control__DOT__InstDecode_io_LUI;
        CData/*0:0*/ Top2__DOT__control__DOT__CtrlDecode_io_Branch2;
        CData/*0:0*/ Top2__DOT__control__DOT__CtrlDecode_io_MemRead;
        CData/*1:0*/ Top2__DOT__control__DOT__CtrlDecode_io_operand_A_sel;
        CData/*1:0*/ Top2__DOT__control__DOT__CtrlDecode_io_extend_sel;
        CData/*1:0*/ Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel;
        CData/*0:0*/ Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_12;
        CData/*0:0*/ Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45;
        CData/*0:0*/ Top2__DOT__alu__DOT___T_32;
        CData/*0:0*/ Top2__DOT__alu__DOT___T_69;
        CData/*1:0*/ Top2__DOT__alu__DOT___GEN_11;
        CData/*0:0*/ Top2__DOT__mem_wb__DOT__Regwr_Reg;
        CData/*0:0*/ Top2__DOT__mem_wb__DOT__MemtoReg_Reg;
        CData/*4:0*/ Top2__DOT__mem_wb__DOT__Rd_sel_Reg;
        CData/*0:0*/ Top2__DOT__ex_mem__DOT__Memwr_Reg;
        CData/*0:0*/ Top2__DOT__ex_mem__DOT__Memrd_Reg;
        CData/*0:0*/ Top2__DOT__ex_mem__DOT__Regwr_Reg;
        CData/*0:0*/ Top2__DOT__ex_mem__DOT__MemtoReg_Reg;
        CData/*4:0*/ Top2__DOT__ex_mem__DOT__Rd_sel_Reg;
        CData/*4:0*/ Top2__DOT__id_ex__DOT__rd_sel_r;
        CData/*4:0*/ Top2__DOT__id_ex__DOT__rs1_sel_r;
        CData/*4:0*/ Top2__DOT__id_ex__DOT__rs2_sel_r;
        CData/*2:0*/ Top2__DOT__id_ex__DOT__func3_r;
        CData/*6:0*/ Top2__DOT__id_ex__DOT__func7_r;
        CData/*0:0*/ Top2__DOT__id_ex__DOT__MemWr_r;
        CData/*0:0*/ Top2__DOT__id_ex__DOT__MemRd_r;
        CData/*0:0*/ Top2__DOT__id_ex__DOT__RegWr_r;
        CData/*0:0*/ Top2__DOT__id_ex__DOT__MemToReg_r;
        CData/*2:0*/ Top2__DOT__id_ex__DOT__AluOp_r;
        CData/*1:0*/ Top2__DOT__id_ex__DOT__OpA_sel_r;
        CData/*1:0*/ Top2__DOT__id_ex__DOT__OpB_sel_r;
        CData/*0:0*/ Top2__DOT__forward__DOT___T_29;
        CData/*0:0*/ Top2__DOT__forward__DOT___T_30;
        CData/*0:0*/ Top2__DOT__forward__DOT___T_31;
        CData/*0:0*/ Top2__DOT__forward__DOT___T_32;
        CData/*1:0*/ Top2__DOT__forward__DOT___GEN_5;
        CData/*1:0*/ Top2__DOT__forward__DOT___GEN_6;
        CData/*0:0*/ Top2__DOT__forward__DOT___T_43;
        CData/*0:0*/ Top2__DOT__forward__DOT___T_44;
        CData/*0:0*/ Top2__DOT__forward__DOT___T_45;
        CData/*0:0*/ Top2__DOT__forward__DOT___T_53;
        CData/*0:0*/ Top2__DOT__forward__DOT___T_54;
        CData/*0:0*/ Top2__DOT__forward__DOT___T_57;
        CData/*0:0*/ Top2__DOT__forward__DOT___T_69;
        CData/*0:0*/ Top2__DOT__hazardDetection__DOT___T_39;
        CData/*0:0*/ Top2__DOT__hazardDetection__DOT___T_40;
        CData/*0:0*/ Top2__DOT__hazardDetection__DOT___GEN_8;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_41;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_43;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_44;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_45;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___GEN_3;
    };
    struct {
        CData/*0:0*/ Top2__DOT__branchforward__DOT___GEN_4;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_68;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_72;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_74;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_77;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_79;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_80;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_91;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_95;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_109;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_115;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_127;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_142;
        CData/*2:0*/ Top2__DOT__branchforward__DOT___GEN_14;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_177;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_182;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_184;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_185;
        CData/*0:0*/ Top2__DOT__branchforward__DOT___T_209;
        CData/*2:0*/ Top2__DOT__branchforward__DOT___GEN_34;
        SData/*10:0*/ Top2__DOT__alucontrol__DOT___T_21;
        SData/*10:0*/ Top2__DOT__alucontrol__DOT___GEN_8;
        IData/*31:0*/ Top2__DOT__register_io_WriteData;
        IData/*31:0*/ Top2__DOT__register_io_rs1;
        IData/*31:0*/ Top2__DOT__register_io_rs2;
        IData/*31:0*/ Top2__DOT__alu_io_A;
        IData/*31:0*/ Top2__DOT__alu_io_B;
        IData/*31:0*/ Top2__DOT__immediate_io_I_Immediate;
        IData/*31:0*/ Top2__DOT__PC_io_input;
        IData/*31:0*/ Top2__DOT__DataMemory_io_Data;
        IData/*31:0*/ Top2__DOT__JALR_io_A;
        IData/*31:0*/ Top2__DOT__branchlogic_io_rs1_in;
        IData/*31:0*/ Top2__DOT__branchlogic_io_rs2_in;
        IData/*31:0*/ Top2__DOT___GEN_32;
        IData/*31:0*/ Top2__DOT___GEN_33;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_0;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_1;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_2;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_3;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_4;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_5;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_6;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_7;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_8;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_9;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_10;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_11;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_12;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_13;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_14;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_15;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_16;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_17;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_18;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_19;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_20;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_21;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_22;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_23;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_24;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_25;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_26;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_27;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_28;
    };
    struct {
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_29;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_30;
        IData/*31:0*/ Top2__DOT__register__DOT__registers_c_31;
        IData/*31:0*/ Top2__DOT__register__DOT___GEN_13;
        IData/*31:0*/ Top2__DOT__register__DOT___GEN_26;
        IData/*31:0*/ Top2__DOT__register__DOT___GEN_45;
        IData/*31:0*/ Top2__DOT__register__DOT___GEN_58;
        IData/*31:0*/ Top2__DOT__alu__DOT___GEN_18;
        IData/*31:0*/ Top2__DOT__alu__DOT___GEN_19;
        IData/*30:0*/ Top2__DOT__immediate__DOT__output2;
        IData/*31:0*/ Top2__DOT__immediate__DOT__sbt13;
        IData/*31:0*/ Top2__DOT__immediate__DOT__output5;
        IData/*31:0*/ Top2__DOT__immediate__DOT__sbt19;
        IData/*31:0*/ Top2__DOT__PC__DOT__pc1;
        IData/*31:0*/ Top2__DOT__mem_wb__DOT__data_mem_Reg;
        IData/*31:0*/ Top2__DOT__mem_wb__DOT__Aluout_Reg;
        IData/*31:0*/ Top2__DOT__ex_mem__DOT__Rs2_Reg;
        IData/*31:0*/ Top2__DOT__ex_mem__DOT__Alu_out_Reg;
        IData/*31:0*/ Top2__DOT__id_ex__DOT__pcr;
        IData/*31:0*/ Top2__DOT__id_ex__DOT__pc4r;
        IData/*31:0*/ Top2__DOT__id_ex__DOT__rs1r;
        IData/*31:0*/ Top2__DOT__id_ex__DOT__rs2r;
        IData/*31:0*/ Top2__DOT__id_ex__DOT__immr;
        IData/*31:0*/ Top2__DOT__if_id__DOT__pc_reg;
        IData/*31:0*/ Top2__DOT__if_id__DOT__pc4_reg;
        IData/*31:0*/ Top2__DOT__if_id__DOT__inst_reg;
        QData/*62:0*/ Top2__DOT__alu__DOT___GEN_20;
        QData/*63:0*/ Top2__DOT__alu__DOT___GEN_22;
        IData/*31:0*/ Top2__DOT__instmem__DOT__mem[16384];
        IData/*31:0*/ Top2__DOT__DataMemory__DOT__mem[16384];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTop2__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTop2);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VTop2(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTop2();
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
    static void _eval_initial_loop(VTop2__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTop2__Syms* symsp, bool first);
  private:
    static QData _change_request(VTop2__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VTop2__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VTop2__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VTop2__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VTop2__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VTop2__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VTop2__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
