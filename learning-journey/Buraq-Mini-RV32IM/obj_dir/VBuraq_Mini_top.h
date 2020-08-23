// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBURAQ_MINI_TOP_H_
#define _VBURAQ_MINI_TOP_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class VBuraq_Mini_top__Syms;
class VBuraq_Mini_top_VerilatedVcd;


//----------

VL_MODULE(VBuraq_Mini_top) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(brq_clk,0,0);
    VL_IN8(brq_rst,0,0);
    VL_OUT(Reg_Out,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*2:0*/ Buraq_Mini_top__DOT__byte_en;
        CData/*0:0*/ Buraq_Mini_top__DOT__D_mem_readEn;
        CData/*0:0*/ Buraq_Mini_top__DOT__D_mem_writeEn;
        CData/*1:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_next_pc_sel;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_branch;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__stall;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__ieu_stall;
        CData/*1:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_check_stall;
        CData/*1:0*/ Buraq_Mini_top__DOT__Core__DOT__check_stall;
        CData/*4:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_src1_reg;
        CData/*4:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_src2_reg;
        CData/*1:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_op_a_sel;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_op_b_sel;
        CData/*4:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_addr_dst;
        CData/*4:0*/ Buraq_Mini_top__DOT__Core__DOT__ieu_addr_dst;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_memtoreg;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_mem_ren;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_mem_wen;
        CData/*2:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_aluop;
        CData/*2:0*/ Buraq_Mini_top__DOT__Core__DOT__ieu_func3;
        CData/*2:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_func3;
        CData/*6:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_func7;
        CData/*1:0*/ Buraq_Mini_top__DOT__Core__DOT__ieu_check_Stall;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_regfile_en;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__ieu_regfile_en;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_flush;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__ieu_memtoreg;
        CData/*4:0*/ Buraq_Mini_top__DOT__Core__DOT__ldst_addr_dst;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__ldst_regfile_en;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__ldst_memtoreg;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_stall;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__Branch_controller;
        CData/*1:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmSel;
        CData/*1:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__OPERAND_A_SEL;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__OPERAND_B_SEL;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__regFileWriteEn;
        CData/*2:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ALU_Op;
        CData/*3:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__op_A_sel;
        CData/*3:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__op_B_sel;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__ldst_resume;
        CData/*2:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__op_A_sel;
        CData/*2:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__op_B_sel;
        CData/*5:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__ALU_MUX_CONTROL;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT__mul;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT__mulh;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__MEM_WB_REG__DOT__mem_busy;
        CData/*1:0*/ Buraq_Mini_top__DOT__Core__DOT__MEM_WB_REG__DOT__wb_check_stall;
        SData/*11:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__I_type;
        SData/*11:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__S_type;
        SData/*12:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__SB_type;
        SData/*14:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__Mem_addr;
        IData/*31:0*/ Buraq_Mini_top__DOT__Ins_mem_out;
        IData/*31:0*/ Buraq_Mini_top__DOT__D_mem_out;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_store_data;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__ldst_alu_result;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__ifu_pc;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_branch_addr;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_jal_addr;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_jalr_addr;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Wbu_result;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__ieu_mem_addr;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_immediate;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_pc;
    };
    struct {
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__ieu_store_data;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_data_1;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__idu_data_2;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__ieu_alu_result;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__ldst_load_data;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__ALU_RESULT;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Fetch_unit__DOT__PC_reg;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmOUT;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__readData1;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__readData2;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__SOURCE_A;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__SOURCE_B;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__source_1;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__source_2;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__I_imm;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__S_imm;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__U_imm;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__i;
        IData/*19:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__U_type;
        IData/*20:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__UJ_type;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__SRC_A;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__SRC_B;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__SOURCE_A;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__SOURCE_B;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT__ALU_result_32;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__MEM_WB_REG__DOT__load_data;
        IData/*31:0*/ Buraq_Mini_top__DOT__DataMemory__DOT__memory_in;
        QData/*63:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT__ALU_result_64;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[32];
        IData/*31:0*/ Buraq_Mini_top__DOT__DataMemory__DOT__memory[32768];
        IData/*31:0*/ Buraq_Mini_top__DOT__InstructionMemory__DOT__memory_array[32768];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ Buraq_Mini_top__DOT____Vtogcov__brq_clk;
        CData/*0:0*/ Buraq_Mini_top__DOT____Vtogcov__brq_rst;
        CData/*2:0*/ Buraq_Mini_top__DOT____Vtogcov__byte_en;
        CData/*0:0*/ Buraq_Mini_top__DOT____Vtogcov__D_mem_readEn;
        CData/*0:0*/ Buraq_Mini_top__DOT____Vtogcov__D_mem_writeEn;
        CData/*1:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_next_pc_sel;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_branch;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__wb_resume;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__stall;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__ieu_stall;
        CData/*1:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_check_stall;
        CData/*1:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__check_stall;
        CData/*4:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_src1_reg;
        CData/*4:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_src2_reg;
        CData/*1:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_op_a_sel;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_op_b_sel;
        CData/*4:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__wbu_addr_dst;
        CData/*4:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_addr_dst;
        CData/*4:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__ieu_addr_dst;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_memtoreg;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_mem_ren;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_mem_wen;
        CData/*2:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_aluop;
        CData/*2:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__ieu_func3;
        CData/*2:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_func3;
        CData/*6:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_func7;
        CData/*1:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__ieu_check_Stall;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_regfile_en;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__ieu_regfile_en;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_flush;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__ldst_resume;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__ieu_memtoreg;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__ldst_regfile_en;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__ldst_memtoreg;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_stall;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__Branch_controller;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__Branch_control_unit;
        CData/*1:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__ImmSel;
        CData/*1:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__OPERAND_A_SEL;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__OPERAND_B_SEL;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__mem_Read;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__mem_write;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__regFileWriteEn;
        CData/*2:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__ALU_Op;
        CData/*3:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__op_A_sel;
        CData/*3:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__op_B_sel;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT____Vtogcov__mem_busy;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT____Vtogcov__ldst_resume;
        CData/*2:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT____Vtogcov__op_A_sel;
        CData/*2:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT____Vtogcov__op_B_sel;
        CData/*5:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT____Vtogcov__ALU_MUX_CONTROL;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT____Vtogcov__mul;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT____Vtogcov__mulh;
        CData/*0:0*/ Buraq_Mini_top__DOT__Core__DOT__MEM_WB_REG__DOT____Vtogcov__mem_busy;
        CData/*1:0*/ Buraq_Mini_top__DOT__Core__DOT__MEM_WB_REG__DOT____Vtogcov__wb_check_stall;
        CData/*0:0*/ Buraq_Mini_top__DOT__InstructionMemory__DOT____Vtogcov__i_read;
        CData/*0:0*/ __Vclklast__TOP__brq_clk;
        SData/*14:0*/ Buraq_Mini_top__DOT____Vtogcov__Ins_mem_addr_in;
        SData/*14:0*/ Buraq_Mini_top__DOT____Vtogcov__D_mem_addr_in;
        SData/*11:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT____Vtogcov__I_type;
        SData/*11:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT____Vtogcov__S_type;
        SData/*12:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT____Vtogcov__SB_type;
        SData/*14:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT____Vtogcov__Mem_addr;
        IData/*31:0*/ Buraq_Mini_top__DOT____Vtogcov__Reg_Out;
    };
    struct {
        IData/*31:0*/ Buraq_Mini_top__DOT____Vtogcov__Ins_mem_out;
        IData/*31:0*/ Buraq_Mini_top__DOT____Vtogcov__D_mem_out;
        IData/*31:0*/ Buraq_Mini_top__DOT____Vtogcov__Ins_mem_data_in;
        IData/*31:0*/ Buraq_Mini_top__DOT____Vtogcov__D_mem_data_in;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_store_data;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__ldst_alu_result;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__ifu_fetch_inst;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__ifu_pc;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_branch_addr;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_jal_addr;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_jalr_addr;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__Wbu_result;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__ieu_mem_addr;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_immediate;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_pc;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_data_1;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__idu_data_2;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__ieu_alu_result;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__ldst_load_data;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT____Vtogcov__ALU_RESULT;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Fetch_unit__DOT____Vtogcov__PC_reg;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__ImmOUT;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__readData1;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__readData2;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__SOURCE_A;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__SOURCE_B;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__source_1;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__source_2;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__I_imm;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__S_imm;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT____Vtogcov__U_imm;
        IData/*19:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT____Vtogcov__U_type;
        IData/*20:0*/ Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT____Vtogcov__UJ_type;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT____Vtogcov__SRC_A;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT____Vtogcov__SRC_B;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT____Vtogcov__SOURCE_A;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT____Vtogcov__SOURCE_B;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT____Vtogcov__mul_lower;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT____Vtogcov__mul_upper;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT____Vtogcov__ALU_result_32;
        IData/*31:0*/ Buraq_Mini_top__DOT__Core__DOT__MEM_WB_REG__DOT____Vtogcov__load_data;
        IData/*31:0*/ Buraq_Mini_top__DOT__DataMemory__DOT____Vtogcov__memory_in;
        IData/*31:0*/ __Vm_traceActivity;
    };
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VBuraq_Mini_top__Syms* __VlSymsp;  // Symbol table
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VBuraq_Mini_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VBuraq_Mini_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VBuraq_Mini_top();
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
    static void _eval_initial_loop(VBuraq_Mini_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VBuraq_Mini_top__Syms* symsp, bool first);
  private:
    static QData _change_request(VBuraq_Mini_top__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VBuraq_Mini_top__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(VBuraq_Mini_top__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VBuraq_Mini_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VBuraq_Mini_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VBuraq_Mini_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__2(VBuraq_Mini_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(VBuraq_Mini_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(VBuraq_Mini_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__5(VBuraq_Mini_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VBuraq_Mini_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VBuraq_Mini_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VBuraq_Mini_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VBuraq_Mini_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VBuraq_Mini_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VBuraq_Mini_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VBuraq_Mini_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VBuraq_Mini_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
