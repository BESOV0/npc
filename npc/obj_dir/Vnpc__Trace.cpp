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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->npc__DOT__imm),64);
            tracep->chgQData(oldp+2,(vlSelf->npc__DOT__rdata1),64);
            tracep->chgQData(oldp+4,(vlSelf->npc__DOT__wdata),64);
            tracep->chgCData(oldp+6,(vlSelf->npc__DOT__inst_type),6);
            tracep->chgBit(oldp+7,(vlSelf->npc__DOT__ren));
            tracep->chgBit(oldp+8,(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_ebreak));
            tracep->chgBit(oldp+9,(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__jump_flag));
            tracep->chgBit(oldp+10,(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi));
            tracep->chgBit(oldp+11,(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_jalr));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+12,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf
                                      [0xaU]),64);
            tracep->chgQData(oldp+14,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[0]),64);
            tracep->chgQData(oldp+16,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[1]),64);
            tracep->chgQData(oldp+18,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[2]),64);
            tracep->chgQData(oldp+20,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[3]),64);
            tracep->chgQData(oldp+22,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[4]),64);
            tracep->chgQData(oldp+24,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[5]),64);
            tracep->chgQData(oldp+26,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[6]),64);
            tracep->chgQData(oldp+28,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[7]),64);
            tracep->chgQData(oldp+30,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[8]),64);
            tracep->chgQData(oldp+32,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[9]),64);
            tracep->chgQData(oldp+34,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[10]),64);
            tracep->chgQData(oldp+36,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[11]),64);
            tracep->chgQData(oldp+38,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[12]),64);
            tracep->chgQData(oldp+40,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[13]),64);
            tracep->chgQData(oldp+42,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[14]),64);
            tracep->chgQData(oldp+44,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[15]),64);
            tracep->chgQData(oldp+46,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[16]),64);
            tracep->chgQData(oldp+48,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[17]),64);
            tracep->chgQData(oldp+50,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[18]),64);
            tracep->chgQData(oldp+52,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[19]),64);
            tracep->chgQData(oldp+54,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[20]),64);
            tracep->chgQData(oldp+56,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[21]),64);
            tracep->chgQData(oldp+58,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[22]),64);
            tracep->chgQData(oldp+60,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[23]),64);
            tracep->chgQData(oldp+62,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[24]),64);
            tracep->chgQData(oldp+64,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[25]),64);
            tracep->chgQData(oldp+66,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[26]),64);
            tracep->chgQData(oldp+68,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[27]),64);
            tracep->chgQData(oldp+70,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[28]),64);
            tracep->chgQData(oldp+72,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[29]),64);
            tracep->chgQData(oldp+74,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[30]),64);
            tracep->chgQData(oldp+76,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[31]),64);
        }
        tracep->chgBit(oldp+78,(vlSelf->clk));
        tracep->chgBit(oldp+79,(vlSelf->rst));
        tracep->chgIData(oldp+80,(vlSelf->inst),32);
        tracep->chgQData(oldp+81,(vlSelf->pc),64);
        tracep->chgQData(oldp+83,(vlSelf->fdata),64);
        tracep->chgQData(oldp+85,(((((((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                              >> 4U))))) 
                                       & (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x14U)))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                                >> 3U))))) 
                                         & (((QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x19U))) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->inst 
                                                                  >> 7U))))))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                               >> 2U))))) 
                                        & (((QData)((IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             ((0x800U 
                                                               & (vlSelf->inst 
                                                                  << 4U)) 
                                                              | ((0x7e0U 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1eU 
                                                                    & (vlSelf->inst 
                                                                       >> 7U))))))))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                              >> 1U))))) 
                                       & ((QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0xcU))) 
                                          << 0xcU))) 
                                   | ((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->npc__DOT__inst_type))))) 
                                      & (((QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU))) 
                                          << 0x14U) 
                                         | (QData)((IData)(
                                                           ((0xff000U 
                                                             & vlSelf->inst) 
                                                            | ((0x800U 
                                                                & (vlSelf->inst 
                                                                   >> 9U)) 
                                                               | (0x7feU 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)))))))))),64);
        tracep->chgQData(oldp+87,((((vlSelf->pc + vlSelf->npc__DOT__imm) 
                                    & (- (QData)((IData)(
                                                         (0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->inst)))))) 
                                   | (0xfffffffffffffffeULL 
                                      & ((vlSelf->npc__DOT__imm 
                                          + vlSelf->npc__DOT__rdata1) 
                                         & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_jalr))))))),64);
        tracep->chgCData(oldp+89,((0x1fU & (vlSelf->inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+90,((0x1fU & (vlSelf->inst 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+91,((0x1fU & (vlSelf->inst 
                                            >> 7U))),5);
        tracep->chgCData(oldp+92,((vlSelf->inst >> 0x19U)),7);
        tracep->chgCData(oldp+93,((7U & (vlSelf->inst 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+94,((0x7fU & vlSelf->inst)),7);
        tracep->chgQData(oldp+95,((((0U != (0x1fU & 
                                            (vlSelf->inst 
                                             >> 0x14U))) 
                                    & (IData)(vlSelf->npc__DOT__ren))
                                    ? vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0x14U))]
                                    : 0ULL)),64);
        tracep->chgBit(oldp+97,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->inst))) 
                                  | (0x37U == (0x7fU 
                                               & vlSelf->inst))) 
                                 | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__jump_flag))));
        tracep->chgQData(oldp+98,(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__jump_flag)
                                    ? (((vlSelf->pc 
                                         + vlSelf->npc__DOT__imm) 
                                        & (- (QData)((IData)(
                                                             (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->inst)))))) 
                                       | (0xfffffffffffffffeULL 
                                          & ((vlSelf->npc__DOT__imm 
                                              + vlSelf->npc__DOT__rdata1) 
                                             & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_jalr))))))
                                    : (4ULL + vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_next))),64);
        tracep->chgQData(oldp+100,(vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_next),64);
        tracep->chgBit(oldp+102,((0x37U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+103,((0x17U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+104,((0x6fU == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+105,((0x67U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+106,((0x63U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+107,((3U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+108,((0x23U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+109,((0x13U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+110,((0x33U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+111,((0x73U == (0x7fU & vlSelf->inst))));
        tracep->chgQData(oldp+112,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xbU) | (QData)((IData)(
                                                                (0x7ffU 
                                                                 & (vlSelf->inst 
                                                                    >> 0x14U)))))),64);
        tracep->chgQData(oldp+114,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xbU) | (QData)((IData)(
                                                                ((0x7e0U 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->inst 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+116,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0x800U 
                                                                  & (vlSelf->inst 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->inst 
                                                                          >> 7U)))))))),64);
        tracep->chgQData(oldp+118,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0x1fU) | (QData)((IData)(
                                                                 (0x7ffff000U 
                                                                  & vlSelf->inst))))),64);
        tracep->chgQData(oldp+120,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0x14U) | (QData)((IData)(
                                                                 ((0xff000U 
                                                                   & vlSelf->inst) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->inst 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->inst 
                                                                           >> 0x14U)))))))),64);
        tracep->chgQData(oldp+122,((QData)((IData)(
                                                   (vlSelf->inst 
                                                    >> 0x14U)))),64);
        tracep->chgQData(oldp+124,((((QData)((IData)(
                                                     (vlSelf->inst 
                                                      >> 0x19U))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->inst 
                                                                  >> 7U)))))),64);
        tracep->chgQData(oldp+126,((((QData)((IData)(
                                                     (vlSelf->inst 
                                                      >> 0x1fU))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0x800U 
                                                                  & (vlSelf->inst 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->inst 
                                                                          >> 7U)))))))),64);
        tracep->chgQData(oldp+128,(((QData)((IData)(
                                                    (vlSelf->inst 
                                                     >> 0xcU))) 
                                    << 0xcU)),64);
        tracep->chgQData(oldp+130,((((QData)((IData)(
                                                     (vlSelf->inst 
                                                      >> 0x1fU))) 
                                     << 0x14U) | (QData)((IData)(
                                                                 ((0xff000U 
                                                                   & vlSelf->inst) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->inst 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->inst 
                                                                           >> 0x14U)))))))),64);
        tracep->chgBit(oldp+132,((IData)((0x3023U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgQData(oldp+133,((((vlSelf->npc__DOT__rdata1 
                                      & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi)))) 
                                     | (vlSelf->pc 
                                        & (- (QData)((IData)(
                                                             ((0x17U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->inst)) 
                                                              | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__jump_flag))))))) 
                                    | (vlSelf->npc__DOT__imm 
                                       & (- (QData)((IData)(
                                                            (0x37U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->inst)))))))),64);
        tracep->chgQData(oldp+135,(((vlSelf->npc__DOT__imm 
                                     & (- (QData)((IData)(
                                                          ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi) 
                                                           | (0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->inst))))))) 
                                    | (4ULL & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__jump_flag)))))),64);
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
