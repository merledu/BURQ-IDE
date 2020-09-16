// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop2.h for the primary calling header

#include "VTop2.h"
#include "VTop2__Syms.h"

//==========

VL_CTOR_IMP(VTop2) {
    VTop2__Syms* __restrict vlSymsp = __VlSymsp = new VTop2__Syms(this, name());
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTop2::__Vconfigure(VTop2__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VTop2::~VTop2() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VTop2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTop2::eval\n"); );
    VTop2__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Top2.v", 2606, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTop2::_eval_initial_loop(VTop2__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Top2.v", 2606, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTop2::_initial__TOP__1(VTop2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop2::_initial__TOP__1\n"); );
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*351:0*/ __Vtemp1[11];
    // Body
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x636f6465U;
    __Vtemp1[2U] = 0x68696e65U;
    __Vtemp1[3U] = 0x2f6d6163U;
    __Vtemp1[4U] = 0x726e6579U;
    __Vtemp1[5U] = 0x2d6a6f75U;
    __Vtemp1[6U] = 0x6e696e67U;
    __Vtemp1[7U] = 0x6c656172U;
    __Vtemp1[8U] = 0x6e69732fU;
    __Vtemp1[9U] = 0x652f6d6fU;
    __Vtemp1[0xaU] = 0x2f686f6dU;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(11, __Vtemp1)
                 , vlTOPp->Top2__DOT__instmem__DOT__mem
                 , 0, ~VL_ULL(0));
}

VL_INLINE_OPT void VTop2::_sequent__TOP__2(VTop2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop2::_sequent__TOP__2\n"); );
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__Top2__DOT__DataMemory__DOT__mem__v0;
    SData/*13:0*/ __Vdlyvdim0__Top2__DOT__DataMemory__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__Top2__DOT__DataMemory__DOT__mem__v0;
    // Body
    __Vdlyvset__Top2__DOT__DataMemory__DOT__mem__v0 = 0U;
    vlTOPp->Top2__DOT__ex_mem__DOT__Memrd_Reg = ((~ (IData)(vlTOPp->reset)) 
                                                 & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r));
    vlTOPp->Top2__DOT__id_ex__DOT__OpA_sel_r = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                                  ? 0U
                                                  : (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_operand_A_sel)));
    vlTOPp->Top2__DOT__id_ex__DOT__pcr = ((IData)(vlTOPp->reset)
                                           ? 0U : vlTOPp->Top2__DOT__if_id__DOT__pc_reg);
    vlTOPp->Top2__DOT__id_ex__DOT__pc4r = ((IData)(vlTOPp->reset)
                                            ? 0U : vlTOPp->Top2__DOT__if_id__DOT__pc4_reg);
    vlTOPp->Top2__DOT__id_ex__DOT__AluOp_r = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : ((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                                   ? 0U
                                                   : 
                                                  ((0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)
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
                                                           : 0U))))))))));
    vlTOPp->Top2__DOT__id_ex__DOT__func3_r = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (7U 
                                                  & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                     >> 0xcU)));
    vlTOPp->Top2__DOT__id_ex__DOT__func7_r = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (0x7fU 
                                                  & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                     >> 0x19U)));
    vlTOPp->Top2__DOT__id_ex__DOT__immr = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_extend_sel))
                                             ? ((3U 
                                                 == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_operand_A_sel))
                                                 ? 
                                                ((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45)
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
                                                  : 0U)
                                                 : 0U)
                                             : ((2U 
                                                 == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_extend_sel))
                                                 ? 
                                                ((0x80000000U 
                                                  & (vlTOPp->Top2__DOT__immediate__DOT__output2 
                                                     << 1U)) 
                                                 | vlTOPp->Top2__DOT__immediate__DOT__output2)
                                                 : vlTOPp->Top2__DOT__immediate_io_I_Immediate)));
    vlTOPp->Top2__DOT__mem_wb__DOT__data_mem_Reg = 
        ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Top2__DOT__DataMemory_io_Data);
    vlTOPp->Top2__DOT__mem_wb__DOT__MemtoReg_Reg = 
        ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__MemtoReg_Reg));
    vlTOPp->Top2__DOT__mem_wb__DOT__Aluout_Reg = ((IData)(vlTOPp->reset)
                                                   ? 0U
                                                   : vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg);
    vlTOPp->Top2__DOT__id_ex__DOT__rs2_sel_r = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                    >> 0x14U)));
    vlTOPp->Top2__DOT__id_ex__DOT__rs1_sel_r = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                    >> 0xfU)));
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0x1fU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_31 = 0U;
            }
        } else {
            if ((0x1fU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_31 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0x1eU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_30 = 0U;
            }
        } else {
            if ((0x1eU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_30 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0x1dU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_29 = 0U;
            }
        } else {
            if ((0x1dU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_29 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0x1cU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_28 = 0U;
            }
        } else {
            if ((0x1cU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_28 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0x1bU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_27 = 0U;
            }
        } else {
            if ((0x1bU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_27 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0x1aU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_26 = 0U;
            }
        } else {
            if ((0x1aU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_26 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0x19U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_25 = 0U;
            }
        } else {
            if ((0x19U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_25 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0x18U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_24 = 0U;
            }
        } else {
            if ((0x18U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_24 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0x17U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_23 = 0U;
            }
        } else {
            if ((0x17U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_23 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0x16U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_22 = 0U;
            }
        } else {
            if ((0x16U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_22 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0x15U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_21 = 0U;
            }
        } else {
            if ((0x15U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_21 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0x13U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_19 = 0U;
            }
        } else {
            if ((0x13U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_19 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0x12U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_18 = 0U;
            }
        } else {
            if ((0x12U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_18 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0x14U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_20 = 0U;
            }
        } else {
            if ((0x14U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_20 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0x11U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_17 = 0U;
            }
        } else {
            if ((0x11U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_17 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0xfU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_15 = 0U;
            }
        } else {
            if ((0xfU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_15 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0x10U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_16 = 0U;
            }
        } else {
            if ((0x10U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_16 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0xeU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_14 = 0U;
            }
        } else {
            if ((0xeU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_14 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0xaU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_10 = 0U;
            }
        } else {
            if ((0xaU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_10 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((9U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_9 = 0U;
            }
        } else {
            if ((9U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_9 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((8U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_8 = 0U;
            }
        } else {
            if ((8U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_8 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((7U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_7 = 0U;
            }
        } else {
            if ((7U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_7 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((6U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_6 = 0U;
            }
        } else {
            if ((6U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_6 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    vlTOPp->Top2__DOT__register__DOT__registers_c_2 
        = ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg)
            ? ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))
                ? ((2U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))
                    ? 0U : 0x200U) : ((2U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))
                                       ? vlTOPp->Top2__DOT__register_io_WriteData
                                       : 0x200U)) : 0x200U);
    vlTOPp->Top2__DOT__register__DOT__registers_c_0 
        = ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg)
            ? ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))
                ? 0U : ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))
                         ? vlTOPp->Top2__DOT__register_io_WriteData
                         : 0U)) : 0U);
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((3U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_3 = 0U;
            }
        } else {
            if ((3U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_3 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((1U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_1 = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_1 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((4U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_4 = 0U;
            }
        } else {
            if ((4U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_4 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((5U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_5 = 0U;
            }
        } else {
            if ((5U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_5 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0xbU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_11 = 0U;
            }
        } else {
            if ((0xbU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_11 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0xcU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_12 = 0U;
            }
        } else {
            if ((0xcU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_12 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    if (vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) {
        if ((0U == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
            if ((0xdU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_13 = 0U;
            }
        } else {
            if ((0xdU == (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg))) {
                vlTOPp->Top2__DOT__register__DOT__registers_c_13 
                    = vlTOPp->Top2__DOT__register_io_WriteData;
            }
        }
    }
    vlTOPp->Top2__DOT__id_ex__DOT__rs1r = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) 
                                             & ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                    >> 0xfU))))
                                             ? vlTOPp->Top2__DOT__register_io_WriteData
                                             : vlTOPp->Top2__DOT__register_io_rs1));
    if (vlTOPp->Top2__DOT__ex_mem__DOT__Memwr_Reg) {
        __Vdlyvval__Top2__DOT__DataMemory__DOT__mem__v0 
            = vlTOPp->Top2__DOT__ex_mem__DOT__Rs2_Reg;
        __Vdlyvset__Top2__DOT__DataMemory__DOT__mem__v0 = 1U;
        __Vdlyvdim0__Top2__DOT__DataMemory__DOT__mem__v0 
            = (0xffU & (vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg 
                        >> 2U));
    }
    if (__Vdlyvset__Top2__DOT__DataMemory__DOT__mem__v0) {
        vlTOPp->Top2__DOT__DataMemory__DOT__mem[__Vdlyvdim0__Top2__DOT__DataMemory__DOT__mem__v0] 
            = __Vdlyvval__Top2__DOT__DataMemory__DOT__mem__v0;
    }
    vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r = ((~ (IData)(vlTOPp->reset)) 
                                              & ((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
                                                 & (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_MemRead)));
    vlTOPp->Top2__DOT__if_id__DOT__pc_reg = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             ((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                               ? vlTOPp->Top2__DOT___GEN_33
                                               : ((1U 
                                                   == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                                   ? 
                                                  ((IData)(vlTOPp->Top2__DOT___T_82)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT___T_91)
                                                     ? 0U
                                                     : vlTOPp->Top2__DOT___GEN_33))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                                     ? 0U
                                                     : vlTOPp->Top2__DOT___GEN_33)))));
    vlTOPp->Top2__DOT__if_id__DOT__pc4_reg = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : ((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlTOPp->Top2__DOT__PC__DOT__pc1)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                                    ? 
                                                   ((IData)(vlTOPp->Top2__DOT___T_82)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->Top2__DOT___T_91)
                                                      ? 0U
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlTOPp->Top2__DOT__PC__DOT__pc1)))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                                     ? 0U
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                                      ? 0U
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlTOPp->Top2__DOT__PC__DOT__pc1))))));
    vlTOPp->Top2__DOT__alucontrol__DOT___T_21 = (((IData)(vlTOPp->Top2__DOT__id_ex__DOT__func7_r) 
                                                  << 3U) 
                                                 | (IData)(vlTOPp->Top2__DOT__id_ex__DOT__func3_r));
    vlTOPp->io_reg_out = ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__MemtoReg_Reg)
                           ? vlTOPp->Top2__DOT__mem_wb__DOT__data_mem_Reg
                           : 0U);
    vlTOPp->Top2__DOT__ex_mem__DOT__MemtoReg_Reg = 
        ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemToReg_r));
    vlTOPp->Top2__DOT__ex_mem__DOT__Memwr_Reg = ((~ (IData)(vlTOPp->reset)) 
                                                 & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemWr_r));
    vlTOPp->Top2__DOT__ex_mem__DOT__Rs2_Reg = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
                                                     ? vlTOPp->Top2__DOT__register_io_WriteData
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
                                                      ? vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg
                                                      : vlTOPp->Top2__DOT__id_ex__DOT__rs2r))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r))
                                                     ? vlTOPp->Top2__DOT__id_ex__DOT__rs2r
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
                                                      ? vlTOPp->Top2__DOT__id_ex__DOT__rs2r
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
                                                       ? vlTOPp->Top2__DOT__register_io_WriteData
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
                                                        ? vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg
                                                        : vlTOPp->Top2__DOT__id_ex__DOT__rs2r))))));
    vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8 = ((0U 
                                                   == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__AluOp_r))
                                                   ? 
                                                  ((1U 
                                                    == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__func7_r))
                                                    ? 9U
                                                    : (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___T_21))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__AluOp_r))
                                                    ? 0U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__AluOp_r))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__AluOp_r))
                                                      ? 
                                                     ((5U 
                                                       == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__func3_r))
                                                       ? (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___T_21)
                                                       : (IData)(vlTOPp->Top2__DOT__id_ex__DOT__func3_r))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__AluOp_r))
                                                       ? 
                                                      (0x10U 
                                                       | (IData)(vlTOPp->Top2__DOT__id_ex__DOT__func3_r))
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__AluOp_r))
                                                        ? 0x1fU
                                                        : 0U))))));
    vlTOPp->Top2__DOT__PC__DOT__pc1 = ((IData)(vlTOPp->reset)
                                        ? 0U : vlTOPp->Top2__DOT__PC_io_input);
    vlTOPp->Top2__DOT__id_ex__DOT__MemToReg_r = ((~ (IData)(vlTOPp->reset)) 
                                                 & ((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
                                                    & ((0x33U 
                                                        != 
                                                        (0x7fU 
                                                         & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                                                       & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load))));
    vlTOPp->Top2__DOT__id_ex__DOT__MemWr_r = ((~ (IData)(vlTOPp->reset)) 
                                              & ((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
                                                 & ((0x33U 
                                                     != 
                                                     (0x7fU 
                                                      & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                                                    & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)) 
                                                       & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)))));
    vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                ((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
                                                 & (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45)));
    vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg = ((IData)(vlTOPp->reset)
                                                    ? 0U
                                                    : (IData)(vlTOPp->Top2__DOT__alu__DOT___GEN_22));
    vlTOPp->Top2__DOT__id_ex__DOT__rs2r = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) 
                                             & ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                    >> 0x14U))))
                                             ? vlTOPp->Top2__DOT__register_io_WriteData
                                             : vlTOPp->Top2__DOT__register_io_rs2));
    vlTOPp->Top2__DOT__register_io_WriteData = ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__MemtoReg_Reg)
                                                 ? vlTOPp->Top2__DOT__mem_wb__DOT__data_mem_Reg
                                                 : 
                                                ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__MemtoReg_Reg)
                                                  ? 0U
                                                  : vlTOPp->Top2__DOT__mem_wb__DOT__Aluout_Reg));
    vlTOPp->Top2__DOT__DataMemory_io_Data = ((IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Memrd_Reg)
                                              ? vlTOPp->Top2__DOT__DataMemory__DOT__mem
                                             [(0xffU 
                                               & (vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg 
                                                  >> 2U))]
                                              : 0U);
    vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg = ((~ (IData)(vlTOPp->reset)) 
                                                 & (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Regwr_Reg));
    vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg = ((IData)(vlTOPp->reset)
                                                   ? 0U
                                                   : (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg));
    vlTOPp->Top2__DOT__ex_mem__DOT__Regwr_Reg = ((~ (IData)(vlTOPp->reset)) 
                                                 & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__RegWr_r));
    vlTOPp->Top2__DOT__forward__DOT___T_43 = ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) 
                                              & (0U 
                                                 != (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg)));
    vlTOPp->Top2__DOT__forward__DOT___T_45 = ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
                                              == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rs2_sel_r));
    vlTOPp->Top2__DOT__forward__DOT___T_44 = ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
                                              == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rs1_sel_r));
    vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg = ((IData)(vlTOPp->reset)
                                                   ? 0U
                                                   : (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r));
    vlTOPp->Top2__DOT__id_ex__DOT__RegWr_r = ((~ (IData)(vlTOPp->reset)) 
                                              & ((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
                                                 & ((0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                                                    | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load) 
                                                       | ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)) 
                                                          & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)) 
                                                             & ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type) 
                                                                | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR) 
                                                                   | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL) 
                                                                      | (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI))))))))));
    vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x1fU 
                                                   & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                      >> 7U)));
    vlTOPp->Top2__DOT__branchforward__DOT___T_115 = 
        ((0U != (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg)) 
         & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r));
    vlTOPp->Top2__DOT__branchforward__DOT___T_68 = 
        ((0U != (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg)) 
         & (~ (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r)));
    vlTOPp->Top2__DOT__forward__DOT___T_54 = ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__rs2_sel_r) 
                                              == (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg));
    vlTOPp->Top2__DOT__forward__DOT___T_31 = ((IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg) 
                                              == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rs2_sel_r));
    vlTOPp->Top2__DOT__forward__DOT___T_30 = ((IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg) 
                                              == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rs1_sel_r));
    vlTOPp->Top2__DOT__forward__DOT___T_29 = ((IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Regwr_Reg) 
                                              & (0U 
                                                 != (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg)));
    vlTOPp->Top2__DOT__forward__DOT___T_32 = ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_30) 
                                              & (IData)(vlTOPp->Top2__DOT__forward__DOT___T_31));
    vlTOPp->Top2__DOT__forward__DOT___T_53 = ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_29) 
                                              & ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__rs1_sel_r) 
                                                 == (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg)));
    vlTOPp->Top2__DOT__branchforward__DOT___T_41 = 
        ((0U != (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r)) 
         & (~ (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r)));
    vlTOPp->Top2__DOT__if_id__DOT__inst_reg = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : ((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                                    ? vlTOPp->Top2__DOT___GEN_32
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                                     ? 
                                                    ((IData)(vlTOPp->Top2__DOT___T_82)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlTOPp->Top2__DOT___T_91)
                                                       ? 0U
                                                       : vlTOPp->Top2__DOT___GEN_32))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                                      ? 0U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                                       ? 0U
                                                       : vlTOPp->Top2__DOT___GEN_32)))));
    vlTOPp->Top2__DOT__forward__DOT___GEN_6 = ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_29)
                                                ? ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_32)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_30)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_31)
                                                      ? 2U
                                                      : 0U)))
                                                : 0U);
    vlTOPp->Top2__DOT__forward__DOT___GEN_5 = ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_29)
                                                ? ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_32)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_30)
                                                     ? 2U
                                                     : 0U))
                                                : 0U);
    vlTOPp->Top2__DOT__forward__DOT___T_69 = ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_44) 
                                              & (~ (IData)(vlTOPp->Top2__DOT__forward__DOT___T_53)));
    vlTOPp->Top2__DOT__forward__DOT___T_57 = (((IData)(vlTOPp->Top2__DOT__forward__DOT___T_44) 
                                               & (IData)(vlTOPp->Top2__DOT__forward__DOT___T_45)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_53) 
                                                  & (IData)(vlTOPp->Top2__DOT__forward__DOT___T_54))));
    vlTOPp->Top2__DOT__forward_io_forward_b = ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_43)
                                                ? ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_57)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_69)
                                                     ? (IData)(vlTOPp->Top2__DOT__forward__DOT___GEN_6)
                                                     : 
                                                    (((IData)(vlTOPp->Top2__DOT__forward__DOT___T_45) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_29) 
                                                          & (IData)(vlTOPp->Top2__DOT__forward__DOT___T_54))))
                                                      ? 1U
                                                      : (IData)(vlTOPp->Top2__DOT__forward__DOT___GEN_6))))
                                                : (IData)(vlTOPp->Top2__DOT__forward__DOT___GEN_6));
    vlTOPp->Top2__DOT__forward_io_forward_a = ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_43)
                                                ? ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_57)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_69)
                                                     ? 1U
                                                     : (IData)(vlTOPp->Top2__DOT__forward__DOT___GEN_5)))
                                                : (IData)(vlTOPp->Top2__DOT__forward__DOT___GEN_5));
    vlTOPp->io_instruction = vlTOPp->Top2__DOT__if_id__DOT__inst_reg;
    vlTOPp->Top2__DOT__immediate__DOT__output2 = ((
                                                   ((0x80000000U 
                                                     & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
                                                     ? 0x7ffffU
                                                     : 0U) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                           >> 7U))));
    vlTOPp->Top2__DOT__immediate__DOT__sbt19 = ((((0x80000000U 
                                                   & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
                                                   ? 0x7ffU
                                                   : 0U) 
                                                 << 0x15U) 
                                                | ((0x100000U 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0xbU)) 
                                                   | ((0xff000U 
                                                       & vlTOPp->Top2__DOT__if_id__DOT__inst_reg) 
                                                      | ((0x800U 
                                                          & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                               >> 0x14U))))));
    vlTOPp->Top2__DOT__immediate_io_I_Immediate = (
                                                   (0x80000000U 
                                                    & (((0x80000000U 
                                                         & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
                                                         ? 0x7ffffU
                                                         : 0U) 
                                                       << 0xdU)) 
                                                   | ((((0x80000000U 
                                                         & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
                                                         ? 0x7ffffU
                                                         : 0U) 
                                                       << 0xcU) 
                                                      | (0xfffU 
                                                         & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                            >> 0x14U))));
    vlTOPp->Top2__DOT__immediate__DOT__sbt13 = ((((0x80000000U 
                                                   & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
                                                   ? 0x7ffffU
                                                   : 0U) 
                                                 << 0xdU) 
                                                | ((0x1000U 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                               >> 7U))))));
    vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                 & ((0x63U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                    & ((0x13U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                       & ((0x67U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                          & ((0x6fU != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                             & (0x37U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)))))))));
    vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                 & ((0x63U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                    & (0x13U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))))));
    vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                 & ((0x63U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                    & ((0x13U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                       & (0x67U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)))))));
    vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                 & ((0x63U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                    & ((0x13U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                       & ((0x67U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                          & (0x6fU == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))))))));
    vlTOPp->Top2__DOT__register__DOT___GEN_45 = ((0xdU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                      >> 0x14U)))
                                                  ? vlTOPp->Top2__DOT__register__DOT__registers_c_13
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0x14U)))
                                                   ? vlTOPp->Top2__DOT__register__DOT__registers_c_12
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top2__DOT__register__DOT__registers_c_11
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top2__DOT__register__DOT__registers_c_10
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Top2__DOT__register__DOT__registers_c_9
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                           >> 0x14U)))
                                                       ? vlTOPp->Top2__DOT__register__DOT__registers_c_8
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                            >> 0x14U)))
                                                        ? vlTOPp->Top2__DOT__register__DOT__registers_c_7
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                             >> 0x14U)))
                                                         ? vlTOPp->Top2__DOT__register__DOT__registers_c_6
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                              >> 0x14U)))
                                                          ? vlTOPp->Top2__DOT__register__DOT__registers_c_5
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                               >> 0x14U)))
                                                           ? vlTOPp->Top2__DOT__register__DOT__registers_c_4
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                >> 0x14U)))
                                                            ? vlTOPp->Top2__DOT__register__DOT__registers_c_3
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                 >> 0x14U)))
                                                             ? vlTOPp->Top2__DOT__register__DOT__registers_c_2
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                  >> 0x14U)))
                                                              ? vlTOPp->Top2__DOT__register__DOT__registers_c_1
                                                              : vlTOPp->Top2__DOT__register__DOT__registers_c_0)))))))))))));
    vlTOPp->Top2__DOT__register__DOT___GEN_13 = ((0xdU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                      >> 0xfU)))
                                                  ? vlTOPp->Top2__DOT__register__DOT__registers_c_13
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0xfU)))
                                                   ? vlTOPp->Top2__DOT__register__DOT__registers_c_12
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                        >> 0xfU)))
                                                    ? vlTOPp->Top2__DOT__register__DOT__registers_c_11
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                         >> 0xfU)))
                                                     ? vlTOPp->Top2__DOT__register__DOT__registers_c_10
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                          >> 0xfU)))
                                                      ? vlTOPp->Top2__DOT__register__DOT__registers_c_9
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                           >> 0xfU)))
                                                       ? vlTOPp->Top2__DOT__register__DOT__registers_c_8
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                            >> 0xfU)))
                                                        ? vlTOPp->Top2__DOT__register__DOT__registers_c_7
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                             >> 0xfU)))
                                                         ? vlTOPp->Top2__DOT__register__DOT__registers_c_6
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                              >> 0xfU)))
                                                          ? vlTOPp->Top2__DOT__register__DOT__registers_c_5
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                               >> 0xfU)))
                                                           ? vlTOPp->Top2__DOT__register__DOT__registers_c_4
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                >> 0xfU)))
                                                            ? vlTOPp->Top2__DOT__register__DOT__registers_c_3
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                 >> 0xfU)))
                                                             ? vlTOPp->Top2__DOT__register__DOT__registers_c_2
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                  >> 0xfU)))
                                                              ? vlTOPp->Top2__DOT__register__DOT__registers_c_1
                                                              : vlTOPp->Top2__DOT__register__DOT__registers_c_0)))))))))))));
    vlTOPp->Top2__DOT__branchforward__DOT___T_182 = 
        ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
         == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                      >> 0xfU)));
    vlTOPp->Top2__DOT__branchforward__DOT___T_184 = 
        ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
         == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                      >> 0x14U)));
    vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
              & (0x23U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))));
    vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                 & (0x63U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)))));
    vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & (3U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)));
    vlTOPp->Top2__DOT__branchforward__DOT___T_77 = 
        ((IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg) 
         == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                      >> 0xfU)));
    vlTOPp->Top2__DOT__branchforward__DOT___T_79 = 
        ((IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg) 
         == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                      >> 0x14U)));
    vlTOPp->Top2__DOT__branchforward__DOT___T_44 = 
        ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r) 
         == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                      >> 0x14U)));
    vlTOPp->Top2__DOT__hazardDetection__DOT___T_39 
        = ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r) 
           == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                        >> 0xfU)));
    vlTOPp->Top2__DOT__alu_io_B = ((1U & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r))
                                    ? vlTOPp->Top2__DOT__id_ex__DOT__immr
                                    : ((1U & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r))
                                        ? 0U : ((0U 
                                                 == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
                                                 ? vlTOPp->Top2__DOT__id_ex__DOT__rs2r
                                                 : 
                                                ((1U 
                                                  == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
                                                  ? vlTOPp->Top2__DOT__register_io_WriteData
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
                                                   ? vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg
                                                   : 0U)))));
    vlTOPp->Top2__DOT__alu_io_A = ((2U == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpA_sel_r))
                                    ? vlTOPp->Top2__DOT__id_ex__DOT__pc4r
                                    : ((1U == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpA_sel_r))
                                        ? vlTOPp->Top2__DOT__id_ex__DOT__pcr
                                        : ((0U == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpA_sel_r))
                                            ? ((0U 
                                                == (IData)(vlTOPp->Top2__DOT__forward_io_forward_a))
                                                ? vlTOPp->Top2__DOT__id_ex__DOT__rs1r
                                                : (
                                                   (1U 
                                                    == (IData)(vlTOPp->Top2__DOT__forward_io_forward_a))
                                                    ? vlTOPp->Top2__DOT__register_io_WriteData
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->Top2__DOT__forward_io_forward_a))
                                                     ? vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg
                                                     : 0U)))
                                            : 0U)));
    vlTOPp->Top2__DOT__immediate__DOT__output5 = (vlTOPp->Top2__DOT__immediate__DOT__sbt13 
                                                  + vlTOPp->Top2__DOT__if_id__DOT__pc_reg);
    vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_12 
        = ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR)) 
           & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL)) 
              & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI)));
    vlTOPp->Top2__DOT__register__DOT___GEN_58 = ((0x1aU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                      >> 0x14U)))
                                                  ? vlTOPp->Top2__DOT__register__DOT__registers_c_26
                                                  : 
                                                 ((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0x14U)))
                                                   ? vlTOPp->Top2__DOT__register__DOT__registers_c_25
                                                   : 
                                                  ((0x18U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top2__DOT__register__DOT__registers_c_24
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top2__DOT__register__DOT__registers_c_23
                                                     : 
                                                    ((0x16U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Top2__DOT__register__DOT__registers_c_22
                                                      : 
                                                     ((0x15U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                           >> 0x14U)))
                                                       ? vlTOPp->Top2__DOT__register__DOT__registers_c_21
                                                       : 
                                                      ((0x14U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                            >> 0x14U)))
                                                        ? vlTOPp->Top2__DOT__register__DOT__registers_c_20
                                                        : 
                                                       ((0x13U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                             >> 0x14U)))
                                                         ? vlTOPp->Top2__DOT__register__DOT__registers_c_19
                                                         : 
                                                        ((0x12U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                              >> 0x14U)))
                                                          ? vlTOPp->Top2__DOT__register__DOT__registers_c_18
                                                          : 
                                                         ((0x11U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                               >> 0x14U)))
                                                           ? vlTOPp->Top2__DOT__register__DOT__registers_c_17
                                                           : 
                                                          ((0x10U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                >> 0x14U)))
                                                            ? vlTOPp->Top2__DOT__register__DOT__registers_c_16
                                                            : 
                                                           ((0xfU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                 >> 0x14U)))
                                                             ? vlTOPp->Top2__DOT__register__DOT__registers_c_15
                                                             : 
                                                            ((0xeU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                  >> 0x14U)))
                                                              ? vlTOPp->Top2__DOT__register__DOT__registers_c_14
                                                              : vlTOPp->Top2__DOT__register__DOT___GEN_45)))))))))))));
    vlTOPp->Top2__DOT__register__DOT___GEN_26 = ((0x1aU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                      >> 0xfU)))
                                                  ? vlTOPp->Top2__DOT__register__DOT__registers_c_26
                                                  : 
                                                 ((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0xfU)))
                                                   ? vlTOPp->Top2__DOT__register__DOT__registers_c_25
                                                   : 
                                                  ((0x18U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                        >> 0xfU)))
                                                    ? vlTOPp->Top2__DOT__register__DOT__registers_c_24
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                         >> 0xfU)))
                                                     ? vlTOPp->Top2__DOT__register__DOT__registers_c_23
                                                     : 
                                                    ((0x16U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                          >> 0xfU)))
                                                      ? vlTOPp->Top2__DOT__register__DOT__registers_c_22
                                                      : 
                                                     ((0x15U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                           >> 0xfU)))
                                                       ? vlTOPp->Top2__DOT__register__DOT__registers_c_21
                                                       : 
                                                      ((0x14U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                            >> 0xfU)))
                                                        ? vlTOPp->Top2__DOT__register__DOT__registers_c_20
                                                        : 
                                                       ((0x13U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                             >> 0xfU)))
                                                         ? vlTOPp->Top2__DOT__register__DOT__registers_c_19
                                                         : 
                                                        ((0x12U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                              >> 0xfU)))
                                                          ? vlTOPp->Top2__DOT__register__DOT__registers_c_18
                                                          : 
                                                         ((0x11U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                               >> 0xfU)))
                                                           ? vlTOPp->Top2__DOT__register__DOT__registers_c_17
                                                           : 
                                                          ((0x10U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                >> 0xfU)))
                                                            ? vlTOPp->Top2__DOT__register__DOT__registers_c_16
                                                            : 
                                                           ((0xfU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                 >> 0xfU)))
                                                             ? vlTOPp->Top2__DOT__register__DOT__registers_c_15
                                                             : 
                                                            ((0xeU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                  >> 0xfU)))
                                                              ? vlTOPp->Top2__DOT__register__DOT__registers_c_14
                                                              : vlTOPp->Top2__DOT__register__DOT___GEN_13)))))))))))));
    vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_operand_A_sel 
        = ((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))
            ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)
                     ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)
                              ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)
                                       ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type)
                                                ? 0U
                                                : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL)
                                                     ? 2U
                                                     : 
                                                    ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI)
                                                      ? 3U
                                                      : 0U))))))));
    vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel 
        = ((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))
            ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)
                     ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)
                              ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)
                                       ? 1U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type)
                                                ? 0U
                                                : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR)
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL)
                                                     ? 2U
                                                     : 0U)))))));
    vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_MemRead 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load));
    vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)) 
              & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)) 
                 & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch))));
    vlTOPp->Top2__DOT__branchforward__DOT___T_177 = 
        ((0U != (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg)) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_77));
    vlTOPp->Top2__DOT__branchforward__DOT___T_91 = 
        ((0U != (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r)) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_44));
    vlTOPp->Top2__DOT__hazardDetection__DOT___T_40 
        = ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r) 
           & (IData)(vlTOPp->Top2__DOT__hazardDetection__DOT___T_39));
    vlTOPp->Top2__DOT__branchforward__DOT___T_43 = 
        ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_41) 
         & (IData)(vlTOPp->Top2__DOT__hazardDetection__DOT___T_39));
    vlTOPp->Top2__DOT__branchforward__DOT___T_72 = 
        ((0U != (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r)) 
         & (IData)(vlTOPp->Top2__DOT__hazardDetection__DOT___T_39));
    vlTOPp->Top2__DOT__alu__DOT___T_69 = (vlTOPp->Top2__DOT__alu_io_A 
                                          == vlTOPp->Top2__DOT__alu_io_B);
    vlTOPp->Top2__DOT__alu__DOT___T_32 = VL_LTS_III(1,32,32, vlTOPp->Top2__DOT__alu_io_A, vlTOPp->Top2__DOT__alu_io_B);
    vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load) 
              | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store) 
                 | ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)) 
                    & ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type) 
                       | (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_12))))));
    vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_extend_sel 
        = ((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))
            ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)
                     ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)
                              ? 2U : ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)) 
                                      & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type)) 
                                         & (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_12))))));
    vlTOPp->Top2__DOT__register_io_rs2 = ((0x1fU == 
                                           (0x1fU & 
                                            (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                             >> 0x14U)))
                                           ? vlTOPp->Top2__DOT__register__DOT__registers_c_31
                                           : ((0x1eU 
                                               == (0x1fU 
                                                   & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                      >> 0x14U)))
                                               ? vlTOPp->Top2__DOT__register__DOT__registers_c_30
                                               : ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0x14U)))
                                                   ? vlTOPp->Top2__DOT__register__DOT__registers_c_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top2__DOT__register__DOT__registers_c_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top2__DOT__register__DOT__registers_c_27
                                                     : vlTOPp->Top2__DOT__register__DOT___GEN_58)))));
    vlTOPp->Top2__DOT__register_io_rs1 = ((0x1fU == 
                                           (0x1fU & 
                                            (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                             >> 0xfU)))
                                           ? vlTOPp->Top2__DOT__register__DOT__registers_c_31
                                           : ((0x1eU 
                                               == (0x1fU 
                                                   & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                      >> 0xfU)))
                                               ? vlTOPp->Top2__DOT__register__DOT__registers_c_30
                                               : ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0xfU)))
                                                   ? vlTOPp->Top2__DOT__register__DOT__registers_c_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                        >> 0xfU)))
                                                    ? vlTOPp->Top2__DOT__register__DOT__registers_c_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                         >> 0xfU)))
                                                     ? vlTOPp->Top2__DOT__register__DOT__registers_c_27
                                                     : vlTOPp->Top2__DOT__register__DOT___GEN_26)))));
    vlTOPp->Top2__DOT___T_91 = ((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2) 
                                & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r));
    vlTOPp->Top2__DOT__hazardDetection__DOT___GEN_8 
        = ((~ ((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2) 
               & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r))) 
           & ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r) 
              & ((IData)(vlTOPp->Top2__DOT__hazardDetection__DOT___T_39) 
                 | ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r) 
                    == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                 >> 0x14U))))));
    vlTOPp->Top2__DOT__branchforward__DOT___T_209 = 
        ((((IData)(vlTOPp->Top2__DOT__forward__DOT___T_43) 
           & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_91))) 
          & (~ ((0U != (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg)) 
                & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_79)))) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_184));
    vlTOPp->Top2__DOT__branchforward__DOT___T_95 = 
        (((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_68) 
          & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_91))) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_79));
    vlTOPp->Top2__DOT__branchforward__DOT___T_142 = 
        (((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_115) 
          & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_91))) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_79));
    vlTOPp->Top2__DOT__branchforward__DOT___T_45 = 
        ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_43) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_44));
    vlTOPp->Top2__DOT__branchforward__DOT___T_109 = 
        (((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_68) 
          & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_72))) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_77));
    vlTOPp->Top2__DOT__branchforward__DOT___T_74 = 
        ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_72) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_44));
    vlTOPp->Top2__DOT__alu__DOT___GEN_11 = ((0x10U 
                                             == (0x1fU 
                                                 & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                             ? ((IData)(vlTOPp->Top2__DOT__alu__DOT___T_69)
                                                 ? 1U
                                                 : 0U)
                                             : ((0x11U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                 ? 
                                                ((IData)(vlTOPp->Top2__DOT__alu__DOT___T_69)
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((0x14U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                  ? 
                                                 ((IData)(vlTOPp->Top2__DOT__alu__DOT___T_32)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 ((0x15U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                   ? 
                                                  (VL_GTES_III(1,32,32, vlTOPp->Top2__DOT__alu_io_A, vlTOPp->Top2__DOT__alu_io_B)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((vlTOPp->Top2__DOT__alu_io_A 
                                                    >= vlTOPp->Top2__DOT__alu_io_B)
                                                    ? 1U
                                                    : 0U)))));
    vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward 
        = ((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_MemRead)
            ? (IData)(vlTOPp->Top2__DOT__hazardDetection__DOT___T_40)
            : (IData)(vlTOPp->Top2__DOT__hazardDetection__DOT___GEN_8));
    vlTOPp->Top2__DOT__branchforward__DOT___GEN_4 = 
        ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_45) 
         | ((~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_43)) 
            & ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_41) 
               & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_44))));
    vlTOPp->Top2__DOT__branchforward__DOT___GEN_3 = 
        ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_45) 
         | (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_43));
    vlTOPp->Top2__DOT__branchforward__DOT___T_185 = 
        (((((0U != (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg)) 
            & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_74))) 
           & (~ ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_177) 
                 & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_79)))) 
          & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_182)) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_184));
    vlTOPp->Top2__DOT__branchforward__DOT___T_80 = 
        ((((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_68) 
           & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_74))) 
          & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_77)) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_79));
    vlTOPp->Top2__DOT__branchforward__DOT___T_127 = 
        ((((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_115) 
           & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_74))) 
          & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_77)) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_79));
    vlTOPp->Top2__DOT__alu__DOT___GEN_18 = ((2U == 
                                             (0x1fU 
                                              & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                             ? ((0xfffffffcU 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (((IData)(vlTOPp->Top2__DOT__alu__DOT___T_32)
                                                                     ? 1U
                                                                     : 0U) 
                                                                   >> 1U)))) 
                                                    << 2U)) 
                                                | ((IData)(vlTOPp->Top2__DOT__alu__DOT___T_32)
                                                    ? 1U
                                                    : 0U))
                                             : (((3U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8))) 
                                                 | (0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8))))
                                                 ? 
                                                ((0xfffffffcU 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (((IData)(vlTOPp->Top2__DOT__alu__DOT___T_32)
                                                                      ? 1U
                                                                      : 0U) 
                                                                    >> 1U)))) 
                                                     << 2U)) 
                                                 | ((IData)(vlTOPp->Top2__DOT__alu__DOT___T_32)
                                                     ? 1U
                                                     : 0U))
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                  ? 
                                                 (vlTOPp->Top2__DOT__alu_io_A 
                                                  ^ vlTOPp->Top2__DOT__alu_io_B)
                                                  : 
                                                 (((5U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8))) 
                                                   | (0xdU 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8))))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, vlTOPp->Top2__DOT__alu_io_A, 
                                                                 (0x1fU 
                                                                  & vlTOPp->Top2__DOT__alu_io_B))
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                    ? 
                                                   (vlTOPp->Top2__DOT__alu_io_A 
                                                    | vlTOPp->Top2__DOT__alu_io_B)
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                     ? 
                                                    (vlTOPp->Top2__DOT__alu_io_A 
                                                     & vlTOPp->Top2__DOT__alu_io_B)
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                      ? 
                                                     (vlTOPp->Top2__DOT__alu_io_A 
                                                      - vlTOPp->Top2__DOT__alu_io_B)
                                                      : 
                                                     ((0xfffffffcU 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlTOPp->Top2__DOT__alu__DOT___GEN_11) 
                                                                         >> 1U)))) 
                                                          << 2U)) 
                                                      | (IData)(vlTOPp->Top2__DOT__alu__DOT___GEN_11)))))))));
    vlTOPp->Top2__DOT___GEN_33 = ((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                   ? vlTOPp->Top2__DOT__if_id__DOT__pc_reg
                                   : vlTOPp->Top2__DOT__PC__DOT__pc1);
    vlTOPp->Top2__DOT___GEN_32 = ((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                   ? vlTOPp->Top2__DOT__if_id__DOT__inst_reg
                                   : vlTOPp->Top2__DOT__instmem__DOT__mem
                                  [(0x3ffU & (vlTOPp->Top2__DOT__PC__DOT__pc1 
                                              >> 2U))]);
    vlTOPp->Top2__DOT__branchforward__DOT___GEN_34 
        = ((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2)
            ? ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_185)
                ? 3U : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_209)
                         ? 3U : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_80)
                                  ? 2U : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_95)
                                           ? 2U : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_109)
                                                    ? (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_4)
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_127)
                                                     ? 4U
                                                     : 
                                                    ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_142)
                                                      ? 4U
                                                      : (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_4))))))))
            : 0U);
    vlTOPp->Top2__DOT__branchforward__DOT___GEN_14 
        = ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_80)
            ? 2U : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_95)
                     ? (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_3)
                     : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_109)
                         ? 2U : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_127)
                                  ? 4U : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_142)
                                           ? (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_3)
                                           : ((((((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2) 
                                                  & (0U 
                                                     != (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg))) 
                                                 & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r)) 
                                                & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_72))) 
                                               & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_77))
                                               ? 4U
                                               : (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_3)))))));
    vlTOPp->Top2__DOT__alu__DOT___GEN_19 = ((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                             ? vlTOPp->Top2__DOT__alu_io_A
                                             : vlTOPp->Top2__DOT__alu__DOT___GEN_18);
    vlTOPp->Top2__DOT__branchforward_io_forward_a = 
        ((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2)
          ? ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_185)
              ? 3U : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_209)
                       ? (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_14)
                       : (((((0U != (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg)) 
                             & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_72))) 
                            & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_177))) 
                           & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_182))
                           ? 3U : (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_14))))
          : ((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2)
              ? 0U : (((((IData)(vlTOPp->Top2__DOT__forward__DOT___T_43) 
                         & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_72))) 
                        & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_177))) 
                       & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_182))
                       ? 8U : (((((IData)(vlTOPp->Top2__DOT__forward__DOT___T_29) 
                                  & (~ (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r))) 
                                 & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_72))) 
                                & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_77))
                                ? 7U : (((((IData)(vlTOPp->Top2__DOT__forward__DOT___T_29) 
                                           & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r)) 
                                          & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_72))) 
                                         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_77))
                                         ? 9U : (((
                                                   ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__RegWr_r) 
                                                    & (0U 
                                                       != (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r))) 
                                                   & (~ (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r))) 
                                                  & (IData)(vlTOPp->Top2__DOT__hazardDetection__DOT___T_39))
                                                  ? 6U
                                                  : 0U))))));
    vlTOPp->Top2__DOT__alu__DOT___GEN_20 = (VL_ULL(0x7fffffffffffffff) 
                                            & ((1U 
                                                == 
                                                (0x1fU 
                                                 & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                ? (
                                                   (((QData)((IData)(
                                                                     (0x7fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (vlTOPp->Top2__DOT__alu_io_A 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlTOPp->Top2__DOT__alu_io_A))) 
                                                   << 
                                                   (0x1fU 
                                                    & vlTOPp->Top2__DOT__alu_io_B))
                                                : (
                                                   ((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (vlTOPp->Top2__DOT__alu__DOT___GEN_19 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->Top2__DOT__alu__DOT___GEN_19)))));
    vlTOPp->Top2__DOT__alu__DOT___GEN_22 = ((0U == 
                                             (0x1fU 
                                              & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & ((vlTOPp->Top2__DOT__alu_io_A 
                                                                                + vlTOPp->Top2__DOT__alu_io_B) 
                                                                                >> 0x1fU)))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (vlTOPp->Top2__DOT__alu_io_A 
                                                                   + vlTOPp->Top2__DOT__alu_io_B))))
                                             : ((9U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                 ? 
                                                VL_MULS_QQQ(64,64,64, 
                                                            VL_EXTENDS_QI(64,32, vlTOPp->Top2__DOT__alu_io_A), 
                                                            VL_EXTENDS_QI(64,32, vlTOPp->Top2__DOT__alu_io_B))
                                                 : 
                                                (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->Top2__DOT__alu__DOT___GEN_20 
                                                                              >> 0x3eU))))) 
                                                  << 0x3fU) 
                                                 | vlTOPp->Top2__DOT__alu__DOT___GEN_20)));
    vlTOPp->Top2__DOT__JALR_io_A = ((0U == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                     ? vlTOPp->Top2__DOT__register_io_rs1
                                     : ((1U == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                         ? vlTOPp->Top2__DOT__register_io_rs1
                                         : ((2U == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                             ? vlTOPp->Top2__DOT__register_io_rs1
                                             : ((3U 
                                                 == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                 ? vlTOPp->Top2__DOT__register_io_rs1
                                                 : 
                                                ((4U 
                                                  == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                  ? vlTOPp->Top2__DOT__register_io_rs1
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                   ? vlTOPp->Top2__DOT__register_io_rs1
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                    ? (IData)(vlTOPp->Top2__DOT__alu__DOT___GEN_22)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                     ? vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                      ? vlTOPp->Top2__DOT__register_io_WriteData
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                       ? vlTOPp->Top2__DOT__DataMemory_io_Data
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                        ? vlTOPp->Top2__DOT__register_io_WriteData
                                                        : vlTOPp->Top2__DOT__register_io_rs1)))))))))));
    vlTOPp->Top2__DOT__branchlogic_io_rs1_in = ((0U 
                                                 == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                 ? vlTOPp->Top2__DOT__register_io_rs1
                                                 : 
                                                ((1U 
                                                  == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                  ? (IData)(vlTOPp->Top2__DOT__alu__DOT___GEN_22)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                   ? vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                    ? vlTOPp->Top2__DOT__register_io_WriteData
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                     ? vlTOPp->Top2__DOT__DataMemory_io_Data
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                      ? vlTOPp->Top2__DOT__register_io_WriteData
                                                      : vlTOPp->Top2__DOT__register_io_rs1))))));
    vlTOPp->Top2__DOT__branchlogic_io_rs2_in = ((0U 
                                                 == (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_34))
                                                 ? vlTOPp->Top2__DOT__register_io_rs2
                                                 : 
                                                ((1U 
                                                  == (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_34))
                                                  ? (IData)(vlTOPp->Top2__DOT__alu__DOT___GEN_22)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_34))
                                                   ? vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_34))
                                                    ? vlTOPp->Top2__DOT__register_io_WriteData
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_34))
                                                     ? vlTOPp->Top2__DOT__DataMemory_io_Data
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_34))
                                                      ? vlTOPp->Top2__DOT__register_io_WriteData
                                                      : vlTOPp->Top2__DOT__register_io_rs2))))));
    vlTOPp->Top2__DOT___T_82 = (((0U == (7U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                               >> 0xcU)))
                                  ? (vlTOPp->Top2__DOT__branchlogic_io_rs1_in 
                                     == vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
                                  : ((1U == (7U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                   >> 0xcU)))
                                      ? (vlTOPp->Top2__DOT__branchlogic_io_rs1_in 
                                         != vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
                                      : ((4U == (7U 
                                                 & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                    >> 0xcU)))
                                          ? VL_LTS_III(1,32,32, vlTOPp->Top2__DOT__branchlogic_io_rs1_in, vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
                                          : ((5U == 
                                              (7U & 
                                               (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                >> 0xcU)))
                                              ? VL_GTES_III(1,32,32, vlTOPp->Top2__DOT__branchlogic_io_rs1_in, vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
                                              : ((6U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                      >> 0xcU)))
                                                  ? 
                                                 (vlTOPp->Top2__DOT__branchlogic_io_rs1_in 
                                                  < vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
                                                  : 
                                                 ((7U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0xcU))) 
                                                  & (vlTOPp->Top2__DOT__branchlogic_io_rs1_in 
                                                     >= vlTOPp->Top2__DOT__branchlogic_io_rs2_in))))))) 
                                & (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2));
    vlTOPp->io_branch_stall = ((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
                               & ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel)) 
                                  & ((~ (IData)(vlTOPp->Top2__DOT___T_82)) 
                                     & (IData)(vlTOPp->Top2__DOT___T_91))));
    vlTOPp->Top2__DOT__PC_io_input = ((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                       ? vlTOPp->Top2__DOT__if_id__DOT__pc4_reg
                                       : ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                           ? ((IData)(vlTOPp->Top2__DOT___T_82)
                                               ? vlTOPp->Top2__DOT__immediate__DOT__output5
                                               : ((IData)(vlTOPp->Top2__DOT___T_91)
                                                   ? vlTOPp->Top2__DOT__immediate__DOT__output5
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlTOPp->Top2__DOT__PC__DOT__pc1)))
                                           : ((2U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                               ? (vlTOPp->Top2__DOT__immediate__DOT__sbt19 
                                                  + vlTOPp->Top2__DOT__if_id__DOT__pc_reg)
                                               : ((3U 
                                                   == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                                   ? 
                                                  (0xfffffffeU 
                                                   & (vlTOPp->Top2__DOT__JALR_io_A 
                                                      + vlTOPp->Top2__DOT__immediate_io_I_Immediate))
                                                   : 
                                                  ((0U 
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
                                                    : 0U)))));
}

void VTop2::_settle__TOP__3(VTop2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop2::_settle__TOP__3\n"); );
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_reg_out = ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__MemtoReg_Reg)
                           ? vlTOPp->Top2__DOT__mem_wb__DOT__data_mem_Reg
                           : 0U);
    vlTOPp->Top2__DOT__alucontrol__DOT___T_21 = (((IData)(vlTOPp->Top2__DOT__id_ex__DOT__func7_r) 
                                                  << 3U) 
                                                 | (IData)(vlTOPp->Top2__DOT__id_ex__DOT__func3_r));
    vlTOPp->Top2__DOT__register_io_WriteData = ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__MemtoReg_Reg)
                                                 ? vlTOPp->Top2__DOT__mem_wb__DOT__data_mem_Reg
                                                 : 
                                                ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__MemtoReg_Reg)
                                                  ? 0U
                                                  : vlTOPp->Top2__DOT__mem_wb__DOT__Aluout_Reg));
    vlTOPp->Top2__DOT__DataMemory_io_Data = ((IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Memrd_Reg)
                                              ? vlTOPp->Top2__DOT__DataMemory__DOT__mem
                                             [(0xffU 
                                               & (vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg 
                                                  >> 2U))]
                                              : 0U);
    vlTOPp->Top2__DOT__forward__DOT___T_43 = ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Regwr_Reg) 
                                              & (0U 
                                                 != (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg)));
    vlTOPp->Top2__DOT__forward__DOT___T_45 = ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
                                              == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rs2_sel_r));
    vlTOPp->Top2__DOT__forward__DOT___T_44 = ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
                                              == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rs1_sel_r));
    vlTOPp->Top2__DOT__branchforward__DOT___T_115 = 
        ((0U != (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg)) 
         & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r));
    vlTOPp->Top2__DOT__branchforward__DOT___T_68 = 
        ((0U != (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg)) 
         & (~ (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r)));
    vlTOPp->Top2__DOT__forward__DOT___T_54 = ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__rs2_sel_r) 
                                              == (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg));
    vlTOPp->Top2__DOT__forward__DOT___T_31 = ((IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg) 
                                              == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rs2_sel_r));
    vlTOPp->Top2__DOT__forward__DOT___T_30 = ((IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg) 
                                              == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rs1_sel_r));
    vlTOPp->Top2__DOT__forward__DOT___T_29 = ((IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Regwr_Reg) 
                                              & (0U 
                                                 != (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg)));
    vlTOPp->Top2__DOT__branchforward__DOT___T_41 = 
        ((0U != (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r)) 
         & (~ (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r)));
    vlTOPp->io_instruction = vlTOPp->Top2__DOT__if_id__DOT__inst_reg;
    vlTOPp->Top2__DOT__immediate__DOT__output2 = ((
                                                   ((0x80000000U 
                                                     & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
                                                     ? 0x7ffffU
                                                     : 0U) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                           >> 7U))));
    vlTOPp->Top2__DOT__immediate__DOT__sbt19 = ((((0x80000000U 
                                                   & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
                                                   ? 0x7ffU
                                                   : 0U) 
                                                 << 0x15U) 
                                                | ((0x100000U 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0xbU)) 
                                                   | ((0xff000U 
                                                       & vlTOPp->Top2__DOT__if_id__DOT__inst_reg) 
                                                      | ((0x800U 
                                                          & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                               >> 0x14U))))));
    vlTOPp->Top2__DOT__immediate_io_I_Immediate = (
                                                   (0x80000000U 
                                                    & (((0x80000000U 
                                                         & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
                                                         ? 0x7ffffU
                                                         : 0U) 
                                                       << 0xdU)) 
                                                   | ((((0x80000000U 
                                                         & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
                                                         ? 0x7ffffU
                                                         : 0U) 
                                                       << 0xcU) 
                                                      | (0xfffU 
                                                         & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                            >> 0x14U))));
    vlTOPp->Top2__DOT__immediate__DOT__sbt13 = ((((0x80000000U 
                                                   & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)
                                                   ? 0x7ffffU
                                                   : 0U) 
                                                 << 0xdU) 
                                                | ((0x1000U 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                               >> 7U))))));
    vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                 & ((0x63U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                    & ((0x13U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                       & ((0x67U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                          & ((0x6fU != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                             & (0x37U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)))))))));
    vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                 & ((0x63U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                    & (0x13U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))))));
    vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                 & ((0x63U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                    & ((0x13U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                       & (0x67U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)))))));
    vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                 & ((0x63U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                    & ((0x13U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                       & ((0x67U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                          & (0x6fU == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))))))));
    vlTOPp->Top2__DOT__register__DOT___GEN_45 = ((0xdU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                      >> 0x14U)))
                                                  ? vlTOPp->Top2__DOT__register__DOT__registers_c_13
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0x14U)))
                                                   ? vlTOPp->Top2__DOT__register__DOT__registers_c_12
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top2__DOT__register__DOT__registers_c_11
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top2__DOT__register__DOT__registers_c_10
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Top2__DOT__register__DOT__registers_c_9
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                           >> 0x14U)))
                                                       ? vlTOPp->Top2__DOT__register__DOT__registers_c_8
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                            >> 0x14U)))
                                                        ? vlTOPp->Top2__DOT__register__DOT__registers_c_7
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                             >> 0x14U)))
                                                         ? vlTOPp->Top2__DOT__register__DOT__registers_c_6
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                              >> 0x14U)))
                                                          ? vlTOPp->Top2__DOT__register__DOT__registers_c_5
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                               >> 0x14U)))
                                                           ? vlTOPp->Top2__DOT__register__DOT__registers_c_4
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                >> 0x14U)))
                                                            ? vlTOPp->Top2__DOT__register__DOT__registers_c_3
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                 >> 0x14U)))
                                                             ? vlTOPp->Top2__DOT__register__DOT__registers_c_2
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                  >> 0x14U)))
                                                              ? vlTOPp->Top2__DOT__register__DOT__registers_c_1
                                                              : vlTOPp->Top2__DOT__register__DOT__registers_c_0)))))))))))));
    vlTOPp->Top2__DOT__register__DOT___GEN_13 = ((0xdU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                      >> 0xfU)))
                                                  ? vlTOPp->Top2__DOT__register__DOT__registers_c_13
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0xfU)))
                                                   ? vlTOPp->Top2__DOT__register__DOT__registers_c_12
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                        >> 0xfU)))
                                                    ? vlTOPp->Top2__DOT__register__DOT__registers_c_11
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                         >> 0xfU)))
                                                     ? vlTOPp->Top2__DOT__register__DOT__registers_c_10
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                          >> 0xfU)))
                                                      ? vlTOPp->Top2__DOT__register__DOT__registers_c_9
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                           >> 0xfU)))
                                                       ? vlTOPp->Top2__DOT__register__DOT__registers_c_8
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                            >> 0xfU)))
                                                        ? vlTOPp->Top2__DOT__register__DOT__registers_c_7
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                             >> 0xfU)))
                                                         ? vlTOPp->Top2__DOT__register__DOT__registers_c_6
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                              >> 0xfU)))
                                                          ? vlTOPp->Top2__DOT__register__DOT__registers_c_5
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                               >> 0xfU)))
                                                           ? vlTOPp->Top2__DOT__register__DOT__registers_c_4
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                >> 0xfU)))
                                                            ? vlTOPp->Top2__DOT__register__DOT__registers_c_3
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                 >> 0xfU)))
                                                             ? vlTOPp->Top2__DOT__register__DOT__registers_c_2
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                  >> 0xfU)))
                                                              ? vlTOPp->Top2__DOT__register__DOT__registers_c_1
                                                              : vlTOPp->Top2__DOT__register__DOT__registers_c_0)))))))))))));
    vlTOPp->Top2__DOT__branchforward__DOT___T_182 = 
        ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
         == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                      >> 0xfU)));
    vlTOPp->Top2__DOT__branchforward__DOT___T_184 = 
        ((IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg) 
         == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                      >> 0x14U)));
    vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
              & (0x23U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))));
    vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & ((3U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
              & ((0x23U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
                 & (0x63U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)))));
    vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & (3U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)));
    vlTOPp->Top2__DOT__branchforward__DOT___T_77 = 
        ((IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg) 
         == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                      >> 0xfU)));
    vlTOPp->Top2__DOT__branchforward__DOT___T_79 = 
        ((IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg) 
         == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                      >> 0x14U)));
    vlTOPp->Top2__DOT__branchforward__DOT___T_44 = 
        ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r) 
         == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                      >> 0x14U)));
    vlTOPp->Top2__DOT__hazardDetection__DOT___T_39 
        = ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r) 
           == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                        >> 0xfU)));
    vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8 = ((0U 
                                                   == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__AluOp_r))
                                                   ? 
                                                  ((1U 
                                                    == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__func7_r))
                                                    ? 9U
                                                    : (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___T_21))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__AluOp_r))
                                                    ? 0U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__AluOp_r))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__AluOp_r))
                                                      ? 
                                                     ((5U 
                                                       == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__func3_r))
                                                       ? (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___T_21)
                                                       : (IData)(vlTOPp->Top2__DOT__id_ex__DOT__func3_r))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__AluOp_r))
                                                       ? 
                                                      (0x10U 
                                                       | (IData)(vlTOPp->Top2__DOT__id_ex__DOT__func3_r))
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__AluOp_r))
                                                        ? 0x1fU
                                                        : 0U))))));
    vlTOPp->Top2__DOT__forward__DOT___T_32 = ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_30) 
                                              & (IData)(vlTOPp->Top2__DOT__forward__DOT___T_31));
    vlTOPp->Top2__DOT__forward__DOT___T_53 = ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_29) 
                                              & ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__rs1_sel_r) 
                                                 == (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg)));
    vlTOPp->Top2__DOT__immediate__DOT__output5 = (vlTOPp->Top2__DOT__immediate__DOT__sbt13 
                                                  + vlTOPp->Top2__DOT__if_id__DOT__pc_reg);
    vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_12 
        = ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR)) 
           & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL)) 
              & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI)));
    vlTOPp->Top2__DOT__register__DOT___GEN_58 = ((0x1aU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                      >> 0x14U)))
                                                  ? vlTOPp->Top2__DOT__register__DOT__registers_c_26
                                                  : 
                                                 ((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0x14U)))
                                                   ? vlTOPp->Top2__DOT__register__DOT__registers_c_25
                                                   : 
                                                  ((0x18U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top2__DOT__register__DOT__registers_c_24
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top2__DOT__register__DOT__registers_c_23
                                                     : 
                                                    ((0x16U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Top2__DOT__register__DOT__registers_c_22
                                                      : 
                                                     ((0x15U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                           >> 0x14U)))
                                                       ? vlTOPp->Top2__DOT__register__DOT__registers_c_21
                                                       : 
                                                      ((0x14U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                            >> 0x14U)))
                                                        ? vlTOPp->Top2__DOT__register__DOT__registers_c_20
                                                        : 
                                                       ((0x13U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                             >> 0x14U)))
                                                         ? vlTOPp->Top2__DOT__register__DOT__registers_c_19
                                                         : 
                                                        ((0x12U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                              >> 0x14U)))
                                                          ? vlTOPp->Top2__DOT__register__DOT__registers_c_18
                                                          : 
                                                         ((0x11U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                               >> 0x14U)))
                                                           ? vlTOPp->Top2__DOT__register__DOT__registers_c_17
                                                           : 
                                                          ((0x10U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                >> 0x14U)))
                                                            ? vlTOPp->Top2__DOT__register__DOT__registers_c_16
                                                            : 
                                                           ((0xfU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                 >> 0x14U)))
                                                             ? vlTOPp->Top2__DOT__register__DOT__registers_c_15
                                                             : 
                                                            ((0xeU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                  >> 0x14U)))
                                                              ? vlTOPp->Top2__DOT__register__DOT__registers_c_14
                                                              : vlTOPp->Top2__DOT__register__DOT___GEN_45)))))))))))));
    vlTOPp->Top2__DOT__register__DOT___GEN_26 = ((0x1aU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                      >> 0xfU)))
                                                  ? vlTOPp->Top2__DOT__register__DOT__registers_c_26
                                                  : 
                                                 ((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0xfU)))
                                                   ? vlTOPp->Top2__DOT__register__DOT__registers_c_25
                                                   : 
                                                  ((0x18U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                        >> 0xfU)))
                                                    ? vlTOPp->Top2__DOT__register__DOT__registers_c_24
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                         >> 0xfU)))
                                                     ? vlTOPp->Top2__DOT__register__DOT__registers_c_23
                                                     : 
                                                    ((0x16U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                          >> 0xfU)))
                                                      ? vlTOPp->Top2__DOT__register__DOT__registers_c_22
                                                      : 
                                                     ((0x15U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                           >> 0xfU)))
                                                       ? vlTOPp->Top2__DOT__register__DOT__registers_c_21
                                                       : 
                                                      ((0x14U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                            >> 0xfU)))
                                                        ? vlTOPp->Top2__DOT__register__DOT__registers_c_20
                                                        : 
                                                       ((0x13U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                             >> 0xfU)))
                                                         ? vlTOPp->Top2__DOT__register__DOT__registers_c_19
                                                         : 
                                                        ((0x12U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                              >> 0xfU)))
                                                          ? vlTOPp->Top2__DOT__register__DOT__registers_c_18
                                                          : 
                                                         ((0x11U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                               >> 0xfU)))
                                                           ? vlTOPp->Top2__DOT__register__DOT__registers_c_17
                                                           : 
                                                          ((0x10U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                >> 0xfU)))
                                                            ? vlTOPp->Top2__DOT__register__DOT__registers_c_16
                                                            : 
                                                           ((0xfU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                 >> 0xfU)))
                                                             ? vlTOPp->Top2__DOT__register__DOT__registers_c_15
                                                             : 
                                                            ((0xeU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                                  >> 0xfU)))
                                                              ? vlTOPp->Top2__DOT__register__DOT__registers_c_14
                                                              : vlTOPp->Top2__DOT__register__DOT___GEN_13)))))))))))));
    vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_operand_A_sel 
        = ((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))
            ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)
                     ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)
                              ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)
                                       ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type)
                                                ? 0U
                                                : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL)
                                                     ? 2U
                                                     : 
                                                    ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_LUI)
                                                      ? 3U
                                                      : 0U))))))));
    vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel 
        = ((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))
            ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)
                     ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)
                              ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)
                                       ? 1U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type)
                                                ? 0U
                                                : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JALR)
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_JAL)
                                                     ? 2U
                                                     : 0U)))))));
    vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_MemRead 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load));
    vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)) 
              & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)) 
                 & (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch))));
    vlTOPp->Top2__DOT__branchforward__DOT___T_177 = 
        ((0U != (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg)) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_77));
    vlTOPp->Top2__DOT__branchforward__DOT___T_91 = 
        ((0U != (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r)) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_44));
    vlTOPp->Top2__DOT__hazardDetection__DOT___T_40 
        = ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r) 
           & (IData)(vlTOPp->Top2__DOT__hazardDetection__DOT___T_39));
    vlTOPp->Top2__DOT__branchforward__DOT___T_43 = 
        ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_41) 
         & (IData)(vlTOPp->Top2__DOT__hazardDetection__DOT___T_39));
    vlTOPp->Top2__DOT__branchforward__DOT___T_72 = 
        ((0U != (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r)) 
         & (IData)(vlTOPp->Top2__DOT__hazardDetection__DOT___T_39));
    vlTOPp->Top2__DOT__forward__DOT___GEN_6 = ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_29)
                                                ? ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_32)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_30)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_31)
                                                      ? 2U
                                                      : 0U)))
                                                : 0U);
    vlTOPp->Top2__DOT__forward__DOT___GEN_5 = ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_29)
                                                ? ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_32)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_30)
                                                     ? 2U
                                                     : 0U))
                                                : 0U);
    vlTOPp->Top2__DOT__forward__DOT___T_69 = ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_44) 
                                              & (~ (IData)(vlTOPp->Top2__DOT__forward__DOT___T_53)));
    vlTOPp->Top2__DOT__forward__DOT___T_57 = (((IData)(vlTOPp->Top2__DOT__forward__DOT___T_44) 
                                               & (IData)(vlTOPp->Top2__DOT__forward__DOT___T_45)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_53) 
                                                  & (IData)(vlTOPp->Top2__DOT__forward__DOT___T_54))));
    vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45 
        = ((0x33U != (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg)) 
           & ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load) 
              | ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store) 
                 | ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)) 
                    & ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type) 
                       | (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_12))))));
    vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_extend_sel 
        = ((0x33U == (0x7fU & vlTOPp->Top2__DOT__if_id__DOT__inst_reg))
            ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Load)
                     ? 0U : ((IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Store)
                              ? 2U : ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_Branch)) 
                                      & ((~ (IData)(vlTOPp->Top2__DOT__control__DOT__InstDecode_io_I_Type)) 
                                         & (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_12))))));
    vlTOPp->Top2__DOT__register_io_rs2 = ((0x1fU == 
                                           (0x1fU & 
                                            (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                             >> 0x14U)))
                                           ? vlTOPp->Top2__DOT__register__DOT__registers_c_31
                                           : ((0x1eU 
                                               == (0x1fU 
                                                   & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                      >> 0x14U)))
                                               ? vlTOPp->Top2__DOT__register__DOT__registers_c_30
                                               : ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0x14U)))
                                                   ? vlTOPp->Top2__DOT__register__DOT__registers_c_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top2__DOT__register__DOT__registers_c_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top2__DOT__register__DOT__registers_c_27
                                                     : vlTOPp->Top2__DOT__register__DOT___GEN_58)))));
    vlTOPp->Top2__DOT__register_io_rs1 = ((0x1fU == 
                                           (0x1fU & 
                                            (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                             >> 0xfU)))
                                           ? vlTOPp->Top2__DOT__register__DOT__registers_c_31
                                           : ((0x1eU 
                                               == (0x1fU 
                                                   & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                      >> 0xfU)))
                                               ? vlTOPp->Top2__DOT__register__DOT__registers_c_30
                                               : ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0xfU)))
                                                   ? vlTOPp->Top2__DOT__register__DOT__registers_c_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                        >> 0xfU)))
                                                    ? vlTOPp->Top2__DOT__register__DOT__registers_c_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                         >> 0xfU)))
                                                     ? vlTOPp->Top2__DOT__register__DOT__registers_c_27
                                                     : vlTOPp->Top2__DOT__register__DOT___GEN_26)))));
    vlTOPp->Top2__DOT___T_91 = ((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2) 
                                & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r));
    vlTOPp->Top2__DOT__hazardDetection__DOT___GEN_8 
        = ((~ ((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2) 
               & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r))) 
           & ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r) 
              & ((IData)(vlTOPp->Top2__DOT__hazardDetection__DOT___T_39) 
                 | ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r) 
                    == (0x1fU & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                 >> 0x14U))))));
    vlTOPp->Top2__DOT__branchforward__DOT___T_209 = 
        ((((IData)(vlTOPp->Top2__DOT__forward__DOT___T_43) 
           & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_91))) 
          & (~ ((0U != (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg)) 
                & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_79)))) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_184));
    vlTOPp->Top2__DOT__branchforward__DOT___T_95 = 
        (((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_68) 
          & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_91))) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_79));
    vlTOPp->Top2__DOT__branchforward__DOT___T_142 = 
        (((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_115) 
          & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_91))) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_79));
    vlTOPp->Top2__DOT__branchforward__DOT___T_45 = 
        ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_43) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_44));
    vlTOPp->Top2__DOT__branchforward__DOT___T_109 = 
        (((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_68) 
          & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_72))) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_77));
    vlTOPp->Top2__DOT__branchforward__DOT___T_74 = 
        ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_72) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_44));
    vlTOPp->Top2__DOT__forward_io_forward_b = ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_43)
                                                ? ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_57)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_69)
                                                     ? (IData)(vlTOPp->Top2__DOT__forward__DOT___GEN_6)
                                                     : 
                                                    (((IData)(vlTOPp->Top2__DOT__forward__DOT___T_45) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_29) 
                                                          & (IData)(vlTOPp->Top2__DOT__forward__DOT___T_54))))
                                                      ? 1U
                                                      : (IData)(vlTOPp->Top2__DOT__forward__DOT___GEN_6))))
                                                : (IData)(vlTOPp->Top2__DOT__forward__DOT___GEN_6));
    vlTOPp->Top2__DOT__forward_io_forward_a = ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_43)
                                                ? ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_57)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__forward__DOT___T_69)
                                                     ? 1U
                                                     : (IData)(vlTOPp->Top2__DOT__forward__DOT___GEN_5)))
                                                : (IData)(vlTOPp->Top2__DOT__forward__DOT___GEN_5));
    vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward 
        = ((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_MemRead)
            ? (IData)(vlTOPp->Top2__DOT__hazardDetection__DOT___T_40)
            : (IData)(vlTOPp->Top2__DOT__hazardDetection__DOT___GEN_8));
    vlTOPp->Top2__DOT__branchforward__DOT___GEN_4 = 
        ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_45) 
         | ((~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_43)) 
            & ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_41) 
               & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_44))));
    vlTOPp->Top2__DOT__branchforward__DOT___GEN_3 = 
        ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_45) 
         | (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_43));
    vlTOPp->Top2__DOT__branchforward__DOT___T_185 = 
        (((((0U != (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg)) 
            & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_74))) 
           & (~ ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_177) 
                 & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_79)))) 
          & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_182)) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_184));
    vlTOPp->Top2__DOT__branchforward__DOT___T_80 = 
        ((((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_68) 
           & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_74))) 
          & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_77)) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_79));
    vlTOPp->Top2__DOT__branchforward__DOT___T_127 = 
        ((((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_115) 
           & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_74))) 
          & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_77)) 
         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_79));
    vlTOPp->Top2__DOT__alu_io_B = ((1U & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r))
                                    ? vlTOPp->Top2__DOT__id_ex__DOT__immr
                                    : ((1U & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpB_sel_r))
                                        ? 0U : ((0U 
                                                 == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
                                                 ? vlTOPp->Top2__DOT__id_ex__DOT__rs2r
                                                 : 
                                                ((1U 
                                                  == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
                                                  ? vlTOPp->Top2__DOT__register_io_WriteData
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->Top2__DOT__forward_io_forward_b))
                                                   ? vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg
                                                   : 0U)))));
    vlTOPp->Top2__DOT__alu_io_A = ((2U == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpA_sel_r))
                                    ? vlTOPp->Top2__DOT__id_ex__DOT__pc4r
                                    : ((1U == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpA_sel_r))
                                        ? vlTOPp->Top2__DOT__id_ex__DOT__pcr
                                        : ((0U == (IData)(vlTOPp->Top2__DOT__id_ex__DOT__OpA_sel_r))
                                            ? ((0U 
                                                == (IData)(vlTOPp->Top2__DOT__forward_io_forward_a))
                                                ? vlTOPp->Top2__DOT__id_ex__DOT__rs1r
                                                : (
                                                   (1U 
                                                    == (IData)(vlTOPp->Top2__DOT__forward_io_forward_a))
                                                    ? vlTOPp->Top2__DOT__register_io_WriteData
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->Top2__DOT__forward_io_forward_a))
                                                     ? vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg
                                                     : 0U)))
                                            : 0U)));
    vlTOPp->Top2__DOT___GEN_33 = ((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                   ? vlTOPp->Top2__DOT__if_id__DOT__pc_reg
                                   : vlTOPp->Top2__DOT__PC__DOT__pc1);
    vlTOPp->Top2__DOT___GEN_32 = ((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                   ? vlTOPp->Top2__DOT__if_id__DOT__inst_reg
                                   : vlTOPp->Top2__DOT__instmem__DOT__mem
                                  [(0x3ffU & (vlTOPp->Top2__DOT__PC__DOT__pc1 
                                              >> 2U))]);
    vlTOPp->Top2__DOT__branchforward__DOT___GEN_34 
        = ((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2)
            ? ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_185)
                ? 3U : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_209)
                         ? 3U : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_80)
                                  ? 2U : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_95)
                                           ? 2U : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_109)
                                                    ? (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_4)
                                                    : 
                                                   ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_127)
                                                     ? 4U
                                                     : 
                                                    ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_142)
                                                      ? 4U
                                                      : (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_4))))))))
            : 0U);
    vlTOPp->Top2__DOT__branchforward__DOT___GEN_14 
        = ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_80)
            ? 2U : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_95)
                     ? (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_3)
                     : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_109)
                         ? 2U : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_127)
                                  ? 4U : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_142)
                                           ? (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_3)
                                           : ((((((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2) 
                                                  & (0U 
                                                     != (IData)(vlTOPp->Top2__DOT__ex_mem__DOT__Rd_sel_Reg))) 
                                                 & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r)) 
                                                & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_72))) 
                                               & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_77))
                                               ? 4U
                                               : (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_3)))))));
    vlTOPp->Top2__DOT__alu__DOT___T_69 = (vlTOPp->Top2__DOT__alu_io_A 
                                          == vlTOPp->Top2__DOT__alu_io_B);
    vlTOPp->Top2__DOT__alu__DOT___T_32 = VL_LTS_III(1,32,32, vlTOPp->Top2__DOT__alu_io_A, vlTOPp->Top2__DOT__alu_io_B);
    vlTOPp->Top2__DOT__branchforward_io_forward_a = 
        ((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2)
          ? ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_185)
              ? 3U : ((IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_209)
                       ? (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_14)
                       : (((((0U != (IData)(vlTOPp->Top2__DOT__mem_wb__DOT__Rd_sel_Reg)) 
                             & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_72))) 
                            & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_177))) 
                           & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_182))
                           ? 3U : (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_14))))
          : ((IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2)
              ? 0U : (((((IData)(vlTOPp->Top2__DOT__forward__DOT___T_43) 
                         & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_72))) 
                        & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_177))) 
                       & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_182))
                       ? 8U : (((((IData)(vlTOPp->Top2__DOT__forward__DOT___T_29) 
                                  & (~ (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r))) 
                                 & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_72))) 
                                & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_77))
                                ? 7U : (((((IData)(vlTOPp->Top2__DOT__forward__DOT___T_29) 
                                           & (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r)) 
                                          & (~ (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_72))) 
                                         & (IData)(vlTOPp->Top2__DOT__branchforward__DOT___T_77))
                                         ? 9U : (((
                                                   ((IData)(vlTOPp->Top2__DOT__id_ex__DOT__RegWr_r) 
                                                    & (0U 
                                                       != (IData)(vlTOPp->Top2__DOT__id_ex__DOT__rd_sel_r))) 
                                                   & (~ (IData)(vlTOPp->Top2__DOT__id_ex__DOT__MemRd_r))) 
                                                  & (IData)(vlTOPp->Top2__DOT__hazardDetection__DOT___T_39))
                                                  ? 6U
                                                  : 0U))))));
    vlTOPp->Top2__DOT__alu__DOT___GEN_11 = ((0x10U 
                                             == (0x1fU 
                                                 & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                             ? ((IData)(vlTOPp->Top2__DOT__alu__DOT___T_69)
                                                 ? 1U
                                                 : 0U)
                                             : ((0x11U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                 ? 
                                                ((IData)(vlTOPp->Top2__DOT__alu__DOT___T_69)
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((0x14U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                  ? 
                                                 ((IData)(vlTOPp->Top2__DOT__alu__DOT___T_32)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 ((0x15U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                   ? 
                                                  (VL_GTES_III(1,32,32, vlTOPp->Top2__DOT__alu_io_A, vlTOPp->Top2__DOT__alu_io_B)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((vlTOPp->Top2__DOT__alu_io_A 
                                                    >= vlTOPp->Top2__DOT__alu_io_B)
                                                    ? 1U
                                                    : 0U)))));
    vlTOPp->Top2__DOT__alu__DOT___GEN_18 = ((2U == 
                                             (0x1fU 
                                              & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                             ? ((0xfffffffcU 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (((IData)(vlTOPp->Top2__DOT__alu__DOT___T_32)
                                                                     ? 1U
                                                                     : 0U) 
                                                                   >> 1U)))) 
                                                    << 2U)) 
                                                | ((IData)(vlTOPp->Top2__DOT__alu__DOT___T_32)
                                                    ? 1U
                                                    : 0U))
                                             : (((3U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8))) 
                                                 | (0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8))))
                                                 ? 
                                                ((0xfffffffcU 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (((IData)(vlTOPp->Top2__DOT__alu__DOT___T_32)
                                                                      ? 1U
                                                                      : 0U) 
                                                                    >> 1U)))) 
                                                     << 2U)) 
                                                 | ((IData)(vlTOPp->Top2__DOT__alu__DOT___T_32)
                                                     ? 1U
                                                     : 0U))
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                  ? 
                                                 (vlTOPp->Top2__DOT__alu_io_A 
                                                  ^ vlTOPp->Top2__DOT__alu_io_B)
                                                  : 
                                                 (((5U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8))) 
                                                   | (0xdU 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8))))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, vlTOPp->Top2__DOT__alu_io_A, 
                                                                 (0x1fU 
                                                                  & vlTOPp->Top2__DOT__alu_io_B))
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                    ? 
                                                   (vlTOPp->Top2__DOT__alu_io_A 
                                                    | vlTOPp->Top2__DOT__alu_io_B)
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                     ? 
                                                    (vlTOPp->Top2__DOT__alu_io_A 
                                                     & vlTOPp->Top2__DOT__alu_io_B)
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                      ? 
                                                     (vlTOPp->Top2__DOT__alu_io_A 
                                                      - vlTOPp->Top2__DOT__alu_io_B)
                                                      : 
                                                     ((0xfffffffcU 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlTOPp->Top2__DOT__alu__DOT___GEN_11) 
                                                                         >> 1U)))) 
                                                          << 2U)) 
                                                      | (IData)(vlTOPp->Top2__DOT__alu__DOT___GEN_11)))))))));
    vlTOPp->Top2__DOT__alu__DOT___GEN_19 = ((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                             ? vlTOPp->Top2__DOT__alu_io_A
                                             : vlTOPp->Top2__DOT__alu__DOT___GEN_18);
    vlTOPp->Top2__DOT__alu__DOT___GEN_20 = (VL_ULL(0x7fffffffffffffff) 
                                            & ((1U 
                                                == 
                                                (0x1fU 
                                                 & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                ? (
                                                   (((QData)((IData)(
                                                                     (0x7fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (vlTOPp->Top2__DOT__alu_io_A 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlTOPp->Top2__DOT__alu_io_A))) 
                                                   << 
                                                   (0x1fU 
                                                    & vlTOPp->Top2__DOT__alu_io_B))
                                                : (
                                                   ((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (vlTOPp->Top2__DOT__alu__DOT___GEN_19 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->Top2__DOT__alu__DOT___GEN_19)))));
    vlTOPp->Top2__DOT__alu__DOT___GEN_22 = ((0U == 
                                             (0x1fU 
                                              & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & ((vlTOPp->Top2__DOT__alu_io_A 
                                                                                + vlTOPp->Top2__DOT__alu_io_B) 
                                                                                >> 0x1fU)))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (vlTOPp->Top2__DOT__alu_io_A 
                                                                   + vlTOPp->Top2__DOT__alu_io_B))))
                                             : ((9U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlTOPp->Top2__DOT__alucontrol__DOT___GEN_8)))
                                                 ? 
                                                VL_MULS_QQQ(64,64,64, 
                                                            VL_EXTENDS_QI(64,32, vlTOPp->Top2__DOT__alu_io_A), 
                                                            VL_EXTENDS_QI(64,32, vlTOPp->Top2__DOT__alu_io_B))
                                                 : 
                                                (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->Top2__DOT__alu__DOT___GEN_20 
                                                                              >> 0x3eU))))) 
                                                  << 0x3fU) 
                                                 | vlTOPp->Top2__DOT__alu__DOT___GEN_20)));
    vlTOPp->Top2__DOT__JALR_io_A = ((0U == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                     ? vlTOPp->Top2__DOT__register_io_rs1
                                     : ((1U == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                         ? vlTOPp->Top2__DOT__register_io_rs1
                                         : ((2U == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                             ? vlTOPp->Top2__DOT__register_io_rs1
                                             : ((3U 
                                                 == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                 ? vlTOPp->Top2__DOT__register_io_rs1
                                                 : 
                                                ((4U 
                                                  == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                  ? vlTOPp->Top2__DOT__register_io_rs1
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                   ? vlTOPp->Top2__DOT__register_io_rs1
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                    ? (IData)(vlTOPp->Top2__DOT__alu__DOT___GEN_22)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                     ? vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                      ? vlTOPp->Top2__DOT__register_io_WriteData
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                       ? vlTOPp->Top2__DOT__DataMemory_io_Data
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                        ? vlTOPp->Top2__DOT__register_io_WriteData
                                                        : vlTOPp->Top2__DOT__register_io_rs1)))))))))));
    vlTOPp->Top2__DOT__branchlogic_io_rs1_in = ((0U 
                                                 == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                 ? vlTOPp->Top2__DOT__register_io_rs1
                                                 : 
                                                ((1U 
                                                  == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                  ? (IData)(vlTOPp->Top2__DOT__alu__DOT___GEN_22)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                   ? vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                    ? vlTOPp->Top2__DOT__register_io_WriteData
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                     ? vlTOPp->Top2__DOT__DataMemory_io_Data
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlTOPp->Top2__DOT__branchforward_io_forward_a))
                                                      ? vlTOPp->Top2__DOT__register_io_WriteData
                                                      : vlTOPp->Top2__DOT__register_io_rs1))))));
    vlTOPp->Top2__DOT__branchlogic_io_rs2_in = ((0U 
                                                 == (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_34))
                                                 ? vlTOPp->Top2__DOT__register_io_rs2
                                                 : 
                                                ((1U 
                                                  == (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_34))
                                                  ? (IData)(vlTOPp->Top2__DOT__alu__DOT___GEN_22)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_34))
                                                   ? vlTOPp->Top2__DOT__ex_mem__DOT__Alu_out_Reg
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_34))
                                                    ? vlTOPp->Top2__DOT__register_io_WriteData
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_34))
                                                     ? vlTOPp->Top2__DOT__DataMemory_io_Data
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlTOPp->Top2__DOT__branchforward__DOT___GEN_34))
                                                      ? vlTOPp->Top2__DOT__register_io_WriteData
                                                      : vlTOPp->Top2__DOT__register_io_rs2))))));
    vlTOPp->Top2__DOT___T_82 = (((0U == (7U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                               >> 0xcU)))
                                  ? (vlTOPp->Top2__DOT__branchlogic_io_rs1_in 
                                     == vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
                                  : ((1U == (7U & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                   >> 0xcU)))
                                      ? (vlTOPp->Top2__DOT__branchlogic_io_rs1_in 
                                         != vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
                                      : ((4U == (7U 
                                                 & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                    >> 0xcU)))
                                          ? VL_LTS_III(1,32,32, vlTOPp->Top2__DOT__branchlogic_io_rs1_in, vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
                                          : ((5U == 
                                              (7U & 
                                               (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                >> 0xcU)))
                                              ? VL_GTES_III(1,32,32, vlTOPp->Top2__DOT__branchlogic_io_rs1_in, vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
                                              : ((6U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                      >> 0xcU)))
                                                  ? 
                                                 (vlTOPp->Top2__DOT__branchlogic_io_rs1_in 
                                                  < vlTOPp->Top2__DOT__branchlogic_io_rs2_in)
                                                  : 
                                                 ((7U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Top2__DOT__if_id__DOT__inst_reg 
                                                       >> 0xcU))) 
                                                  & (vlTOPp->Top2__DOT__branchlogic_io_rs1_in 
                                                     >= vlTOPp->Top2__DOT__branchlogic_io_rs2_in))))))) 
                                & (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_Branch2));
    vlTOPp->io_branch_stall = ((~ (IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)) 
                               & ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel)) 
                                  & ((~ (IData)(vlTOPp->Top2__DOT___T_82)) 
                                     & (IData)(vlTOPp->Top2__DOT___T_91))));
    vlTOPp->Top2__DOT__PC_io_input = ((IData)(vlTOPp->Top2__DOT__hazardDetection_io_ctrl_forward)
                                       ? vlTOPp->Top2__DOT__if_id__DOT__pc4_reg
                                       : ((1U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                           ? ((IData)(vlTOPp->Top2__DOT___T_82)
                                               ? vlTOPp->Top2__DOT__immediate__DOT__output5
                                               : ((IData)(vlTOPp->Top2__DOT___T_91)
                                                   ? vlTOPp->Top2__DOT__immediate__DOT__output5
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlTOPp->Top2__DOT__PC__DOT__pc1)))
                                           : ((2U == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                               ? (vlTOPp->Top2__DOT__immediate__DOT__sbt19 
                                                  + vlTOPp->Top2__DOT__if_id__DOT__pc_reg)
                                               : ((3U 
                                                   == (IData)(vlTOPp->Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
                                                   ? 
                                                  (0xfffffffeU 
                                                   & (vlTOPp->Top2__DOT__JALR_io_A 
                                                      + vlTOPp->Top2__DOT__immediate_io_I_Immediate))
                                                   : 
                                                  ((0U 
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
                                                    : 0U)))));
}

void VTop2::_eval(VTop2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop2::_eval\n"); );
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTop2::_eval_initial(VTop2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop2::_eval_initial\n"); );
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTop2::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop2::final\n"); );
    // Variables
    VTop2__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTop2::_eval_settle(VTop2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop2::_eval_settle\n"); );
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VTop2::_change_request(VTop2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop2::_change_request\n"); );
    VTop2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTop2::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop2::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

void VTop2::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop2::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_instruction = VL_RAND_RESET_I(32);
    io_reg_out = VL_RAND_RESET_I(32);
    io_branch_stall = VL_RAND_RESET_I(1);
    Top2__DOT__register_io_WriteData = VL_RAND_RESET_I(32);
    Top2__DOT__register_io_rs1 = VL_RAND_RESET_I(32);
    Top2__DOT__register_io_rs2 = VL_RAND_RESET_I(32);
    Top2__DOT__alu_io_A = VL_RAND_RESET_I(32);
    Top2__DOT__alu_io_B = VL_RAND_RESET_I(32);
    Top2__DOT__immediate_io_I_Immediate = VL_RAND_RESET_I(32);
    Top2__DOT__PC_io_input = VL_RAND_RESET_I(32);
    Top2__DOT__DataMemory_io_Data = VL_RAND_RESET_I(32);
    Top2__DOT__JALR_io_A = VL_RAND_RESET_I(32);
    Top2__DOT__forward_io_forward_a = VL_RAND_RESET_I(2);
    Top2__DOT__forward_io_forward_b = VL_RAND_RESET_I(2);
    Top2__DOT__hazardDetection_io_ctrl_forward = VL_RAND_RESET_I(1);
    Top2__DOT__branchlogic_io_rs1_in = VL_RAND_RESET_I(32);
    Top2__DOT__branchlogic_io_rs2_in = VL_RAND_RESET_I(32);
    Top2__DOT__branchforward_io_forward_a = VL_RAND_RESET_I(4);
    Top2__DOT___GEN_32 = VL_RAND_RESET_I(32);
    Top2__DOT___GEN_33 = VL_RAND_RESET_I(32);
    Top2__DOT___T_82 = VL_RAND_RESET_I(1);
    Top2__DOT___T_91 = VL_RAND_RESET_I(1);
    Top2__DOT__control__DOT__InstDecode_io_Load = VL_RAND_RESET_I(1);
    Top2__DOT__control__DOT__InstDecode_io_Store = VL_RAND_RESET_I(1);
    Top2__DOT__control__DOT__InstDecode_io_Branch = VL_RAND_RESET_I(1);
    Top2__DOT__control__DOT__InstDecode_io_I_Type = VL_RAND_RESET_I(1);
    Top2__DOT__control__DOT__InstDecode_io_JALR = VL_RAND_RESET_I(1);
    Top2__DOT__control__DOT__InstDecode_io_JAL = VL_RAND_RESET_I(1);
    Top2__DOT__control__DOT__InstDecode_io_LUI = VL_RAND_RESET_I(1);
    Top2__DOT__control__DOT__CtrlDecode_io_Branch2 = VL_RAND_RESET_I(1);
    Top2__DOT__control__DOT__CtrlDecode_io_MemRead = VL_RAND_RESET_I(1);
    Top2__DOT__control__DOT__CtrlDecode_io_operand_A_sel = VL_RAND_RESET_I(2);
    Top2__DOT__control__DOT__CtrlDecode_io_extend_sel = VL_RAND_RESET_I(2);
    Top2__DOT__control__DOT__CtrlDecode_io_next_PC_sel = VL_RAND_RESET_I(2);
    Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_12 = VL_RAND_RESET_I(1);
    Top2__DOT__control__DOT__CtrlDecode__DOT___GEN_45 = VL_RAND_RESET_I(1);
    Top2__DOT__register__DOT__registers_c_0 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_1 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_2 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_3 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_4 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_5 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_6 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_7 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_8 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_9 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_10 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_11 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_12 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_13 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_14 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_15 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_16 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_17 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_18 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_19 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_20 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_21 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_22 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_23 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_24 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_25 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_26 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_27 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_28 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_29 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_30 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT__registers_c_31 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT___GEN_13 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT___GEN_26 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT___GEN_45 = VL_RAND_RESET_I(32);
    Top2__DOT__register__DOT___GEN_58 = VL_RAND_RESET_I(32);
    Top2__DOT__alu__DOT___T_32 = VL_RAND_RESET_I(1);
    Top2__DOT__alu__DOT___T_69 = VL_RAND_RESET_I(1);
    Top2__DOT__alu__DOT___GEN_11 = VL_RAND_RESET_I(2);
    Top2__DOT__alu__DOT___GEN_18 = VL_RAND_RESET_I(32);
    Top2__DOT__alu__DOT___GEN_19 = VL_RAND_RESET_I(32);
    Top2__DOT__alu__DOT___GEN_20 = VL_RAND_RESET_Q(63);
    Top2__DOT__alu__DOT___GEN_22 = VL_RAND_RESET_Q(64);
    Top2__DOT__alucontrol__DOT___T_21 = VL_RAND_RESET_I(11);
    Top2__DOT__alucontrol__DOT___GEN_8 = VL_RAND_RESET_I(11);
    Top2__DOT__immediate__DOT__output2 = VL_RAND_RESET_I(31);
    Top2__DOT__immediate__DOT__sbt13 = VL_RAND_RESET_I(32);
    Top2__DOT__immediate__DOT__output5 = VL_RAND_RESET_I(32);
    Top2__DOT__immediate__DOT__sbt19 = VL_RAND_RESET_I(32);
    Top2__DOT__PC__DOT__pc1 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            Top2__DOT__instmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            Top2__DOT__DataMemory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Top2__DOT__mem_wb__DOT__Regwr_Reg = VL_RAND_RESET_I(1);
    Top2__DOT__mem_wb__DOT__MemtoReg_Reg = VL_RAND_RESET_I(1);
    Top2__DOT__mem_wb__DOT__Rd_sel_Reg = VL_RAND_RESET_I(5);
    Top2__DOT__mem_wb__DOT__data_mem_Reg = VL_RAND_RESET_I(32);
    Top2__DOT__mem_wb__DOT__Aluout_Reg = VL_RAND_RESET_I(32);
    Top2__DOT__ex_mem__DOT__Memwr_Reg = VL_RAND_RESET_I(1);
    Top2__DOT__ex_mem__DOT__Memrd_Reg = VL_RAND_RESET_I(1);
    Top2__DOT__ex_mem__DOT__Regwr_Reg = VL_RAND_RESET_I(1);
    Top2__DOT__ex_mem__DOT__MemtoReg_Reg = VL_RAND_RESET_I(1);
    Top2__DOT__ex_mem__DOT__Rs2_Reg = VL_RAND_RESET_I(32);
    Top2__DOT__ex_mem__DOT__Rd_sel_Reg = VL_RAND_RESET_I(5);
    Top2__DOT__ex_mem__DOT__Alu_out_Reg = VL_RAND_RESET_I(32);
    Top2__DOT__id_ex__DOT__pcr = VL_RAND_RESET_I(32);
    Top2__DOT__id_ex__DOT__pc4r = VL_RAND_RESET_I(32);
    Top2__DOT__id_ex__DOT__rs1r = VL_RAND_RESET_I(32);
    Top2__DOT__id_ex__DOT__rs2r = VL_RAND_RESET_I(32);
    Top2__DOT__id_ex__DOT__immr = VL_RAND_RESET_I(32);
    Top2__DOT__id_ex__DOT__rd_sel_r = VL_RAND_RESET_I(5);
    Top2__DOT__id_ex__DOT__rs1_sel_r = VL_RAND_RESET_I(5);
    Top2__DOT__id_ex__DOT__rs2_sel_r = VL_RAND_RESET_I(5);
    Top2__DOT__id_ex__DOT__func3_r = VL_RAND_RESET_I(3);
    Top2__DOT__id_ex__DOT__func7_r = VL_RAND_RESET_I(7);
    Top2__DOT__id_ex__DOT__MemWr_r = VL_RAND_RESET_I(1);
    Top2__DOT__id_ex__DOT__MemRd_r = VL_RAND_RESET_I(1);
    Top2__DOT__id_ex__DOT__RegWr_r = VL_RAND_RESET_I(1);
    Top2__DOT__id_ex__DOT__MemToReg_r = VL_RAND_RESET_I(1);
    Top2__DOT__id_ex__DOT__AluOp_r = VL_RAND_RESET_I(3);
    Top2__DOT__id_ex__DOT__OpA_sel_r = VL_RAND_RESET_I(2);
    Top2__DOT__id_ex__DOT__OpB_sel_r = VL_RAND_RESET_I(2);
    Top2__DOT__if_id__DOT__pc_reg = VL_RAND_RESET_I(32);
    Top2__DOT__if_id__DOT__pc4_reg = VL_RAND_RESET_I(32);
    Top2__DOT__if_id__DOT__inst_reg = VL_RAND_RESET_I(32);
    Top2__DOT__forward__DOT___T_29 = VL_RAND_RESET_I(1);
    Top2__DOT__forward__DOT___T_30 = VL_RAND_RESET_I(1);
    Top2__DOT__forward__DOT___T_31 = VL_RAND_RESET_I(1);
    Top2__DOT__forward__DOT___T_32 = VL_RAND_RESET_I(1);
    Top2__DOT__forward__DOT___GEN_5 = VL_RAND_RESET_I(2);
    Top2__DOT__forward__DOT___GEN_6 = VL_RAND_RESET_I(2);
    Top2__DOT__forward__DOT___T_43 = VL_RAND_RESET_I(1);
    Top2__DOT__forward__DOT___T_44 = VL_RAND_RESET_I(1);
    Top2__DOT__forward__DOT___T_45 = VL_RAND_RESET_I(1);
    Top2__DOT__forward__DOT___T_53 = VL_RAND_RESET_I(1);
    Top2__DOT__forward__DOT___T_54 = VL_RAND_RESET_I(1);
    Top2__DOT__forward__DOT___T_57 = VL_RAND_RESET_I(1);
    Top2__DOT__forward__DOT___T_69 = VL_RAND_RESET_I(1);
    Top2__DOT__hazardDetection__DOT___T_39 = VL_RAND_RESET_I(1);
    Top2__DOT__hazardDetection__DOT___T_40 = VL_RAND_RESET_I(1);
    Top2__DOT__hazardDetection__DOT___GEN_8 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_41 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_43 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_44 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_45 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___GEN_3 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___GEN_4 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_68 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_72 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_74 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_77 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_79 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_80 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_91 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_95 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_109 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_115 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_127 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_142 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___GEN_14 = VL_RAND_RESET_I(3);
    Top2__DOT__branchforward__DOT___T_177 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_182 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_184 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_185 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___T_209 = VL_RAND_RESET_I(1);
    Top2__DOT__branchforward__DOT___GEN_34 = VL_RAND_RESET_I(3);
    __Vm_traceActivity = 0;
}
