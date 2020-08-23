// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISCV32I_SV__Syms.h"


//======================

void VRISCV32I_SV::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VRISCV32I_SV* t = (VRISCV32I_SV*)userthis;
    VRISCV32I_SV__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VRISCV32I_SV::traceChgThis(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRISCV32I_SV* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (false && vcdp) {}  // Prevent unused
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
    vluint32_t* oldp = vcdp->oldp(code+1);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->RISCV32I_SV__DOT__Ins_mem_out),32);
        vcdp->chgIData(oldp+1,(vlTOPp->RISCV32I_SV__DOT__D_mem_out),32);
        vcdp->chgSData(oldp+2,((0x3ffU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Fetch_unit__DOT__PC_reg 
                                          >> 2U))),10);
        vcdp->chgCData(oldp+3,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__NEXT_PC_SEL),2);
        vcdp->chgBit(oldp+4,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__BRANCH));
        vcdp->chgIData(oldp+5,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__BRANCH_TARG),32);
        vcdp->chgIData(oldp+6,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__JAL_TARG),32);
        vcdp->chgIData(oldp+7,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__JALR_TARG),32);
        vcdp->chgIData(oldp+8,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__WB_DATA),32);
        vcdp->chgBit(oldp+9,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__FLUSH));
        vcdp->chgIData(oldp+10,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__ALU_RESULT),32);
        vcdp->chgIData(oldp+11,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Fetch_unit__DOT__PC_reg),32);
        vcdp->chgIData(oldp+12,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmOUT),32);
        vcdp->chgBit(oldp+13,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Branch_controller));
        vcdp->chgIData(oldp+14,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__readData1),32);
        vcdp->chgIData(oldp+15,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__readData2),32);
        vcdp->chgCData(oldp+16,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmSel),2);
        vcdp->chgIData(oldp+17,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__SOURCE_A),32);
        vcdp->chgIData(oldp+18,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__SOURCE_B),32);
        vcdp->chgIData(oldp+19,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Forwarded_SOURCE_A),32);
        vcdp->chgIData(oldp+20,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Forwarded_SOURCE_B),32);
        vcdp->chgCData(oldp+21,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__OPERAND_A_SEL),2);
        vcdp->chgBit(oldp+22,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__OPERAND_B_SEL));
        vcdp->chgBit(oldp+23,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__regFileWriteEn));
        vcdp->chgCData(oldp+24,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ALU_Op),3);
        vcdp->chgIData(oldp+25,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__I_imm),32);
        vcdp->chgIData(oldp+26,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__S_imm),32);
        vcdp->chgIData(oldp+27,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__U_imm),32);
        vcdp->chgCData(oldp+28,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__op_A_sel),3);
        vcdp->chgCData(oldp+29,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__op_B_sel),3);
        vcdp->chgIData(oldp+30,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[0]),32);
        vcdp->chgIData(oldp+31,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[1]),32);
        vcdp->chgIData(oldp+32,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[2]),32);
        vcdp->chgIData(oldp+33,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[3]),32);
        vcdp->chgIData(oldp+34,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[4]),32);
        vcdp->chgIData(oldp+35,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[5]),32);
        vcdp->chgIData(oldp+36,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[6]),32);
        vcdp->chgIData(oldp+37,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[7]),32);
        vcdp->chgIData(oldp+38,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[8]),32);
        vcdp->chgIData(oldp+39,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[9]),32);
        vcdp->chgIData(oldp+40,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[10]),32);
        vcdp->chgIData(oldp+41,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[11]),32);
        vcdp->chgIData(oldp+42,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[12]),32);
        vcdp->chgIData(oldp+43,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[13]),32);
        vcdp->chgIData(oldp+44,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[14]),32);
        vcdp->chgIData(oldp+45,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[15]),32);
        vcdp->chgIData(oldp+46,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[16]),32);
        vcdp->chgIData(oldp+47,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[17]),32);
        vcdp->chgIData(oldp+48,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[18]),32);
        vcdp->chgIData(oldp+49,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[19]),32);
        vcdp->chgIData(oldp+50,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[20]),32);
        vcdp->chgIData(oldp+51,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[21]),32);
        vcdp->chgIData(oldp+52,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[22]),32);
        vcdp->chgIData(oldp+53,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[23]),32);
        vcdp->chgIData(oldp+54,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[24]),32);
        vcdp->chgIData(oldp+55,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[25]),32);
        vcdp->chgIData(oldp+56,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[26]),32);
        vcdp->chgIData(oldp+57,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[27]),32);
        vcdp->chgIData(oldp+58,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[28]),32);
        vcdp->chgIData(oldp+59,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[29]),32);
        vcdp->chgIData(oldp+60,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[30]),32);
        vcdp->chgIData(oldp+61,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[31]),32);
        vcdp->chgIData(oldp+62,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__i),32);
        vcdp->chgSData(oldp+63,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__I_type),12);
        vcdp->chgIData(oldp+64,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__U_type),20);
        vcdp->chgSData(oldp+65,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__S_type),12);
        vcdp->chgSData(oldp+66,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__SB_type),13);
        vcdp->chgIData(oldp+67,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__UJ_type),21);
        vcdp->chgCData(oldp+68,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Execute_unit__DOT__ALU_MUX_CONTROL),6);
        vcdp->chgSData(oldp+69,((0x3ffU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__ALU_RESULT)),10);
    }
}

void VRISCV32I_SV::traceChgThis__3(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRISCV32I_SV* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+71);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->RISCV32I_SV__DOT__D_mem_data_in),32);
        vcdp->chgSData(oldp+1,(vlTOPp->RISCV32I_SV__DOT__D_mem_addr_in),10);
        vcdp->chgCData(oldp+2,(vlTOPp->RISCV32I_SV__DOT__function3),3);
        vcdp->chgBit(oldp+3,(vlTOPp->RISCV32I_SV__DOT__D_mem_readEn));
        vcdp->chgBit(oldp+4,(vlTOPp->RISCV32I_SV__DOT__D_mem_writeEn));
        vcdp->chgIData(oldp+5,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Mem_WB_Data),32);
        vcdp->chgIData(oldp+6,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__ALUresult),32);
        vcdp->chgIData(oldp+7,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__PROGRAM_COUNTER),32);
        vcdp->chgCData(oldp+8,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__reg_WB),5);
        vcdp->chgCData(oldp+9,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__DEST_REG),5);
        vcdp->chgCData(oldp+10,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__DEST_REGISTER),5);
        vcdp->chgIData(oldp+11,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__SOURCE1),32);
        vcdp->chgIData(oldp+12,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__SOURCE2),32);
        vcdp->chgBit(oldp+13,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__MEM_TO_REG_DEC_EX));
        vcdp->chgBit(oldp+14,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__MEM_READ_EN_DEC_EX));
        vcdp->chgBit(oldp+15,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__MEM_WRITE_EN_DEC_EX));
        vcdp->chgIData(oldp+16,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__aluOutput),32);
        vcdp->chgCData(oldp+17,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__ALU_OPCODE),3);
        vcdp->chgCData(oldp+18,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__FUNC_3),3);
        vcdp->chgCData(oldp+19,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__FUNC_7),2);
        vcdp->chgBit(oldp+20,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__RF_EN_DEC_to_EX));
        vcdp->chgBit(oldp+21,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__RF_EN_EX_to_WB));
        vcdp->chgBit(oldp+22,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__mem_to_register));
        vcdp->chgIData(oldp+23,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Mem_Data_WB),32);
        vcdp->chgBit(oldp+24,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__EN_reg_file));
        vcdp->chgBit(oldp+25,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Mem2Reg));
        vcdp->chgIData(oldp+26,(vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction),32);
        vcdp->chgBit(oldp+27,((0x63U == (0x7fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction))));
        vcdp->chgCData(oldp+28,((0x1fU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
                                          >> 0xfU))),5);
        vcdp->chgCData(oldp+29,((0x1fU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
                                          >> 0x14U))),5);
        vcdp->chgCData(oldp+30,((7U & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
                                       >> 0xcU))),3);
        vcdp->chgCData(oldp+31,((3U & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
                                       >> 0x1eU))),2);
        vcdp->chgBit(oldp+32,((3U == (0x7fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction))));
        vcdp->chgBit(oldp+33,((0x23U == (0x7fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction))));
        vcdp->chgCData(oldp+34,((0x1fU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
                                          >> 7U))),5);
        vcdp->chgCData(oldp+35,((0x7fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction)),7);
        vcdp->chgIData(oldp+36,((0x1ffffffU & (vlTOPp->RISCV32I_SV__DOT__Core__DOT__Decode_unit__DOT__Instruction 
                                               >> 7U))),25);
        vcdp->chgCData(oldp+37,((0x1fU & vlTOPp->RISCV32I_SV__DOT__Core__DOT__SOURCE2)),5);
    }
}

void VRISCV32I_SV::traceChgThis__4(VRISCV32I_SV__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRISCV32I_SV* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+109);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->clock));
        vcdp->chgBit(oldp+1,(vlTOPp->reset));
        vcdp->chgIData(oldp+2,(vlTOPp->program_in),32);
        vcdp->chgSData(oldp+3,(vlTOPp->address_in),10);
        vcdp->chgIData(oldp+4,(vlTOPp->Reg_Out),32);
    }
}
