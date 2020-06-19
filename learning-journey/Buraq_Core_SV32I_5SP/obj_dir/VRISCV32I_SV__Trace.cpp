// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISCV32I_SV__Syms.h"


//======================

void VRISCV32I_SV::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VRISCV32I_SV* t=(VRISCV32I_SV*)userthis;
    VRISCV32I_SV__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VRISCV32I_SV::traceChgThis(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRISCV32I_SV* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VRISCV32I_SV::traceChgThis__2(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRISCV32I_SV* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->RISCV32I_SV__DOT__Ins_mem_out),32);
	vcdp->chgBus  (c+2,(vlTOPp->RISCV32I_SV__DOT__D_mem_out),32);
	vcdp->chgBus  (c+3,((0x3ffU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Fetch_unit__DOT__PC_reg 
				       >> 2U))),10);
	vcdp->chgBus  (c+4,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__NEXT_PC_SEL),2);
	vcdp->chgBit  (c+5,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__BRANCH));
	vcdp->chgBus  (c+6,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__BRANCH_TARG),32);
	vcdp->chgBus  (c+7,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__JAL_TARG),32);
	vcdp->chgBus  (c+8,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__JALR_TARG),32);
	vcdp->chgBus  (c+9,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__WB_DATA),32);
	vcdp->chgBit  (c+10,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__FLUSH));
	vcdp->chgBus  (c+11,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__ALU_RESULT),32);
	vcdp->chgBus  (c+12,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Fetch_unit__DOT__PC_reg),32);
	vcdp->chgBus  (c+13,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmOUT),32);
	vcdp->chgBit  (c+14,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Branch_controller));
	vcdp->chgBus  (c+15,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__readData1),32);
	vcdp->chgBus  (c+16,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__readData2),32);
	vcdp->chgBus  (c+17,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmSel),2);
	vcdp->chgBus  (c+18,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__SOURCE_A),32);
	vcdp->chgBus  (c+19,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__SOURCE_B),32);
	vcdp->chgBus  (c+20,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Forwarded_SOURCE_A),32);
	vcdp->chgBus  (c+21,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Forwarded_SOURCE_B),32);
	vcdp->chgBus  (c+22,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__OPERAND_A_SEL),2);
	vcdp->chgBit  (c+23,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__OPERAND_B_SEL));
	vcdp->chgBit  (c+24,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__regFileWriteEn));
	vcdp->chgBus  (c+25,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ALU_Op),3);
	vcdp->chgBus  (c+26,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__I_imm),32);
	vcdp->chgBus  (c+27,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__S_imm),32);
	vcdp->chgBus  (c+28,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__U_imm),32);
	vcdp->chgBus  (c+29,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__op_A_sel),3);
	vcdp->chgBus  (c+30,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__op_B_sel),3);
	vcdp->chgBus  (c+31,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[0]),32);
	vcdp->chgBus  (c+32,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[1]),32);
	vcdp->chgBus  (c+33,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[2]),32);
	vcdp->chgBus  (c+34,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[3]),32);
	vcdp->chgBus  (c+35,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[4]),32);
	vcdp->chgBus  (c+36,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[5]),32);
	vcdp->chgBus  (c+37,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[6]),32);
	vcdp->chgBus  (c+38,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[7]),32);
	vcdp->chgBus  (c+39,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[8]),32);
	vcdp->chgBus  (c+40,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[9]),32);
	vcdp->chgBus  (c+41,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[10]),32);
	vcdp->chgBus  (c+42,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[11]),32);
	vcdp->chgBus  (c+43,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[12]),32);
	vcdp->chgBus  (c+44,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[13]),32);
	vcdp->chgBus  (c+45,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[14]),32);
	vcdp->chgBus  (c+46,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[15]),32);
	vcdp->chgBus  (c+47,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[16]),32);
	vcdp->chgBus  (c+48,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[17]),32);
	vcdp->chgBus  (c+49,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[18]),32);
	vcdp->chgBus  (c+50,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[19]),32);
	vcdp->chgBus  (c+51,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[20]),32);
	vcdp->chgBus  (c+52,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[21]),32);
	vcdp->chgBus  (c+53,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[22]),32);
	vcdp->chgBus  (c+54,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[23]),32);
	vcdp->chgBus  (c+55,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[24]),32);
	vcdp->chgBus  (c+56,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[25]),32);
	vcdp->chgBus  (c+57,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[26]),32);
	vcdp->chgBus  (c+58,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[27]),32);
	vcdp->chgBus  (c+59,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[28]),32);
	vcdp->chgBus  (c+60,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[29]),32);
	vcdp->chgBus  (c+61,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[30]),32);
	vcdp->chgBus  (c+62,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[31]),32);
	vcdp->chgBus  (c+63,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__i),32);
	vcdp->chgBus  (c+64,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__I_type),12);
	vcdp->chgBus  (c+65,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__U_type),20);
	vcdp->chgBus  (c+66,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__S_type),12);
	vcdp->chgBus  (c+67,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__SB_type),13);
	vcdp->chgBus  (c+68,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__UJ_type),21);
	vcdp->chgBus  (c+69,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Execute_unit__DOT__ALU_MUX_CONTROL),6);
	vcdp->chgBus  (c+70,((0x3ffU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__ALU_RESULT)),10);
    }
}

void VRISCV32I_SV::traceChgThis__3(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRISCV32I_SV* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+71,(vlTOPp->RISCV32I_SV__DOT__D_mem_data_in),32);
	vcdp->chgBus  (c+72,(vlTOPp->RISCV32I_SV__DOT__D_mem_addr_in),10);
	vcdp->chgBus  (c+73,(vlTOPp->RISCV32I_SV__DOT__function3),3);
	vcdp->chgBit  (c+74,(vlTOPp->RISCV32I_SV__DOT__D_mem_readEn));
	vcdp->chgBit  (c+75,(vlTOPp->RISCV32I_SV__DOT__D_mem_writeEn));
	vcdp->chgBus  (c+76,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Mem_WB_Data),32);
	vcdp->chgBus  (c+77,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__ALUresult),32);
	vcdp->chgBus  (c+78,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__PROGRAM_COUNTER),32);
	vcdp->chgBus  (c+79,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__reg_WB),5);
	vcdp->chgBus  (c+80,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__DEST_REG),5);
	vcdp->chgBus  (c+81,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__DEST_REGISTER),5);
	vcdp->chgBus  (c+82,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__SOURCE1),32);
	vcdp->chgBus  (c+83,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__SOURCE2),32);
	vcdp->chgBit  (c+84,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__MEM_TO_REG_DEC_EX));
	vcdp->chgBit  (c+85,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__MEM_READ_EN_DEC_EX));
	vcdp->chgBit  (c+86,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__MEM_WRITE_EN_DEC_EX));
	vcdp->chgBus  (c+87,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__aluOutput),32);
	vcdp->chgBus  (c+88,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__ALU_OPCODE),3);
	vcdp->chgBus  (c+89,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__FUNC_3),3);
	vcdp->chgBus  (c+90,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__FUNC_7),2);
	vcdp->chgBit  (c+91,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__RF_EN_DEC_to_EX));
	vcdp->chgBit  (c+92,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__RF_EN_EX_to_WB));
	vcdp->chgBit  (c+93,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__mem_to_register));
	vcdp->chgBus  (c+94,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Mem_Data_WB),32);
	vcdp->chgBit  (c+95,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__EN_reg_file));
	vcdp->chgBit  (c+96,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Mem2Reg));
	vcdp->chgBus  (c+97,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction),32);
	vcdp->chgBit  (c+98,((0x63U == (0x7fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction))));
	vcdp->chgBus  (c+99,((0x1fU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
				       >> 0xfU))),5);
	vcdp->chgBus  (c+100,((0x1fU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
					>> 0x14U))),5);
	vcdp->chgBus  (c+101,((7U & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
				     >> 0xcU))),3);
	vcdp->chgBus  (c+102,((3U & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
				     >> 0x1eU))),2);
	vcdp->chgBit  (c+103,((3U == (0x7fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction))));
	vcdp->chgBit  (c+104,((0x23U == (0x7fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction))));
	vcdp->chgBus  (c+105,((0x1fU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
					>> 7U))),5);
	vcdp->chgBus  (c+106,((0x7fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction)),7);
	vcdp->chgBus  (c+107,((0x1ffffffU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
					     >> 7U))),25);
	vcdp->chgBus  (c+108,((0x1fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__SOURCE2)),5);
    }
}

void VRISCV32I_SV::traceChgThis__4(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRISCV32I_SV* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+109,(vlTOPp->clock));
	vcdp->chgBit  (c+110,(vlTOPp->reset));
	vcdp->chgBus  (c+111,(vlTOPp->program_in),32);
	vcdp->chgBus  (c+112,(vlTOPp->address_in),10);
	vcdp->chgBus  (c+113,(vlTOPp->Reg_Out),32);
    }
}
