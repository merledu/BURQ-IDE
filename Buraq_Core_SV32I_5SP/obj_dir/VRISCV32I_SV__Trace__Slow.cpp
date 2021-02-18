// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISCV32I_SV__Syms.h"


//======================

void VRISCV32I_SV::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VRISCV32I_SV::traceInit, &VRISCV32I_SV::traceFull, &VRISCV32I_SV::traceChg, this);
}
void VRISCV32I_SV::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VRISCV32I_SV* t = (VRISCV32I_SV*)userthis;
    VRISCV32I_SV__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VRISCV32I_SV::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VRISCV32I_SV* t = (VRISCV32I_SV*)userthis;
    VRISCV32I_SV__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VRISCV32I_SV::traceInitThis(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRISCV32I_SV* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (false && vcdp) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VRISCV32I_SV::traceFullThis(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRISCV32I_SV* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (false && vcdp) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VRISCV32I_SV::traceInitThis__1(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRISCV32I_SV* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (false && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+109,"clock", false,-1);
        vcdp->declBit(c+110,"reset", false,-1);
        vcdp->declBus(c+111,"program_in", false,-1, 31,0);
        vcdp->declBus(c+112,"address_in", false,-1, 9,0);
        vcdp->declBus(c+113,"Reg_Out", false,-1, 31,0);
        vcdp->declBus(c+114,"RISCV32I_SV DataWidth", false,-1, 31,0);
        vcdp->declBus(c+115,"RISCV32I_SV AddrWidth", false,-1, 31,0);
        vcdp->declBus(c+116,"RISCV32I_SV RegAddrWidth", false,-1, 31,0);
        vcdp->declBit(c+109,"RISCV32I_SV clock", false,-1);
        vcdp->declBit(c+110,"RISCV32I_SV reset", false,-1);
        vcdp->declBus(c+111,"RISCV32I_SV program_in", false,-1, 31,0);
        vcdp->declBus(c+112,"RISCV32I_SV address_in", false,-1, 9,0);
        vcdp->declBus(c+113,"RISCV32I_SV Reg_Out", false,-1, 31,0);
        vcdp->declBus(c+1,"RISCV32I_SV Ins_mem_out", false,-1, 31,0);
        vcdp->declBus(c+2,"RISCV32I_SV D_mem_out", false,-1, 31,0);
        vcdp->declBus(c+117,"RISCV32I_SV Ins_mem_data_in", false,-1, 31,0);
        vcdp->declBus(c+71,"RISCV32I_SV D_mem_data_in", false,-1, 31,0);
        vcdp->declBus(c+3,"RISCV32I_SV Ins_mem_addr_in", false,-1, 9,0);
        vcdp->declBus(c+72,"RISCV32I_SV D_mem_addr_in", false,-1, 9,0);
        vcdp->declBus(c+73,"RISCV32I_SV function3", false,-1, 2,0);
        vcdp->declBit(c+118,"RISCV32I_SV Ins_mem_readEn", false,-1);
        vcdp->declBit(c+74,"RISCV32I_SV D_mem_readEn", false,-1);
        vcdp->declBit(c+119,"RISCV32I_SV Ins_mem_writeEn", false,-1);
        vcdp->declBit(c+75,"RISCV32I_SV D_mem_writeEn", false,-1);
        vcdp->declBus(c+114,"RISCV32I_SV Core DataWidth", false,-1, 31,0);
        vcdp->declBus(c+115,"RISCV32I_SV Core AddrWidth", false,-1, 31,0);
        vcdp->declBus(c+116,"RISCV32I_SV Core RegAddrWidth", false,-1, 31,0);
        vcdp->declBit(c+109,"RISCV32I_SV Core clock", false,-1);
        vcdp->declBit(c+110,"RISCV32I_SV Core reset", false,-1);
        vcdp->declBus(c+111,"RISCV32I_SV Core program_in", false,-1, 31,0);
        vcdp->declBus(c+112,"RISCV32I_SV Core address_in", false,-1, 9,0);
        vcdp->declBus(c+1,"RISCV32I_SV Core Inst_mem_dataOut", false,-1, 31,0);
        vcdp->declBus(c+2,"RISCV32I_SV Core Data_mem_dataOut", false,-1, 31,0);
        vcdp->declBus(c+117,"RISCV32I_SV Core Inst_mem_dataIn", false,-1, 31,0);
        vcdp->declBus(c+71,"RISCV32I_SV Core Data_mem_dataIn", false,-1, 31,0);
        vcdp->declBus(c+3,"RISCV32I_SV Core Inst_mem_address", false,-1, 9,0);
        vcdp->declBus(c+72,"RISCV32I_SV Core Data_mem_address", false,-1, 9,0);
        vcdp->declBit(c+118,"RISCV32I_SV Core Inst_mem_read_en", false,-1);
        vcdp->declBit(c+74,"RISCV32I_SV Core Data_mem_read_en", false,-1);
        vcdp->declBit(c+119,"RISCV32I_SV Core Inst_mem_write_en", false,-1);
        vcdp->declBit(c+75,"RISCV32I_SV Core Data_mem_write_en", false,-1);
        vcdp->declBus(c+73,"RISCV32I_SV Core func3", false,-1, 2,0);
        vcdp->declBus(c+113,"RISCV32I_SV Core reg_out", false,-1, 31,0);
        vcdp->declBus(c+76,"RISCV32I_SV Core Mem_WB_Data", false,-1, 31,0);
        vcdp->declBus(c+4,"RISCV32I_SV Core NEXT_PC_SEL", false,-1, 1,0);
        vcdp->declBit(c+5,"RISCV32I_SV Core BRANCH", false,-1);
        vcdp->declBus(c+77,"RISCV32I_SV Core ALUresult", false,-1, 31,0);
        vcdp->declBus(c+78,"RISCV32I_SV Core PROGRAM_COUNTER", false,-1, 31,0);
        vcdp->declBus(c+6,"RISCV32I_SV Core BRANCH_TARG", false,-1, 31,0);
        vcdp->declBus(c+7,"RISCV32I_SV Core JAL_TARG", false,-1, 31,0);
        vcdp->declBus(c+8,"RISCV32I_SV Core JALR_TARG", false,-1, 31,0);
        vcdp->declBus(c+9,"RISCV32I_SV Core WB_DATA", false,-1, 31,0);
        vcdp->declBus(c+79,"RISCV32I_SV Core WB_REG", false,-1, 4,0);
        vcdp->declBus(c+80,"RISCV32I_SV Core DEST_REG", false,-1, 4,0);
        vcdp->declBus(c+81,"RISCV32I_SV Core DEST_REGISTER", false,-1, 4,0);
        vcdp->declBus(c+82,"RISCV32I_SV Core SOURCE1", false,-1, 31,0);
        vcdp->declBus(c+83,"RISCV32I_SV Core SOURCE2", false,-1, 31,0);
        vcdp->declBit(c+84,"RISCV32I_SV Core MEM_TO_REG_DEC_EX", false,-1);
        vcdp->declBit(c+85,"RISCV32I_SV Core MEM_READ_EN_DEC_EX", false,-1);
        vcdp->declBit(c+86,"RISCV32I_SV Core MEM_WRITE_EN_DEC_EX", false,-1);
        vcdp->declBus(c+87,"RISCV32I_SV Core aluOutput", false,-1, 31,0);
        vcdp->declBus(c+88,"RISCV32I_SV Core ALU_OPCODE", false,-1, 2,0);
        vcdp->declBus(c+89,"RISCV32I_SV Core FUNC_3", false,-1, 2,0);
        vcdp->declBus(c+90,"RISCV32I_SV Core FUNC_7", false,-1, 1,0);
        vcdp->declBit(c+91,"RISCV32I_SV Core RF_EN_DEC_to_EX", false,-1);
        vcdp->declBit(c+92,"RISCV32I_SV Core RF_EN_EX_to_WB", false,-1);
        vcdp->declBit(c+10,"RISCV32I_SV Core FLUSH", false,-1);
        vcdp->declBit(c+93,"RISCV32I_SV Core mem_to_register", false,-1);
        vcdp->declBus(c+94,"RISCV32I_SV Core Mem_Data_WB", false,-1, 31,0);
        vcdp->declBus(c+11,"RISCV32I_SV Core ALU_RESULT", false,-1, 31,0);
        vcdp->declBus(c+79,"RISCV32I_SV Core reg_WB", false,-1, 4,0);
        vcdp->declBit(c+95,"RISCV32I_SV Core EN_reg_file", false,-1);
        vcdp->declBit(c+96,"RISCV32I_SV Core Mem2Reg", false,-1);
        vcdp->declBus(c+114,"RISCV32I_SV Core Fetch_unit DataWidth", false,-1, 31,0);
        vcdp->declBus(c+115,"RISCV32I_SV Core Fetch_unit AddrWidth", false,-1, 31,0);
        vcdp->declBit(c+109,"RISCV32I_SV Core Fetch_unit clock", false,-1);
        vcdp->declBit(c+110,"RISCV32I_SV Core Fetch_unit reset", false,-1);
        vcdp->declBus(c+4,"RISCV32I_SV Core Fetch_unit next_PC_sel", false,-1, 1,0);
        vcdp->declBit(c+5,"RISCV32I_SV Core Fetch_unit Branch", false,-1);
        vcdp->declBit(c+10,"RISCV32I_SV Core Fetch_unit flush", false,-1);
        vcdp->declBus(c+6,"RISCV32I_SV Core Fetch_unit Branch_target", false,-1, 31,0);
        vcdp->declBus(c+7,"RISCV32I_SV Core Fetch_unit Jal_target", false,-1, 31,0);
        vcdp->declBus(c+8,"RISCV32I_SV Core Fetch_unit Jalr_target", false,-1, 31,0);
        vcdp->declBus(c+3,"RISCV32I_SV Core Fetch_unit Inst_mem_address", false,-1, 9,0);
        vcdp->declBus(c+78,"RISCV32I_SV Core Fetch_unit PC_OUT", false,-1, 31,0);
        vcdp->declBus(c+12,"RISCV32I_SV Core Fetch_unit PC_reg", false,-1, 31,0);
        vcdp->declBus(c+12,"RISCV32I_SV Core Fetch_unit PC", false,-1, 31,0);
        vcdp->declBus(c+114,"RISCV32I_SV Core Decode_unit DataWidth", false,-1, 31,0);
        vcdp->declBus(c+116,"RISCV32I_SV Core Decode_unit RegAddrWidth", false,-1, 31,0);
        vcdp->declBit(c+109,"RISCV32I_SV Core Decode_unit clock", false,-1);
        vcdp->declBit(c+110,"RISCV32I_SV Core Decode_unit reset", false,-1);
        vcdp->declBit(c+91,"RISCV32I_SV Core Decode_unit regEN_EX", false,-1);
        vcdp->declBit(c+92,"RISCV32I_SV Core Decode_unit regEN_MEM", false,-1);
        vcdp->declBit(c+95,"RISCV32I_SV Core Decode_unit regEN_WB", false,-1);
        vcdp->declBit(c+74,"RISCV32I_SV Core Decode_unit Memory_Read_EN", false,-1);
        vcdp->declBus(c+80,"RISCV32I_SV Core Decode_unit destReg_EX", false,-1, 4,0);
        vcdp->declBus(c+81,"RISCV32I_SV Core Decode_unit destReg_MEM", false,-1, 4,0);
        vcdp->declBus(c+79,"RISCV32I_SV Core Decode_unit destReg_WB", false,-1, 4,0);
        vcdp->declBus(c+11,"RISCV32I_SV Core Decode_unit Forwarded_Data_EX", false,-1, 31,0);
        vcdp->declBus(c+87,"RISCV32I_SV Core Decode_unit Forwarded_Data_MEM1", false,-1, 31,0);
        vcdp->declBus(c+2,"RISCV32I_SV Core Decode_unit Forwarded_Data_MEM2", false,-1, 31,0);
        vcdp->declBus(c+9,"RISCV32I_SV Core Decode_unit Forwarded_Data_WB", false,-1, 31,0);
        vcdp->declBus(c+1,"RISCV32I_SV Core Decode_unit Instruction_IN", false,-1, 31,0);
        vcdp->declBus(c+78,"RISCV32I_SV Core Decode_unit PC", false,-1, 31,0);
        vcdp->declBus(c+9,"RISCV32I_SV Core Decode_unit writeBackData", false,-1, 31,0);
        vcdp->declBit(c+5,"RISCV32I_SV Core Decode_unit Branch", false,-1);
        vcdp->declBit(c+91,"RISCV32I_SV Core Decode_unit regWriteEn", false,-1);
        vcdp->declBus(c+80,"RISCV32I_SV Core Decode_unit writeBackReg", false,-1, 4,0);
        vcdp->declBit(c+85,"RISCV32I_SV Core Decode_unit memRead", false,-1);
        vcdp->declBit(c+84,"RISCV32I_SV Core Decode_unit memtoReg", false,-1);
        vcdp->declBit(c+86,"RISCV32I_SV Core Decode_unit memWrite", false,-1);
        vcdp->declBit(c+10,"RISCV32I_SV Core Decode_unit FLUSH_REG", false,-1);
        vcdp->declBus(c+88,"RISCV32I_SV Core Decode_unit ALUOp", false,-1, 2,0);
        vcdp->declBus(c+4,"RISCV32I_SV Core Decode_unit next_PC_sel", false,-1, 1,0);
        vcdp->declBus(c+89,"RISCV32I_SV Core Decode_unit function3", false,-1, 2,0);
        vcdp->declBus(c+90,"RISCV32I_SV Core Decode_unit function7", false,-1, 1,0);
        vcdp->declBus(c+6,"RISCV32I_SV Core Decode_unit BRANCH_TARGET", false,-1, 31,0);
        vcdp->declBus(c+7,"RISCV32I_SV Core Decode_unit JAL_TARGET", false,-1, 31,0);
        vcdp->declBus(c+8,"RISCV32I_SV Core Decode_unit JALR_TARGET", false,-1, 31,0);
        vcdp->declBus(c+82,"RISCV32I_SV Core Decode_unit alu_src1", false,-1, 31,0);
        vcdp->declBus(c+83,"RISCV32I_SV Core Decode_unit alu_src2", false,-1, 31,0);
        vcdp->declBus(c+76,"RISCV32I_SV Core Decode_unit Mem_Data", false,-1, 31,0);
        vcdp->declBus(c+113,"RISCV32I_SV Core Decode_unit RegOut", false,-1, 31,0);
        vcdp->declBus(c+97,"RISCV32I_SV Core Decode_unit Instruction", false,-1, 31,0);
        vcdp->declBus(c+13,"RISCV32I_SV Core Decode_unit ImmOUT", false,-1, 31,0);
        vcdp->declBit(c+14,"RISCV32I_SV Core Decode_unit Branch_controller", false,-1);
        vcdp->declBit(c+98,"RISCV32I_SV Core Decode_unit Branch_control_unit", false,-1);
        vcdp->declBus(c+15,"RISCV32I_SV Core Decode_unit readData1", false,-1, 31,0);
        vcdp->declBus(c+16,"RISCV32I_SV Core Decode_unit readData2", false,-1, 31,0);
        vcdp->declBus(c+99,"RISCV32I_SV Core Decode_unit SRC_Reg_1", false,-1, 4,0);
        vcdp->declBus(c+100,"RISCV32I_SV Core Decode_unit SRC_Reg_2", false,-1, 4,0);
        vcdp->declBus(c+17,"RISCV32I_SV Core Decode_unit ImmSel", false,-1, 1,0);
        vcdp->declBus(c+18,"RISCV32I_SV Core Decode_unit SOURCE_A", false,-1, 31,0);
        vcdp->declBus(c+19,"RISCV32I_SV Core Decode_unit SOURCE_B", false,-1, 31,0);
        vcdp->declBus(c+20,"RISCV32I_SV Core Decode_unit Forwarded_SOURCE_A", false,-1, 31,0);
        vcdp->declBus(c+21,"RISCV32I_SV Core Decode_unit Forwarded_SOURCE_B", false,-1, 31,0);
        vcdp->declBus(c+22,"RISCV32I_SV Core Decode_unit OPERAND_A_SEL", false,-1, 1,0);
        vcdp->declBit(c+23,"RISCV32I_SV Core Decode_unit OPERAND_B_SEL", false,-1);
        vcdp->declBus(c+101,"RISCV32I_SV Core Decode_unit func3", false,-1, 2,0);
        vcdp->declBus(c+102,"RISCV32I_SV Core Decode_unit func7", false,-1, 1,0);
        vcdp->declBit(c+103,"RISCV32I_SV Core Decode_unit mem_Read", false,-1);
        vcdp->declBit(c+104,"RISCV32I_SV Core Decode_unit mem_write", false,-1);
        vcdp->declBit(c+24,"RISCV32I_SV Core Decode_unit regFileWriteEn", false,-1);
        vcdp->declBit(c+103,"RISCV32I_SV Core Decode_unit memtoRegister", false,-1);
        vcdp->declBus(c+25,"RISCV32I_SV Core Decode_unit ALU_Op", false,-1, 2,0);
        vcdp->declBus(c+105,"RISCV32I_SV Core Decode_unit destReg", false,-1, 4,0);
        vcdp->declBus(c+106,"RISCV32I_SV Core Decode_unit opcode", false,-1, 6,0);
        vcdp->declBus(c+26,"RISCV32I_SV Core Decode_unit I_imm", false,-1, 31,0);
        vcdp->declBus(c+27,"RISCV32I_SV Core Decode_unit S_imm", false,-1, 31,0);
        vcdp->declBus(c+28,"RISCV32I_SV Core Decode_unit U_imm", false,-1, 31,0);
        vcdp->declBus(c+107,"RISCV32I_SV Core Decode_unit instruction_imm", false,-1, 24,0);
        vcdp->declBus(c+29,"RISCV32I_SV Core Decode_unit op_A_sel", false,-1, 2,0);
        vcdp->declBus(c+30,"RISCV32I_SV Core Decode_unit op_B_sel", false,-1, 2,0);
        vcdp->declBus(c+114,"RISCV32I_SV Core Decode_unit No_of_registers", false,-1, 31,0);
        vcdp->declBus(c+114,"RISCV32I_SV Core Decode_unit RegisterFile DataWidth", false,-1, 31,0);
        vcdp->declBus(c+114,"RISCV32I_SV Core Decode_unit RegisterFile Registers", false,-1, 31,0);
        vcdp->declBus(c+116,"RISCV32I_SV Core Decode_unit RegisterFile AddrRegWidth", false,-1, 31,0);
        vcdp->declBit(c+109,"RISCV32I_SV Core Decode_unit RegisterFile clock", false,-1);
        vcdp->declBit(c+110,"RISCV32I_SV Core Decode_unit RegisterFile reset", false,-1);
        vcdp->declBit(c+95,"RISCV32I_SV Core Decode_unit RegisterFile writeEn", false,-1);
        vcdp->declBus(c+99,"RISCV32I_SV Core Decode_unit RegisterFile source1", false,-1, 4,0);
        vcdp->declBus(c+100,"RISCV32I_SV Core Decode_unit RegisterFile source2", false,-1, 4,0);
        vcdp->declBus(c+79,"RISCV32I_SV Core Decode_unit RegisterFile writeDataSel", false,-1, 4,0);
        vcdp->declBus(c+9,"RISCV32I_SV Core Decode_unit RegisterFile writeData", false,-1, 31,0);
        vcdp->declBus(c+15,"RISCV32I_SV Core Decode_unit RegisterFile readData1", false,-1, 31,0);
        vcdp->declBus(c+16,"RISCV32I_SV Core Decode_unit RegisterFile readData2", false,-1, 31,0);
        vcdp->declBus(c+113,"RISCV32I_SV Core Decode_unit RegisterFile Reg_Out", false,-1, 31,0);
        vcdp->declBus(c+114,"RISCV32I_SV Core Decode_unit RegisterFile number_of_registers", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+31+i*1,"RISCV32I_SV Core Decode_unit RegisterFile regFile", true,(i+0), 31,0);}}
        vcdp->declBus(c+63,"RISCV32I_SV Core Decode_unit RegisterFile i", false,-1, 31,0);
        vcdp->declBus(c+106,"RISCV32I_SV Core Decode_unit Control opcode", false,-1, 6,0);
        vcdp->declBit(c+98,"RISCV32I_SV Core Decode_unit Control branch_op", false,-1);
        vcdp->declBit(c+103,"RISCV32I_SV Core Decode_unit Control memRead", false,-1);
        vcdp->declBit(c+103,"RISCV32I_SV Core Decode_unit Control memtoReg", false,-1);
        vcdp->declBit(c+104,"RISCV32I_SV Core Decode_unit Control memWrite", false,-1);
        vcdp->declBit(c+24,"RISCV32I_SV Core Decode_unit Control regWriteEn", false,-1);
        vcdp->declBit(c+23,"RISCV32I_SV Core Decode_unit Control operand_B_sel", false,-1);
        vcdp->declBus(c+4,"RISCV32I_SV Core Decode_unit Control next_PC_sel", false,-1, 1,0);
        vcdp->declBus(c+22,"RISCV32I_SV Core Decode_unit Control operand_A_sel", false,-1, 1,0);
        vcdp->declBus(c+25,"RISCV32I_SV Core Decode_unit Control ALUOp", false,-1, 2,0);
        vcdp->declBus(c+17,"RISCV32I_SV Core Decode_unit Control extend_sel", false,-1, 1,0);
        vcdp->declBus(c+120,"RISCV32I_SV Core Decode_unit Control R_TYPE", false,-1, 6,0);
        vcdp->declBus(c+121,"RISCV32I_SV Core Decode_unit Control I_TYPE", false,-1, 6,0);
        vcdp->declBus(c+122,"RISCV32I_SV Core Decode_unit Control STORE", false,-1, 6,0);
        vcdp->declBus(c+123,"RISCV32I_SV Core Decode_unit Control LOAD", false,-1, 6,0);
        vcdp->declBus(c+124,"RISCV32I_SV Core Decode_unit Control BRANCH", false,-1, 6,0);
        vcdp->declBus(c+125,"RISCV32I_SV Core Decode_unit Control JALR", false,-1, 6,0);
        vcdp->declBus(c+126,"RISCV32I_SV Core Decode_unit Control JAL", false,-1, 6,0);
        vcdp->declBus(c+127,"RISCV32I_SV Core Decode_unit Control AUIPC", false,-1, 6,0);
        vcdp->declBus(c+128,"RISCV32I_SV Core Decode_unit Control LUI", false,-1, 6,0);
        vcdp->declBus(c+114,"RISCV32I_SV Core Decode_unit ImmediateGeneration DataWidth", false,-1, 31,0);
        vcdp->declBus(c+78,"RISCV32I_SV Core Decode_unit ImmediateGeneration pc", false,-1, 31,0);
        vcdp->declBus(c+107,"RISCV32I_SV Core Decode_unit ImmediateGeneration instruction", false,-1, 24,0);
        vcdp->declBus(c+26,"RISCV32I_SV Core Decode_unit ImmediateGeneration i_type", false,-1, 31,0);
        vcdp->declBus(c+28,"RISCV32I_SV Core Decode_unit ImmediateGeneration u_type", false,-1, 31,0);
        vcdp->declBus(c+27,"RISCV32I_SV Core Decode_unit ImmediateGeneration s_type", false,-1, 31,0);
        vcdp->declBus(c+6,"RISCV32I_SV Core Decode_unit ImmediateGeneration sb_type", false,-1, 31,0);
        vcdp->declBus(c+7,"RISCV32I_SV Core Decode_unit ImmediateGeneration uj_type", false,-1, 31,0);
        vcdp->declBus(c+64,"RISCV32I_SV Core Decode_unit ImmediateGeneration I_type", false,-1, 11,0);
        vcdp->declBus(c+65,"RISCV32I_SV Core Decode_unit ImmediateGeneration U_type", false,-1, 19,0);
        vcdp->declBus(c+66,"RISCV32I_SV Core Decode_unit ImmediateGeneration S_type", false,-1, 11,0);
        vcdp->declBus(c+67,"RISCV32I_SV Core Decode_unit ImmediateGeneration SB_type", false,-1, 12,0);
        vcdp->declBus(c+68,"RISCV32I_SV Core Decode_unit ImmediateGeneration UJ_type", false,-1, 20,0);
        vcdp->declBus(c+114,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard DataWidth", false,-1, 31,0);
        vcdp->declBus(c+116,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard RegAddrWidth", false,-1, 31,0);
        vcdp->declBit(c+92,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard Reg_File_EN_Memory_stage", false,-1);
        vcdp->declBit(c+95,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard Reg_File_EN_WrBk_stage", false,-1);
        vcdp->declBit(c+91,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard Reg_File_EN_EXE_stage", false,-1);
        vcdp->declBit(c+74,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard Mem_Read_EN", false,-1);
        vcdp->declBus(c+81,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard WriteBack_reg_Memory_stage", false,-1, 4,0);
        vcdp->declBus(c+79,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard WriteBack_reg_WrBk_stage", false,-1, 4,0);
        vcdp->declBus(c+80,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard WriteBack_reg_EXE_stage", false,-1, 4,0);
        vcdp->declBus(c+99,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard ID_EX_RS1", false,-1, 4,0);
        vcdp->declBus(c+100,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard ID_EX_RS2", false,-1, 4,0);
        vcdp->declBus(c+29,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard Operand_A_control", false,-1, 2,0);
        vcdp->declBus(c+30,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard Operand_B_control", false,-1, 2,0);
        vcdp->declBus(c+114,"RISCV32I_SV Core Decode_unit Branch_Controller_Unit DataWidth", false,-1, 31,0);
        vcdp->declBus(c+101,"RISCV32I_SV Core Decode_unit Branch_Controller_Unit function3", false,-1, 2,0);
        vcdp->declBus(c+20,"RISCV32I_SV Core Decode_unit Branch_Controller_Unit SRC_1", false,-1, 31,0);
        vcdp->declBus(c+21,"RISCV32I_SV Core Decode_unit Branch_Controller_Unit SRC_2", false,-1, 31,0);
        vcdp->declBit(c+14,"RISCV32I_SV Core Decode_unit Branch_Controller_Unit Branch", false,-1);
        vcdp->declBus(c+114,"RISCV32I_SV Core Execute_unit DataWidth", false,-1, 31,0);
        vcdp->declBus(c+115,"RISCV32I_SV Core Execute_unit AddrWidth", false,-1, 31,0);
        vcdp->declBus(c+116,"RISCV32I_SV Core Execute_unit RegAddrWidth", false,-1, 31,0);
        vcdp->declBit(c+109,"RISCV32I_SV Core Execute_unit clock", false,-1);
        vcdp->declBit(c+110,"RISCV32I_SV Core Execute_unit reset", false,-1);
        vcdp->declBus(c+76,"RISCV32I_SV Core Execute_unit DataMemDataIn", false,-1, 31,0);
        vcdp->declBus(c+82,"RISCV32I_SV Core Execute_unit Operand_A", false,-1, 31,0);
        vcdp->declBus(c+83,"RISCV32I_SV Core Execute_unit Operand_B", false,-1, 31,0);
        vcdp->declBus(c+89,"RISCV32I_SV Core Execute_unit Func3", false,-1, 2,0);
        vcdp->declBus(c+90,"RISCV32I_SV Core Execute_unit Func7", false,-1, 1,0);
        vcdp->declBus(c+88,"RISCV32I_SV Core Execute_unit ALU_op", false,-1, 2,0);
        vcdp->declBit(c+84,"RISCV32I_SV Core Execute_unit memtoreg", false,-1);
        vcdp->declBit(c+86,"RISCV32I_SV Core Execute_unit writeEn", false,-1);
        vcdp->declBit(c+85,"RISCV32I_SV Core Execute_unit readEn", false,-1);
        vcdp->declBit(c+91,"RISCV32I_SV Core Execute_unit regfileEN", false,-1);
        vcdp->declBus(c+80,"RISCV32I_SV Core Execute_unit writeBack_reg", false,-1, 4,0);
        vcdp->declBus(c+73,"RISCV32I_SV Core Execute_unit Func_3", false,-1, 2,0);
        vcdp->declBit(c+92,"RISCV32I_SV Core Execute_unit Reg_EN", false,-1);
        vcdp->declBit(c+74,"RISCV32I_SV Core Execute_unit MEM_READ", false,-1);
        vcdp->declBit(c+75,"RISCV32I_SV Core Execute_unit MEM_WRITE", false,-1);
        vcdp->declBit(c+93,"RISCV32I_SV Core Execute_unit MEM_to_REG", false,-1);
        vcdp->declBus(c+81,"RISCV32I_SV Core Execute_unit WB_REG", false,-1, 4,0);
        vcdp->declBus(c+11,"RISCV32I_SV Core Execute_unit ALU_Result", false,-1, 31,0);
        vcdp->declBus(c+87,"RISCV32I_SV Core Execute_unit ALU_result_delay", false,-1, 31,0);
        vcdp->declBus(c+72,"RISCV32I_SV Core Execute_unit D_MEM_ADDR", false,-1, 9,0);
        vcdp->declBus(c+71,"RISCV32I_SV Core Execute_unit DataIN_MEM", false,-1, 31,0);
        vcdp->declBus(c+69,"RISCV32I_SV Core Execute_unit ALU_MUX_CONTROL", false,-1, 5,0);
        vcdp->declBus(c+70,"RISCV32I_SV Core Execute_unit Mem_addr", false,-1, 9,0);
        vcdp->declBus(c+114,"RISCV32I_SV Core Execute_unit alu DataWidth", false,-1, 31,0);
        vcdp->declBus(c+82,"RISCV32I_SV Core Execute_unit alu operand_A", false,-1, 31,0);
        vcdp->declBus(c+83,"RISCV32I_SV Core Execute_unit alu operand_B", false,-1, 31,0);
        vcdp->declBus(c+69,"RISCV32I_SV Core Execute_unit alu ALU_Control", false,-1, 5,0);
        vcdp->declBus(c+11,"RISCV32I_SV Core Execute_unit alu ALU_result", false,-1, 31,0);
        vcdp->declBus(c+108,"RISCV32I_SV Core Execute_unit alu shamt", false,-1, 4,0);
        vcdp->declBus(c+89,"RISCV32I_SV Core Execute_unit aluControl func3", false,-1, 2,0);
        vcdp->declBus(c+90,"RISCV32I_SV Core Execute_unit aluControl func7", false,-1, 1,0);
        vcdp->declBus(c+88,"RISCV32I_SV Core Execute_unit aluControl ALU_Operation", false,-1, 2,0);
        vcdp->declBus(c+69,"RISCV32I_SV Core Execute_unit aluControl ALU_Control", false,-1, 5,0);
        vcdp->declBus(c+114,"RISCV32I_SV Core MEM_WB_REG DataWidth", false,-1, 31,0);
        vcdp->declBus(c+116,"RISCV32I_SV Core MEM_WB_REG RegAddrWidth", false,-1, 31,0);
        vcdp->declBit(c+109,"RISCV32I_SV Core MEM_WB_REG clock", false,-1);
        vcdp->declBit(c+110,"RISCV32I_SV Core MEM_WB_REG reset", false,-1);
        vcdp->declBit(c+92,"RISCV32I_SV Core MEM_WB_REG RegEn_IN", false,-1);
        vcdp->declBus(c+87,"RISCV32I_SV Core MEM_WB_REG ALU_result_IN", false,-1, 31,0);
        vcdp->declBus(c+2,"RISCV32I_SV Core MEM_WB_REG Mem_Data_IN", false,-1, 31,0);
        vcdp->declBus(c+81,"RISCV32I_SV Core MEM_WB_REG WB_REG_IN", false,-1, 4,0);
        vcdp->declBit(c+93,"RISCV32I_SV Core MEM_WB_REG Mem_to_Reg_IN", false,-1);
        vcdp->declBit(c+95,"RISCV32I_SV Core MEM_WB_REG RegEn_OUT", false,-1);
        vcdp->declBus(c+77,"RISCV32I_SV Core MEM_WB_REG ALU_result_OUT", false,-1, 31,0);
        vcdp->declBus(c+94,"RISCV32I_SV Core MEM_WB_REG Mem_Data_OUT", false,-1, 31,0);
        vcdp->declBus(c+79,"RISCV32I_SV Core MEM_WB_REG WB_REG_OUT", false,-1, 4,0);
        vcdp->declBit(c+96,"RISCV32I_SV Core MEM_WB_REG Mem_to_Reg_OUT", false,-1);
        vcdp->declBus(c+114,"RISCV32I_SV Core WriteBack_unit DataWidth", false,-1, 31,0);
        vcdp->declBus(c+116,"RISCV32I_SV Core WriteBack_unit RegAddrWidth", false,-1, 31,0);
        vcdp->declBus(c+79,"RISCV32I_SV Core WriteBack_unit writeback_reg", false,-1, 4,0);
        vcdp->declBit(c+96,"RISCV32I_SV Core WriteBack_unit memtoreg", false,-1);
        vcdp->declBus(c+77,"RISCV32I_SV Core WriteBack_unit Data_from_ALU", false,-1, 31,0);
        vcdp->declBus(c+94,"RISCV32I_SV Core WriteBack_unit Data_from_Mem", false,-1, 31,0);
        vcdp->declBus(c+9,"RISCV32I_SV Core WriteBack_unit WriteBackData", false,-1, 31,0);
        vcdp->declBus(c+79,"RISCV32I_SV Core WriteBack_unit writeBack_reg", false,-1, 4,0);
        vcdp->declBus(c+114,"RISCV32I_SV DataMemory DataWidth", false,-1, 31,0);
        vcdp->declBus(c+115,"RISCV32I_SV DataMemory AddrWidth", false,-1, 31,0);
        vcdp->declBit(c+109,"RISCV32I_SV DataMemory clock", false,-1);
        vcdp->declBit(c+74,"RISCV32I_SV DataMemory readEn", false,-1);
        vcdp->declBit(c+75,"RISCV32I_SV DataMemory writeEn", false,-1);
        vcdp->declBus(c+73,"RISCV32I_SV DataMemory func_3", false,-1, 2,0);
        vcdp->declBus(c+71,"RISCV32I_SV DataMemory DataIn", false,-1, 31,0);
        vcdp->declBus(c+72,"RISCV32I_SV DataMemory Address", false,-1, 9,0);
        vcdp->declBus(c+2,"RISCV32I_SV DataMemory DataOut", false,-1, 31,0);
        vcdp->declBus(c+129,"RISCV32I_SV DataMemory MEM_DEPTH", false,-1, 31,0);
        vcdp->declBus(c+114,"RISCV32I_SV InstructionMemory DataWidth", false,-1, 31,0);
        vcdp->declBus(c+115,"RISCV32I_SV InstructionMemory AddrWidth", false,-1, 31,0);
        vcdp->declBit(c+109,"RISCV32I_SV InstructionMemory clock", false,-1);
        vcdp->declBus(c+3,"RISCV32I_SV InstructionMemory address", false,-1, 9,0);
        vcdp->declBit(c+119,"RISCV32I_SV InstructionMemory i_write", false,-1);
        vcdp->declBus(c+117,"RISCV32I_SV InstructionMemory i_data", false,-1, 31,0);
        vcdp->declBus(c+1,"RISCV32I_SV InstructionMemory readData", false,-1, 31,0);
        vcdp->declBus(c+129,"RISCV32I_SV InstructionMemory DEPTH", false,-1, 31,0);
    }
}

void VRISCV32I_SV::traceFullThis__1(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRISCV32I_SV* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->fullIData(oldp+0,(vlTOPp->RISCV32I_SV__DOT__Ins_mem_out),32);
        vcdp->fullIData(oldp+1,(vlTOPp->RISCV32I_SV__DOT__D_mem_out),32);
        vcdp->fullSData(oldp+2,((0x3ffU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Fetch_unit__DOT__PC_reg 
                                           >> 2U))),10);
        vcdp->fullCData(oldp+3,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__NEXT_PC_SEL),2);
        vcdp->fullBit(oldp+4,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__BRANCH));
        vcdp->fullIData(oldp+5,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__BRANCH_TARG),32);
        vcdp->fullIData(oldp+6,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__JAL_TARG),32);
        vcdp->fullIData(oldp+7,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__JALR_TARG),32);
        vcdp->fullIData(oldp+8,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__WB_DATA),32);
        vcdp->fullBit(oldp+9,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__FLUSH));
        vcdp->fullIData(oldp+10,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__ALU_RESULT),32);
        vcdp->fullIData(oldp+11,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Fetch_unit__DOT__PC_reg),32);
        vcdp->fullIData(oldp+12,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmOUT),32);
        vcdp->fullBit(oldp+13,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Branch_controller));
        vcdp->fullIData(oldp+14,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__readData1),32);
        vcdp->fullIData(oldp+15,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__readData2),32);
        vcdp->fullCData(oldp+16,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmSel),2);
        vcdp->fullIData(oldp+17,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__SOURCE_A),32);
        vcdp->fullIData(oldp+18,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__SOURCE_B),32);
        vcdp->fullIData(oldp+19,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Forwarded_SOURCE_A),32);
        vcdp->fullIData(oldp+20,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Forwarded_SOURCE_B),32);
        vcdp->fullCData(oldp+21,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__OPERAND_A_SEL),2);
        vcdp->fullBit(oldp+22,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__OPERAND_B_SEL));
        vcdp->fullBit(oldp+23,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__regFileWriteEn));
        vcdp->fullCData(oldp+24,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ALU_Op),3);
        vcdp->fullIData(oldp+25,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__I_imm),32);
        vcdp->fullIData(oldp+26,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__S_imm),32);
        vcdp->fullIData(oldp+27,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__U_imm),32);
        vcdp->fullCData(oldp+28,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__op_A_sel),3);
        vcdp->fullCData(oldp+29,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__op_B_sel),3);
        vcdp->fullIData(oldp+30,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[0]),32);
        vcdp->fullIData(oldp+31,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[1]),32);
        vcdp->fullIData(oldp+32,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[2]),32);
        vcdp->fullIData(oldp+33,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[3]),32);
        vcdp->fullIData(oldp+34,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[4]),32);
        vcdp->fullIData(oldp+35,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[5]),32);
        vcdp->fullIData(oldp+36,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[6]),32);
        vcdp->fullIData(oldp+37,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[7]),32);
        vcdp->fullIData(oldp+38,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[8]),32);
        vcdp->fullIData(oldp+39,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[9]),32);
        vcdp->fullIData(oldp+40,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[10]),32);
        vcdp->fullIData(oldp+41,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[11]),32);
        vcdp->fullIData(oldp+42,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[12]),32);
        vcdp->fullIData(oldp+43,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[13]),32);
        vcdp->fullIData(oldp+44,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[14]),32);
        vcdp->fullIData(oldp+45,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[15]),32);
        vcdp->fullIData(oldp+46,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[16]),32);
        vcdp->fullIData(oldp+47,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[17]),32);
        vcdp->fullIData(oldp+48,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[18]),32);
        vcdp->fullIData(oldp+49,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[19]),32);
        vcdp->fullIData(oldp+50,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[20]),32);
        vcdp->fullIData(oldp+51,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[21]),32);
        vcdp->fullIData(oldp+52,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[22]),32);
        vcdp->fullIData(oldp+53,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[23]),32);
        vcdp->fullIData(oldp+54,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[24]),32);
        vcdp->fullIData(oldp+55,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[25]),32);
        vcdp->fullIData(oldp+56,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[26]),32);
        vcdp->fullIData(oldp+57,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[27]),32);
        vcdp->fullIData(oldp+58,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[28]),32);
        vcdp->fullIData(oldp+59,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[29]),32);
        vcdp->fullIData(oldp+60,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[30]),32);
        vcdp->fullIData(oldp+61,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[31]),32);
        vcdp->fullIData(oldp+62,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__i),32);
        vcdp->fullSData(oldp+63,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__I_type),12);
        vcdp->fullIData(oldp+64,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__U_type),20);
        vcdp->fullSData(oldp+65,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__S_type),12);
        vcdp->fullSData(oldp+66,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__SB_type),13);
        vcdp->fullIData(oldp+67,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__UJ_type),21);
        vcdp->fullCData(oldp+68,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Execute_unit__DOT__ALU_MUX_CONTROL),6);
        vcdp->fullSData(oldp+69,((0x3ffU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__ALU_RESULT)),10);
        vcdp->fullIData(oldp+70,(vlTOPp->RISCV32I_SV__DOT__D_mem_data_in),32);
        vcdp->fullSData(oldp+71,(vlTOPp->RISCV32I_SV__DOT__D_mem_addr_in),10);
        vcdp->fullCData(oldp+72,(vlTOPp->RISCV32I_SV__DOT__function3),3);
        vcdp->fullBit(oldp+73,(vlTOPp->RISCV32I_SV__DOT__D_mem_readEn));
        vcdp->fullBit(oldp+74,(vlTOPp->RISCV32I_SV__DOT__D_mem_writeEn));
        vcdp->fullIData(oldp+75,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Mem_WB_Data),32);
        vcdp->fullIData(oldp+76,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__ALUresult),32);
        vcdp->fullIData(oldp+77,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__PROGRAM_COUNTER),32);
        vcdp->fullCData(oldp+78,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__reg_WB),5);
        vcdp->fullCData(oldp+79,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__DEST_REG),5);
        vcdp->fullCData(oldp+80,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__DEST_REGISTER),5);
        vcdp->fullIData(oldp+81,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__SOURCE1),32);
        vcdp->fullIData(oldp+82,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__SOURCE2),32);
        vcdp->fullBit(oldp+83,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__MEM_TO_REG_DEC_EX));
        vcdp->fullBit(oldp+84,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__MEM_READ_EN_DEC_EX));
        vcdp->fullBit(oldp+85,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__MEM_WRITE_EN_DEC_EX));
        vcdp->fullIData(oldp+86,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__aluOutput),32);
        vcdp->fullCData(oldp+87,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__ALU_OPCODE),3);
        vcdp->fullCData(oldp+88,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__FUNC_3),3);
        vcdp->fullCData(oldp+89,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__FUNC_7),2);
        vcdp->fullBit(oldp+90,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__RF_EN_DEC_to_EX));
        vcdp->fullBit(oldp+91,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__RF_EN_EX_to_WB));
        vcdp->fullBit(oldp+92,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__mem_to_register));
        vcdp->fullIData(oldp+93,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Mem_Data_WB),32);
        vcdp->fullBit(oldp+94,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__EN_reg_file));
        vcdp->fullBit(oldp+95,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Mem2Reg));
        vcdp->fullIData(oldp+96,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction),32);
        vcdp->fullBit(oldp+97,((0x63U == (0x7fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction))));
        vcdp->fullCData(oldp+98,((0x1fU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
                                           >> 0xfU))),5);
        vcdp->fullCData(oldp+99,((0x1fU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
                                           >> 0x14U))),5);
        vcdp->fullCData(oldp+100,((7U & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
                                         >> 0xcU))),3);
        vcdp->fullCData(oldp+101,((3U & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
                                         >> 0x1eU))),2);
        vcdp->fullBit(oldp+102,((3U == (0x7fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction))));
        vcdp->fullBit(oldp+103,((0x23U == (0x7fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction))));
        vcdp->fullCData(oldp+104,((0x1fU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
                                            >> 7U))),5);
        vcdp->fullCData(oldp+105,((0x7fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction)),7);
        vcdp->fullIData(oldp+106,((0x1ffffffU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
                                                 >> 7U))),25);
        vcdp->fullCData(oldp+107,((0x1fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__SOURCE2)),5);
        vcdp->fullBit(oldp+108,(vlTOPp->clock));
        vcdp->fullBit(oldp+109,(vlTOPp->reset));
        vcdp->fullIData(oldp+110,(vlTOPp->program_in),32);
        vcdp->fullSData(oldp+111,(vlTOPp->address_in),10);
        vcdp->fullIData(oldp+112,(vlTOPp->Reg_Out),32);
        vcdp->fullIData(oldp+113,(0x20U),32);
        vcdp->fullIData(oldp+114,(0xaU),32);
        vcdp->fullIData(oldp+115,(5U),32);
        vcdp->fullIData(oldp+116,(0U),32);
        vcdp->fullBit(oldp+117,(1U));
        vcdp->fullBit(oldp+118,(0U));
        vcdp->fullCData(oldp+119,(0x33U),7);
        vcdp->fullCData(oldp+120,(0x13U),7);
        vcdp->fullCData(oldp+121,(0x23U),7);
        vcdp->fullCData(oldp+122,(3U),7);
        vcdp->fullCData(oldp+123,(0x63U),7);
        vcdp->fullCData(oldp+124,(0x67U),7);
        vcdp->fullCData(oldp+125,(0x6fU),7);
        vcdp->fullCData(oldp+126,(0x17U),7);
        vcdp->fullCData(oldp+127,(0x37U),7);
        vcdp->fullIData(oldp+128,(0x400U),32);
    }
}
