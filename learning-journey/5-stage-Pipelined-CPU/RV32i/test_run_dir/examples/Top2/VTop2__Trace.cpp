// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop2__Syms.h"


//======================

void VTop2::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTop2* t = (VTop2*)userthis;
    VTop2__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VTop2::traceChgThis(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VTop2::traceChgThis__2(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                              & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)) 
                                 & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)))));
        vcdp->chgBit(oldp+1,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2));
        vcdp->chgBit(oldp+2,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_MemRead));
        vcdp->chgBit(oldp+3,(((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                              | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load) 
                                 | ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)) 
                                    & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)) 
                                       & ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type) 
                                          | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR) 
                                             | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL) 
                                                | (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI))))))))));
        vcdp->chgBit(oldp+4,(((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                              & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load))));
        vcdp->chgCData(oldp+5,(((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))
                                 ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)
                                          ? 4U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)
                                                   ? 5U
                                                   : 
                                                  ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type)
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI)
                                                        ? 6U
                                                        : 0U))))))))),3);
        vcdp->chgCData(oldp+6,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_operand_A_sel),2);
        vcdp->chgBit(oldp+7,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45));
        vcdp->chgCData(oldp+8,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_extend_sel),2);
        vcdp->chgCData(oldp+9,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel),2);
        vcdp->chgIData(oldp+10,(vlTOPp->Top2__DOT__register_io_WriteData),32);
        vcdp->chgIData(oldp+11,(vlTOPp->Top2__DOT__register_io_rs1),32);
        vcdp->chgIData(oldp+12,(vlTOPp->Top2__DOT__register_io_rs2),32);
        vcdp->chgIData(oldp+13,(vlTOPp->Top2__DOT__alu_io_A),32);
        vcdp->chgIData(oldp+14,(vlTOPp->Top2__DOT__alu_io_B),32);
        vcdp->chgIData(oldp+15,((IData)(vlTOPp->Top2__DOT__alu__DOT___GEN_22)),32);
        vcdp->chgCData(oldp+16,((0x1fU & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8))),5);
        vcdp->chgIData(oldp+17,(vlTOPp->Top2__DOT__immediate_io_I_Immediate),32);
        vcdp->chgIData(oldp+18,(((0x80000000U & (vlTOPp->Top2__DOT__immediate__DOT__output2 
                                                 << 1U)) 
                                 | vlTOPp->Top2__DOT__immediate__DOT__output2)),32);
        vcdp->chgIData(oldp+19,(vlTOPp->Top2__DOT__immediate__DOT__output5),32);
        vcdp->chgIData(oldp+20,((vlTOPp->Top2__DOT__immediate__DOT__sbt19 
                                 + vlTOPp->Top2__DOT__if_id__DOT__pc_reg)),32);
        vcdp->chgIData(oldp+21,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                  ? vlTOPp->Top2__DOT__if_id__DOT__pc4_reg
                                  : ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                      ? ((IData)(vlTOPp->Top2__DOT___T_82)
                                          ? vlTOPp->Top2__DOT__immediate__DOT__output5
                                          : ((IData)(vlTOPp->Top2__DOT___T_91)
                                              ? vlTOPp->Top2__DOT__immediate__DOT__output5
                                              : ((IData)(4U) 
                                                 + vlTOPp->Top2__DOT__PC__DOT__pc1)))
                                      : ((2U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                          ? (vlTOPp->Top2__DOT__immediate__DOT__sbt19 
                                             + vlTOPp->Top2__DOT__if_id__DOT__pc_reg)
                                          : ((3U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                              ? (0xfffffffeU 
                                                 & (vlTOPp->Top2__DOT__JALR_io_A 
                                                    + vlTOPp->Top2__DOT__immediate_io_I_Immediate))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                                  ? 
                                                 ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r)
                                                   ? vlTOPp->Top2__DOT__if_id__DOT__pc4_reg
                                                   : 
                                                  ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r)
                                                    ? 0U
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlTOPp->Top2__DOT__PC__DOT__pc1)))
                                                  : 0U)))))),32);
        vcdp->chgIData(oldp+22,(vlTOPp->Top2__DOT__instmem__DOT__mem
                                [(0x3ffU & (vlTOPp->Top2__DOT__PC__DOT__pc1 
                                            >> 2U))]),32);
        vcdp->chgIData(oldp+23,(vlTOPp->Top2__DOT__DataMemory_io_Data),32);
        vcdp->chgIData(oldp+24,(((1U & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r))
                                  ? ((1U == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
                                      ? vlTOPp->Top2__DOT__register_io_WriteData
                                      : ((2U == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
                                          ? vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg
                                          : vlTOPp->Top2__DOT__id_ex__DOT__rs2r))
                                  : ((1U & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r))
                                      ? vlTOPp->Top2__DOT__id_ex__DOT__rs2r
                                      : ((0U == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
                                          ? vlTOPp->Top2__DOT__id_ex__DOT__rs2r
                                          : ((1U == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
                                              ? vlTOPp->Top2__DOT__register_io_WriteData
                                              : ((2U 
                                                  == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
                                                  ? vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg
                                                  : vlTOPp->Top2__DOT__id_ex__DOT__rs2r)))))),32);
        vcdp->chgIData(oldp+25,(((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_extend_sel))
                                  ? ((3U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_operand_A_sel))
                                      ? ((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45)
                                          ? (IData)(
                                                    (VL_ULL(0x3fffffffffff) 
                                                     & ((QData)((IData)(
                                                                        ((((0x80000000U 
                                                                            & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
                                                                            ? 0x7ffU
                                                                            : 0U) 
                                                                          << 0x14U) 
                                                                         | (0xfffffU 
                                                                            & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                               >> 0xcU))))) 
                                                        << 0xcU)))
                                          : 0U) : 0U)
                                  : ((2U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_extend_sel))
                                      ? ((0x80000000U 
                                          & (vlTOPp->Top2__DOT__immediate__DOT__output2 
                                             << 1U)) 
                                         | vlTOPp->Top2__DOT__immediate__DOT__output2)
                                      : vlTOPp->Top2__DOT__immediate_io_I_Immediate))),32);
        vcdp->chgIData(oldp+26,((((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) 
                                  & ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
                                     == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                  >> 0xfU))))
                                  ? vlTOPp->Top2__DOT__register_io_WriteData
                                  : vlTOPp->Top2__DOT__register_io_rs1)),32);
        vcdp->chgIData(oldp+27,((((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) 
                                  & ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
                                     == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                  >> 0x14U))))
                                  ? vlTOPp->Top2__DOT__register_io_WriteData
                                  : vlTOPp->Top2__DOT__register_io_rs2)),32);
        vcdp->chgBit(oldp+28,(((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
                               & ((0x33U != (0x7fU 
                                             & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                                  & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)) 
                                     & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store))))));
        vcdp->chgBit(oldp+29,(((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
                               & (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_MemRead))));
        vcdp->chgBit(oldp+30,(((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
                               & ((0x33U == (0x7fU 
                                             & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                                  | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load) 
                                     | ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)) 
                                        & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)) 
                                           & ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type) 
                                              | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR) 
                                                 | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL) 
                                                    | (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI)))))))))));
        vcdp->chgBit(oldp+31,(((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
                               & ((0x33U != (0x7fU 
                                             & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                                  & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)))));
        vcdp->chgCData(oldp+32,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                  ? 0U : ((0x33U == 
                                           (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))
                                           ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)
                                                     ? 5U
                                                     : 
                                                    ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type)
                                                       ? 1U
                                                       : 
                                                      ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR)
                                                        ? 3U
                                                        : 
                                                       ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL)
                                                         ? 3U
                                                         : 
                                                        ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI)
                                                          ? 6U
                                                          : 0U)))))))))),3);
        vcdp->chgCData(oldp+33,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                  ? 0U : (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_operand_A_sel))),2);
        vcdp->chgBit(oldp+34,(((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
                               & (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45))));
        vcdp->chgIData(oldp+35,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                  ? vlTOPp->Top2__DOT___GEN_33
                                  : ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                      ? ((IData)(vlTOPp->Top2__DOT___T_82)
                                          ? 0U : ((IData)(vlTOPp->Top2__DOT___T_91)
                                                   ? 0U
                                                   : vlTOPp->Top2__DOT___GEN_33))
                                      : ((2U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                          ? 0U : ((3U 
                                                   == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                                   ? 0U
                                                   : vlTOPp->Top2__DOT___GEN_33))))),32);
        vcdp->chgIData(oldp+36,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                  ? ((IData)(4U) + vlTOPp->Top2__DOT__PC__DOT__pc1)
                                  : ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                      ? ((IData)(vlTOPp->Top2__DOT___T_82)
                                          ? 0U : ((IData)(vlTOPp->Top2__DOT___T_91)
                                                   ? 0U
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlTOPp->Top2__DOT__PC__DOT__pc1)))
                                      : ((2U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                          ? 0U : ((3U 
                                                   == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                                   ? 0U
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlTOPp->Top2__DOT__PC__DOT__pc1)))))),32);
        vcdp->chgIData(oldp+37,(((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                  ? vlTOPp->Top2__DOT___GEN_32
                                  : ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                      ? ((IData)(vlTOPp->Top2__DOT___T_82)
                                          ? 0U : ((IData)(vlTOPp->Top2__DOT___T_91)
                                                   ? 0U
                                                   : vlTOPp->Top2__DOT___GEN_32))
                                      : ((2U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                          ? 0U : ((3U 
                                                   == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                                   ? 0U
                                                   : vlTOPp->Top2__DOT___GEN_32))))),32);
        vcdp->chgIData(oldp+38,(vlTOPp->Top2__DOT__JALR_io_A),32);
        vcdp->chgIData(oldp+39,((0xfffffffeU & (vlTOPp->Top2__DOT__JALR_io_A 
                                                + vlTOPp->Top2__DOT__immediate_io_I_Immediate))),32);
        vcdp->chgCData(oldp+40,(vlTOPp->Top2__DOT__forward_io_forward_a),2);
        vcdp->chgCData(oldp+41,(vlTOPp->Top2__DOT__forward_io_forward_b),2);
        vcdp->chgBit(oldp+42,(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward));
        vcdp->chgIData(oldp+43,(vlTOPp->Top2__DOT__branchlogic_io_rs1_in),32);
        vcdp->chgIData(oldp+44,(vlTOPp->Top2__DOT__branchlogic_io_rs2_in),32);
        vcdp->chgBit(oldp+45,(((0U == (7U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                             >> 0xcU)))
                                ? (vlTOPp->Top2__DOT__branchlogic_io_rs1_in 
                                   == vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
                                : ((1U == (7U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                 >> 0xcU)))
                                    ? (vlTOPp->Top2__DOT__branchlogic_io_rs1_in 
                                       != vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
                                    : ((4U == (7U & 
                                               (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                >> 0xcU)))
                                        ? VL_LTS_III(1,32,32, vlTOPp->Top2__DOT__branchlogic_io_rs1_in, vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
                                        : ((5U == (7U 
                                                   & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                      >> 0xcU)))
                                            ? VL_GTES_III(1,32,32, vlTOPp->Top2__DOT__branchlogic_io_rs1_in, vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
                                            : ((6U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                    >> 0xcU)))
                                                ? (vlTOPp->Top2__DOT__branchlogic_io_rs1_in 
                                                   < vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
                                                : (
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                        >> 0xcU))) 
                                                   & (vlTOPp->Top2__DOT__branchlogic_io_rs1_in 
                                                      >= vlTOPp->Top2__DOT__branchlogic_io_rs2_in)))))))));
        vcdp->chgCData(oldp+46,(vlTOPp->Top2__DOT__branchforward_io_forward_a),4);
        vcdp->chgCData(oldp+47,(vlTOPp->Top2__DOT__branchforward__DOT___GEN_34),4);
        vcdp->chgBit(oldp+48,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load));
        vcdp->chgBit(oldp+49,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store));
        vcdp->chgBit(oldp+50,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch));
        vcdp->chgBit(oldp+51,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type));
        vcdp->chgBit(oldp+52,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR));
        vcdp->chgBit(oldp+53,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL));
        vcdp->chgBit(oldp+54,(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI));
        vcdp->chgCData(oldp+55,(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45),2);
        vcdp->chgIData(oldp+56,(vlTOPp->Top2__DOT__immediate__DOT__output2),31);
        vcdp->chgIData(oldp+57,(vlTOPp->Top2__DOT__immediate__DOT__output2),31);
        vcdp->chgIData(oldp+58,(vlTOPp->Top2__DOT__immediate__DOT__sbt13),32);
        vcdp->chgIData(oldp+59,(vlTOPp->Top2__DOT__immediate__DOT__output5),32);
        vcdp->chgIData(oldp+60,(vlTOPp->Top2__DOT__immediate__DOT__sbt19),32);
        vcdp->chgIData(oldp+61,((vlTOPp->Top2__DOT__JALR_io_A 
                                 + vlTOPp->Top2__DOT__immediate_io_I_Immediate)),32);
        vcdp->chgQData(oldp+62,((VL_ULL(0xfffffffe) 
                                 & (((QData)((IData)(
                                                     (1U 
                                                      & ((vlTOPp->Top2__DOT__JALR_io_A 
                                                          + vlTOPp->Top2__DOT__immediate_io_I_Immediate) 
                                                         >> 0x1fU)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (vlTOPp->Top2__DOT__JALR_io_A 
                                                                  + vlTOPp->Top2__DOT__immediate_io_I_Immediate)))))),33);
    }
}

void VTop2::traceChgThis__3(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+65);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)),7);
        vcdp->chgBit(oldp+1,(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg));
        vcdp->chgCData(oldp+2,(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg),5);
        vcdp->chgCData(oldp+3,((0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                         >> 0xfU))),5);
        vcdp->chgCData(oldp+4,((0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                         >> 0x14U))),5);
        vcdp->chgCData(oldp+5,(vlTOPp->Top2__DOT__id_ex__DOT__AluOp_r),3);
        vcdp->chgCData(oldp+6,(vlTOPp->Top2__DOT__id_ex__DOT__func7_r),7);
        vcdp->chgCData(oldp+7,(vlTOPp->Top2__DOT__id_ex__DOT__func3_r),3);
        vcdp->chgIData(oldp+8,(vlTOPp->Top2__DOT__if_id__DOT__inst_reg),32);
        vcdp->chgIData(oldp+9,(vlTOPp->Top2__DOT__if_id__DOT__pc_reg),32);
        vcdp->chgIData(oldp+10,((IData)((VL_ULL(0x3fffffffffff) 
                                         & ((QData)((IData)(
                                                            ((((0x80000000U 
                                                                & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
                                                                ? 0x7ffU
                                                                : 0U) 
                                                              << 0x14U) 
                                                             | (0xfffffU 
                                                                & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                   >> 0xcU))))) 
                                            << 0xcU)))),32);
        vcdp->chgIData(oldp+11,(vlTOPp->Top2__DOT__PC__DOT__pc1),32);
        vcdp->chgIData(oldp+12,(((IData)(4U) + vlTOPp->Top2__DOT__PC__DOT__pc1)),32);
        vcdp->chgIData(oldp+13,((0x3ffU & (vlTOPp->Top2__DOT__PC__DOT__pc1 
                                           >> 2U))),32);
        vcdp->chgCData(oldp+14,((0xffU & (vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg 
                                          >> 2U))),8);
        vcdp->chgIData(oldp+15,(vlTOPp->Top2__DOT__ex_mem__DOT__Rs2_Reg),32);
        vcdp->chgBit(oldp+16,(vlTOPp->Top2__DOT__ex_mem__DOT__Memrd_Reg));
        vcdp->chgBit(oldp+17,(vlTOPp->Top2__DOT__ex_mem__DOT__Memwr_Reg));
        vcdp->chgBit(oldp+18,(vlTOPp->Top2__DOT__ex_mem__DOT__Regwr_Reg));
        vcdp->chgBit(oldp+19,(vlTOPp->Top2__DOT__ex_mem__DOT__MemtoReg_Reg));
        vcdp->chgCData(oldp+20,(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg),5);
        vcdp->chgIData(oldp+21,(vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg),32);
        vcdp->chgBit(oldp+22,(vlTOPp->Top2__DOT__mem_wb__DOT__MemtoReg_Reg));
        vcdp->chgIData(oldp+23,(vlTOPp->Top2__DOT__mem_wb__DOT__data_mem_Reg),32);
        vcdp->chgIData(oldp+24,(vlTOPp->Top2__DOT__mem_wb__DOT__Aluout_Reg),32);
        vcdp->chgBit(oldp+25,(vlTOPp->Top2__DOT__id_ex__DOT__MemWr_r));
        vcdp->chgBit(oldp+26,(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r));
        vcdp->chgBit(oldp+27,(vlTOPp->Top2__DOT__id_ex__DOT__RegWr_r));
        vcdp->chgBit(oldp+28,(vlTOPp->Top2__DOT__id_ex__DOT__MemToReg_r));
        vcdp->chgCData(oldp+29,(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r),5);
        vcdp->chgIData(oldp+30,(vlTOPp->Top2__DOT__if_id__DOT__pc4_reg),32);
        vcdp->chgCData(oldp+31,((0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                          >> 7U))),5);
        vcdp->chgCData(oldp+32,((7U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                       >> 0xcU))),3);
        vcdp->chgCData(oldp+33,((0x7fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                          >> 0x19U))),7);
        vcdp->chgIData(oldp+34,(vlTOPp->Top2__DOT__id_ex__DOT__pcr),32);
        vcdp->chgIData(oldp+35,(vlTOPp->Top2__DOT__id_ex__DOT__pc4r),32);
        vcdp->chgIData(oldp+36,(vlTOPp->Top2__DOT__id_ex__DOT__rs1r),32);
        vcdp->chgIData(oldp+37,(vlTOPp->Top2__DOT__id_ex__DOT__rs2r),32);
        vcdp->chgIData(oldp+38,(vlTOPp->Top2__DOT__id_ex__DOT__immr),32);
        vcdp->chgCData(oldp+39,(vlTOPp->Top2__DOT__id_ex__DOT__OpA_sel_r),2);
        vcdp->chgBit(oldp+40,((1U & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r))));
        vcdp->chgCData(oldp+41,(vlTOPp->Top2__DOT__id_ex__DOT__rs1_sel_r),5);
        vcdp->chgCData(oldp+42,(vlTOPp->Top2__DOT__id_ex__DOT__rs2_sel_r),5);
        vcdp->chgBit(oldp+43,(((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) 
                               & ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
                                  == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                               >> 0xfU))))));
        vcdp->chgBit(oldp+44,(((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) 
                               & ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
                                  == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                               >> 0x14U))))));
        vcdp->chgBit(oldp+45,((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))));
        vcdp->chgIData(oldp+46,(vlTOPp->Top2__DOT__register__DOT__registers_c_0),32);
        vcdp->chgIData(oldp+47,(vlTOPp->Top2__DOT__register__DOT__registers_c_1),32);
        vcdp->chgIData(oldp+48,(vlTOPp->Top2__DOT__register__DOT__registers_c_2),32);
        vcdp->chgIData(oldp+49,(vlTOPp->Top2__DOT__register__DOT__registers_c_3),32);
        vcdp->chgIData(oldp+50,(vlTOPp->Top2__DOT__register__DOT__registers_c_4),32);
        vcdp->chgIData(oldp+51,(vlTOPp->Top2__DOT__register__DOT__registers_c_5),32);
        vcdp->chgIData(oldp+52,(vlTOPp->Top2__DOT__register__DOT__registers_c_6),32);
        vcdp->chgIData(oldp+53,(vlTOPp->Top2__DOT__register__DOT__registers_c_7),32);
        vcdp->chgIData(oldp+54,(vlTOPp->Top2__DOT__register__DOT__registers_c_8),32);
        vcdp->chgIData(oldp+55,(vlTOPp->Top2__DOT__register__DOT__registers_c_9),32);
        vcdp->chgIData(oldp+56,(vlTOPp->Top2__DOT__register__DOT__registers_c_10),32);
        vcdp->chgIData(oldp+57,(vlTOPp->Top2__DOT__register__DOT__registers_c_11),32);
        vcdp->chgIData(oldp+58,(vlTOPp->Top2__DOT__register__DOT__registers_c_12),32);
        vcdp->chgIData(oldp+59,(vlTOPp->Top2__DOT__register__DOT__registers_c_13),32);
        vcdp->chgIData(oldp+60,(vlTOPp->Top2__DOT__register__DOT__registers_c_14),32);
        vcdp->chgIData(oldp+61,(vlTOPp->Top2__DOT__register__DOT__registers_c_15),32);
        vcdp->chgIData(oldp+62,(vlTOPp->Top2__DOT__register__DOT__registers_c_16),32);
        vcdp->chgIData(oldp+63,(vlTOPp->Top2__DOT__register__DOT__registers_c_17),32);
        vcdp->chgIData(oldp+64,(vlTOPp->Top2__DOT__register__DOT__registers_c_18),32);
        vcdp->chgIData(oldp+65,(vlTOPp->Top2__DOT__register__DOT__registers_c_19),32);
        vcdp->chgIData(oldp+66,(vlTOPp->Top2__DOT__register__DOT__registers_c_20),32);
        vcdp->chgIData(oldp+67,(vlTOPp->Top2__DOT__register__DOT__registers_c_21),32);
        vcdp->chgIData(oldp+68,(vlTOPp->Top2__DOT__register__DOT__registers_c_22),32);
        vcdp->chgIData(oldp+69,(vlTOPp->Top2__DOT__register__DOT__registers_c_23),32);
        vcdp->chgIData(oldp+70,(vlTOPp->Top2__DOT__register__DOT__registers_c_24),32);
        vcdp->chgIData(oldp+71,(vlTOPp->Top2__DOT__register__DOT__registers_c_25),32);
        vcdp->chgIData(oldp+72,(vlTOPp->Top2__DOT__register__DOT__registers_c_26),32);
        vcdp->chgIData(oldp+73,(vlTOPp->Top2__DOT__register__DOT__registers_c_27),32);
        vcdp->chgIData(oldp+74,(vlTOPp->Top2__DOT__register__DOT__registers_c_28),32);
        vcdp->chgIData(oldp+75,(vlTOPp->Top2__DOT__register__DOT__registers_c_29),32);
        vcdp->chgIData(oldp+76,(vlTOPp->Top2__DOT__register__DOT__registers_c_30),32);
        vcdp->chgIData(oldp+77,(vlTOPp->Top2__DOT__register__DOT__registers_c_31),32);
        vcdp->chgSData(oldp+78,((0xfffU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                           >> 0x14U))),12);
        vcdp->chgIData(oldp+79,(((((0x80000000U & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
                                    ? 0x7ffffU : 0U) 
                                  << 0xcU) | (0xfffU 
                                              & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                 >> 0x14U)))),31);
        vcdp->chgSData(oldp+80,(((0xfe0U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                            >> 0x14U)) 
                                 | (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                             >> 7U)))),12);
        vcdp->chgIData(oldp+81,((0xfffffU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                             >> 0xcU))),20);
        vcdp->chgIData(oldp+82,(((((0x80000000U & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
                                    ? 0x7ffU : 0U) 
                                  << 0x14U) | (0xfffffU 
                                               & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                  >> 0xcU)))),31);
        vcdp->chgQData(oldp+83,((VL_ULL(0x3fffffffffff) 
                                 & ((QData)((IData)(
                                                    ((((0x80000000U 
                                                        & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
                                                        ? 0x7ffU
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (0xfffffU 
                                                        & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                           >> 0xcU))))) 
                                    << 0xcU))),46);
        vcdp->chgBit(oldp+85,((1U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                     >> 7U))));
        vcdp->chgCData(oldp+86,((0xfU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                         >> 8U))),4);
        vcdp->chgCData(oldp+87,((0x3fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                          >> 0x19U))),6);
        vcdp->chgBit(oldp+88,((1U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                     >> 0x1fU))));
        vcdp->chgSData(oldp+89,(((0x1000U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                             >> 0x13U)) 
                                 | ((0x800U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                               << 4U)) 
                                    | ((0x7e0U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                  >> 0x14U)) 
                                       | (0x1eU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                   >> 7U)))))),13);
        vcdp->chgCData(oldp+90,((0xffU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                          >> 0xcU))),8);
        vcdp->chgBit(oldp+91,((1U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                     >> 0x14U))));
        vcdp->chgSData(oldp+92,((0x3ffU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                           >> 0x15U))),10);
        vcdp->chgIData(oldp+93,(((0x100000U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                               >> 0xbU)) 
                                 | ((0xff000U & vlTOPp->Top2__DOT__if_id__DOT__inst_reg) 
                                    | ((0x800U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                  >> 9U)) 
                                       | (0x7feU & 
                                          (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                           >> 0x14U)))))),21);
        vcdp->chgSData(oldp+94,((0x3ffU & (vlTOPp->Top2__DOT__PC__DOT__pc1 
                                           >> 2U))),14);
        vcdp->chgIData(oldp+95,(vlTOPp->Top2__DOT__DataMemory__DOT__mem
                                [(0xffU & (vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg 
                                           >> 2U))]),32);
        vcdp->chgSData(oldp+96,((0xffU & (vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg 
                                          >> 2U))),14);
        vcdp->chgCData(oldp+97,(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r),2);
    }
}

void VTop2::traceChgThis__4(VTop2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+163);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->clock));
        vcdp->chgBit(oldp+1,(vlTOPp->reset));
        vcdp->chgIData(oldp+2,(vlTOPp->io_instruction),32);
        vcdp->chgIData(oldp+3,(vlTOPp->io_reg_out),32);
        vcdp->chgBit(oldp+4,(vlTOPp->io_branch_stall));
    }
}
