// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBuraq_Mini_top__Syms.h"


//======================

void VBuraq_Mini_top::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBuraq_Mini_top* t = (VBuraq_Mini_top*)userthis;
    VBuraq_Mini_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VBuraq_Mini_top::traceChgThis(VBuraq_Mini_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBuraq_Mini_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VBuraq_Mini_top::traceChgThis__2(VBuraq_Mini_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBuraq_Mini_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->Buraq_Mini_top__DOT__Ins_mem_out),32);
        vcdp->chgIData(oldp+1,(vlTOPp->Buraq_Mini_top__DOT__D_mem_out),32);
        vcdp->chgCData(oldp+2,(vlTOPp->Buraq_Mini_top__DOT__byte_en),3);
        vcdp->chgCData(oldp+3,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_next_pc_sel),2);
        vcdp->chgBit(oldp+4,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_branch));
        vcdp->chgBit(oldp+5,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__stall));
        vcdp->chgBit(oldp+6,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_stall));
        vcdp->chgCData(oldp+7,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__check_stall),2);
        vcdp->chgIData(oldp+8,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_branch_addr),32);
        vcdp->chgIData(oldp+9,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_jal_addr),32);
        vcdp->chgIData(oldp+10,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_jalr_addr),32);
        vcdp->chgIData(oldp+11,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Wbu_result),32);
        vcdp->chgBit(oldp+12,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_flush));
        vcdp->chgIData(oldp+13,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ALU_RESULT),32);
        vcdp->chgIData(oldp+14,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmOUT),32);
        vcdp->chgBit(oldp+15,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__Branch_controller));
        vcdp->chgIData(oldp+16,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__readData1),32);
        vcdp->chgIData(oldp+17,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__readData2),32);
        vcdp->chgCData(oldp+18,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmSel),2);
        vcdp->chgIData(oldp+19,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__SOURCE_A),32);
        vcdp->chgIData(oldp+20,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__SOURCE_B),32);
        vcdp->chgIData(oldp+21,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__source_1),32);
        vcdp->chgIData(oldp+22,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__source_2),32);
        vcdp->chgCData(oldp+23,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__OPERAND_A_SEL),2);
        vcdp->chgBit(oldp+24,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__OPERAND_B_SEL));
        vcdp->chgBit(oldp+25,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__regFileWriteEn));
        vcdp->chgCData(oldp+26,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ALU_Op),3);
        vcdp->chgIData(oldp+27,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__I_imm),32);
        vcdp->chgIData(oldp+28,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__S_imm),32);
        vcdp->chgIData(oldp+29,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__U_imm),32);
        vcdp->chgCData(oldp+30,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__op_A_sel),4);
        vcdp->chgCData(oldp+31,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__op_B_sel),4);
        vcdp->chgIData(oldp+32,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[0]),32);
        vcdp->chgIData(oldp+33,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[1]),32);
        vcdp->chgIData(oldp+34,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[2]),32);
        vcdp->chgIData(oldp+35,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[3]),32);
        vcdp->chgIData(oldp+36,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[4]),32);
        vcdp->chgIData(oldp+37,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[5]),32);
        vcdp->chgIData(oldp+38,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[6]),32);
        vcdp->chgIData(oldp+39,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[7]),32);
        vcdp->chgIData(oldp+40,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[8]),32);
        vcdp->chgIData(oldp+41,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[9]),32);
        vcdp->chgIData(oldp+42,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[10]),32);
        vcdp->chgIData(oldp+43,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[11]),32);
        vcdp->chgIData(oldp+44,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[12]),32);
        vcdp->chgIData(oldp+45,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[13]),32);
        vcdp->chgIData(oldp+46,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[14]),32);
        vcdp->chgIData(oldp+47,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[15]),32);
        vcdp->chgIData(oldp+48,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[16]),32);
        vcdp->chgIData(oldp+49,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[17]),32);
        vcdp->chgIData(oldp+50,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[18]),32);
        vcdp->chgIData(oldp+51,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[19]),32);
        vcdp->chgIData(oldp+52,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[20]),32);
        vcdp->chgIData(oldp+53,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[21]),32);
        vcdp->chgIData(oldp+54,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[22]),32);
        vcdp->chgIData(oldp+55,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[23]),32);
        vcdp->chgIData(oldp+56,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[24]),32);
        vcdp->chgIData(oldp+57,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[25]),32);
        vcdp->chgIData(oldp+58,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[26]),32);
        vcdp->chgIData(oldp+59,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[27]),32);
        vcdp->chgIData(oldp+60,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[28]),32);
        vcdp->chgIData(oldp+61,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[29]),32);
        vcdp->chgIData(oldp+62,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[30]),32);
        vcdp->chgIData(oldp+63,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__regFile[31]),32);
        vcdp->chgIData(oldp+64,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__RegisterFile__DOT__i),32);
        vcdp->chgSData(oldp+65,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__I_type),12);
        vcdp->chgIData(oldp+66,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__U_type),20);
        vcdp->chgSData(oldp+67,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__S_type),12);
        vcdp->chgSData(oldp+68,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__SB_type),13);
        vcdp->chgIData(oldp+69,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Decode_unit__DOT__ImmediateGeneration__DOT__UJ_type),21);
        vcdp->chgBit(oldp+70,((1U & ((IData)(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__op_A_sel) 
                                     >> 1U))));
        vcdp->chgCData(oldp+71,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__op_A_sel),3);
        vcdp->chgCData(oldp+72,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__op_B_sel),3);
        vcdp->chgIData(oldp+73,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__SRC_A),32);
        vcdp->chgIData(oldp+74,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__SRC_B),32);
        vcdp->chgIData(oldp+75,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__SOURCE_A),32);
        vcdp->chgIData(oldp+76,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__SOURCE_B),32);
        vcdp->chgCData(oldp+77,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__ALU_MUX_CONTROL),6);
        vcdp->chgBit(oldp+78,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT__mul));
        vcdp->chgBit(oldp+79,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT__mulh));
        vcdp->chgIData(oldp+80,((IData)(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT__ALU_result_64)),32);
        vcdp->chgIData(oldp+81,((IData)((vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT__ALU_result_64 
                                         >> 0x20U))),32);
        vcdp->chgIData(oldp+82,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT__ALU_result_32),32);
        vcdp->chgQData(oldp+83,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__alu__DOT__ALU_result_64),64);
        vcdp->chgCData(oldp+85,((0x1fU & vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__SRC_B)),5);
        vcdp->chgIData(oldp+86,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__MEM_WB_REG__DOT__load_data),32);
        vcdp->chgIData(oldp+87,(vlTOPp->Buraq_Mini_top__DOT__DataMemory__DOT__memory_in),32);
    }
}

void VBuraq_Mini_top::traceChgThis__3(VBuraq_Mini_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBuraq_Mini_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+89);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_store_data),32);
        vcdp->chgSData(oldp+1,((0x7fffU & (vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Fetch_unit__DOT__PC_reg 
                                           >> 2U))),15);
        vcdp->chgSData(oldp+2,((0x7fffU & (vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_mem_addr 
                                           >> 2U))),15);
        vcdp->chgBit(oldp+3,(vlTOPp->Buraq_Mini_top__DOT__D_mem_readEn));
        vcdp->chgBit(oldp+4,(vlTOPp->Buraq_Mini_top__DOT__D_mem_writeEn));
        vcdp->chgIData(oldp+5,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_store_data),32);
        vcdp->chgBit(oldp+6,((1U & ((IData)(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__MEM_WB_REG__DOT__wb_check_stall) 
                                    >> 1U))));
        vcdp->chgCData(oldp+7,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_check_stall),2);
        vcdp->chgCData(oldp+8,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_src1_reg),5);
        vcdp->chgCData(oldp+9,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_src2_reg),5);
        vcdp->chgIData(oldp+10,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ldst_alu_result),32);
        vcdp->chgIData(oldp+11,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst),32);
        vcdp->chgIData(oldp+12,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_pc),32);
        vcdp->chgIData(oldp+13,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_mem_addr),32);
        vcdp->chgCData(oldp+14,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_op_a_sel),2);
        vcdp->chgBit(oldp+15,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_op_b_sel));
        vcdp->chgCData(oldp+16,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ldst_addr_dst),5);
        vcdp->chgCData(oldp+17,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_addr_dst),5);
        vcdp->chgCData(oldp+18,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_addr_dst),5);
        vcdp->chgIData(oldp+19,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_immediate),32);
        vcdp->chgIData(oldp+20,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_pc),32);
        vcdp->chgIData(oldp+21,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_data_1),32);
        vcdp->chgIData(oldp+22,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_data_2),32);
        vcdp->chgBit(oldp+23,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_memtoreg));
        vcdp->chgBit(oldp+24,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_mem_ren));
        vcdp->chgBit(oldp+25,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_mem_wen));
        vcdp->chgIData(oldp+26,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_alu_result),32);
        vcdp->chgCData(oldp+27,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_aluop),3);
        vcdp->chgCData(oldp+28,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_func3),3);
        vcdp->chgCData(oldp+29,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_func3),3);
        vcdp->chgCData(oldp+30,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_func7),7);
        vcdp->chgCData(oldp+31,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_check_Stall),2);
        vcdp->chgBit(oldp+32,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__idu_regfile_en));
        vcdp->chgBit(oldp+33,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_regfile_en));
        vcdp->chgBit(oldp+34,((1U & (IData)(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_check_Stall))));
        vcdp->chgBit(oldp+35,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_memtoreg));
        vcdp->chgIData(oldp+36,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ldst_load_data),32);
        vcdp->chgBit(oldp+37,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ldst_regfile_en));
        vcdp->chgBit(oldp+38,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ldst_memtoreg));
        vcdp->chgIData(oldp+39,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Fetch_unit__DOT__PC_reg),32);
        vcdp->chgBit(oldp+40,((0x63U == (0x7fU & vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst))));
        vcdp->chgCData(oldp+41,((0x1fU & (vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst 
                                          >> 0xfU))),5);
        vcdp->chgCData(oldp+42,((0x1fU & (vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst 
                                          >> 0x14U))),5);
        vcdp->chgCData(oldp+43,((7U & (vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst 
                                       >> 0xcU))),3);
        vcdp->chgCData(oldp+44,((0x7fU & (vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst 
                                          >> 0x19U))),7);
        vcdp->chgBit(oldp+45,((3U == (0x7fU & vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst))));
        vcdp->chgBit(oldp+46,((0x23U == (0x7fU & vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst))));
        vcdp->chgCData(oldp+47,((0x1fU & (vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst 
                                          >> 7U))),5);
        vcdp->chgCData(oldp+48,((0x7fU & vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst)),7);
        vcdp->chgIData(oldp+49,((0x1ffffffU & (vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ifu_fetch_inst 
                                               >> 7U))),25);
        vcdp->chgBit(oldp+50,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__Execute_unit__DOT__ldst_resume));
        vcdp->chgCData(oldp+51,(vlTOPp->Buraq_Mini_top__DOT__Core__DOT__MEM_WB_REG__DOT__wb_check_stall),2);
        vcdp->chgCData(oldp+52,((3U & vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_mem_addr)),2);
        vcdp->chgCData(oldp+53,((0xffU & vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_store_data)),8);
        vcdp->chgSData(oldp+54,((0xffffU & vlTOPp->Buraq_Mini_top__DOT__Core__DOT__ieu_store_data)),16);
    }
}

void VBuraq_Mini_top::traceChgThis__4(VBuraq_Mini_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBuraq_Mini_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+144);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->brq_clk));
        vcdp->chgBit(oldp+1,(vlTOPp->brq_rst));
        vcdp->chgIData(oldp+2,(vlTOPp->Reg_Out),32);
    }
}
