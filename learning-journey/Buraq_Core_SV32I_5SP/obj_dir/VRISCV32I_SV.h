// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRISCV32I_SV_H_
#define _VRISCV32I_SV_H_

#include "verilated.h"
#include "verilated_cov.h"
#include "VRISCV32I_SV__Inlines.h"
class VRISCV32I_SV__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VRISCV32I_SV) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
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
    VL_SIG8(RISCV32I_SV__DOT__function3,2,0);
    VL_SIG8(RISCV32I_SV__DOT__D_mem_readEn,0,0);
    VL_SIG8(RISCV32I_SV__DOT__D_mem_writeEn,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__NEXT_PC_SEL,1,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__BRANCH,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__DEST_REG,4,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__DEST_REGISTER,4,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__MEM_TO_REG_DEC_EX,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__MEM_READ_EN_DEC_EX,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__MEM_WRITE_EN_DEC_EX,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__ALU_OPCODE,2,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__FUNC_3,2,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__FUNC_7,1,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__RF_EN_DEC_to_EX,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__RF_EN_EX_to_WB,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__FLUSH,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__mem_to_register,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__reg_WB,4,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__EN_reg_file,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Mem2Reg,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Branch_controller,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmSel,1,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__OPERAND_A_SEL,1,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__OPERAND_B_SEL,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__regFileWriteEn,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ALU_Op,2,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__op_A_sel,2,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__op_B_sel,2,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Execute_unit__DOT__ALU_MUX_CONTROL,5,0);
    //char	__VpadToAlign45[1];
    VL_SIG16(RISCV32I_SV__DOT__D_mem_addr_in,9,0);
    VL_SIG16(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__I_type,11,0);
    VL_SIG16(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__S_type,11,0);
    VL_SIG16(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__SB_type,12,0);
    //char	__VpadToAlign54[2];
    VL_SIG(RISCV32I_SV__DOT__Ins_mem_out,31,0);
    VL_SIG(RISCV32I_SV__DOT__D_mem_out,31,0);
    VL_SIG(RISCV32I_SV__DOT__D_mem_data_in,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Mem_WB_Data,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__ALUresult,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__PROGRAM_COUNTER,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__BRANCH_TARG,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__JAL_TARG,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__JALR_TARG,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__WB_DATA,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__SOURCE1,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__SOURCE2,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__aluOutput,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Mem_Data_WB,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__ALU_RESULT,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Fetch_unit__DOT__PC_reg,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmOUT,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__readData1,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__readData2,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__SOURCE_A,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__SOURCE_B,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Forwarded_SOURCE_A,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Forwarded_SOURCE_B,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__I_imm,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__S_imm,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__U_imm,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__i,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__U_type,19,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__UJ_type,20,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[32],31,0);
    VL_SIG8(RISCV32I_SV__DOT__DataMemory__DOT__memory[1024],7,0);
    VL_SIG(RISCV32I_SV__DOT__InstructionMemory__DOT__memory_array[1024],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG8(__Vtable1_RISCV32I_SV__DOT__Core__DOT__Execute_unit__DOT__ALU_MUX_CONTROL[256],5,0);
    VL_SIG8(RISCV32I_SV__DOT____Vtogcov__clock,0,0);
    VL_SIG8(RISCV32I_SV__DOT____Vtogcov__reset,0,0);
    VL_SIG8(RISCV32I_SV__DOT____Vtogcov__function3,2,0);
    VL_SIG8(RISCV32I_SV__DOT____Vtogcov__Ins_mem_readEn,0,0);
    VL_SIG8(RISCV32I_SV__DOT____Vtogcov__D_mem_readEn,0,0);
    VL_SIG8(RISCV32I_SV__DOT____Vtogcov__D_mem_writeEn,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__NEXT_PC_SEL,1,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__BRANCH,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__WB_REG,4,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__DEST_REG,4,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__DEST_REGISTER,4,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__MEM_TO_REG_DEC_EX,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__MEM_READ_EN_DEC_EX,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__MEM_WRITE_EN_DEC_EX,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__ALU_OPCODE,2,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__FUNC_3,2,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__FUNC_7,1,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__RF_EN_DEC_to_EX,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__RF_EN_EX_to_WB,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__FLUSH,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__mem_to_register,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__EN_reg_file,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT____Vtogcov__Mem2Reg,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__Branch_controller,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__Branch_control_unit,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__ImmSel,1,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__OPERAND_A_SEL,1,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__OPERAND_B_SEL,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__mem_Read,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__mem_write,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__regFileWriteEn,0,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__ALU_Op,2,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__op_A_sel,2,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__op_B_sel,2,0);
    VL_SIG8(RISCV32I_SV__DOT__Core__DOT__Execute_unit__DOT____Vtogcov__ALU_MUX_CONTROL,5,0);
    VL_SIG8(__Vtableidx1,7,0);
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    //char	__VpadToAlign5465[1];
    VL_SIG16(RISCV32I_SV__DOT____Vtogcov__address_in,9,0);
    VL_SIG16(RISCV32I_SV__DOT____Vtogcov__Ins_mem_addr_in,9,0);
    VL_SIG16(RISCV32I_SV__DOT____Vtogcov__D_mem_addr_in,9,0);
    VL_SIG16(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT____Vtogcov__I_type,11,0);
    VL_SIG16(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT____Vtogcov__S_type,11,0);
    VL_SIG16(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT____Vtogcov__SB_type,12,0);
    //char	__VpadToAlign5478[2];
    VL_SIG(RISCV32I_SV__DOT____Vtogcov__program_in,31,0);
    VL_SIG(RISCV32I_SV__DOT____Vtogcov__Reg_Out,31,0);
    VL_SIG(RISCV32I_SV__DOT____Vtogcov__Ins_mem_out,31,0);
    VL_SIG(RISCV32I_SV__DOT____Vtogcov__D_mem_out,31,0);
    VL_SIG(RISCV32I_SV__DOT____Vtogcov__Ins_mem_data_in,31,0);
    VL_SIG(RISCV32I_SV__DOT____Vtogcov__D_mem_data_in,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT____Vtogcov__Mem_WB_Data,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT____Vtogcov__ALUresult,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT____Vtogcov__PROGRAM_COUNTER,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT____Vtogcov__BRANCH_TARG,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT____Vtogcov__JAL_TARG,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT____Vtogcov__JALR_TARG,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT____Vtogcov__WB_DATA,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT____Vtogcov__SOURCE1,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT____Vtogcov__SOURCE2,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT____Vtogcov__aluOutput,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT____Vtogcov__Mem_Data_WB,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT____Vtogcov__ALU_RESULT,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Fetch_unit__DOT____Vtogcov__PC_reg,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__Instruction,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__ImmOUT,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__readData1,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__readData2,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__SOURCE_A,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__SOURCE_B,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__Forwarded_SOURCE_A,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__Forwarded_SOURCE_B,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__I_imm,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__S_imm,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__U_imm,31,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT____Vtogcov__U_type,19,0);
    VL_SIG(RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT____Vtogcov__UJ_type,20,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VRISCV32I_SV__Syms*	__VlSymsp;		// Symbol table
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
	const char* hierp, const char* pagep, const char* commentp);
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
  public:
    
    // CONSTRUCTORS
  private:
    VRISCV32I_SV& operator= (const VRISCV32I_SV&);	///< Copying not allowed
    VRISCV32I_SV(const VRISCV32I_SV&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VRISCV32I_SV(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VRISCV32I_SV();
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
    static void _eval_initial_loop(VRISCV32I_SV__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VRISCV32I_SV__Syms* symsp, bool first);
  private:
    static QData	_change_request(VRISCV32I_SV__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__3(VRISCV32I_SV__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VRISCV32I_SV__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VRISCV32I_SV__Syms* __restrict vlSymsp);
    static void	_eval_initial(VRISCV32I_SV__Syms* __restrict vlSymsp);
    static void	_eval_settle(VRISCV32I_SV__Syms* __restrict vlSymsp);
    static void	_initial__TOP__2(VRISCV32I_SV__Syms* __restrict vlSymsp);
    static void	_initial__TOP__5(VRISCV32I_SV__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__11(VRISCV32I_SV__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VRISCV32I_SV__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(VRISCV32I_SV__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__9(VRISCV32I_SV__Syms* __restrict vlSymsp);
    static void	_settle__TOP__1(VRISCV32I_SV__Syms* __restrict vlSymsp);
    static void	_settle__TOP__10(VRISCV32I_SV__Syms* __restrict vlSymsp);
    static void	_settle__TOP__12(VRISCV32I_SV__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(VRISCV32I_SV__Syms* __restrict vlSymsp);
    static void	_settle__TOP__8(VRISCV32I_SV__Syms* __restrict vlSymsp);
    static void	traceChgThis(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
