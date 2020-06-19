// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISCV32I_SV__Syms.h"


//======================

void VRISCV32I_SV::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VRISCV32I_SV::traceInit, &VRISCV32I_SV::traceFull, &VRISCV32I_SV::traceChg, this);
}
void VRISCV32I_SV::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VRISCV32I_SV* t=(VRISCV32I_SV*)userthis;
    VRISCV32I_SV__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VRISCV32I_SV::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VRISCV32I_SV* t=(VRISCV32I_SV*)userthis;
    VRISCV32I_SV__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VRISCV32I_SV::traceInitThis(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRISCV32I_SV* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VRISCV32I_SV::traceFullThis(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRISCV32I_SV* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VRISCV32I_SV::traceInitThis__1(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRISCV32I_SV* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+109,"clock",-1);
	vcdp->declBit  (c+110,"reset",-1);
	vcdp->declBus  (c+111,"program_in",-1,31,0);
	vcdp->declBus  (c+112,"address_in",-1,9,0);
	vcdp->declBus  (c+113,"Reg_Out",-1,31,0);
	vcdp->declBus  (c+114,"RISCV32I_SV DataWidth",-1,31,0);
	vcdp->declBus  (c+115,"RISCV32I_SV AddrWidth",-1,31,0);
	vcdp->declBus  (c+116,"RISCV32I_SV RegAddrWidth",-1,31,0);
	vcdp->declBit  (c+109,"RISCV32I_SV clock",-1);
	vcdp->declBit  (c+110,"RISCV32I_SV reset",-1);
	vcdp->declBus  (c+111,"RISCV32I_SV program_in",-1,31,0);
	vcdp->declBus  (c+112,"RISCV32I_SV address_in",-1,9,0);
	vcdp->declBus  (c+113,"RISCV32I_SV Reg_Out",-1,31,0);
	vcdp->declBus  (c+1,"RISCV32I_SV Ins_mem_out",-1,31,0);
	vcdp->declBus  (c+2,"RISCV32I_SV D_mem_out",-1,31,0);
	vcdp->declBus  (c+117,"RISCV32I_SV Ins_mem_data_in",-1,31,0);
	vcdp->declBus  (c+71,"RISCV32I_SV D_mem_data_in",-1,31,0);
	vcdp->declBus  (c+3,"RISCV32I_SV Ins_mem_addr_in",-1,9,0);
	vcdp->declBus  (c+72,"RISCV32I_SV D_mem_addr_in",-1,9,0);
	vcdp->declBus  (c+73,"RISCV32I_SV function3",-1,2,0);
	vcdp->declBit  (c+118,"RISCV32I_SV Ins_mem_readEn",-1);
	vcdp->declBit  (c+74,"RISCV32I_SV D_mem_readEn",-1);
	vcdp->declBit  (c+119,"RISCV32I_SV Ins_mem_writeEn",-1);
	vcdp->declBit  (c+75,"RISCV32I_SV D_mem_writeEn",-1);
	vcdp->declBus  (c+114,"RISCV32I_SV Core DataWidth",-1,31,0);
	vcdp->declBus  (c+115,"RISCV32I_SV Core AddrWidth",-1,31,0);
	vcdp->declBus  (c+116,"RISCV32I_SV Core RegAddrWidth",-1,31,0);
	vcdp->declBit  (c+109,"RISCV32I_SV Core clock",-1);
	vcdp->declBit  (c+110,"RISCV32I_SV Core reset",-1);
	vcdp->declBus  (c+111,"RISCV32I_SV Core program_in",-1,31,0);
	vcdp->declBus  (c+112,"RISCV32I_SV Core address_in",-1,9,0);
	vcdp->declBus  (c+1,"RISCV32I_SV Core Inst_mem_dataOut",-1,31,0);
	vcdp->declBus  (c+2,"RISCV32I_SV Core Data_mem_dataOut",-1,31,0);
	vcdp->declBus  (c+117,"RISCV32I_SV Core Inst_mem_dataIn",-1,31,0);
	vcdp->declBus  (c+71,"RISCV32I_SV Core Data_mem_dataIn",-1,31,0);
	vcdp->declBus  (c+3,"RISCV32I_SV Core Inst_mem_address",-1,9,0);
	vcdp->declBus  (c+72,"RISCV32I_SV Core Data_mem_address",-1,9,0);
	vcdp->declBit  (c+118,"RISCV32I_SV Core Inst_mem_read_en",-1);
	vcdp->declBit  (c+74,"RISCV32I_SV Core Data_mem_read_en",-1);
	vcdp->declBit  (c+119,"RISCV32I_SV Core Inst_mem_write_en",-1);
	vcdp->declBit  (c+75,"RISCV32I_SV Core Data_mem_write_en",-1);
	vcdp->declBus  (c+73,"RISCV32I_SV Core func3",-1,2,0);
	vcdp->declBus  (c+113,"RISCV32I_SV Core reg_out",-1,31,0);
	vcdp->declBus  (c+76,"RISCV32I_SV Core Mem_WB_Data",-1,31,0);
	vcdp->declBus  (c+4,"RISCV32I_SV Core NEXT_PC_SEL",-1,1,0);
	vcdp->declBit  (c+5,"RISCV32I_SV Core BRANCH",-1);
	vcdp->declBus  (c+77,"RISCV32I_SV Core ALUresult",-1,31,0);
	vcdp->declBus  (c+78,"RISCV32I_SV Core PROGRAM_COUNTER",-1,31,0);
	vcdp->declBus  (c+6,"RISCV32I_SV Core BRANCH_TARG",-1,31,0);
	vcdp->declBus  (c+7,"RISCV32I_SV Core JAL_TARG",-1,31,0);
	vcdp->declBus  (c+8,"RISCV32I_SV Core JALR_TARG",-1,31,0);
	vcdp->declBus  (c+9,"RISCV32I_SV Core WB_DATA",-1,31,0);
	vcdp->declBus  (c+79,"RISCV32I_SV Core WB_REG",-1,4,0);
	vcdp->declBus  (c+80,"RISCV32I_SV Core DEST_REG",-1,4,0);
	vcdp->declBus  (c+81,"RISCV32I_SV Core DEST_REGISTER",-1,4,0);
	vcdp->declBus  (c+82,"RISCV32I_SV Core SOURCE1",-1,31,0);
	vcdp->declBus  (c+83,"RISCV32I_SV Core SOURCE2",-1,31,0);
	vcdp->declBit  (c+84,"RISCV32I_SV Core MEM_TO_REG_DEC_EX",-1);
	vcdp->declBit  (c+85,"RISCV32I_SV Core MEM_READ_EN_DEC_EX",-1);
	vcdp->declBit  (c+86,"RISCV32I_SV Core MEM_WRITE_EN_DEC_EX",-1);
	vcdp->declBus  (c+87,"RISCV32I_SV Core aluOutput",-1,31,0);
	vcdp->declBus  (c+88,"RISCV32I_SV Core ALU_OPCODE",-1,2,0);
	vcdp->declBus  (c+89,"RISCV32I_SV Core FUNC_3",-1,2,0);
	vcdp->declBus  (c+90,"RISCV32I_SV Core FUNC_7",-1,1,0);
	vcdp->declBit  (c+91,"RISCV32I_SV Core RF_EN_DEC_to_EX",-1);
	vcdp->declBit  (c+92,"RISCV32I_SV Core RF_EN_EX_to_WB",-1);
	vcdp->declBit  (c+10,"RISCV32I_SV Core FLUSH",-1);
	vcdp->declBit  (c+93,"RISCV32I_SV Core mem_to_register",-1);
	vcdp->declBus  (c+94,"RISCV32I_SV Core Mem_Data_WB",-1,31,0);
	vcdp->declBus  (c+11,"RISCV32I_SV Core ALU_RESULT",-1,31,0);
	vcdp->declBus  (c+79,"RISCV32I_SV Core reg_WB",-1,4,0);
	vcdp->declBit  (c+95,"RISCV32I_SV Core EN_reg_file",-1);
	vcdp->declBit  (c+96,"RISCV32I_SV Core Mem2Reg",-1);
	vcdp->declBus  (c+114,"RISCV32I_SV Core Fetch_unit DataWidth",-1,31,0);
	vcdp->declBus  (c+115,"RISCV32I_SV Core Fetch_unit AddrWidth",-1,31,0);
	vcdp->declBit  (c+109,"RISCV32I_SV Core Fetch_unit clock",-1);
	vcdp->declBit  (c+110,"RISCV32I_SV Core Fetch_unit reset",-1);
	vcdp->declBus  (c+4,"RISCV32I_SV Core Fetch_unit next_PC_sel",-1,1,0);
	vcdp->declBit  (c+5,"RISCV32I_SV Core Fetch_unit Branch",-1);
	vcdp->declBit  (c+10,"RISCV32I_SV Core Fetch_unit flush",-1);
	vcdp->declBus  (c+6,"RISCV32I_SV Core Fetch_unit Branch_target",-1,31,0);
	vcdp->declBus  (c+7,"RISCV32I_SV Core Fetch_unit Jal_target",-1,31,0);
	vcdp->declBus  (c+8,"RISCV32I_SV Core Fetch_unit Jalr_target",-1,31,0);
	vcdp->declBus  (c+3,"RISCV32I_SV Core Fetch_unit Inst_mem_address",-1,9,0);
	vcdp->declBus  (c+78,"RISCV32I_SV Core Fetch_unit PC_OUT",-1,31,0);
	vcdp->declBus  (c+12,"RISCV32I_SV Core Fetch_unit PC_reg",-1,31,0);
	vcdp->declBus  (c+12,"RISCV32I_SV Core Fetch_unit PC",-1,31,0);
	vcdp->declBus  (c+114,"RISCV32I_SV Core Decode_unit DataWidth",-1,31,0);
	vcdp->declBus  (c+116,"RISCV32I_SV Core Decode_unit RegAddrWidth",-1,31,0);
	vcdp->declBit  (c+109,"RISCV32I_SV Core Decode_unit clock",-1);
	vcdp->declBit  (c+110,"RISCV32I_SV Core Decode_unit reset",-1);
	vcdp->declBit  (c+91,"RISCV32I_SV Core Decode_unit regEN_EX",-1);
	vcdp->declBit  (c+92,"RISCV32I_SV Core Decode_unit regEN_MEM",-1);
	vcdp->declBit  (c+95,"RISCV32I_SV Core Decode_unit regEN_WB",-1);
	vcdp->declBit  (c+74,"RISCV32I_SV Core Decode_unit Memory_Read_EN",-1);
	vcdp->declBus  (c+80,"RISCV32I_SV Core Decode_unit destReg_EX",-1,4,0);
	vcdp->declBus  (c+81,"RISCV32I_SV Core Decode_unit destReg_MEM",-1,4,0);
	vcdp->declBus  (c+79,"RISCV32I_SV Core Decode_unit destReg_WB",-1,4,0);
	vcdp->declBus  (c+11,"RISCV32I_SV Core Decode_unit Forwarded_Data_EX",-1,31,0);
	vcdp->declBus  (c+87,"RISCV32I_SV Core Decode_unit Forwarded_Data_MEM1",-1,31,0);
	vcdp->declBus  (c+2,"RISCV32I_SV Core Decode_unit Forwarded_Data_MEM2",-1,31,0);
	vcdp->declBus  (c+9,"RISCV32I_SV Core Decode_unit Forwarded_Data_WB",-1,31,0);
	vcdp->declBus  (c+1,"RISCV32I_SV Core Decode_unit Instruction_IN",-1,31,0);
	vcdp->declBus  (c+78,"RISCV32I_SV Core Decode_unit PC",-1,31,0);
	vcdp->declBus  (c+9,"RISCV32I_SV Core Decode_unit writeBackData",-1,31,0);
	vcdp->declBit  (c+5,"RISCV32I_SV Core Decode_unit Branch",-1);
	vcdp->declBit  (c+91,"RISCV32I_SV Core Decode_unit regWriteEn",-1);
	vcdp->declBus  (c+80,"RISCV32I_SV Core Decode_unit writeBackReg",-1,4,0);
	vcdp->declBit  (c+85,"RISCV32I_SV Core Decode_unit memRead",-1);
	vcdp->declBit  (c+84,"RISCV32I_SV Core Decode_unit memtoReg",-1);
	vcdp->declBit  (c+86,"RISCV32I_SV Core Decode_unit memWrite",-1);
	vcdp->declBit  (c+10,"RISCV32I_SV Core Decode_unit FLUSH_REG",-1);
	vcdp->declBus  (c+88,"RISCV32I_SV Core Decode_unit ALUOp",-1,2,0);
	vcdp->declBus  (c+4,"RISCV32I_SV Core Decode_unit next_PC_sel",-1,1,0);
	vcdp->declBus  (c+89,"RISCV32I_SV Core Decode_unit function3",-1,2,0);
	vcdp->declBus  (c+90,"RISCV32I_SV Core Decode_unit function7",-1,1,0);
	vcdp->declBus  (c+6,"RISCV32I_SV Core Decode_unit BRANCH_TARGET",-1,31,0);
	vcdp->declBus  (c+7,"RISCV32I_SV Core Decode_unit JAL_TARGET",-1,31,0);
	vcdp->declBus  (c+8,"RISCV32I_SV Core Decode_unit JALR_TARGET",-1,31,0);
	vcdp->declBus  (c+82,"RISCV32I_SV Core Decode_unit alu_src1",-1,31,0);
	vcdp->declBus  (c+83,"RISCV32I_SV Core Decode_unit alu_src2",-1,31,0);
	vcdp->declBus  (c+76,"RISCV32I_SV Core Decode_unit Mem_Data",-1,31,0);
	vcdp->declBus  (c+113,"RISCV32I_SV Core Decode_unit RegOut",-1,31,0);
	vcdp->declBus  (c+97,"RISCV32I_SV Core Decode_unit Instruction",-1,31,0);
	vcdp->declBus  (c+13,"RISCV32I_SV Core Decode_unit ImmOUT",-1,31,0);
	vcdp->declBit  (c+14,"RISCV32I_SV Core Decode_unit Branch_controller",-1);
	vcdp->declBit  (c+98,"RISCV32I_SV Core Decode_unit Branch_control_unit",-1);
	vcdp->declBus  (c+15,"RISCV32I_SV Core Decode_unit readData1",-1,31,0);
	vcdp->declBus  (c+16,"RISCV32I_SV Core Decode_unit readData2",-1,31,0);
	vcdp->declBus  (c+99,"RISCV32I_SV Core Decode_unit SRC_Reg_1",-1,4,0);
	vcdp->declBus  (c+100,"RISCV32I_SV Core Decode_unit SRC_Reg_2",-1,4,0);
	vcdp->declBus  (c+17,"RISCV32I_SV Core Decode_unit ImmSel",-1,1,0);
	vcdp->declBus  (c+18,"RISCV32I_SV Core Decode_unit SOURCE_A",-1,31,0);
	vcdp->declBus  (c+19,"RISCV32I_SV Core Decode_unit SOURCE_B",-1,31,0);
	vcdp->declBus  (c+20,"RISCV32I_SV Core Decode_unit Forwarded_SOURCE_A",-1,31,0);
	vcdp->declBus  (c+21,"RISCV32I_SV Core Decode_unit Forwarded_SOURCE_B",-1,31,0);
	vcdp->declBus  (c+22,"RISCV32I_SV Core Decode_unit OPERAND_A_SEL",-1,1,0);
	vcdp->declBit  (c+23,"RISCV32I_SV Core Decode_unit OPERAND_B_SEL",-1);
	vcdp->declBus  (c+101,"RISCV32I_SV Core Decode_unit func3",-1,2,0);
	vcdp->declBus  (c+102,"RISCV32I_SV Core Decode_unit func7",-1,1,0);
	vcdp->declBit  (c+103,"RISCV32I_SV Core Decode_unit mem_Read",-1);
	vcdp->declBit  (c+104,"RISCV32I_SV Core Decode_unit mem_write",-1);
	vcdp->declBit  (c+24,"RISCV32I_SV Core Decode_unit regFileWriteEn",-1);
	vcdp->declBit  (c+103,"RISCV32I_SV Core Decode_unit memtoRegister",-1);
	vcdp->declBus  (c+25,"RISCV32I_SV Core Decode_unit ALU_Op",-1,2,0);
	vcdp->declBus  (c+105,"RISCV32I_SV Core Decode_unit destReg",-1,4,0);
	vcdp->declBus  (c+106,"RISCV32I_SV Core Decode_unit opcode",-1,6,0);
	vcdp->declBus  (c+26,"RISCV32I_SV Core Decode_unit I_imm",-1,31,0);
	vcdp->declBus  (c+27,"RISCV32I_SV Core Decode_unit S_imm",-1,31,0);
	vcdp->declBus  (c+28,"RISCV32I_SV Core Decode_unit U_imm",-1,31,0);
	vcdp->declBus  (c+107,"RISCV32I_SV Core Decode_unit instruction_imm",-1,24,0);
	vcdp->declBus  (c+29,"RISCV32I_SV Core Decode_unit op_A_sel",-1,2,0);
	vcdp->declBus  (c+30,"RISCV32I_SV Core Decode_unit op_B_sel",-1,2,0);
	vcdp->declBus  (c+114,"RISCV32I_SV Core Decode_unit No_of_registers",-1,31,0);
	vcdp->declBus  (c+114,"RISCV32I_SV Core Decode_unit RegisterFile DataWidth",-1,31,0);
	vcdp->declBus  (c+114,"RISCV32I_SV Core Decode_unit RegisterFile Registers",-1,31,0);
	vcdp->declBus  (c+116,"RISCV32I_SV Core Decode_unit RegisterFile AddrRegWidth",-1,31,0);
	vcdp->declBit  (c+109,"RISCV32I_SV Core Decode_unit RegisterFile clock",-1);
	vcdp->declBit  (c+110,"RISCV32I_SV Core Decode_unit RegisterFile reset",-1);
	vcdp->declBit  (c+95,"RISCV32I_SV Core Decode_unit RegisterFile writeEn",-1);
	vcdp->declBus  (c+99,"RISCV32I_SV Core Decode_unit RegisterFile source1",-1,4,0);
	vcdp->declBus  (c+100,"RISCV32I_SV Core Decode_unit RegisterFile source2",-1,4,0);
	vcdp->declBus  (c+79,"RISCV32I_SV Core Decode_unit RegisterFile writeDataSel",-1,4,0);
	vcdp->declBus  (c+9,"RISCV32I_SV Core Decode_unit RegisterFile writeData",-1,31,0);
	vcdp->declBus  (c+15,"RISCV32I_SV Core Decode_unit RegisterFile readData1",-1,31,0);
	vcdp->declBus  (c+16,"RISCV32I_SV Core Decode_unit RegisterFile readData2",-1,31,0);
	vcdp->declBus  (c+113,"RISCV32I_SV Core Decode_unit RegisterFile Reg_Out",-1,31,0);
	vcdp->declBus  (c+114,"RISCV32I_SV Core Decode_unit RegisterFile number_of_registers",-1,31,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declBus  (c+31+i*1,"RISCV32I_SV Core Decode_unit RegisterFile regFile",(i+0),31,0);}}
	vcdp->declBus  (c+63,"RISCV32I_SV Core Decode_unit RegisterFile i",-1,31,0);
	vcdp->declBus  (c+106,"RISCV32I_SV Core Decode_unit Control opcode",-1,6,0);
	vcdp->declBit  (c+98,"RISCV32I_SV Core Decode_unit Control branch_op",-1);
	vcdp->declBit  (c+103,"RISCV32I_SV Core Decode_unit Control memRead",-1);
	vcdp->declBit  (c+103,"RISCV32I_SV Core Decode_unit Control memtoReg",-1);
	vcdp->declBit  (c+104,"RISCV32I_SV Core Decode_unit Control memWrite",-1);
	vcdp->declBit  (c+24,"RISCV32I_SV Core Decode_unit Control regWriteEn",-1);
	vcdp->declBit  (c+23,"RISCV32I_SV Core Decode_unit Control operand_B_sel",-1);
	vcdp->declBus  (c+4,"RISCV32I_SV Core Decode_unit Control next_PC_sel",-1,1,0);
	vcdp->declBus  (c+22,"RISCV32I_SV Core Decode_unit Control operand_A_sel",-1,1,0);
	vcdp->declBus  (c+25,"RISCV32I_SV Core Decode_unit Control ALUOp",-1,2,0);
	vcdp->declBus  (c+17,"RISCV32I_SV Core Decode_unit Control extend_sel",-1,1,0);
	vcdp->declBus  (c+120,"RISCV32I_SV Core Decode_unit Control R_TYPE",-1,6,0);
	vcdp->declBus  (c+121,"RISCV32I_SV Core Decode_unit Control I_TYPE",-1,6,0);
	vcdp->declBus  (c+122,"RISCV32I_SV Core Decode_unit Control STORE",-1,6,0);
	vcdp->declBus  (c+123,"RISCV32I_SV Core Decode_unit Control LOAD",-1,6,0);
	vcdp->declBus  (c+124,"RISCV32I_SV Core Decode_unit Control BRANCH",-1,6,0);
	vcdp->declBus  (c+125,"RISCV32I_SV Core Decode_unit Control JALR",-1,6,0);
	vcdp->declBus  (c+126,"RISCV32I_SV Core Decode_unit Control JAL",-1,6,0);
	vcdp->declBus  (c+127,"RISCV32I_SV Core Decode_unit Control AUIPC",-1,6,0);
	vcdp->declBus  (c+128,"RISCV32I_SV Core Decode_unit Control LUI",-1,6,0);
	vcdp->declBus  (c+114,"RISCV32I_SV Core Decode_unit ImmediateGeneration DataWidth",-1,31,0);
	vcdp->declBus  (c+78,"RISCV32I_SV Core Decode_unit ImmediateGeneration pc",-1,31,0);
	vcdp->declBus  (c+107,"RISCV32I_SV Core Decode_unit ImmediateGeneration instruction",-1,24,0);
	vcdp->declBus  (c+26,"RISCV32I_SV Core Decode_unit ImmediateGeneration i_type",-1,31,0);
	vcdp->declBus  (c+28,"RISCV32I_SV Core Decode_unit ImmediateGeneration u_type",-1,31,0);
	vcdp->declBus  (c+27,"RISCV32I_SV Core Decode_unit ImmediateGeneration s_type",-1,31,0);
	vcdp->declBus  (c+6,"RISCV32I_SV Core Decode_unit ImmediateGeneration sb_type",-1,31,0);
	vcdp->declBus  (c+7,"RISCV32I_SV Core Decode_unit ImmediateGeneration uj_type",-1,31,0);
	vcdp->declBus  (c+64,"RISCV32I_SV Core Decode_unit ImmediateGeneration I_type",-1,11,0);
	vcdp->declBus  (c+65,"RISCV32I_SV Core Decode_unit ImmediateGeneration U_type",-1,19,0);
	vcdp->declBus  (c+66,"RISCV32I_SV Core Decode_unit ImmediateGeneration S_type",-1,11,0);
	vcdp->declBus  (c+67,"RISCV32I_SV Core Decode_unit ImmediateGeneration SB_type",-1,12,0);
	vcdp->declBus  (c+68,"RISCV32I_SV Core Decode_unit ImmediateGeneration UJ_type",-1,20,0);
	vcdp->declBus  (c+114,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard DataWidth",-1,31,0);
	vcdp->declBus  (c+116,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard RegAddrWidth",-1,31,0);
	vcdp->declBit  (c+92,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard Reg_File_EN_Memory_stage",-1);
	vcdp->declBit  (c+95,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard Reg_File_EN_WrBk_stage",-1);
	vcdp->declBit  (c+91,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard Reg_File_EN_EXE_stage",-1);
	vcdp->declBit  (c+74,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard Mem_Read_EN",-1);
	vcdp->declBus  (c+81,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard WriteBack_reg_Memory_stage",-1,4,0);
	vcdp->declBus  (c+79,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard WriteBack_reg_WrBk_stage",-1,4,0);
	vcdp->declBus  (c+80,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard WriteBack_reg_EXE_stage",-1,4,0);
	vcdp->declBus  (c+99,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard ID_EX_RS1",-1,4,0);
	vcdp->declBus  (c+100,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard ID_EX_RS2",-1,4,0);
	vcdp->declBus  (c+29,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard Operand_A_control",-1,2,0);
	vcdp->declBus  (c+30,"RISCV32I_SV Core Decode_unit Forwarding_For_Data_Hazard Operand_B_control",-1,2,0);
	vcdp->declBus  (c+114,"RISCV32I_SV Core Decode_unit Branch_Controller_Unit DataWidth",-1,31,0);
	vcdp->declBus  (c+101,"RISCV32I_SV Core Decode_unit Branch_Controller_Unit function3",-1,2,0);
	vcdp->declBus  (c+20,"RISCV32I_SV Core Decode_unit Branch_Controller_Unit SRC_1",-1,31,0);
	vcdp->declBus  (c+21,"RISCV32I_SV Core Decode_unit Branch_Controller_Unit SRC_2",-1,31,0);
	vcdp->declBit  (c+14,"RISCV32I_SV Core Decode_unit Branch_Controller_Unit Branch",-1);
	vcdp->declBus  (c+114,"RISCV32I_SV Core Execute_unit DataWidth",-1,31,0);
	vcdp->declBus  (c+115,"RISCV32I_SV Core Execute_unit AddrWidth",-1,31,0);
	vcdp->declBus  (c+116,"RISCV32I_SV Core Execute_unit RegAddrWidth",-1,31,0);
	vcdp->declBit  (c+109,"RISCV32I_SV Core Execute_unit clock",-1);
	vcdp->declBit  (c+110,"RISCV32I_SV Core Execute_unit reset",-1);
	vcdp->declBus  (c+76,"RISCV32I_SV Core Execute_unit DataMemDataIn",-1,31,0);
	vcdp->declBus  (c+82,"RISCV32I_SV Core Execute_unit Operand_A",-1,31,0);
	vcdp->declBus  (c+83,"RISCV32I_SV Core Execute_unit Operand_B",-1,31,0);
	vcdp->declBus  (c+89,"RISCV32I_SV Core Execute_unit Func3",-1,2,0);
	vcdp->declBus  (c+90,"RISCV32I_SV Core Execute_unit Func7",-1,1,0);
	vcdp->declBus  (c+88,"RISCV32I_SV Core Execute_unit ALU_op",-1,2,0);
	vcdp->declBit  (c+84,"RISCV32I_SV Core Execute_unit memtoreg",-1);
	vcdp->declBit  (c+86,"RISCV32I_SV Core Execute_unit writeEn",-1);
	vcdp->declBit  (c+85,"RISCV32I_SV Core Execute_unit readEn",-1);
	vcdp->declBit  (c+91,"RISCV32I_SV Core Execute_unit regfileEN",-1);
	vcdp->declBus  (c+80,"RISCV32I_SV Core Execute_unit writeBack_reg",-1,4,0);
	vcdp->declBus  (c+73,"RISCV32I_SV Core Execute_unit Func_3",-1,2,0);
	vcdp->declBit  (c+92,"RISCV32I_SV Core Execute_unit Reg_EN",-1);
	vcdp->declBit  (c+74,"RISCV32I_SV Core Execute_unit MEM_READ",-1);
	vcdp->declBit  (c+75,"RISCV32I_SV Core Execute_unit MEM_WRITE",-1);
	vcdp->declBit  (c+93,"RISCV32I_SV Core Execute_unit MEM_to_REG",-1);
	vcdp->declBus  (c+81,"RISCV32I_SV Core Execute_unit WB_REG",-1,4,0);
	vcdp->declBus  (c+11,"RISCV32I_SV Core Execute_unit ALU_Result",-1,31,0);
	vcdp->declBus  (c+87,"RISCV32I_SV Core Execute_unit ALU_result_delay",-1,31,0);
	vcdp->declBus  (c+72,"RISCV32I_SV Core Execute_unit D_MEM_ADDR",-1,9,0);
	vcdp->declBus  (c+71,"RISCV32I_SV Core Execute_unit DataIN_MEM",-1,31,0);
	vcdp->declBus  (c+69,"RISCV32I_SV Core Execute_unit ALU_MUX_CONTROL",-1,5,0);
	vcdp->declBus  (c+70,"RISCV32I_SV Core Execute_unit Mem_addr",-1,9,0);
	vcdp->declBus  (c+114,"RISCV32I_SV Core Execute_unit alu DataWidth",-1,31,0);
	vcdp->declBus  (c+82,"RISCV32I_SV Core Execute_unit alu operand_A",-1,31,0);
	vcdp->declBus  (c+83,"RISCV32I_SV Core Execute_unit alu operand_B",-1,31,0);
	vcdp->declBus  (c+69,"RISCV32I_SV Core Execute_unit alu ALU_Control",-1,5,0);
	vcdp->declBus  (c+11,"RISCV32I_SV Core Execute_unit alu ALU_result",-1,31,0);
	vcdp->declBus  (c+108,"RISCV32I_SV Core Execute_unit alu shamt",-1,4,0);
	vcdp->declBus  (c+89,"RISCV32I_SV Core Execute_unit aluControl func3",-1,2,0);
	vcdp->declBus  (c+90,"RISCV32I_SV Core Execute_unit aluControl func7",-1,1,0);
	vcdp->declBus  (c+88,"RISCV32I_SV Core Execute_unit aluControl ALU_Operation",-1,2,0);
	vcdp->declBus  (c+69,"RISCV32I_SV Core Execute_unit aluControl ALU_Control",-1,5,0);
	vcdp->declBus  (c+114,"RISCV32I_SV Core MEM_WB_REG DataWidth",-1,31,0);
	vcdp->declBus  (c+116,"RISCV32I_SV Core MEM_WB_REG RegAddrWidth",-1,31,0);
	vcdp->declBit  (c+109,"RISCV32I_SV Core MEM_WB_REG clock",-1);
	vcdp->declBit  (c+110,"RISCV32I_SV Core MEM_WB_REG reset",-1);
	vcdp->declBit  (c+92,"RISCV32I_SV Core MEM_WB_REG RegEn_IN",-1);
	vcdp->declBus  (c+87,"RISCV32I_SV Core MEM_WB_REG ALU_result_IN",-1,31,0);
	vcdp->declBus  (c+2,"RISCV32I_SV Core MEM_WB_REG Mem_Data_IN",-1,31,0);
	vcdp->declBus  (c+81,"RISCV32I_SV Core MEM_WB_REG WB_REG_IN",-1,4,0);
	vcdp->declBit  (c+93,"RISCV32I_SV Core MEM_WB_REG Mem_to_Reg_IN",-1);
	vcdp->declBit  (c+95,"RISCV32I_SV Core MEM_WB_REG RegEn_OUT",-1);
	vcdp->declBus  (c+77,"RISCV32I_SV Core MEM_WB_REG ALU_result_OUT",-1,31,0);
	vcdp->declBus  (c+94,"RISCV32I_SV Core MEM_WB_REG Mem_Data_OUT",-1,31,0);
	vcdp->declBus  (c+79,"RISCV32I_SV Core MEM_WB_REG WB_REG_OUT",-1,4,0);
	vcdp->declBit  (c+96,"RISCV32I_SV Core MEM_WB_REG Mem_to_Reg_OUT",-1);
	vcdp->declBus  (c+114,"RISCV32I_SV Core WriteBack_unit DataWidth",-1,31,0);
	vcdp->declBus  (c+116,"RISCV32I_SV Core WriteBack_unit RegAddrWidth",-1,31,0);
	vcdp->declBus  (c+79,"RISCV32I_SV Core WriteBack_unit writeback_reg",-1,4,0);
	vcdp->declBit  (c+96,"RISCV32I_SV Core WriteBack_unit memtoreg",-1);
	vcdp->declBus  (c+77,"RISCV32I_SV Core WriteBack_unit Data_from_ALU",-1,31,0);
	vcdp->declBus  (c+94,"RISCV32I_SV Core WriteBack_unit Data_from_Mem",-1,31,0);
	vcdp->declBus  (c+9,"RISCV32I_SV Core WriteBack_unit WriteBackData",-1,31,0);
	vcdp->declBus  (c+79,"RISCV32I_SV Core WriteBack_unit writeBack_reg",-1,4,0);
	vcdp->declBus  (c+114,"RISCV32I_SV DataMemory DataWidth",-1,31,0);
	vcdp->declBus  (c+115,"RISCV32I_SV DataMemory AddrWidth",-1,31,0);
	vcdp->declBit  (c+109,"RISCV32I_SV DataMemory clock",-1);
	vcdp->declBit  (c+74,"RISCV32I_SV DataMemory readEn",-1);
	vcdp->declBit  (c+75,"RISCV32I_SV DataMemory writeEn",-1);
	vcdp->declBus  (c+73,"RISCV32I_SV DataMemory func_3",-1,2,0);
	vcdp->declBus  (c+71,"RISCV32I_SV DataMemory DataIn",-1,31,0);
	vcdp->declBus  (c+72,"RISCV32I_SV DataMemory Address",-1,9,0);
	vcdp->declBus  (c+2,"RISCV32I_SV DataMemory DataOut",-1,31,0);
	vcdp->declBus  (c+129,"RISCV32I_SV DataMemory MEM_DEPTH",-1,31,0);
	// Tracing: RISCV32I_SV DataMemory memory // Ignored: Wide memory > --trace-max-array ents at DCCM.sv:39
	vcdp->declBus  (c+114,"RISCV32I_SV InstructionMemory DataWidth",-1,31,0);
	vcdp->declBus  (c+115,"RISCV32I_SV InstructionMemory AddrWidth",-1,31,0);
	vcdp->declBit  (c+109,"RISCV32I_SV InstructionMemory clock",-1);
	vcdp->declBus  (c+3,"RISCV32I_SV InstructionMemory address",-1,9,0);
	vcdp->declBit  (c+119,"RISCV32I_SV InstructionMemory i_write",-1);
	vcdp->declBus  (c+117,"RISCV32I_SV InstructionMemory i_data",-1,31,0);
	vcdp->declBus  (c+1,"RISCV32I_SV InstructionMemory readData",-1,31,0);
	vcdp->declBus  (c+129,"RISCV32I_SV InstructionMemory DEPTH",-1,31,0);
	// Tracing: RISCV32I_SV InstructionMemory memory_array // Ignored: Wide memory > --trace-max-array ents at ICCM.sv:37
    }
}

void VRISCV32I_SV::traceFullThis__1(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRISCV32I_SV* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->RISCV32I_SV__DOT__Ins_mem_out),32);
	vcdp->fullBus  (c+2,(vlTOPp->RISCV32I_SV__DOT__D_mem_out),32);
	vcdp->fullBus  (c+3,((0x3ffU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Fetch_unit__DOT__PC_reg 
					>> 2U))),10);
	vcdp->fullBus  (c+4,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__NEXT_PC_SEL),2);
	vcdp->fullBit  (c+5,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__BRANCH));
	vcdp->fullBus  (c+6,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__BRANCH_TARG),32);
	vcdp->fullBus  (c+7,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__JAL_TARG),32);
	vcdp->fullBus  (c+8,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__JALR_TARG),32);
	vcdp->fullBus  (c+9,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__WB_DATA),32);
	vcdp->fullBit  (c+10,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__FLUSH));
	vcdp->fullBus  (c+11,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__ALU_RESULT),32);
	vcdp->fullBus  (c+12,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Fetch_unit__DOT__PC_reg),32);
	vcdp->fullBus  (c+13,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmOUT),32);
	vcdp->fullBit  (c+14,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Branch_controller));
	vcdp->fullBus  (c+15,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__readData1),32);
	vcdp->fullBus  (c+16,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__readData2),32);
	vcdp->fullBus  (c+17,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmSel),2);
	vcdp->fullBus  (c+18,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__SOURCE_A),32);
	vcdp->fullBus  (c+19,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__SOURCE_B),32);
	vcdp->fullBus  (c+20,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Forwarded_SOURCE_A),32);
	vcdp->fullBus  (c+21,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Forwarded_SOURCE_B),32);
	vcdp->fullBus  (c+22,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__OPERAND_A_SEL),2);
	vcdp->fullBit  (c+23,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__OPERAND_B_SEL));
	vcdp->fullBit  (c+24,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__regFileWriteEn));
	vcdp->fullBus  (c+25,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ALU_Op),3);
	vcdp->fullBus  (c+26,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__I_imm),32);
	vcdp->fullBus  (c+27,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__S_imm),32);
	vcdp->fullBus  (c+28,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__U_imm),32);
	vcdp->fullBus  (c+29,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__op_A_sel),3);
	vcdp->fullBus  (c+30,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__op_B_sel),3);
	vcdp->fullBus  (c+31,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[0]),32);
	vcdp->fullBus  (c+32,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[1]),32);
	vcdp->fullBus  (c+33,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[2]),32);
	vcdp->fullBus  (c+34,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[3]),32);
	vcdp->fullBus  (c+35,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[4]),32);
	vcdp->fullBus  (c+36,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[5]),32);
	vcdp->fullBus  (c+37,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[6]),32);
	vcdp->fullBus  (c+38,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[7]),32);
	vcdp->fullBus  (c+39,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[8]),32);
	vcdp->fullBus  (c+40,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[9]),32);
	vcdp->fullBus  (c+41,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[10]),32);
	vcdp->fullBus  (c+42,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[11]),32);
	vcdp->fullBus  (c+43,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[12]),32);
	vcdp->fullBus  (c+44,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[13]),32);
	vcdp->fullBus  (c+45,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[14]),32);
	vcdp->fullBus  (c+46,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[15]),32);
	vcdp->fullBus  (c+47,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[16]),32);
	vcdp->fullBus  (c+48,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[17]),32);
	vcdp->fullBus  (c+49,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[18]),32);
	vcdp->fullBus  (c+50,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[19]),32);
	vcdp->fullBus  (c+51,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[20]),32);
	vcdp->fullBus  (c+52,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[21]),32);
	vcdp->fullBus  (c+53,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[22]),32);
	vcdp->fullBus  (c+54,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[23]),32);
	vcdp->fullBus  (c+55,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[24]),32);
	vcdp->fullBus  (c+56,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[25]),32);
	vcdp->fullBus  (c+57,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[26]),32);
	vcdp->fullBus  (c+58,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[27]),32);
	vcdp->fullBus  (c+59,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[28]),32);
	vcdp->fullBus  (c+60,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[29]),32);
	vcdp->fullBus  (c+61,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[30]),32);
	vcdp->fullBus  (c+62,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[31]),32);
	vcdp->fullBus  (c+63,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__i),32);
	vcdp->fullBus  (c+64,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__I_type),12);
	vcdp->fullBus  (c+65,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__U_type),20);
	vcdp->fullBus  (c+66,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__S_type),12);
	vcdp->fullBus  (c+67,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__SB_type),13);
	vcdp->fullBus  (c+68,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__UJ_type),21);
	vcdp->fullBus  (c+69,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Execute_unit__DOT__ALU_MUX_CONTROL),6);
	vcdp->fullBus  (c+70,((0x3ffU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__ALU_RESULT)),10);
	vcdp->fullBus  (c+71,(vlTOPp->RISCV32I_SV__DOT__D_mem_data_in),32);
	vcdp->fullBus  (c+72,(vlTOPp->RISCV32I_SV__DOT__D_mem_addr_in),10);
	vcdp->fullBus  (c+73,(vlTOPp->RISCV32I_SV__DOT__function3),3);
	vcdp->fullBit  (c+74,(vlTOPp->RISCV32I_SV__DOT__D_mem_readEn));
	vcdp->fullBit  (c+75,(vlTOPp->RISCV32I_SV__DOT__D_mem_writeEn));
	vcdp->fullBus  (c+76,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Mem_WB_Data),32);
	vcdp->fullBus  (c+77,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__ALUresult),32);
	vcdp->fullBus  (c+78,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__PROGRAM_COUNTER),32);
	vcdp->fullBus  (c+79,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__reg_WB),5);
	vcdp->fullBus  (c+80,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__DEST_REG),5);
	vcdp->fullBus  (c+81,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__DEST_REGISTER),5);
	vcdp->fullBus  (c+82,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__SOURCE1),32);
	vcdp->fullBus  (c+83,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__SOURCE2),32);
	vcdp->fullBit  (c+84,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__MEM_TO_REG_DEC_EX));
	vcdp->fullBit  (c+85,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__MEM_READ_EN_DEC_EX));
	vcdp->fullBit  (c+86,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__MEM_WRITE_EN_DEC_EX));
	vcdp->fullBus  (c+87,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__aluOutput),32);
	vcdp->fullBus  (c+88,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__ALU_OPCODE),3);
	vcdp->fullBus  (c+89,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__FUNC_3),3);
	vcdp->fullBus  (c+90,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__FUNC_7),2);
	vcdp->fullBit  (c+91,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__RF_EN_DEC_to_EX));
	vcdp->fullBit  (c+92,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__RF_EN_EX_to_WB));
	vcdp->fullBit  (c+93,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__mem_to_register));
	vcdp->fullBus  (c+94,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Mem_Data_WB),32);
	vcdp->fullBit  (c+95,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__EN_reg_file));
	vcdp->fullBit  (c+96,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Mem2Reg));
	vcdp->fullBus  (c+97,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction),32);
	vcdp->fullBit  (c+98,((0x63U == (0x7fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction))));
	vcdp->fullBus  (c+99,((0x1fU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
					>> 0xfU))),5);
	vcdp->fullBus  (c+100,((0x1fU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
					 >> 0x14U))),5);
	vcdp->fullBus  (c+101,((7U & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
				      >> 0xcU))),3);
	vcdp->fullBus  (c+102,((3U & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
				      >> 0x1eU))),2);
	vcdp->fullBit  (c+103,((3U == (0x7fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction))));
	vcdp->fullBit  (c+104,((0x23U == (0x7fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction))));
	vcdp->fullBus  (c+105,((0x1fU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
					 >> 7U))),5);
	vcdp->fullBus  (c+106,((0x7fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction)),7);
	vcdp->fullBus  (c+107,((0x1ffffffU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
					      >> 7U))),25);
	vcdp->fullBus  (c+108,((0x1fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__SOURCE2)),5);
	vcdp->fullBit  (c+109,(vlTOPp->clock));
	vcdp->fullBit  (c+110,(vlTOPp->reset));
	vcdp->fullBus  (c+111,(vlTOPp->program_in),32);
	vcdp->fullBus  (c+112,(vlTOPp->address_in),10);
	vcdp->fullBus  (c+113,(vlTOPp->Reg_Out),32);
	vcdp->fullBus  (c+114,(0x20U),32);
	vcdp->fullBus  (c+115,(0xaU),32);
	vcdp->fullBus  (c+116,(5U),32);
	vcdp->fullBus  (c+117,(0U),32);
	vcdp->fullBit  (c+118,(1U));
	vcdp->fullBit  (c+119,(0U));
	vcdp->fullBus  (c+120,(0x33U),7);
	vcdp->fullBus  (c+121,(0x13U),7);
	vcdp->fullBus  (c+122,(0x23U),7);
	vcdp->fullBus  (c+123,(3U),7);
	vcdp->fullBus  (c+124,(0x63U),7);
	vcdp->fullBus  (c+125,(0x67U),7);
	vcdp->fullBus  (c+126,(0x6fU),7);
	vcdp->fullBus  (c+127,(0x17U),7);
	vcdp->fullBus  (c+128,(0x37U),7);
	vcdp->fullBus  (c+129,(0x400U),32);
    }
}
