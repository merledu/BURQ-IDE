// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBuraq_Mini_top__Syms.h"


//======================

void VBuraq_Mini_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VBuraq_Mini_top::traceInit, &VBuraq_Mini_top::traceFull, &VBuraq_Mini_top::traceChg, this);
}
void VBuraq_Mini_top::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VBuraq_Mini_top* t = (VBuraq_Mini_top*)userthis;
    VBuraq_Mini_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VBuraq_Mini_top::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBuraq_Mini_top* t = (VBuraq_Mini_top*)userthis;
    VBuraq_Mini_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VBuraq_Mini_top::traceInitThis(VBuraq_Mini_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBuraq_Mini_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (false && vcdp) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VBuraq_Mini_top::traceFullThis(VBuraq_Mini_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBuraq_Mini_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (false && vcdp) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBuraq_Mini_top::traceInitThis__1(VBuraq_Mini_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBuraq_Mini_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (false && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+144,"brq_clk", false,-1);
        vcdp->declBit(c+145,"brq_rst", false,-1);
        vcdp->declBus(c+146,"Reg_Out", false,-1, 31,0);
        vcdp->declBus(c+147,"Buraq_Mini_top DataWidth", false,-1, 31,0);
        vcdp->declBus(c+148,"Buraq_Mini_top AddrWidth", false,-1, 31,0);
        vcdp->declBus(c+149,"Buraq_Mini_top RegAddrWidth", false,-1, 31,0);
        vcdp->declBit(c+144,"Buraq_Mini_top brq_clk", false,-1);
        vcdp->declBit(c+145,"Buraq_Mini_top brq_rst", false,-1);
        vcdp->declBus(c+146,"Buraq_Mini_top Reg_Out", false,-1, 31,0);
        vcdp->declBus(c+1,"Buraq_Mini_top Ins_mem_out", false,-1, 31,0);
        vcdp->declBus(c+2,"Buraq_Mini_top D_mem_out", false,-1, 31,0);
        vcdp->declBus(c+150,"Buraq_Mini_top Ins_mem_data_in", false,-1, 31,0);
        vcdp->declBus(c+89,"Buraq_Mini_top D_mem_data_in", false,-1, 31,0);
        vcdp->declBus(c+90,"Buraq_Mini_top Ins_mem_addr_in", false,-1, 14,0);
        vcdp->declBus(c+91,"Buraq_Mini_top D_mem_addr_in", false,-1, 14,0);
        vcdp->declBus(c+3,"Buraq_Mini_top byte_en", false,-1, 2,0);
        vcdp->declBit(c+92,"Buraq_Mini_top D_mem_readEn", false,-1);
        vcdp->declBit(c+93,"Buraq_Mini_top D_mem_writeEn", false,-1);
        vcdp->declBus(c+147,"Buraq_Mini_top Core DataWidth", false,-1, 31,0);
        vcdp->declBus(c+148,"Buraq_Mini_top Core AddrWidth", false,-1, 31,0);
        vcdp->declBus(c+149,"Buraq_Mini_top Core RegAddrWidth", false,-1, 31,0);
        vcdp->declBit(c+144,"Buraq_Mini_top Core brq_clk", false,-1);
        vcdp->declBit(c+145,"Buraq_Mini_top Core brq_rst", false,-1);
        vcdp->declBus(c+1,"Buraq_Mini_top Core inst_mem_data", false,-1, 31,0);
        vcdp->declBus(c+2,"Buraq_Mini_top Core Data_mem_dataOut", false,-1, 31,0);
        vcdp->declBus(c+89,"Buraq_Mini_top Core Data_mem_dataIn", false,-1, 31,0);
        vcdp->declBus(c+90,"Buraq_Mini_top Core inst_mem_address", false,-1, 14,0);
        vcdp->declBus(c+91,"Buraq_Mini_top Core Data_mem_address", false,-1, 14,0);
        vcdp->declBit(c+92,"Buraq_Mini_top Core Data_mem_read_en", false,-1);
        vcdp->declBit(c+93,"Buraq_Mini_top Core Data_mem_write_en", false,-1);
        vcdp->declBus(c+3,"Buraq_Mini_top Core ldst_byte_en", false,-1, 2,0);
        vcdp->declBus(c+146,"Buraq_Mini_top Core reg_out", false,-1, 31,0);
        vcdp->declBus(c+94,"Buraq_Mini_top Core idu_store_data", false,-1, 31,0);
        vcdp->declBus(c+4,"Buraq_Mini_top Core idu_next_pc_sel", false,-1, 1,0);
        vcdp->declBit(c+5,"Buraq_Mini_top Core idu_branch", false,-1);
        vcdp->declBit(c+95,"Buraq_Mini_top Core wb_resume", false,-1);
        vcdp->declBit(c+6,"Buraq_Mini_top Core stall", false,-1);
        vcdp->declBit(c+7,"Buraq_Mini_top Core ieu_stall", false,-1);
        vcdp->declBus(c+96,"Buraq_Mini_top Core idu_check_stall", false,-1, 1,0);
        vcdp->declBus(c+8,"Buraq_Mini_top Core check_stall", false,-1, 1,0);
        vcdp->declBus(c+97,"Buraq_Mini_top Core idu_src1_reg", false,-1, 4,0);
        vcdp->declBus(c+98,"Buraq_Mini_top Core idu_src2_reg", false,-1, 4,0);
        vcdp->declBus(c+99,"Buraq_Mini_top Core ldst_alu_result", false,-1, 31,0);
        vcdp->declBus(c+100,"Buraq_Mini_top Core ifu_fetch_inst", false,-1, 31,0);
        vcdp->declBus(c+101,"Buraq_Mini_top Core ifu_pc", false,-1, 31,0);
        vcdp->declBus(c+9,"Buraq_Mini_top Core idu_branch_addr", false,-1, 31,0);
        vcdp->declBus(c+10,"Buraq_Mini_top Core idu_jal_addr", false,-1, 31,0);
        vcdp->declBus(c+11,"Buraq_Mini_top Core idu_jalr_addr", false,-1, 31,0);
        vcdp->declBus(c+12,"Buraq_Mini_top Core Wbu_result", false,-1, 31,0);
        vcdp->declBus(c+102,"Buraq_Mini_top Core ieu_mem_addr", false,-1, 31,0);
        vcdp->declBus(c+103,"Buraq_Mini_top Core idu_op_a_sel", false,-1, 1,0);
        vcdp->declBit(c+104,"Buraq_Mini_top Core idu_op_b_sel", false,-1);
        vcdp->declBus(c+105,"Buraq_Mini_top Core wbu_addr_dst", false,-1, 4,0);
        vcdp->declBus(c+106,"Buraq_Mini_top Core idu_addr_dst", false,-1, 4,0);
        vcdp->declBus(c+107,"Buraq_Mini_top Core ieu_addr_dst", false,-1, 4,0);
        vcdp->declBus(c+108,"Buraq_Mini_top Core idu_immediate", false,-1, 31,0);
        vcdp->declBus(c+109,"Buraq_Mini_top Core idu_pc", false,-1, 31,0);
        vcdp->declBus(c+89,"Buraq_Mini_top Core ieu_store_data", false,-1, 31,0);
        vcdp->declBus(c+110,"Buraq_Mini_top Core idu_data_1", false,-1, 31,0);
        vcdp->declBus(c+111,"Buraq_Mini_top Core idu_data_2", false,-1, 31,0);
        vcdp->declBit(c+112,"Buraq_Mini_top Core idu_memtoreg", false,-1);
        vcdp->declBit(c+113,"Buraq_Mini_top Core idu_mem_ren", false,-1);
        vcdp->declBit(c+114,"Buraq_Mini_top Core idu_mem_wen", false,-1);
        vcdp->declBus(c+115,"Buraq_Mini_top Core ieu_alu_result", false,-1, 31,0);
        vcdp->declBus(c+116,"Buraq_Mini_top Core idu_aluop", false,-1, 2,0);
        vcdp->declBus(c+117,"Buraq_Mini_top Core ieu_func3", false,-1, 2,0);
        vcdp->declBus(c+118,"Buraq_Mini_top Core idu_func3", false,-1, 2,0);
        vcdp->declBus(c+119,"Buraq_Mini_top Core idu_func7", false,-1, 6,0);
        vcdp->declBus(c+120,"Buraq_Mini_top Core ieu_check_Stall", false,-1, 1,0);
        vcdp->declBit(c+121,"Buraq_Mini_top Core idu_regfile_en", false,-1);
        vcdp->declBit(c+122,"Buraq_Mini_top Core ieu_regfile_en", false,-1);
        vcdp->declBit(c+13,"Buraq_Mini_top Core idu_flush", false,-1);
        vcdp->declBit(c+123,"Buraq_Mini_top Core ldst_resume", false,-1);
        vcdp->declBit(c+124,"Buraq_Mini_top Core ieu_memtoreg", false,-1);
        vcdp->declBus(c+125,"Buraq_Mini_top Core ldst_load_data", false,-1, 31,0);
        vcdp->declBus(c+14,"Buraq_Mini_top Core ALU_RESULT", false,-1, 31,0);
        vcdp->declBus(c+105,"Buraq_Mini_top Core ldst_addr_dst", false,-1, 4,0);
        vcdp->declBit(c+126,"Buraq_Mini_top Core ldst_regfile_en", false,-1);
        vcdp->declBit(c+127,"Buraq_Mini_top Core ldst_memtoreg", false,-1);
        vcdp->declBit(c+151,"Buraq_Mini_top Core idu_stall", false,-1);
        vcdp->declBus(c+147,"Buraq_Mini_top Core Fetch_unit DataWidth", false,-1, 31,0);
        vcdp->declBus(c+148,"Buraq_Mini_top Core Fetch_unit AddrWidth", false,-1, 31,0);
        vcdp->declBit(c+144,"Buraq_Mini_top Core Fetch_unit brq_clk", false,-1);
        vcdp->declBit(c+145,"Buraq_Mini_top Core Fetch_unit brq_rst", false,-1);
        vcdp->declBus(c+4,"Buraq_Mini_top Core Fetch_unit ifu_next_pc_sel", false,-1, 1,0);
        vcdp->declBit(c+5,"Buraq_Mini_top Core Fetch_unit idu_branch", false,-1);
        vcdp->declBit(c+13,"Buraq_Mini_top Core Fetch_unit idu_flush", false,-1);
        vcdp->declBus(c+8,"Buraq_Mini_top Core Fetch_unit idu_stall", false,-1, 1,0);
        vcdp->declBit(c+7,"Buraq_Mini_top Core Fetch_unit ieu_stall", false,-1);
        vcdp->declBus(c+9,"Buraq_Mini_top Core Fetch_unit idu_branch_addr", false,-1, 31,0);
        vcdp->declBus(c+11,"Buraq_Mini_top Core Fetch_unit idu_jalr_addr", false,-1, 31,0);
        vcdp->declBus(c+10,"Buraq_Mini_top Core Fetch_unit idu_jal_addr", false,-1, 31,0);
        vcdp->declBus(c+1,"Buraq_Mini_top Core Fetch_unit inst_mem_data", false,-1, 31,0);
        vcdp->declBit(c+6,"Buraq_Mini_top Core Fetch_unit ifu_stall", false,-1);
        vcdp->declBus(c+90,"Buraq_Mini_top Core Fetch_unit inst_mem_address", false,-1, 14,0);
        vcdp->declBus(c+101,"Buraq_Mini_top Core Fetch_unit ifu_pc", false,-1, 31,0);
        vcdp->declBus(c+100,"Buraq_Mini_top Core Fetch_unit ifu_fetch_inst", false,-1, 31,0);
        vcdp->declBus(c+128,"Buraq_Mini_top Core Fetch_unit PC_reg", false,-1, 31,0);
        vcdp->declBus(c+128,"Buraq_Mini_top Core Fetch_unit PC", false,-1, 31,0);
        vcdp->declBus(c+8,"Buraq_Mini_top Core Fetch_unit Staller idu_stall", false,-1, 1,0);
        vcdp->declBit(c+7,"Buraq_Mini_top Core Fetch_unit Staller ldst_stall", false,-1);
        vcdp->declBit(c+6,"Buraq_Mini_top Core Fetch_unit Staller stall", false,-1);
        vcdp->declBus(c+147,"Buraq_Mini_top Core Decode_unit DataWidth", false,-1, 31,0);
        vcdp->declBus(c+149,"Buraq_Mini_top Core Decode_unit RegAddrWidth", false,-1, 31,0);
        vcdp->declBit(c+144,"Buraq_Mini_top Core Decode_unit brq_clk", false,-1);
        vcdp->declBit(c+145,"Buraq_Mini_top Core Decode_unit brq_rst", false,-1);
        vcdp->declBit(c+123,"Buraq_Mini_top Core Decode_unit ldst_resume", false,-1);
        vcdp->declBit(c+95,"Buraq_Mini_top Core Decode_unit wb_resume", false,-1);
        vcdp->declBit(c+121,"Buraq_Mini_top Core Decode_unit regEN_EX", false,-1);
        vcdp->declBit(c+122,"Buraq_Mini_top Core Decode_unit regEN_MEM", false,-1);
        vcdp->declBit(c+126,"Buraq_Mini_top Core Decode_unit regEN_WB", false,-1);
        vcdp->declBit(c+92,"Buraq_Mini_top Core Decode_unit ldst_mem_read_en", false,-1);
        vcdp->declBit(c+6,"Buraq_Mini_top Core Decode_unit ifu_stall", false,-1);
        vcdp->declBus(c+107,"Buraq_Mini_top Core Decode_unit ieu_addr_dst", false,-1, 4,0);
        vcdp->declBus(c+105,"Buraq_Mini_top Core Decode_unit wbu_addr_dst", false,-1, 4,0);
        vcdp->declBus(c+14,"Buraq_Mini_top Core Decode_unit Forwarded_Data_EX", false,-1, 31,0);
        vcdp->declBus(c+115,"Buraq_Mini_top Core Decode_unit Forwarded_Data_MEM1", false,-1, 31,0);
        vcdp->declBus(c+2,"Buraq_Mini_top Core Decode_unit Forwarded_Data_MEM2", false,-1, 31,0);
        vcdp->declBus(c+12,"Buraq_Mini_top Core Decode_unit Forwarded_Data_WB", false,-1, 31,0);
        vcdp->declBus(c+100,"Buraq_Mini_top Core Decode_unit ifu_fetch_inst", false,-1, 31,0);
        vcdp->declBus(c+101,"Buraq_Mini_top Core Decode_unit ifu_pc", false,-1, 31,0);
        vcdp->declBus(c+12,"Buraq_Mini_top Core Decode_unit Wbu_result", false,-1, 31,0);
        vcdp->declBus(c+96,"Buraq_Mini_top Core Decode_unit idu_check_stall", false,-1, 1,0);
        vcdp->declBus(c+8,"Buraq_Mini_top Core Decode_unit check_stall", false,-1, 1,0);
        vcdp->declBit(c+5,"Buraq_Mini_top Core Decode_unit idu_branch", false,-1);
        vcdp->declBit(c+121,"Buraq_Mini_top Core Decode_unit idu_regfile_en", false,-1);
        vcdp->declBus(c+106,"Buraq_Mini_top Core Decode_unit idu_addr_dst", false,-1, 4,0);
        vcdp->declBus(c+97,"Buraq_Mini_top Core Decode_unit idu_src1_reg", false,-1, 4,0);
        vcdp->declBus(c+98,"Buraq_Mini_top Core Decode_unit idu_src2_reg", false,-1, 4,0);
        vcdp->declBit(c+113,"Buraq_Mini_top Core Decode_unit idu_mem_ren", false,-1);
        vcdp->declBit(c+112,"Buraq_Mini_top Core Decode_unit idu_memtoreg", false,-1);
        vcdp->declBit(c+114,"Buraq_Mini_top Core Decode_unit idu_mem_wen", false,-1);
        vcdp->declBit(c+13,"Buraq_Mini_top Core Decode_unit idu_flush", false,-1);
        vcdp->declBus(c+116,"Buraq_Mini_top Core Decode_unit idu_aluop", false,-1, 2,0);
        vcdp->declBus(c+103,"Buraq_Mini_top Core Decode_unit idu_op_a_sel", false,-1, 1,0);
        vcdp->declBit(c+104,"Buraq_Mini_top Core Decode_unit idu_op_b_sel", false,-1);
        vcdp->declBus(c+4,"Buraq_Mini_top Core Decode_unit idu_next_pc_sel", false,-1, 1,0);
        vcdp->declBus(c+118,"Buraq_Mini_top Core Decode_unit idu_func3", false,-1, 2,0);
        vcdp->declBus(c+119,"Buraq_Mini_top Core Decode_unit idu_func7", false,-1, 6,0);
        vcdp->declBus(c+109,"Buraq_Mini_top Core Decode_unit idu_pc", false,-1, 31,0);
        vcdp->declBus(c+108,"Buraq_Mini_top Core Decode_unit idu_immediate", false,-1, 31,0);
        vcdp->declBus(c+9,"Buraq_Mini_top Core Decode_unit idu_branch_addr", false,-1, 31,0);
        vcdp->declBus(c+11,"Buraq_Mini_top Core Decode_unit idu_jalr_addr", false,-1, 31,0);
        vcdp->declBus(c+10,"Buraq_Mini_top Core Decode_unit idu_jal_addr", false,-1, 31,0);
        vcdp->declBus(c+110,"Buraq_Mini_top Core Decode_unit idu_data_1", false,-1, 31,0);
        vcdp->declBus(c+111,"Buraq_Mini_top Core Decode_unit idu_data_2", false,-1, 31,0);
        vcdp->declBus(c+94,"Buraq_Mini_top Core Decode_unit idu_store_data", false,-1, 31,0);
        vcdp->declBus(c+146,"Buraq_Mini_top Core Decode_unit RegOut", false,-1, 31,0);
        vcdp->declBus(c+100,"Buraq_Mini_top Core Decode_unit Instruction", false,-1, 31,0);
        vcdp->declBus(c+15,"Buraq_Mini_top Core Decode_unit ImmOUT", false,-1, 31,0);
        vcdp->declBit(c+16,"Buraq_Mini_top Core Decode_unit Branch_controller", false,-1);
        vcdp->declBit(c+129,"Buraq_Mini_top Core Decode_unit Branch_control_unit", false,-1);
        vcdp->declBus(c+17,"Buraq_Mini_top Core Decode_unit readData1", false,-1, 31,0);
        vcdp->declBus(c+18,"Buraq_Mini_top Core Decode_unit readData2", false,-1, 31,0);
        vcdp->declBus(c+130,"Buraq_Mini_top Core Decode_unit SRC_Reg_1", false,-1, 4,0);
        vcdp->declBus(c+131,"Buraq_Mini_top Core Decode_unit SRC_Reg_2", false,-1, 4,0);
        vcdp->declBus(c+19,"Buraq_Mini_top Core Decode_unit ImmSel", false,-1, 1,0);
        vcdp->declBus(c+20,"Buraq_Mini_top Core Decode_unit SOURCE_A", false,-1, 31,0);
        vcdp->declBus(c+21,"Buraq_Mini_top Core Decode_unit SOURCE_B", false,-1, 31,0);
        vcdp->declBus(c+22,"Buraq_Mini_top Core Decode_unit source_1", false,-1, 31,0);
        vcdp->declBus(c+23,"Buraq_Mini_top Core Decode_unit source_2", false,-1, 31,0);
        vcdp->declBus(c+24,"Buraq_Mini_top Core Decode_unit OPERAND_A_SEL", false,-1, 1,0);
        vcdp->declBit(c+25,"Buraq_Mini_top Core Decode_unit OPERAND_B_SEL", false,-1);
        vcdp->declBus(c+132,"Buraq_Mini_top Core Decode_unit func3", false,-1, 2,0);
        vcdp->declBus(c+133,"Buraq_Mini_top Core Decode_unit func7", false,-1, 6,0);
        vcdp->declBit(c+134,"Buraq_Mini_top Core Decode_unit mem_Read", false,-1);
        vcdp->declBit(c+135,"Buraq_Mini_top Core Decode_unit mem_write", false,-1);
        vcdp->declBit(c+26,"Buraq_Mini_top Core Decode_unit regFileWriteEn", false,-1);
        vcdp->declBit(c+134,"Buraq_Mini_top Core Decode_unit memtoRegister", false,-1);
        vcdp->declBus(c+27,"Buraq_Mini_top Core Decode_unit ALU_Op", false,-1, 2,0);
        vcdp->declBus(c+136,"Buraq_Mini_top Core Decode_unit destReg", false,-1, 4,0);
        vcdp->declBus(c+137,"Buraq_Mini_top Core Decode_unit opcode", false,-1, 6,0);
        vcdp->declBus(c+28,"Buraq_Mini_top Core Decode_unit I_imm", false,-1, 31,0);
        vcdp->declBus(c+29,"Buraq_Mini_top Core Decode_unit S_imm", false,-1, 31,0);
        vcdp->declBus(c+30,"Buraq_Mini_top Core Decode_unit U_imm", false,-1, 31,0);
        vcdp->declBus(c+138,"Buraq_Mini_top Core Decode_unit instruction_imm", false,-1, 24,0);
        vcdp->declBus(c+31,"Buraq_Mini_top Core Decode_unit op_A_sel", false,-1, 3,0);
        vcdp->declBus(c+32,"Buraq_Mini_top Core Decode_unit op_B_sel", false,-1, 3,0);
        vcdp->declBus(c+147,"Buraq_Mini_top Core Decode_unit No_of_registers", false,-1, 31,0);
        vcdp->declBus(c+147,"Buraq_Mini_top Core Decode_unit RegisterFile DataWidth", false,-1, 31,0);
        vcdp->declBus(c+147,"Buraq_Mini_top Core Decode_unit RegisterFile Registers", false,-1, 31,0);
        vcdp->declBus(c+149,"Buraq_Mini_top Core Decode_unit RegisterFile AddrRegWidth", false,-1, 31,0);
        vcdp->declBit(c+144,"Buraq_Mini_top Core Decode_unit RegisterFile brq_clk", false,-1);
        vcdp->declBit(c+145,"Buraq_Mini_top Core Decode_unit RegisterFile brq_rst", false,-1);
        vcdp->declBit(c+126,"Buraq_Mini_top Core Decode_unit RegisterFile writeEn", false,-1);
        vcdp->declBus(c+130,"Buraq_Mini_top Core Decode_unit RegisterFile source1", false,-1, 4,0);
        vcdp->declBus(c+131,"Buraq_Mini_top Core Decode_unit RegisterFile source2", false,-1, 4,0);
        vcdp->declBus(c+105,"Buraq_Mini_top Core Decode_unit RegisterFile writeDataSel", false,-1, 4,0);
        vcdp->declBus(c+12,"Buraq_Mini_top Core Decode_unit RegisterFile writeData", false,-1, 31,0);
        vcdp->declBus(c+17,"Buraq_Mini_top Core Decode_unit RegisterFile readData1", false,-1, 31,0);
        vcdp->declBus(c+18,"Buraq_Mini_top Core Decode_unit RegisterFile readData2", false,-1, 31,0);
        vcdp->declBus(c+146,"Buraq_Mini_top Core Decode_unit RegisterFile Reg_Out", false,-1, 31,0);
        vcdp->declBus(c+147,"Buraq_Mini_top Core Decode_unit RegisterFile number_of_registers", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+33+i*1,"Buraq_Mini_top Core Decode_unit RegisterFile regFile", true,(i+0), 31,0);}}
        vcdp->declBus(c+65,"Buraq_Mini_top Core Decode_unit RegisterFile i", false,-1, 31,0);
        vcdp->declBus(c+137,"Buraq_Mini_top Core Decode_unit Control opcode", false,-1, 6,0);
        vcdp->declBit(c+129,"Buraq_Mini_top Core Decode_unit Control branch_op", false,-1);
        vcdp->declBit(c+134,"Buraq_Mini_top Core Decode_unit Control memRead", false,-1);
        vcdp->declBit(c+134,"Buraq_Mini_top Core Decode_unit Control memtoReg", false,-1);
        vcdp->declBit(c+135,"Buraq_Mini_top Core Decode_unit Control memWrite", false,-1);
        vcdp->declBit(c+26,"Buraq_Mini_top Core Decode_unit Control regWriteEn", false,-1);
        vcdp->declBit(c+25,"Buraq_Mini_top Core Decode_unit Control operand_B_sel", false,-1);
        vcdp->declBus(c+4,"Buraq_Mini_top Core Decode_unit Control next_PC_sel", false,-1, 1,0);
        vcdp->declBus(c+24,"Buraq_Mini_top Core Decode_unit Control operand_A_sel", false,-1, 1,0);
        vcdp->declBus(c+27,"Buraq_Mini_top Core Decode_unit Control ALUOp", false,-1, 2,0);
        vcdp->declBus(c+19,"Buraq_Mini_top Core Decode_unit Control extend_sel", false,-1, 1,0);
        vcdp->declBus(c+152,"Buraq_Mini_top Core Decode_unit Control R_TYPE", false,-1, 6,0);
        vcdp->declBus(c+153,"Buraq_Mini_top Core Decode_unit Control I_TYPE", false,-1, 6,0);
        vcdp->declBus(c+154,"Buraq_Mini_top Core Decode_unit Control STORE", false,-1, 6,0);
        vcdp->declBus(c+155,"Buraq_Mini_top Core Decode_unit Control LOAD", false,-1, 6,0);
        vcdp->declBus(c+156,"Buraq_Mini_top Core Decode_unit Control BRANCH", false,-1, 6,0);
        vcdp->declBus(c+157,"Buraq_Mini_top Core Decode_unit Control JALR", false,-1, 6,0);
        vcdp->declBus(c+158,"Buraq_Mini_top Core Decode_unit Control JAL", false,-1, 6,0);
        vcdp->declBus(c+159,"Buraq_Mini_top Core Decode_unit Control AUIPC", false,-1, 6,0);
        vcdp->declBus(c+160,"Buraq_Mini_top Core Decode_unit Control LUI", false,-1, 6,0);
        vcdp->declBus(c+147,"Buraq_Mini_top Core Decode_unit ImmediateGeneration DataWidth", false,-1, 31,0);
        vcdp->declBus(c+101,"Buraq_Mini_top Core Decode_unit ImmediateGeneration pc", false,-1, 31,0);
        vcdp->declBus(c+138,"Buraq_Mini_top Core Decode_unit ImmediateGeneration instruction", false,-1, 24,0);
        vcdp->declBus(c+28,"Buraq_Mini_top Core Decode_unit ImmediateGeneration i_type", false,-1, 31,0);
        vcdp->declBus(c+30,"Buraq_Mini_top Core Decode_unit ImmediateGeneration u_type", false,-1, 31,0);
        vcdp->declBus(c+29,"Buraq_Mini_top Core Decode_unit ImmediateGeneration s_type", false,-1, 31,0);
        vcdp->declBus(c+9,"Buraq_Mini_top Core Decode_unit ImmediateGeneration sb_type", false,-1, 31,0);
        vcdp->declBus(c+10,"Buraq_Mini_top Core Decode_unit ImmediateGeneration uj_type", false,-1, 31,0);
        vcdp->declBus(c+66,"Buraq_Mini_top Core Decode_unit ImmediateGeneration I_type", false,-1, 11,0);
        vcdp->declBus(c+67,"Buraq_Mini_top Core Decode_unit ImmediateGeneration U_type", false,-1, 19,0);
        vcdp->declBus(c+68,"Buraq_Mini_top Core Decode_unit ImmediateGeneration S_type", false,-1, 11,0);
        vcdp->declBus(c+69,"Buraq_Mini_top Core Decode_unit ImmediateGeneration SB_type", false,-1, 12,0);
        vcdp->declBus(c+70,"Buraq_Mini_top Core Decode_unit ImmediateGeneration UJ_type", false,-1, 20,0);
        vcdp->declBus(c+147,"Buraq_Mini_top Core Decode_unit Forwarding_4_Control_Hazard DataWidth", false,-1, 31,0);
        vcdp->declBus(c+149,"Buraq_Mini_top Core Decode_unit Forwarding_4_Control_Hazard RegAddrWidth", false,-1, 31,0);
        vcdp->declBit(c+121,"Buraq_Mini_top Core Decode_unit Forwarding_4_Control_Hazard Reg_File_EN_Execute_stage", false,-1);
        vcdp->declBit(c+122,"Buraq_Mini_top Core Decode_unit Forwarding_4_Control_Hazard Reg_File_EN_Memory_stage", false,-1);
        vcdp->declBit(c+126,"Buraq_Mini_top Core Decode_unit Forwarding_4_Control_Hazard Reg_File_EN_WrBk_stage", false,-1);
        vcdp->declBit(c+113,"Buraq_Mini_top Core Decode_unit Forwarding_4_Control_Hazard Mem_Read_EN_Execute_stage", false,-1);
        vcdp->declBit(c+92,"Buraq_Mini_top Core Decode_unit Forwarding_4_Control_Hazard Mem_Read_EN_Memory_stage", false,-1);
        vcdp->declBus(c+106,"Buraq_Mini_top Core Decode_unit Forwarding_4_Control_Hazard WriteBack_reg_Execute_stage", false,-1, 4,0);
        vcdp->declBus(c+107,"Buraq_Mini_top Core Decode_unit Forwarding_4_Control_Hazard WriteBack_reg_Memory_stage", false,-1, 4,0);
        vcdp->declBus(c+105,"Buraq_Mini_top Core Decode_unit Forwarding_4_Control_Hazard WriteBack_reg_WrBk_stage", false,-1, 4,0);
        vcdp->declBus(c+130,"Buraq_Mini_top Core Decode_unit Forwarding_4_Control_Hazard IF_ID_RS1", false,-1, 4,0);
        vcdp->declBus(c+131,"Buraq_Mini_top Core Decode_unit Forwarding_4_Control_Hazard IF_ID_RS2", false,-1, 4,0);
        vcdp->declBus(c+31,"Buraq_Mini_top Core Decode_unit Forwarding_4_Control_Hazard Operand_A_control", false,-1, 3,0);
        vcdp->declBus(c+32,"Buraq_Mini_top Core Decode_unit Forwarding_4_Control_Hazard Operand_B_control", false,-1, 3,0);
        vcdp->declBus(c+147,"Buraq_Mini_top Core Decode_unit Branch_Controller_Unit DataWidth", false,-1, 31,0);
        vcdp->declBus(c+132,"Buraq_Mini_top Core Decode_unit Branch_Controller_Unit func3", false,-1, 2,0);
        vcdp->declBus(c+20,"Buraq_Mini_top Core Decode_unit Branch_Controller_Unit SRC_1", false,-1, 31,0);
        vcdp->declBus(c+21,"Buraq_Mini_top Core Decode_unit Branch_Controller_Unit SRC_2", false,-1, 31,0);
        vcdp->declBit(c+16,"Buraq_Mini_top Core Decode_unit Branch_Controller_Unit Branch", false,-1);
        vcdp->declBus(c+147,"Buraq_Mini_top Core Execute_unit DataWidth", false,-1, 31,0);
        vcdp->declBus(c+148,"Buraq_Mini_top Core Execute_unit AddrWidth", false,-1, 31,0);
        vcdp->declBus(c+149,"Buraq_Mini_top Core Execute_unit RegAddrWidth", false,-1, 31,0);
        vcdp->declBit(c+144,"Buraq_Mini_top Core Execute_unit brq_clk", false,-1);
        vcdp->declBit(c+145,"Buraq_Mini_top Core Execute_unit brq_rst", false,-1);
        vcdp->declBit(c+6,"Buraq_Mini_top Core Execute_unit stall", false,-1);
        vcdp->declBit(c+126,"Buraq_Mini_top Core Execute_unit ldst_regfile_en", false,-1);
        vcdp->declBus(c+96,"Buraq_Mini_top Core Execute_unit check_stall_In", false,-1, 1,0);
        vcdp->declBus(c+94,"Buraq_Mini_top Core Execute_unit idu_store_data", false,-1, 31,0);
        vcdp->declBus(c+110,"Buraq_Mini_top Core Execute_unit idu_data_1", false,-1, 31,0);
        vcdp->declBus(c+111,"Buraq_Mini_top Core Execute_unit idu_data_2", false,-1, 31,0);
        vcdp->declBus(c+103,"Buraq_Mini_top Core Execute_unit ieu_op_a_sel", false,-1, 1,0);
        vcdp->declBit(c+104,"Buraq_Mini_top Core Execute_unit ieu_op_b_sel", false,-1);
        vcdp->declBus(c+2,"Buraq_Mini_top Core Execute_unit ldst_mem_result", false,-1, 31,0);
        vcdp->declBus(c+118,"Buraq_Mini_top Core Execute_unit idu_func3", false,-1, 2,0);
        vcdp->declBus(c+119,"Buraq_Mini_top Core Execute_unit idu_func7", false,-1, 6,0);
        vcdp->declBus(c+116,"Buraq_Mini_top Core Execute_unit idu_aluop", false,-1, 2,0);
        vcdp->declBus(c+109,"Buraq_Mini_top Core Execute_unit ieu_pc", false,-1, 31,0);
        vcdp->declBus(c+108,"Buraq_Mini_top Core Execute_unit ieu_immediate", false,-1, 31,0);
        vcdp->declBit(c+112,"Buraq_Mini_top Core Execute_unit idu_memtoreg", false,-1);
        vcdp->declBit(c+114,"Buraq_Mini_top Core Execute_unit idu_mem_wen", false,-1);
        vcdp->declBit(c+113,"Buraq_Mini_top Core Execute_unit idu_mem_ren", false,-1);
        vcdp->declBit(c+121,"Buraq_Mini_top Core Execute_unit idu_regfile_en", false,-1);
        vcdp->declBus(c+106,"Buraq_Mini_top Core Execute_unit idu_addr_dst", false,-1, 4,0);
        vcdp->declBus(c+97,"Buraq_Mini_top Core Execute_unit ieu_src1_reg", false,-1, 4,0);
        vcdp->declBus(c+98,"Buraq_Mini_top Core Execute_unit ieu_src2_reg", false,-1, 4,0);
        vcdp->declBus(c+105,"Buraq_Mini_top Core Execute_unit wbu_addr_dst", false,-1, 4,0);
        vcdp->declBus(c+12,"Buraq_Mini_top Core Execute_unit wbu_result", false,-1, 31,0);
        vcdp->declBus(c+117,"Buraq_Mini_top Core Execute_unit ieu_func3", false,-1, 2,0);
        vcdp->declBit(c+7,"Buraq_Mini_top Core Execute_unit ieu_stall", false,-1);
        vcdp->declBus(c+120,"Buraq_Mini_top Core Execute_unit check_stall_Out", false,-1, 1,0);
        vcdp->declBit(c+122,"Buraq_Mini_top Core Execute_unit ieu_regfile_en", false,-1);
        vcdp->declBit(c+92,"Buraq_Mini_top Core Execute_unit ieu_mem_ren", false,-1);
        vcdp->declBit(c+93,"Buraq_Mini_top Core Execute_unit ieu_mem_wen", false,-1);
        vcdp->declBit(c+124,"Buraq_Mini_top Core Execute_unit ieu_memtoreg", false,-1);
        vcdp->declBus(c+107,"Buraq_Mini_top Core Execute_unit ieu_addr_dst", false,-1, 4,0);
        vcdp->declBus(c+14,"Buraq_Mini_top Core Execute_unit ieu_alu_result", false,-1, 31,0);
        vcdp->declBus(c+115,"Buraq_Mini_top Core Execute_unit ieu_alu_result_dealy", false,-1, 31,0);
        vcdp->declBus(c+102,"Buraq_Mini_top Core Execute_unit ieu_mem_addr", false,-1, 31,0);
        vcdp->declBus(c+89,"Buraq_Mini_top Core Execute_unit ieu_store_data", false,-1, 31,0);
        vcdp->declBit(c+71,"Buraq_Mini_top Core Execute_unit mem_busy", false,-1);
        vcdp->declBit(c+139,"Buraq_Mini_top Core Execute_unit ldst_resume", false,-1);
        vcdp->declBus(c+72,"Buraq_Mini_top Core Execute_unit op_A_sel", false,-1, 2,0);
        vcdp->declBus(c+73,"Buraq_Mini_top Core Execute_unit op_B_sel", false,-1, 2,0);
        vcdp->declBus(c+74,"Buraq_Mini_top Core Execute_unit SRC_A", false,-1, 31,0);
        vcdp->declBus(c+75,"Buraq_Mini_top Core Execute_unit SRC_B", false,-1, 31,0);
        vcdp->declBus(c+76,"Buraq_Mini_top Core Execute_unit SOURCE_A", false,-1, 31,0);
        vcdp->declBus(c+77,"Buraq_Mini_top Core Execute_unit SOURCE_B", false,-1, 31,0);
        vcdp->declBus(c+78,"Buraq_Mini_top Core Execute_unit ALU_MUX_CONTROL", false,-1, 5,0);
        vcdp->declBus(c+161,"Buraq_Mini_top Core Execute_unit Mem_addr", false,-1, 14,0);
        vcdp->declBus(c+147,"Buraq_Mini_top Core Execute_unit alu DataWidth", false,-1, 31,0);
        vcdp->declBus(c+74,"Buraq_Mini_top Core Execute_unit alu operand_A", false,-1, 31,0);
        vcdp->declBus(c+75,"Buraq_Mini_top Core Execute_unit alu operand_B", false,-1, 31,0);
        vcdp->declBus(c+78,"Buraq_Mini_top Core Execute_unit alu ALU_Control", false,-1, 5,0);
        vcdp->declBus(c+14,"Buraq_Mini_top Core Execute_unit alu ALU_result", false,-1, 31,0);
        vcdp->declBit(c+79,"Buraq_Mini_top Core Execute_unit alu mul", false,-1);
        vcdp->declBit(c+80,"Buraq_Mini_top Core Execute_unit alu mulh", false,-1);
        vcdp->declBus(c+81,"Buraq_Mini_top Core Execute_unit alu mul_lower", false,-1, 31,0);
        vcdp->declBus(c+82,"Buraq_Mini_top Core Execute_unit alu mul_upper", false,-1, 31,0);
        vcdp->declBus(c+83,"Buraq_Mini_top Core Execute_unit alu ALU_result_32", false,-1, 31,0);
        vcdp->declQuad(c+84,"Buraq_Mini_top Core Execute_unit alu ALU_result_64", false,-1, 63,0);
        vcdp->declBus(c+86,"Buraq_Mini_top Core Execute_unit alu shamt", false,-1, 4,0);
        vcdp->declBus(c+118,"Buraq_Mini_top Core Execute_unit aluControla func3", false,-1, 2,0);
        vcdp->declBus(c+119,"Buraq_Mini_top Core Execute_unit aluControla func7", false,-1, 6,0);
        vcdp->declBus(c+116,"Buraq_Mini_top Core Execute_unit aluControla ALU_Operation", false,-1, 2,0);
        vcdp->declBus(c+78,"Buraq_Mini_top Core Execute_unit aluControla ALU_Control", false,-1, 5,0);
        vcdp->declBus(c+147,"Buraq_Mini_top Core Execute_unit Forwarding_For_Data_Hazard DataWidth", false,-1, 31,0);
        vcdp->declBus(c+149,"Buraq_Mini_top Core Execute_unit Forwarding_For_Data_Hazard RegAddrWidth", false,-1, 31,0);
        vcdp->declBit(c+122,"Buraq_Mini_top Core Execute_unit Forwarding_For_Data_Hazard Reg_File_EN_Memory_stage", false,-1);
        vcdp->declBit(c+126,"Buraq_Mini_top Core Execute_unit Forwarding_For_Data_Hazard Reg_File_EN_WrBk_stage", false,-1);
        vcdp->declBit(c+92,"Buraq_Mini_top Core Execute_unit Forwarding_For_Data_Hazard Mem_Read_EN", false,-1);
        vcdp->declBus(c+107,"Buraq_Mini_top Core Execute_unit Forwarding_For_Data_Hazard WriteBack_reg_Memory_stage", false,-1, 4,0);
        vcdp->declBus(c+105,"Buraq_Mini_top Core Execute_unit Forwarding_For_Data_Hazard WriteBack_reg_WrBk_stage", false,-1, 4,0);
        vcdp->declBus(c+97,"Buraq_Mini_top Core Execute_unit Forwarding_For_Data_Hazard EX_RS1", false,-1, 4,0);
        vcdp->declBus(c+98,"Buraq_Mini_top Core Execute_unit Forwarding_For_Data_Hazard EX_RS2", false,-1, 4,0);
        vcdp->declBus(c+72,"Buraq_Mini_top Core Execute_unit Forwarding_For_Data_Hazard Operand_A_control", false,-1, 2,0);
        vcdp->declBus(c+73,"Buraq_Mini_top Core Execute_unit Forwarding_For_Data_Hazard Operand_B_control", false,-1, 2,0);
        vcdp->declBus(c+147,"Buraq_Mini_top Core MEM_WB_REG DataWidth", false,-1, 31,0);
        vcdp->declBus(c+149,"Buraq_Mini_top Core MEM_WB_REG RegAddrWidth", false,-1, 31,0);
        vcdp->declBus(c+148,"Buraq_Mini_top Core MEM_WB_REG AddrWidth", false,-1, 31,0);
        vcdp->declBit(c+144,"Buraq_Mini_top Core MEM_WB_REG brq_clk", false,-1);
        vcdp->declBit(c+145,"Buraq_Mini_top Core MEM_WB_REG brq_rst", false,-1);
        vcdp->declBit(c+6,"Buraq_Mini_top Core MEM_WB_REG stall", false,-1);
        vcdp->declBit(c+122,"Buraq_Mini_top Core MEM_WB_REG ieu_regfile_en", false,-1);
        vcdp->declBus(c+117,"Buraq_Mini_top Core MEM_WB_REG ieu_func3", false,-1, 2,0);
        vcdp->declBus(c+120,"Buraq_Mini_top Core MEM_WB_REG ldst_check_stall", false,-1, 1,0);
        vcdp->declBus(c+115,"Buraq_Mini_top Core MEM_WB_REG ieu_alu_result", false,-1, 31,0);
        vcdp->declBus(c+2,"Buraq_Mini_top Core MEM_WB_REG ldst_load_data_in", false,-1, 31,0);
        vcdp->declBus(c+102,"Buraq_Mini_top Core MEM_WB_REG ieu_mem_addr", false,-1, 31,0);
        vcdp->declBus(c+89,"Buraq_Mini_top Core MEM_WB_REG ieu_store_data", false,-1, 31,0);
        vcdp->declBus(c+107,"Buraq_Mini_top Core MEM_WB_REG ieu_addr_dst", false,-1, 4,0);
        vcdp->declBit(c+124,"Buraq_Mini_top Core MEM_WB_REG ieu_memtoreg", false,-1);
        vcdp->declBit(c+126,"Buraq_Mini_top Core MEM_WB_REG ldst_regfile_en", false,-1);
        vcdp->declBit(c+123,"Buraq_Mini_top Core MEM_WB_REG ldst_resume", false,-1);
        vcdp->declBit(c+95,"Buraq_Mini_top Core MEM_WB_REG wb_resume", false,-1);
        vcdp->declBus(c+3,"Buraq_Mini_top Core MEM_WB_REG ldst_byte_en", false,-1, 2,0);
        vcdp->declBus(c+91,"Buraq_Mini_top Core MEM_WB_REG ldst_mem_addr", false,-1, 14,0);
        vcdp->declBus(c+99,"Buraq_Mini_top Core MEM_WB_REG ldst_alu_result", false,-1, 31,0);
        vcdp->declBus(c+89,"Buraq_Mini_top Core MEM_WB_REG ldst_store_data", false,-1, 31,0);
        vcdp->declBus(c+125,"Buraq_Mini_top Core MEM_WB_REG ldst_load_data", false,-1, 31,0);
        vcdp->declBus(c+105,"Buraq_Mini_top Core MEM_WB_REG ldst_addr_dst", false,-1, 4,0);
        vcdp->declBit(c+127,"Buraq_Mini_top Core MEM_WB_REG ldst_memtoreg", false,-1);
        vcdp->declBit(c+162,"Buraq_Mini_top Core MEM_WB_REG mem_busy", false,-1);
        vcdp->declBus(c+140,"Buraq_Mini_top Core MEM_WB_REG wb_check_stall", false,-1, 1,0);
        vcdp->declBus(c+141,"Buraq_Mini_top Core MEM_WB_REG byte_sel", false,-1, 1,0);
        vcdp->declBus(c+91,"Buraq_Mini_top Core MEM_WB_REG address", false,-1, 14,0);
        vcdp->declBus(c+87,"Buraq_Mini_top Core MEM_WB_REG load_data", false,-1, 31,0);
        vcdp->declBus(c+147,"Buraq_Mini_top Core WriteBack_unit DataWidth", false,-1, 31,0);
        vcdp->declBus(c+149,"Buraq_Mini_top Core WriteBack_unit RegAddrWidth", false,-1, 31,0);
        vcdp->declBit(c+127,"Buraq_Mini_top Core WriteBack_unit ldst_memtoreg", false,-1);
        vcdp->declBus(c+105,"Buraq_Mini_top Core WriteBack_unit ldst_addr_dst", false,-1, 4,0);
        vcdp->declBus(c+99,"Buraq_Mini_top Core WriteBack_unit ldst_alu_result", false,-1, 31,0);
        vcdp->declBus(c+125,"Buraq_Mini_top Core WriteBack_unit ldst_load_data", false,-1, 31,0);
        vcdp->declBus(c+12,"Buraq_Mini_top Core WriteBack_unit wbu_result", false,-1, 31,0);
        vcdp->declBus(c+105,"Buraq_Mini_top Core WriteBack_unit wbu_addr_dst", false,-1, 4,0);
        vcdp->declBus(c+147,"Buraq_Mini_top DataMemory DataWidth", false,-1, 31,0);
        vcdp->declBus(c+148,"Buraq_Mini_top DataMemory AddrWidth", false,-1, 31,0);
        vcdp->declBit(c+144,"Buraq_Mini_top DataMemory brq_clk", false,-1);
        vcdp->declBus(c+3,"Buraq_Mini_top DataMemory byte_enable", false,-1, 2,0);
        vcdp->declBus(c+91,"Buraq_Mini_top DataMemory address", false,-1, 14,0);
        vcdp->declBus(c+89,"Buraq_Mini_top DataMemory data_in", false,-1, 31,0);
        vcdp->declBit(c+93,"Buraq_Mini_top DataMemory write_enable", false,-1);
        vcdp->declBit(c+92,"Buraq_Mini_top DataMemory read_enable", false,-1);
        vcdp->declBus(c+2,"Buraq_Mini_top DataMemory data_out", false,-1, 31,0);
        vcdp->declBus(c+163,"Buraq_Mini_top DataMemory DEPTH", false,-1, 31,0);
        vcdp->declBus(c+142,"Buraq_Mini_top DataMemory storing_byte", false,-1, 7,0);
        vcdp->declBus(c+143,"Buraq_Mini_top DataMemory storing_half_byte", false,-1, 15,0);
        vcdp->declBus(c+88,"Buraq_Mini_top DataMemory memory_in", false,-1, 31,0);
        vcdp->declBus(c+147,"Buraq_Mini_top InstructionMemory DataWidth", false,-1, 31,0);
        vcdp->declBus(c+148,"Buraq_Mini_top InstructionMemory AddrWidth", false,-1, 31,0);
        vcdp->declBit(c+144,"Buraq_Mini_top InstructionMemory brq_clk", false,-1);
        vcdp->declBus(c+90,"Buraq_Mini_top InstructionMemory address", false,-1, 14,0);
        vcdp->declBit(c+164,"Buraq_Mini_top InstructionMemory i_write", false,-1);
        vcdp->declBit(c+165,"Buraq_Mini_top InstructionMemory i_read", false,-1);
        vcdp->declBus(c+150,"Buraq_Mini_top InstructionMemory i_data", false,-1, 31,0);
        vcdp->declBus(c+1,"Buraq_Mini_top InstructionMemory readData", false,-1, 31,0);
        vcdp->declBus(c+163,"Buraq_Mini_top InstructionMemory DEPTH", false,-1, 31,0);
    }
}

void VBuraq_Mini_top::traceFullThis__1(VBuraq_Mini_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBuraq_Mini_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullIData(oldp+0,(vlTOPp->Buraq_Mini_top__DOT__Ins_mem_out),32);
        vcdp->fullIData(oldp+1,(vlTOPp->Buraq_Mini_top__DOT__D_mem_out),32);
        vcdp->fullCData(oldp+2,(vlTOPp->Buraq_Mini_top__DOT__byte_en),3);
        vcdp->fullCData(oldp+3,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_next_pc_sel),2);
        vcdp->fullBit(oldp+4,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_branch));
        vcdp->fullBit(oldp+5,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__stall));
        vcdp->fullBit(oldp+6,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_stall));
        vcdp->fullCData(oldp+7,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__check_stall),2);
        vcdp->fullIData(oldp+8,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_branch_addr),32);
        vcdp->fullIData(oldp+9,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_jal_addr),32);
        vcdp->fullIData(oldp+10,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_jalr_addr),32);
        vcdp->fullIData(oldp+11,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Wbu_result),32);
        vcdp->fullBit(oldp+12,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_flush));
        vcdp->fullIData(oldp+13,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ALU_RESULT),32);
        vcdp->fullIData(oldp+14,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmOUT),32);
        vcdp->fullBit(oldp+15,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__Branch_controller));
        vcdp->fullIData(oldp+16,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__readData1),32);
        vcdp->fullIData(oldp+17,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__readData2),32);
        vcdp->fullCData(oldp+18,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmSel),2);
        vcdp->fullIData(oldp+19,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__SOURCE_A),32);
        vcdp->fullIData(oldp+20,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__SOURCE_B),32);
        vcdp->fullIData(oldp+21,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__source_1),32);
        vcdp->fullIData(oldp+22,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__source_2),32);
        vcdp->fullCData(oldp+23,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__OPERAND_A_SEL),2);
        vcdp->fullBit(oldp+24,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__OPERAND_B_SEL));
        vcdp->fullBit(oldp+25,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__regFileWriteEn));
        vcdp->fullCData(oldp+26,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ALU_Op),3);
        vcdp->fullIData(oldp+27,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__I_imm),32);
        vcdp->fullIData(oldp+28,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__S_imm),32);
        vcdp->fullIData(oldp+29,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__U_imm),32);
        vcdp->fullCData(oldp+30,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__op_A_sel),4);
        vcdp->fullCData(oldp+31,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__op_B_sel),4);
        vcdp->fullIData(oldp+32,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[0]),32);
        vcdp->fullIData(oldp+33,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[1]),32);
        vcdp->fullIData(oldp+34,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[2]),32);
        vcdp->fullIData(oldp+35,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[3]),32);
        vcdp->fullIData(oldp+36,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[4]),32);
        vcdp->fullIData(oldp+37,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[5]),32);
        vcdp->fullIData(oldp+38,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[6]),32);
        vcdp->fullIData(oldp+39,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[7]),32);
        vcdp->fullIData(oldp+40,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[8]),32);
        vcdp->fullIData(oldp+41,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[9]),32);
        vcdp->fullIData(oldp+42,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[10]),32);
        vcdp->fullIData(oldp+43,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[11]),32);
        vcdp->fullIData(oldp+44,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[12]),32);
        vcdp->fullIData(oldp+45,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[13]),32);
        vcdp->fullIData(oldp+46,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[14]),32);
        vcdp->fullIData(oldp+47,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[15]),32);
        vcdp->fullIData(oldp+48,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[16]),32);
        vcdp->fullIData(oldp+49,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[17]),32);
        vcdp->fullIData(oldp+50,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[18]),32);
        vcdp->fullIData(oldp+51,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[19]),32);
        vcdp->fullIData(oldp+52,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[20]),32);
        vcdp->fullIData(oldp+53,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[21]),32);
        vcdp->fullIData(oldp+54,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[22]),32);
        vcdp->fullIData(oldp+55,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[23]),32);
        vcdp->fullIData(oldp+56,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[24]),32);
        vcdp->fullIData(oldp+57,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[25]),32);
        vcdp->fullIData(oldp+58,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[26]),32);
        vcdp->fullIData(oldp+59,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[27]),32);
        vcdp->fullIData(oldp+60,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[28]),32);
        vcdp->fullIData(oldp+61,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[29]),32);
        vcdp->fullIData(oldp+62,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[30]),32);
        vcdp->fullIData(oldp+63,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[31]),32);
        vcdp->fullIData(oldp+64,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__i),32);
        vcdp->fullSData(oldp+65,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__I_type),12);
        vcdp->fullIData(oldp+66,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__U_type),20);
        vcdp->fullSData(oldp+67,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__S_type),12);
        vcdp->fullSData(oldp+68,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__SB_type),13);
        vcdp->fullIData(oldp+69,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__UJ_type),21);
        vcdp->fullBit(oldp+70,((1U & ((IData)(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__op_A_sel) 
                                      >> 1U))));
        vcdp->fullCData(oldp+71,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__op_A_sel),3);
        vcdp->fullCData(oldp+72,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__op_B_sel),3);
        vcdp->fullIData(oldp+73,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__SRC_A),32);
        vcdp->fullIData(oldp+74,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__SRC_B),32);
        vcdp->fullIData(oldp+75,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__SOURCE_A),32);
        vcdp->fullIData(oldp+76,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__SOURCE_B),32);
        vcdp->fullCData(oldp+77,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__ALU_MUX_CONTROL),6);
        vcdp->fullBit(oldp+78,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT__mul));
        vcdp->fullBit(oldp+79,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT__mulh));
        vcdp->fullIData(oldp+80,((IData)(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT__ALU_result_64)),32);
        vcdp->fullIData(oldp+81,((IData)((vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT__ALU_result_64 
                                          >> 0x20U))),32);
        vcdp->fullIData(oldp+82,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT__ALU_result_32),32);
        vcdp->fullQData(oldp+83,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT__ALU_result_64),64);
        vcdp->fullCData(oldp+85,((0x1fU & vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__SRC_B)),5);
        vcdp->fullIData(oldp+86,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__MEM_WB_REG__DOT__load_data),32);
        vcdp->fullIData(oldp+87,(vlTOPp->Buraq_Mini_top__DOT__DataMemory__DOT__memory_in),32);
        vcdp->fullIData(oldp+88,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_store_data),32);
        vcdp->fullSData(oldp+89,((0x7fffU & (vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Fetch_unit__DOT__PC_reg 
                                             >> 2U))),15);
        vcdp->fullSData(oldp+90,((0x7fffU & (vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_mem_addr 
                                             >> 2U))),15);
        vcdp->fullBit(oldp+91,(vlTOPp->Buraq_Mini_top__DOT__D_mem_readEn));
        vcdp->fullBit(oldp+92,(vlTOPp->Buraq_Mini_top__DOT__D_mem_writeEn));
        vcdp->fullIData(oldp+93,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_store_data),32);
        vcdp->fullBit(oldp+94,((1U & ((IData)(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__MEM_WB_REG__DOT__wb_check_stall) 
                                      >> 1U))));
        vcdp->fullCData(oldp+95,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_check_stall),2);
        vcdp->fullCData(oldp+96,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_src1_reg),5);
        vcdp->fullCData(oldp+97,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_src2_reg),5);
        vcdp->fullIData(oldp+98,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ldst_alu_result),32);
        vcdp->fullIData(oldp+99,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst),32);
        vcdp->fullIData(oldp+100,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_pc),32);
        vcdp->fullIData(oldp+101,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_mem_addr),32);
        vcdp->fullCData(oldp+102,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_op_a_sel),2);
        vcdp->fullBit(oldp+103,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_op_b_sel));
        vcdp->fullCData(oldp+104,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ldst_addr_dst),5);
        vcdp->fullCData(oldp+105,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_addr_dst),5);
        vcdp->fullCData(oldp+106,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_addr_dst),5);
        vcdp->fullIData(oldp+107,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_immediate),32);
        vcdp->fullIData(oldp+108,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_pc),32);
        vcdp->fullIData(oldp+109,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_data_1),32);
        vcdp->fullIData(oldp+110,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_data_2),32);
        vcdp->fullBit(oldp+111,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_memtoreg));
        vcdp->fullBit(oldp+112,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_mem_ren));
        vcdp->fullBit(oldp+113,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_mem_wen));
        vcdp->fullIData(oldp+114,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_alu_result),32);
        vcdp->fullCData(oldp+115,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_aluop),3);
        vcdp->fullCData(oldp+116,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_func3),3);
        vcdp->fullCData(oldp+117,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_func3),3);
        vcdp->fullCData(oldp+118,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_func7),7);
        vcdp->fullCData(oldp+119,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_check_Stall),2);
        vcdp->fullBit(oldp+120,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_regfile_en));
        vcdp->fullBit(oldp+121,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_regfile_en));
        vcdp->fullBit(oldp+122,((1U & (IData)(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_check_Stall))));
        vcdp->fullBit(oldp+123,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_memtoreg));
        vcdp->fullIData(oldp+124,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ldst_load_data),32);
        vcdp->fullBit(oldp+125,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ldst_regfile_en));
        vcdp->fullBit(oldp+126,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ldst_memtoreg));
        vcdp->fullIData(oldp+127,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Fetch_unit__DOT__PC_reg),32);
        vcdp->fullBit(oldp+128,((0x63U == (0x7fU & vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst))));
        vcdp->fullCData(oldp+129,((0x1fU & (vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst 
                                            >> 0xfU))),5);
        vcdp->fullCData(oldp+130,((0x1fU & (vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst 
                                            >> 0x14U))),5);
        vcdp->fullCData(oldp+131,((7U & (vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst 
                                         >> 0xcU))),3);
        vcdp->fullCData(oldp+132,((0x7fU & (vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst 
                                            >> 0x19U))),7);
        vcdp->fullBit(oldp+133,((3U == (0x7fU & vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst))));
        vcdp->fullBit(oldp+134,((0x23U == (0x7fU & vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst))));
        vcdp->fullCData(oldp+135,((0x1fU & (vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst 
                                            >> 7U))),5);
        vcdp->fullCData(oldp+136,((0x7fU & vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst)),7);
        vcdp->fullIData(oldp+137,((0x1ffffffU & (vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst 
                                                 >> 7U))),25);
        vcdp->fullBit(oldp+138,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__ldst_resume));
        vcdp->fullCData(oldp+139,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__MEM_WB_REG__DOT__wb_check_stall),2);
        vcdp->fullCData(oldp+140,((3U & vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_mem_addr)),2);
        vcdp->fullCData(oldp+141,((0xffU & vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_store_data)),8);
        vcdp->fullSData(oldp+142,((0xffffU & vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_store_data)),16);
        vcdp->fullBit(oldp+143,(vlTOPp->brq_clk));
        vcdp->fullBit(oldp+144,(vlTOPp->brq_rst));
        vcdp->fullIData(oldp+145,(vlTOPp->Reg_Out),32);
        vcdp->fullIData(oldp+146,(0x20U),32);
        vcdp->fullIData(oldp+147,(0xfU),32);
        vcdp->fullIData(oldp+148,(5U),32);
        vcdp->fullIData(oldp+149,(0U),32);
        vcdp->fullBit(oldp+150,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_stall));
        vcdp->fullCData(oldp+151,(0x33U),7);
        vcdp->fullCData(oldp+152,(0x13U),7);
        vcdp->fullCData(oldp+153,(0x23U),7);
        vcdp->fullCData(oldp+154,(3U),7);
        vcdp->fullCData(oldp+155,(0x63U),7);
        vcdp->fullCData(oldp+156,(0x67U),7);
        vcdp->fullCData(oldp+157,(0x6fU),7);
        vcdp->fullCData(oldp+158,(0x17U),7);
        vcdp->fullCData(oldp+159,(0x37U),7);
        vcdp->fullSData(oldp+160,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__Mem_addr),15);
        vcdp->fullBit(oldp+161,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__MEM_WB_REG__DOT__mem_busy));
        vcdp->fullIData(oldp+162,(0x8000U),32);
        vcdp->fullBit(oldp+163,(0U));
        vcdp->fullBit(oldp+164,(1U));
    }
}
