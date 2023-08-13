// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpc__Syms.h"


void Vnpc___024root__traceChgSub0(Vnpc___024root* vlSelf, VerilatedVcd* tracep);

void Vnpc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vnpc___024root* const __restrict vlSelf = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vnpc___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vnpc___024root__traceChgSub0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp86;
    VlWide<3>/*95:0*/ __Vtemp87;
    VlWide<3>/*95:0*/ __Vtemp90;
    VlWide<3>/*95:0*/ __Vtemp95;
    VlWide<4>/*127:0*/ __Vtemp96;
    VlWide<4>/*127:0*/ __Vtemp97;
    VlWide<4>/*127:0*/ __Vtemp98;
    VlWide<4>/*127:0*/ __Vtemp99;
    VlWide<4>/*127:0*/ __Vtemp100;
    VlWide<4>/*127:0*/ __Vtemp101;
    VlWide<4>/*127:0*/ __Vtemp102;
    VlWide<4>/*127:0*/ __Vtemp103;
    VlWide<4>/*127:0*/ __Vtemp104;
    VlWide<4>/*127:0*/ __Vtemp105;
    VlWide<4>/*127:0*/ __Vtemp106;
    VlWide<4>/*127:0*/ __Vtemp107;
    VlWide<3>/*95:0*/ __Vtemp108;
    VlWide<3>/*95:0*/ __Vtemp109;
    VlWide<3>/*95:0*/ __Vtemp112;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,((((- (QData)((IData)(
                                                          (0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->npc__DOT__if_id_inst))))) 
                                       & (((- (QData)((IData)(
                                                              (vlSelf->npc__DOT__if_id_inst 
                                                               >> 0x1fU)))) 
                                           << 0x14U) 
                                          | (QData)((IData)(
                                                            ((0xff000U 
                                                              & vlSelf->npc__DOT__if_id_inst) 
                                                             | ((0x800U 
                                                                 & (vlSelf->npc__DOT__if_id_inst 
                                                                    >> 9U)) 
                                                                | (0x7feU 
                                                                   & (vlSelf->npc__DOT__if_id_inst 
                                                                      >> 0x14U)))))))) 
                                      | ((- (QData)((IData)(
                                                            (0x63U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->npc__DOT__if_id_inst))))) 
                                         & vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm))),64);
            tracep->chgBit(oldp+2,(((0x6fU == (0x7fU 
                                               & vlSelf->npc__DOT__if_id_inst)) 
                                    | ((0x63U == (0x7fU 
                                                  & vlSelf->npc__DOT__if_id_inst)) 
                                       & (IData)((vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm 
                                                  >> 0x3fU))))));
            tracep->chgIData(oldp+3,(vlSelf->npc__DOT__if_id_inst),32);
            tracep->chgQData(oldp+4,(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r),64);
            tracep->chgQData(oldp+6,(vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r),64);
            tracep->chgIData(oldp+8,(vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r),32);
            tracep->chgSData(oldp+9,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode),10);
            tracep->chgCData(oldp+10,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a),3);
            tracep->chgCData(oldp+11,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b),2);
            tracep->chgQData(oldp+12,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm),64);
            tracep->chgCData(oldp+14,((0x1fU & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+15,((0x1fU & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                >> 0x14U))),5);
            tracep->chgBit(oldp+16,((IData)((0U != 
                                             (0x33U 
                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type))))));
            tracep->chgCData(oldp+17,((0x1fU & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                >> 7U))),5);
            tracep->chgBit(oldp+18,((1U & ((((((~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fU 
                                                            & (0x73U 
                                                               ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                 >> 0xcU)))))) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0x19U))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xfU)))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (1U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0x14U))))))) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x1fU 
                                                          & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 7U)))))))));
            tracep->chgBit(oldp+19,((1U & ((((((~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fU 
                                                            & (0x73U 
                                                               ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                 >> 0xcU)))))) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0x19U))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xfU)))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                              >> 0x14U)))))) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x1fU 
                                                          & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 7U)))))))));
            tracep->chgBit(oldp+20,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr));
            tracep->chgBit(oldp+21,((1U & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x6fU 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
            tracep->chgBit(oldp+22,((1U & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x23U 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
            tracep->chgBit(oldp+23,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_set_en));
            tracep->chgBit(oldp+24,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sra) 
                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srai)) 
                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw)) 
                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw))));
            tracep->chgBit(oldp+25,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw) 
                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw)) 
                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw))));
            tracep->chgBit(oldp+26,((1U & ((((((~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fU 
                                                            & (0x73U 
                                                               ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                 >> 0xcU)))))) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x7fU 
                                                             & (0x18U 
                                                                ^ 
                                                                (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                 >> 0x19U))))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xfU)))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (2U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0x14U))))))) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x1fU 
                                                          & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 7U)))))))));
            tracep->chgBit(oldp+27,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri));
            tracep->chgCData(oldp+28,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type),2);
            tracep->chgBit(oldp+29,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem) 
                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw)) 
                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div)) 
                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw))));
            tracep->chgCData(oldp+30,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul) 
                                        << 4U) | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw)))))),5);
            tracep->chgCData(oldp+31,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                                        << 5U) | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci))))))),6);
            tracep->chgCData(oldp+32,(vlSelf->npc__DOT__id_ex_branch_bus),6);
            tracep->chgCData(oldp+33,(((((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu) 
                                           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu)) 
                                          | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu)) 
                                         | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu)) 
                                        << 1U) | (1U 
                                                  & ((((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7fU 
                                                                    & (3U 
                                                                       ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                       & (~ (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (7U 
                                                                      & (4U 
                                                                         ^ 
                                                                         (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                          >> 0xcU))))))) 
                                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu)) 
                                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu))))),2);
            tracep->chgBit(oldp+34,((1U & ((~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (3U 
                                                           ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                           | (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x23U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))))));
            tracep->chgBit(oldp+35,((1U & ((~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (0x3bU 
                                                           ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                           | (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x1bU 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))))));
            tracep->chgBit(oldp+36,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw) 
                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw)) 
                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw)) 
                                     & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                        >> 0x19U))));
            tracep->chgBit(oldp+37,(vlSelf->npc__DOT__forward_load_stall));
            tracep->chgIData(oldp+38,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_dfflr__DOT__qout_r),32);
            tracep->chgSData(oldp+39,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r),10);
            tracep->chgQData(oldp+40,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r),64);
            tracep->chgQData(oldp+42,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r),64);
            tracep->chgQData(oldp+44,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r),64);
            tracep->chgQData(oldp+46,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r),64);
            tracep->chgCData(oldp+48,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r),5);
            tracep->chgBit(oldp+49,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r));
            tracep->chgBit(oldp+50,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                           >> 8U))));
            tracep->chgBit(oldp+51,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                           >> 7U))));
            tracep->chgBit(oldp+52,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                           >> 6U))));
            tracep->chgBit(oldp+53,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                           >> 5U))));
            tracep->chgBit(oldp+54,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                           >> 4U))));
            tracep->chgBit(oldp+55,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                           >> 3U))));
            tracep->chgBit(oldp+56,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                           >> 2U))));
            tracep->chgBit(oldp+57,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                           >> 1U))));
            tracep->chgBit(oldp+58,((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r))));
            tracep->chgCData(oldp+59,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_ls_data_bus_dfflr__DOT__qout_r),2);
            tracep->chgBit(oldp+60,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r));
            tracep->chgCData(oldp+61,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r),5);
            tracep->chgCData(oldp+62,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r),6);
            tracep->chgCData(oldp+63,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r),6);
            tracep->chgCData(oldp+64,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r),2);
            tracep->chgBit(oldp+65,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_ls_req_dfflr__DOT__qout_r));
            tracep->chgBit(oldp+66,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r));
            tracep->chgBit(oldp+67,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_illegal_dfflr__DOT__qout_r));
            tracep->chgQData(oldp+68,((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_temp_rd_ls_data 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r) 
                                                                | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                   >> 4U)))))))),64);
            tracep->chgQData(oldp+70,((((- (QData)((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc) 
                                       | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))) 
                                          & (((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                     >> 5U))))) 
                                              & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                                             | (0xfffffffffffffffeULL 
                                                & ((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                          >> 6U))))) 
                                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result)))))),64);
            tracep->chgBit(oldp+72,((1U & ((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r)) 
                                           | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                              >> 6U)))));
            tracep->chgBit(oldp+73,(vlSelf->npc__DOT__ex_ls_load_en));
            tracep->chgQData(oldp+74,((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                >> 4U))))))),64);
            tracep->chgQData(oldp+76,(vlSelf->npc__DOT__ex_csr_rd_pc_data),64);
            tracep->chgQData(oldp+78,(vlSelf->npc__DOT__ex_rd_data),64);
            tracep->chgBit(oldp+80,(vlSelf->npc__DOT__ex_pc_data_ena));
            tracep->chgQData(oldp+81,(vlSelf->npc__DOT__ex_pc_data),64);
            tracep->chgIData(oldp+83,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_inst_dfflr__DOT__qout_r),32);
            tracep->chgQData(oldp+84,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_pc_dfflr__DOT__qout_r),64);
            tracep->chgQData(oldp+86,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r),64);
            tracep->chgQData(oldp+88,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+90,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r));
            tracep->chgBit(oldp+91,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_en_dfflr__DOT__qout_r));
            tracep->chgBit(oldp+92,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_en_dfflr__DOT__qout_r));
            tracep->chgCData(oldp+93,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r),2);
            tracep->chgCData(oldp+94,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r),5);
            tracep->chgBit(oldp+95,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_inst_is_ebreak_dfflr__DOT__qout_r));
            tracep->chgBit(oldp+96,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r));
            tracep->chgIData(oldp+97,(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_inst_dfflr__DOT__qout_r),32);
            tracep->chgQData(oldp+98,(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_pc_dfflr__DOT__qout_r),64);
            tracep->chgQData(oldp+100,((((((- (QData)((IData)(
                                                              (0U 
                                                               == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                           & (((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(
                                                                              (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                               >> 7U)) 
                                                                      & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata)))))) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                             & (((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                                >> 0xfU)) 
                                                                        & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r))))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))))))) 
                                         | ((- (QData)((IData)(
                                                               (2U 
                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                            & (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & ((IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                                >> 0x1fU)) 
                                                                               & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r)))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))))) 
                                        | ((- (QData)((IData)(
                                                              (3U 
                                                               == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))),64);
            tracep->chgQData(oldp+102,(vlSelf->npc__DOT__ls_rd_data),64);
            tracep->chgQData(oldp+104,(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+106,(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r));
            tracep->chgCData(oldp+107,(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r),5);
            tracep->chgBit(oldp+108,(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r));
            tracep->chgCData(oldp+109,(vlSelf->npc__DOT__pipeline_flush),3);
            tracep->chgCData(oldp+110,((3U & (- (IData)((IData)(vlSelf->npc__DOT__forward_load_stall))))),5);
            tracep->chgBit(oldp+111,((0x6fU == (0x7fU 
                                                & vlSelf->npc__DOT__if_id_inst))));
            tracep->chgBit(oldp+112,((0x63U == (0x7fU 
                                                & vlSelf->npc__DOT__if_id_inst))));
            tracep->chgQData(oldp+113,(vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm),64);
            tracep->chgQData(oldp+115,((((- (QData)((IData)(
                                                            (vlSelf->npc__DOT__if_id_inst 
                                                             >> 0x1fU)))) 
                                         << 0x14U) 
                                        | (QData)((IData)(
                                                          ((0xff000U 
                                                            & vlSelf->npc__DOT__if_id_inst) 
                                                           | ((0x800U 
                                                               & (vlSelf->npc__DOT__if_id_inst 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->npc__DOT__if_id_inst 
                                                                    >> 0x14U)))))))),64);
            tracep->chgBit(oldp+117,((1U & (IData)(vlSelf->npc__DOT__pipeline_flush))));
            tracep->chgBit(oldp+118,((1U & (~ (IData)(vlSelf->npc__DOT__forward_load_stall)))));
            tracep->chgQData(oldp+119,(((1U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                         ? vlSelf->npc__DOT__ex_pc_data
                                         : (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                            + (((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->npc__DOT__if_id_inst)) 
                                                | ((0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->npc__DOT__if_id_inst)) 
                                                   & (IData)(
                                                             (vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm 
                                                              >> 0x3fU))))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (0x6fU 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->npc__DOT__if_id_inst))))) 
                                                    & (((- (QData)((IData)(
                                                                           (vlSelf->npc__DOT__if_id_inst 
                                                                            >> 0x1fU)))) 
                                                        << 0x14U) 
                                                       | (QData)((IData)(
                                                                         ((0xff000U 
                                                                           & vlSelf->npc__DOT__if_id_inst) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->npc__DOT__if_id_inst 
                                                                                >> 9U)) 
                                                                             | (0x7feU 
                                                                                & (vlSelf->npc__DOT__if_id_inst 
                                                                                >> 0x14U)))))))) 
                                                   | ((- (QData)((IData)(
                                                                         (0x63U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->npc__DOT__if_id_inst))))) 
                                                      & vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm))
                                                : 4ULL)))),64);
            tracep->chgQData(oldp+121,((((0x6fU == 
                                          (0x7fU & vlSelf->npc__DOT__if_id_inst)) 
                                         | ((0x63U 
                                             == (0x7fU 
                                                 & vlSelf->npc__DOT__if_id_inst)) 
                                            & (IData)(
                                                      (vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm 
                                                       >> 0x3fU))))
                                         ? (((- (QData)((IData)(
                                                                (0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->npc__DOT__if_id_inst))))) 
                                             & (((- (QData)((IData)(
                                                                    (vlSelf->npc__DOT__if_id_inst 
                                                                     >> 0x1fU)))) 
                                                 << 0x14U) 
                                                | (QData)((IData)(
                                                                  ((0xff000U 
                                                                    & vlSelf->npc__DOT__if_id_inst) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->npc__DOT__if_id_inst 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->npc__DOT__if_id_inst 
                                                                            >> 0x14U)))))))) 
                                            | ((- (QData)((IData)(
                                                                  (0x63U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->npc__DOT__if_id_inst))))) 
                                               & vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm))
                                         : 4ULL)),64);
            tracep->chgQData(oldp+123,((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                        + (((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->npc__DOT__if_id_inst)) 
                                            | ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->npc__DOT__if_id_inst)) 
                                               & (IData)(
                                                         (vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm 
                                                          >> 0x3fU))))
                                            ? (((- (QData)((IData)(
                                                                   (0x6fU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->npc__DOT__if_id_inst))))) 
                                                & (((- (QData)((IData)(
                                                                       (vlSelf->npc__DOT__if_id_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     ((0xff000U 
                                                                       & vlSelf->npc__DOT__if_id_inst) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->npc__DOT__if_id_inst 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->npc__DOT__if_id_inst 
                                                                               >> 0x14U)))))))) 
                                               | ((- (QData)((IData)(
                                                                     (0x63U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->npc__DOT__if_id_inst))))) 
                                                  & vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm))
                                            : 4ULL))),64);
            tracep->chgQData(oldp+125,((0xfffffffffffffff8ULL 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)),64);
            tracep->chgQData(oldp+127,(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__rdata),64);
            tracep->chgBit(oldp+129,(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__sign_reg__DOT__qout_r));
            tracep->chgBit(oldp+130,((1U & ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                                            >> 1U))));
            tracep->chgBit(oldp+131,((1U & ((- (IData)((IData)(vlSelf->npc__DOT__forward_load_stall))) 
                                            >> 1U))));
            tracep->chgIData(oldp+132,(((2U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                         ? 0x13U : vlSelf->npc__DOT__if_id_inst)),32);
            tracep->chgQData(oldp+133,(((2U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                         ? 0ULL : vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)),64);
            tracep->chgBit(oldp+135,((1U & (~ (1U & 
                                               ((- (IData)((IData)(vlSelf->npc__DOT__forward_load_stall))) 
                                                >> 1U))))));
            tracep->chgCData(oldp+136,((7U & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+137,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0xcU))))))));
            tracep->chgBit(oldp+138,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (1U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU)))))))));
            tracep->chgBit(oldp+139,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (2U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU)))))))));
            tracep->chgBit(oldp+140,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (3U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU)))))))));
            tracep->chgBit(oldp+141,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (4U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU)))))))));
            tracep->chgBit(oldp+142,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (5U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU)))))))));
            tracep->chgBit(oldp+143,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (6U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU)))))))));
            tracep->chgBit(oldp+144,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (~ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU)))))))));
            tracep->chgCData(oldp+145,((vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+146,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0x19U)))))));
            tracep->chgBit(oldp+147,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (0x20U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x19U)))))))));
            tracep->chgBit(oldp+148,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (1U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x19U)))))))));
            tracep->chgBit(oldp+149,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (4U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x19U)))))))));
            tracep->chgBit(oldp+150,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (8U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x19U)))))))));
            tracep->chgBit(oldp+151,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (0x10U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x19U)))))))));
            tracep->chgBit(oldp+152,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (0x18U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x19U)))))))));
            tracep->chgBit(oldp+153,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0xfU))))))));
            tracep->chgBit(oldp+154,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0x14U))))))));
            tracep->chgBit(oldp+155,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (1U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x14U)))))))));
            tracep->chgBit(oldp+156,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (2U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x14U)))))))));
            tracep->chgBit(oldp+157,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 7U))))))));
            tracep->chgCData(oldp+158,((0x7fU & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)),7);
            tracep->chgBit(oldp+159,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (0x13U 
                                                           ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
            tracep->chgBit(oldp+160,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (0x33U 
                                                           ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
            tracep->chgBit(oldp+161,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (0x1bU 
                                                           ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
            tracep->chgBit(oldp+162,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (0x3bU 
                                                           ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
            tracep->chgBit(oldp+163,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (0x17U 
                                                           ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
            tracep->chgBit(oldp+164,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (0x63U 
                                                           ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
            tracep->chgBit(oldp+165,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (0x67U 
                                                           ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
            tracep->chgBit(oldp+166,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (3U 
                                                           ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
            tracep->chgBit(oldp+167,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (0x37U 
                                                           ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
            tracep->chgBit(oldp+168,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (0x73U 
                                                           ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
            tracep->chgBit(oldp+169,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func6_010000));
            tracep->chgBit(oldp+170,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0x1aU)))))));
            tracep->chgBit(oldp+171,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x13U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                              >> 0xcU)))))))));
            tracep->chgBit(oldp+172,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x13U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (2U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU))))))))));
            tracep->chgBit(oldp+173,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu));
            tracep->chgBit(oldp+174,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x13U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (4U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU))))))))));
            tracep->chgBit(oldp+175,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x13U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (6U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU))))))))));
            tracep->chgBit(oldp+176,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x13U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (~ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU))))))))));
            tracep->chgBit(oldp+177,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x13U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (1U 
                                                               ^ 
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                >> 0xcU))))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0x1aU))))))));
            tracep->chgBit(oldp+178,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x13U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (5U 
                                                               ^ 
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                >> 0xcU))))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0x1aU))))))));
            tracep->chgBit(oldp+179,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srai));
            tracep->chgBit(oldp+180,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x1bU 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                              >> 0xcU)))))))));
            tracep->chgBit(oldp+181,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw));
            tracep->chgBit(oldp+182,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw));
            tracep->chgBit(oldp+183,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw));
            tracep->chgBit(oldp+184,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x33U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU)))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0x19U))))))));
            tracep->chgBit(oldp+185,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x33U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU)))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (0x20U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0x19U))))))))));
            tracep->chgBit(oldp+186,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x33U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (1U 
                                                               ^ 
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                >> 0xcU))))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0x19U))))))));
            tracep->chgBit(oldp+187,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x33U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (2U 
                                                               ^ 
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                >> 0xcU))))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0x19U))))))));
            tracep->chgBit(oldp+188,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu));
            tracep->chgBit(oldp+189,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x33U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (4U 
                                                               ^ 
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                >> 0xcU))))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0x19U))))))));
            tracep->chgBit(oldp+190,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x33U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (5U 
                                                               ^ 
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                >> 0xcU))))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0x19U))))))));
            tracep->chgBit(oldp+191,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sra));
            tracep->chgBit(oldp+192,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x33U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (6U 
                                                               ^ 
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                >> 0xcU))))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0x19U))))))));
            tracep->chgBit(oldp+193,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x33U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (~ 
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                >> 0xcU))))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0x19U))))))));
            tracep->chgBit(oldp+194,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div));
            tracep->chgBit(oldp+195,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x33U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (5U 
                                                               ^ 
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                >> 0xcU))))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (1U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0x19U))))))))));
            tracep->chgBit(oldp+196,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul));
            tracep->chgBit(oldp+197,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh));
            tracep->chgBit(oldp+198,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu));
            tracep->chgBit(oldp+199,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu));
            tracep->chgBit(oldp+200,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem));
            tracep->chgBit(oldp+201,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x33U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (~ 
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                >> 0xcU))))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (1U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0x19U))))))))));
            tracep->chgBit(oldp+202,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x3bU 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU)))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0x19U))))))));
            tracep->chgBit(oldp+203,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x3bU 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU)))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (0x20U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0x19U))))))))));
            tracep->chgBit(oldp+204,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw));
            tracep->chgBit(oldp+205,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw));
            tracep->chgBit(oldp+206,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw));
            tracep->chgBit(oldp+207,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw));
            tracep->chgBit(oldp+208,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw));
            tracep->chgBit(oldp+209,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x3bU 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (5U 
                                                               ^ 
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                >> 0xcU))))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (1U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0x19U))))))))));
            tracep->chgBit(oldp+210,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw));
            tracep->chgBit(oldp+211,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x3bU 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (~ 
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                >> 0xcU))))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (1U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0x19U))))))))));
            tracep->chgBit(oldp+212,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x63U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                              >> 0xcU)))))))));
            tracep->chgBit(oldp+213,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x63U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (1U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU))))))))));
            tracep->chgBit(oldp+214,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x63U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (4U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU))))))))));
            tracep->chgBit(oldp+215,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x63U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (5U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU))))))))));
            tracep->chgBit(oldp+216,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu));
            tracep->chgBit(oldp+217,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu));
            tracep->chgBit(oldp+218,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (3U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                              >> 0xcU)))))))));
            tracep->chgBit(oldp+219,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (3U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (4U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU))))))))));
            tracep->chgBit(oldp+220,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (3U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (3U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU))))))))));
            tracep->chgBit(oldp+221,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (3U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (1U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU))))))))));
            tracep->chgBit(oldp+222,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu));
            tracep->chgBit(oldp+223,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (3U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (2U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU))))))))));
            tracep->chgBit(oldp+224,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu));
            tracep->chgBit(oldp+225,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x23U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                              >> 0xcU)))))))));
            tracep->chgBit(oldp+226,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x23U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (1U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU))))))))));
            tracep->chgBit(oldp+227,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x23U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (2U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU))))))))));
            tracep->chgBit(oldp+228,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x23U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (3U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU))))))))));
            tracep->chgBit(oldp+229,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw));
            tracep->chgBit(oldp+230,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs));
            tracep->chgBit(oldp+231,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc));
            tracep->chgBit(oldp+232,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi));
            tracep->chgBit(oldp+233,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi));
            tracep->chgBit(oldp+234,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci));
            tracep->chgBit(oldp+235,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc))));
            tracep->chgBit(oldp+236,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                                        | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs)) 
                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc)) 
                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri))));
            tracep->chgBit(oldp+237,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu) 
                                        | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu)) 
                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu)) 
                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu))));
            tracep->chgBit(oldp+238,((1U & ((((~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (3U 
                                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (7U 
                                                             & (4U 
                                                                ^ 
                                                                (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                 >> 0xcU))))))) 
                                             | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu)) 
                                            | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu)))));
            tracep->chgCData(oldp+239,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type),6);
            tracep->chgQData(oldp+240,((((- (QData)((IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0x1fU)))) 
                                         << 0xbU) | (QData)((IData)(
                                                                    (0x7ffU 
                                                                     & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                        >> 0x14U)))))),64);
            tracep->chgQData(oldp+242,((((- (QData)((IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0x1fU)))) 
                                         << 0xbU) | (QData)((IData)(
                                                                    ((0x7e0U 
                                                                      & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+244,((((- (QData)((IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                              >> 7U)))))))),64);
            tracep->chgQData(oldp+246,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))),64);
            tracep->chgQData(oldp+248,((((- (QData)((IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0x1fU)))) 
                                         << 0x14U) 
                                        | (QData)((IData)(
                                                          ((0xff000U 
                                                            & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r) 
                                                           | ((0x800U 
                                                               & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                    >> 0x14U)))))))),64);
            tracep->chgBit(oldp+250,((1U & (~ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                               >> 0x19U)))));
            tracep->chgIData(oldp+251,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen),32);
            tracep->chgBit(oldp+252,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 1U))));
            tracep->chgQData(oldp+253,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+255,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 2U))));
            tracep->chgQData(oldp+256,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+258,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 3U))));
            tracep->chgQData(oldp+259,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+261,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 4U))));
            tracep->chgQData(oldp+262,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+264,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 5U))));
            tracep->chgQData(oldp+265,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+267,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 6U))));
            tracep->chgQData(oldp+268,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+270,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 7U))));
            tracep->chgQData(oldp+271,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+273,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 8U))));
            tracep->chgQData(oldp+274,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+276,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 9U))));
            tracep->chgQData(oldp+277,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+279,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0xaU))));
            tracep->chgQData(oldp+280,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+282,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0xbU))));
            tracep->chgQData(oldp+283,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+285,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0xcU))));
            tracep->chgQData(oldp+286,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+288,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0xdU))));
            tracep->chgQData(oldp+289,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+291,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0xeU))));
            tracep->chgQData(oldp+292,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+294,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0xfU))));
            tracep->chgQData(oldp+295,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+297,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x10U))));
            tracep->chgQData(oldp+298,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+300,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x11U))));
            tracep->chgQData(oldp+301,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+303,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x12U))));
            tracep->chgQData(oldp+304,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+306,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x13U))));
            tracep->chgQData(oldp+307,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+309,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x14U))));
            tracep->chgQData(oldp+310,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+312,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x15U))));
            tracep->chgQData(oldp+313,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+315,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x16U))));
            tracep->chgQData(oldp+316,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+318,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x17U))));
            tracep->chgQData(oldp+319,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+321,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x18U))));
            tracep->chgQData(oldp+322,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+324,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x19U))));
            tracep->chgQData(oldp+325,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+327,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x1aU))));
            tracep->chgQData(oldp+328,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+330,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x1bU))));
            tracep->chgQData(oldp+331,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+333,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x1cU))));
            tracep->chgQData(oldp+334,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+336,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x1dU))));
            tracep->chgQData(oldp+337,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+339,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x1eU))));
            tracep->chgQData(oldp+340,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+342,((vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                      >> 0x1fU)));
            tracep->chgQData(oldp+343,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgCData(oldp+345,(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild),5);
            tracep->chgCData(oldp+346,(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild),5);
            tracep->chgBit(oldp+347,((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r))));
            tracep->chgBit(oldp+348,((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r))));
            tracep->chgBit(oldp+349,((0U != (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))));
            tracep->chgBit(oldp+350,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r) 
                                        & (~ (IData)(vlSelf->npc__DOT__ex_ls_load_en))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                                      ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                      & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)))));
            tracep->chgBit(oldp+351,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r) 
                                                      ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                      & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r)))));
            tracep->chgBit(oldp+352,((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     ((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r) 
                                                      ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                      & (0U != (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r)))));
            tracep->chgBit(oldp+353,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r) 
                                        & (~ (IData)(vlSelf->npc__DOT__ex_ls_load_en))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                                      ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild)))))) 
                                      & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)))));
            tracep->chgBit(oldp+354,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r) 
                                                      ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild)))))) 
                                      & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r)))));
            tracep->chgBit(oldp+355,((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     ((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r) 
                                                      ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild)))))) 
                                      & (0U != (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r)))));
            tracep->chgBit(oldp+356,((((IData)(vlSelf->npc__DOT__ex_ls_load_en) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                                      ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                      & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)))));
            tracep->chgBit(oldp+357,((((IData)(vlSelf->npc__DOT__ex_ls_load_en) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                                      ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild)))))) 
                                      & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)))));
            tracep->chgBit(oldp+358,((1U & ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                                            >> 2U))));
            tracep->chgBit(oldp+359,(0U));
            tracep->chgSData(oldp+360,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus),9);
            tracep->chgSData(oldp+361,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                         ? 0U : (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus))),9);
            tracep->chgSData(oldp+362,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                         ? 0x200U : (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))),10);
            tracep->chgQData(oldp+363,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                         ? 0ULL : vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r)),64);
            tracep->chgCData(oldp+365,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                         ? 0U : (0x1fU 
                                                 & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                    >> 7U)))),5);
            tracep->chgBit(oldp+366,((1U & ((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                                                >> 2U)) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x33U 
                                                        & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type))))))));
            tracep->chgCData(oldp+367,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                         ? 0U : (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))),2);
            tracep->chgBit(oldp+368,(((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                                          >> 2U)) & 
                                      ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem) 
                                         | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw)) 
                                        | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div)) 
                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw)))));
            tracep->chgCData(oldp+369,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                         ? 0U : (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw))))))),5);
            tracep->chgCData(oldp+370,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                         ? 0U : (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci)))))))),6);
            tracep->chgCData(oldp+371,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                         ? 0U : (IData)(vlSelf->npc__DOT__id_ex_branch_bus))),6);
            tracep->chgCData(oldp+372,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                         ? 0U : (((
                                                   (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu) 
                                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu)) 
                                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu)) 
                                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu)) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((((~ (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0x7fU 
                                                                      & (3U 
                                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (7U 
                                                                        & (4U 
                                                                           ^ 
                                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                            >> 0xcU))))))) 
                                                        | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu)) 
                                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu)))))),2);
            tracep->chgBit(oldp+373,((1U & ((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                                                >> 2U)) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fU 
                                                            & (3U 
                                                               ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                               | (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fU 
                                                              & (0x23U 
                                                                 ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))))));
            tracep->chgBit(oldp+374,((1U & ((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                                                >> 2U)) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fU 
                                                            & (0x3bU 
                                                               ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                               | (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fU 
                                                              & (0x1bU 
                                                                 ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))))));
            tracep->chgBit(oldp+375,(((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                                          >> 2U)) & 
                                      ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw) 
                                         | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw)) 
                                        | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw)) 
                                       & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                          >> 0x19U)))));
            tracep->chgSData(oldp+376,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r),9);
            tracep->chgBit(oldp+377,(1U));
            tracep->chgBit(oldp+378,((0U != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))));
            tracep->chgBit(oldp+379,((1U & (((0U != (IData)(vlSelf->npc__DOT__id_ex_branch_bus)) 
                                             | (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fU 
                                                            & (0x23U 
                                                               ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                                            | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri)))));
            tracep->chgIData(oldp+380,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                         ? 0U : vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)),32);
            tracep->chgBit(oldp+381,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r) 
                                            >> 1U))));
            tracep->chgBit(oldp+382,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub));
            tracep->chgBit(oldp+383,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                            >> 8U))));
            __Vtemp86[0U] = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r);
            __Vtemp86[1U] = (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                                     >> 0x20U));
            __Vtemp86[2U] = (1U & ((~ ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r) 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                                                          >> 0x3fU))));
            tracep->chgWData(oldp+384,(__Vtemp86),65);
            __Vtemp87[0U] = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r);
            __Vtemp87[1U] = (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
                                     >> 0x20U));
            __Vtemp87[2U] = (1U & ((~ ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r) 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
                                                          >> 0x3fU))));
            tracep->chgWData(oldp+387,(__Vtemp87),65);
            __Vtemp90[0U] = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r));
            __Vtemp90[1U] = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                             & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                                        >> 0x20U)));
            __Vtemp90[2U] = (1U & ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                                   & ((~ ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r) 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                                                             >> 0x3fU)))));
            tracep->chgWData(oldp+390,(__Vtemp90),65);
            tracep->chgWData(oldp+393,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b),65);
            if ((0x100U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))) {
                __Vtemp95[0U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U]);
                __Vtemp95[1U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U]);
                __Vtemp95[2U] = (1U & (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U]));
            } else {
                __Vtemp95[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U];
                __Vtemp95[1U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U];
                __Vtemp95[2U] = (1U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U]);
            }
            tracep->chgWData(oldp+396,(__Vtemp95),65);
            tracep->chgWData(oldp+399,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data),65);
            tracep->chgQData(oldp+402,((((- (QData)((IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U] 
                                                             >> 0x1fU)))) 
                                         << 0x1fU) 
                                        | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))),64);
            tracep->chgQData(oldp+404,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result),64);
            tracep->chgIData(oldp+406,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op),32);
            tracep->chgIData(oldp+407,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op),32);
            tracep->chgQData(oldp+408,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_a_op),64);
            tracep->chgQData(oldp+410,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_b_op),64);
            tracep->chgQData(oldp+412,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a),64);
            tracep->chgQData(oldp+414,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b),64);
            VL_EXTEND_WQ(128,64, __Vtemp96, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
            VL_EXTEND_WQ(128,64, __Vtemp97, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
            VL_MUL_W(4, __Vtemp98, __Vtemp96, __Vtemp97);
            tracep->chgWData(oldp+416,(__Vtemp98),128);
            tracep->chgWData(oldp+420,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res),128);
            VL_EXTEND_WQ(128,64, __Vtemp99, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
            VL_EXTEND_WQ(128,64, __Vtemp100, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
            VL_MUL_W(4, __Vtemp101, __Vtemp99, __Vtemp100);
            tracep->chgWData(oldp+424,(__Vtemp101),128);
            tracep->chgIData(oldp+428,(((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                       >> 7U)))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op)),32);
            tracep->chgIData(oldp+429,(((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                       >> 7U)))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op)),32);
            tracep->chgQData(oldp+430,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res),64);
            tracep->chgQData(oldp+432,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res 
                                                                        >> 0x1fU)))))) 
                                         << 0x1fU) 
                                        | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res)))))),64);
            VL_EXTEND_WQ(128,64, __Vtemp102, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
            VL_EXTEND_WQ(128,64, __Vtemp103, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
            VL_MUL_W(4, __Vtemp104, __Vtemp102, __Vtemp103);
            VL_EXTEND_WQ(128,64, __Vtemp105, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
            VL_EXTEND_WQ(128,64, __Vtemp106, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
            VL_MUL_W(4, __Vtemp107, __Vtemp105, __Vtemp106);
            tracep->chgQData(oldp+434,(((((((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r) 
                                                                   >> 4U))))) 
                                            & (((QData)((IData)(
                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[0U])))) 
                                           | ((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r) 
                                                                     >> 3U))))) 
                                              & (((QData)((IData)(
                                                                  vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[2U]))))) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r) 
                                                                    >> 2U))))) 
                                             & (((QData)((IData)(
                                                                 __Vtemp104[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  __Vtemp104[2U]))))) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r) 
                                                                   >> 1U))))) 
                                            & (((QData)((IData)(
                                                                __Vtemp107[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 __Vtemp107[2U]))))) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r))))) 
                                           & (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res 
                                                                              >> 0x1fU)))))) 
                                               << 0x1fU) 
                                              | (QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res)))))))),64);
            tracep->chgQData(oldp+436,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a),64);
            tracep->chgQData(oldp+438,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b),64);
            tracep->chgQData(oldp+440,(VL_DIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b)),64);
            tracep->chgQData(oldp+442,(VL_DIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b)),64);
            tracep->chgIData(oldp+444,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_a),32);
            tracep->chgIData(oldp+445,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_b),32);
            tracep->chgIData(oldp+446,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res),32);
            tracep->chgIData(oldp+447,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res),32);
            tracep->chgQData(oldp+448,((((- (QData)((IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res 
                                                             >> 0x1fU)))) 
                                         << 0x1fU) 
                                        | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res))))),64);
            tracep->chgQData(oldp+450,((((- (QData)((IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res 
                                                             >> 0x1fU)))) 
                                         << 0x1fU) 
                                        | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res))))),64);
            tracep->chgQData(oldp+452,((((((- (QData)((IData)(
                                                              ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r) 
                                                               & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)))))) 
                                           & VL_DIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b)) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r)) 
                                                                    & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))))) 
                                             & VL_DIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b))) 
                                         | ((- (QData)((IData)(
                                                               ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r)) 
                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))) 
                                            & (((- (QData)((IData)(
                                                                   (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res 
                                                                    >> 0x1fU)))) 
                                                << 0x1fU) 
                                               | (QData)((IData)(
                                                                 (0x7fffffffU 
                                                                  & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res)))))) 
                                        | ((- (QData)((IData)(
                                                              ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r) 
                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))) 
                                           & (((- (QData)((IData)(
                                                                  (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res 
                                                                   >> 0x1fU)))) 
                                               << 0x1fU) 
                                              | (QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res))))))),64);
            tracep->chgQData(oldp+454,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a),64);
            tracep->chgQData(oldp+456,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b),64);
            tracep->chgQData(oldp+458,(VL_MODDIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b)),64);
            tracep->chgQData(oldp+460,(VL_MODDIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b)),64);
            tracep->chgIData(oldp+462,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_a),32);
            tracep->chgIData(oldp+463,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_b),32);
            tracep->chgIData(oldp+464,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod),32);
            tracep->chgIData(oldp+465,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod),32);
            tracep->chgQData(oldp+466,((((- (QData)((IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod 
                                                             >> 0x1fU)))) 
                                         << 0x1fU) 
                                        | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod))))),64);
            tracep->chgQData(oldp+468,((((- (QData)((IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod 
                                                             >> 0x1fU)))) 
                                         << 0x1fU) 
                                        | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod))))),64);
            tracep->chgQData(oldp+470,((((((- (QData)((IData)(
                                                              ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r) 
                                                               & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)))))) 
                                           & VL_MODDIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b)) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r)) 
                                                                    & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))))) 
                                             & VL_MODDIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b))) 
                                         | ((- (QData)((IData)(
                                                               ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r)) 
                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))) 
                                            & (((- (QData)((IData)(
                                                                   (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod 
                                                                    >> 0x1fU)))) 
                                                << 0x1fU) 
                                               | (QData)((IData)(
                                                                 (0x7fffffffU 
                                                                  & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod)))))) 
                                        | ((- (QData)((IData)(
                                                              ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r) 
                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))) 
                                           & (((- (QData)((IData)(
                                                                  (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod 
                                                                   >> 0x1fU)))) 
                                               << 0x1fU) 
                                              | (QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod))))))),64);
            tracep->chgBit(oldp+472,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift));
            tracep->chgQData(oldp+473,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a),64);
            tracep->chgCData(oldp+475,((0x3fU & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r) 
                                                 & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))),6);
            tracep->chgCData(oldp+476,((0x1fU & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r) 
                                                 & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))),5);
            tracep->chgQData(oldp+477,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64),64);
            tracep->chgIData(oldp+479,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32),32);
            __Vtemp108[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32;
            __Vtemp108[1U] = (IData)((0x1ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                >> 2U) 
                                                               & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                                  >> 0x1fU))))))));
            __Vtemp108[2U] = (IData)(((0x1ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                 >> 2U) 
                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                                   >> 0x1fU))))))) 
                                      >> 0x20U));
            tracep->chgWData(oldp+480,(__Vtemp108),65);
            __Vtemp109[0U] = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64);
            __Vtemp109[1U] = (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                      >> 0x20U));
            __Vtemp109[2U] = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                     >> 2U) & (IData)(
                                                      (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                                       >> 0x3fU))));
            tracep->chgWData(oldp+483,(__Vtemp109),65);
            if (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r) {
                __Vtemp112[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32;
                __Vtemp112[1U] = (IData)((0x1ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                    >> 2U) 
                                                                   & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                                      >> 0x1fU))))))));
                __Vtemp112[2U] = (IData)(((0x1ffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                     >> 2U) 
                                                                    & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                                       >> 0x1fU))))))) 
                                          >> 0x20U));
            } else {
                __Vtemp112[0U] = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64);
                __Vtemp112[1U] = (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                          >> 0x20U));
                __Vtemp112[2U] = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                         >> 2U) & (IData)(
                                                          (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                                           >> 0x3fU))));
            }
            tracep->chgWData(oldp+486,(__Vtemp112),65);
            tracep->chgCData(oldp+489,((0x3fU & ((2U 
                                                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r))
                                                  ? 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r) 
                                                     & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))
                                                  : 
                                                 ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r) 
                                                  & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift))))))),6);
            tracep->chgWData(oldp+490,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result),65);
            tracep->chgIData(oldp+493,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev),32);
            tracep->chgQData(oldp+494,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev),64);
            tracep->chgQData(oldp+496,(((((- (QData)((IData)(
                                                             (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                               >> 4U) 
                                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))) 
                                          & (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev)))) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                    >> 4U) 
                                                                   & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))))) 
                                            & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev)) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                  >> 3U))))) 
                                           & (((QData)((IData)(
                                                               vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[0U])))))),64);
            tracep->chgQData(oldp+498,(((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                               >> 2U))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r)),64);
            tracep->chgQData(oldp+500,(((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                               >> 2U))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)),64);
            tracep->chgQData(oldp+502,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                >> 2U))))) 
                                         & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                  >> 2U))))) 
                                           & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))),64);
            tracep->chgQData(oldp+504,(((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                               >> 1U))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r)),64);
            tracep->chgQData(oldp+506,(((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                               >> 1U))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)),64);
            tracep->chgQData(oldp+508,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                >> 1U))))) 
                                         & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
                                        & ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                  >> 1U))))) 
                                           & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))),64);
            tracep->chgQData(oldp+510,(((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r)),64);
            tracep->chgQData(oldp+512,(((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)),64);
            tracep->chgQData(oldp+514,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))))) 
                                         & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
                                        ^ ((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))))) 
                                           & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))),64);
            tracep->chgBit(oldp+516,((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r))));
            tracep->chgBit(oldp+517,((1U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])));
            tracep->chgBit(oldp+518,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (((QData)((IData)(
                                                                         vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))))));
            tracep->chgBit(oldp+519,((1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                                             >> 5U) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (((QData)((IData)(
                                                                            vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))));
            tracep->chgBit(oldp+520,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                                       >> 4U) & (0U 
                                                 != 
                                                 (((QData)((IData)(
                                                                   vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))));
            tracep->chgBit(oldp+521,((1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                                             >> 3U) 
                                            & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]))));
            tracep->chgBit(oldp+522,((1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                                             >> 2U) 
                                            & ((~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                               | (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (((QData)((IData)(
                                                                               vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))))))));
            tracep->chgBit(oldp+523,((1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                                             >> 1U) 
                                            & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]))));
            tracep->chgBit(oldp+524,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                                            & ((~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                               | (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (((QData)((IData)(
                                                                               vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))))))));
            tracep->chgBit(oldp+525,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__branch_en));
            tracep->chgBit(oldp+526,(((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r)) 
                                      & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__branch_en)))));
            tracep->chgBit(oldp+527,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en));
            tracep->chgQData(oldp+528,((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r 
                                        & (- (QData)((IData)(
                                                             ((0U 
                                                               != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r)) 
                                                              | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))))))),64);
            tracep->chgQData(oldp+530,((((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__branch_en))) 
                                         & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r) 
                                        | (4ULL & (- (QData)((IData)(
                                                                     ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en) 
                                                                      | ((0U 
                                                                          != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r)) 
                                                                         & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__branch_en)))))))))),64);
            tracep->chgQData(oldp+532,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc),64);
            tracep->chgQData(oldp+534,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                >> 5U))))) 
                                         & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                                        | (0xfffffffffffffffeULL 
                                           & ((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                     >> 6U))))) 
                                              & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result)))),64);
            tracep->chgQData(oldp+536,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_temp_rd_ls_data),64);
            tracep->chgQData(oldp+538,((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_data 
                                        & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mstatus_ena))))),64);
            tracep->chgQData(oldp+540,((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_data 
                                        & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mtvec_ena))))),64);
            tracep->chgQData(oldp+542,(((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_data 
                                         & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mepc_ena)))) 
                                        | (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                    >> 7U)))))))),64);
            tracep->chgQData(oldp+544,(((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_data 
                                         & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mcause_ena)))) 
                                        | (0xbULL & 
                                           (- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                  >> 7U)))))))),64);
            tracep->chgQData(oldp+546,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mstatus_dfflr__DOT__qout_r),64);
            tracep->chgQData(oldp+548,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mtvec_dfflr__DOT__qout_r),64);
            tracep->chgQData(oldp+550,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mepc_dfflr__DOT__qout_r),64);
            tracep->chgQData(oldp+552,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mcause_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+554,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mstatus_ena));
            tracep->chgBit(oldp+555,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mtvec_ena));
            tracep->chgBit(oldp+556,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mepc_ena) 
                                            | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                               >> 7U)))));
            tracep->chgBit(oldp+557,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mcause_ena) 
                                            | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                               >> 7U)))));
            tracep->chgBit(oldp+558,((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r))));
            tracep->chgQData(oldp+559,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__read_csr_data),64);
            tracep->chgQData(oldp+561,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_data),64);
            tracep->chgBit(oldp+563,((0x300U == (0xfffU 
                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)))));
            tracep->chgBit(oldp+564,((0x305U == (0xfffU 
                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)))));
            tracep->chgBit(oldp+565,((0x341U == (0xfffU 
                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)))));
            tracep->chgBit(oldp+566,((0x342U == (0xfffU 
                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)))));
            tracep->chgBit(oldp+567,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mepc_ena));
            tracep->chgBit(oldp+568,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mcause_ena));
            tracep->chgBit(oldp+569,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or));
            tracep->chgQData(oldp+570,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data1),64);
            tracep->chgQData(oldp+572,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data2),64);
            tracep->chgQData(oldp+574,((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data1 
                                        | vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data2)),64);
            tracep->chgBit(oldp+576,((IData)((0U != 
                                              (0x24U 
                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r))))));
            tracep->chgQData(oldp+577,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r) 
                                                                >> 5U))))) 
                                         & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r) 
                                                                  >> 2U))))) 
                                           & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r))),64);
            tracep->chgBit(oldp+579,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_and));
            tracep->chgQData(oldp+580,((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__read_csr_data 
                                        & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_and))))),64);
            tracep->chgQData(oldp+582,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r) 
                                                                >> 3U))))) 
                                         & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r))))) 
                                           & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r))),64);
            tracep->chgQData(oldp+584,((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data1 
                                        & (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data2))),64);
            tracep->chgBit(oldp+586,(vlSelf->npc__DOT__u_ysyx_22050598_exu_rd_pc_mux__DOT__csr_pc_en));
            tracep->chgBit(oldp+587,(0U));
            tracep->chgBit(oldp+588,((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r))));
            tracep->chgBit(oldp+589,(1U));
            tracep->chgBit(oldp+590,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                            >> 4U))));
            tracep->chgQData(oldp+591,(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata),64);
            tracep->chgQData(oldp+593,((((((- (QData)((IData)(
                                                              (0U 
                                                               == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                           & (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                               << 0x38U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                        << 0x20U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                           << 0x18U) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                              << 0x10U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                                 << 8U) 
                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))))))))))) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                             & (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                    << 0x20U) 
                                                   | (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r))))))))) 
                                         | ((- (QData)((IData)(
                                                               (2U 
                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                            & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r))))) 
                                        | ((- (QData)((IData)(
                                                              (3U 
                                                               == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                           & vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r))),64);
            tracep->chgCData(oldp+595,(((((1U & (- (IData)(
                                                           (0U 
                                                            == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                          | (2U & (- (IData)(
                                                             (1U 
                                                              == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r)))))) 
                                         | (4U & (- (IData)(
                                                            (2U 
                                                             == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r)))))) 
                                        | (8U & (- (IData)(
                                                           (3U 
                                                            == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))))),8);
            tracep->chgBit(oldp+596,((0U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))));
            tracep->chgBit(oldp+597,((1U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))));
            tracep->chgBit(oldp+598,((2U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))));
            tracep->chgBit(oldp+599,((3U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))));
            tracep->chgBit(oldp+600,(0U));
            tracep->chgBit(oldp+601,(1U));
            tracep->chgQData(oldp+602,((vlSelf->npc__DOT__ex_pc_data 
                                        & (- (QData)((IData)(vlSelf->npc__DOT__ex_pc_data_ena))))),64);
            tracep->chgQData(oldp+604,((vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r 
                                        & (- (QData)((IData)(vlSelf->npc__DOT__ex_pc_data_ena))))),64);
            tracep->chgBit(oldp+606,((0U != ((vlSelf->npc__DOT__ex_pc_data 
                                              & (- (QData)((IData)(vlSelf->npc__DOT__ex_pc_data_ena)))) 
                                             ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r 
                                                & (- (QData)((IData)(vlSelf->npc__DOT__ex_pc_data_ena))))))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+607,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                       [(0x1fU & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                  >> 0xfU))]),64);
            tracep->chgQData(oldp+609,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                       [(0x1fU & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                  >> 0x14U))]),64);
            tracep->chgQData(oldp+611,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a) 
                                                                >> 2U))))) 
                                         & (((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r) 
                                               & (~ (IData)(vlSelf->npc__DOT__ex_ls_load_en))) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                                             ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                             & (0U 
                                                != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)))
                                             ? vlSelf->npc__DOT__ex_rd_data
                                             : ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r) 
                                                                 ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                                 & (0U 
                                                    != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r)))
                                                 ? vlSelf->npc__DOT__ls_rd_data
                                                 : 
                                                ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 ((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r) 
                                                                  ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                                  & (0U 
                                                     != (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r)))
                                                  ? vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r
                                                  : 
                                                 vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                                 [(0x1fU 
                                                   & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                      >> 0xfU))])))) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a) 
                                                                  >> 1U))))) 
                                           & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r))),64);
            tracep->chgQData(oldp+613,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b) 
                                                                >> 1U))))) 
                                         & vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__forward_rs2_data) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b))))) 
                                           & vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm))),64);
            tracep->chgQData(oldp+615,(((((- (QData)((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
                                          & vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & (~ (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x7fU 
                                                                               & (0x23U 
                                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))))) 
                                            & vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__forward_rs2_data)) 
                                        | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri))) 
                                           & (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                 >> 0xfU))))))),64);
            tracep->chgQData(oldp+617,((((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r) 
                                           & (~ (IData)(vlSelf->npc__DOT__ex_ls_load_en))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                                         ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                         & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)))
                                         ? vlSelf->npc__DOT__ex_rd_data
                                         : ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r) 
                                                             ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                             & (0U 
                                                != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r)))
                                             ? vlSelf->npc__DOT__ls_rd_data
                                             : ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                ((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r) 
                                                                 ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                                 & (0U 
                                                    != (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r)))
                                                 ? vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r
                                                 : 
                                                vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                                [(0x1fU 
                                                  & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                     >> 0xfU))])))),64);
            tracep->chgQData(oldp+619,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                         ? 0ULL : (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a) 
                                                                           >> 2U))))) 
                                                    & (((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r) 
                                                          & (~ (IData)(vlSelf->npc__DOT__ex_ls_load_en))) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != 
                                                                       ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                                                        ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                                        & (0U 
                                                           != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)))
                                                        ? vlSelf->npc__DOT__ex_rd_data
                                                        : 
                                                       ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r) 
                                                          & (~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r) 
                                                                         ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                                         & (0U 
                                                            != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r)))
                                                         ? vlSelf->npc__DOT__ls_rd_data
                                                         : 
                                                        ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                                                           & (~ (IData)(
                                                                        (0U 
                                                                         != 
                                                                         ((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r) 
                                                                          ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r)))
                                                          ? vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r
                                                          : 
                                                         vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                                         [
                                                         (0x1fU 
                                                          & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0xfU))])))) 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a) 
                                                                             >> 1U))))) 
                                                      & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r)))),64);
            tracep->chgQData(oldp+621,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                         ? 0ULL : (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b) 
                                                                           >> 1U))))) 
                                                    & vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__forward_rs2_data) 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b))))) 
                                                      & vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm)))),64);
            tracep->chgQData(oldp+623,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                         ? 0ULL : (
                                                   (((- (QData)((IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
                                                     & vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm) 
                                                    | ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (0x23U 
                                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))))) 
                                                       & vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__forward_rs2_data)) 
                                                   | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri))) 
                                                      & (QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                            >> 0xfU)))))))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+625,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                       [0xaU]),64);
            tracep->chgQData(oldp+627,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0]),64);
            tracep->chgQData(oldp+629,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[1]),64);
            tracep->chgQData(oldp+631,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[2]),64);
            tracep->chgQData(oldp+633,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[3]),64);
            tracep->chgQData(oldp+635,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[4]),64);
            tracep->chgQData(oldp+637,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[5]),64);
            tracep->chgQData(oldp+639,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[6]),64);
            tracep->chgQData(oldp+641,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[7]),64);
            tracep->chgQData(oldp+643,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[8]),64);
            tracep->chgQData(oldp+645,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[9]),64);
            tracep->chgQData(oldp+647,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[10]),64);
            tracep->chgQData(oldp+649,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[11]),64);
            tracep->chgQData(oldp+651,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[12]),64);
            tracep->chgQData(oldp+653,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[13]),64);
            tracep->chgQData(oldp+655,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[14]),64);
            tracep->chgQData(oldp+657,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[15]),64);
            tracep->chgQData(oldp+659,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[16]),64);
            tracep->chgQData(oldp+661,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[17]),64);
            tracep->chgQData(oldp+663,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[18]),64);
            tracep->chgQData(oldp+665,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[19]),64);
            tracep->chgQData(oldp+667,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[20]),64);
            tracep->chgQData(oldp+669,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[21]),64);
            tracep->chgQData(oldp+671,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[22]),64);
            tracep->chgQData(oldp+673,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[23]),64);
            tracep->chgQData(oldp+675,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[24]),64);
            tracep->chgQData(oldp+677,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[25]),64);
            tracep->chgQData(oldp+679,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[26]),64);
            tracep->chgQData(oldp+681,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[27]),64);
            tracep->chgQData(oldp+683,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[28]),64);
            tracep->chgQData(oldp+685,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[29]),64);
            tracep->chgQData(oldp+687,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[30]),64);
            tracep->chgQData(oldp+689,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[31]),64);
            tracep->chgQData(oldp+691,(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__forward_rs2_data),64);
        }
        tracep->chgQData(oldp+693,(vlSelf->test_if_pc),64);
        tracep->chgIData(oldp+695,(vlSelf->test_if_inst),32);
        tracep->chgQData(oldp+696,(vlSelf->test_id_pc),64);
        tracep->chgIData(oldp+698,(vlSelf->test_id_inst),32);
        tracep->chgQData(oldp+699,(vlSelf->test_ex_pc),64);
        tracep->chgIData(oldp+701,(vlSelf->test_ex_inst),32);
        tracep->chgQData(oldp+702,(vlSelf->test_ls_pc),64);
        tracep->chgIData(oldp+704,(vlSelf->test_ls_inst),32);
        tracep->chgQData(oldp+705,(vlSelf->test_wb_pc),64);
        tracep->chgIData(oldp+707,(vlSelf->test_wb_inst),32);
        tracep->chgBit(oldp+708,(vlSelf->clk));
        tracep->chgBit(oldp+709,(vlSelf->rst));
    }
}

void Vnpc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vnpc___024root* const __restrict vlSelf = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
