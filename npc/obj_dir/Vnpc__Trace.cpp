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
            tracep->chgQData(oldp+0,(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__sum),64);
            tracep->chgCData(oldp+2,(vlSelf->npc__DOT__inst_type),6);
            tracep->chgBit(oldp+3,(vlSelf->npc__DOT__ren));
            tracep->chgBit(oldp+4,(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+5,((4ULL + vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_next)),64);
            tracep->chgQData(oldp+7,(vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_next),64);
            tracep->chgQData(oldp+9,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[0]),64);
            tracep->chgQData(oldp+11,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[1]),64);
            tracep->chgQData(oldp+13,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[2]),64);
            tracep->chgQData(oldp+15,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[3]),64);
            tracep->chgQData(oldp+17,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[4]),64);
            tracep->chgQData(oldp+19,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[5]),64);
            tracep->chgQData(oldp+21,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[6]),64);
            tracep->chgQData(oldp+23,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[7]),64);
            tracep->chgQData(oldp+25,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[8]),64);
            tracep->chgQData(oldp+27,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[9]),64);
            tracep->chgQData(oldp+29,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[10]),64);
            tracep->chgQData(oldp+31,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[11]),64);
            tracep->chgQData(oldp+33,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[12]),64);
            tracep->chgQData(oldp+35,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[13]),64);
            tracep->chgQData(oldp+37,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[14]),64);
            tracep->chgQData(oldp+39,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[15]),64);
            tracep->chgQData(oldp+41,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[16]),64);
            tracep->chgQData(oldp+43,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[17]),64);
            tracep->chgQData(oldp+45,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[18]),64);
            tracep->chgQData(oldp+47,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[19]),64);
            tracep->chgQData(oldp+49,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[20]),64);
            tracep->chgQData(oldp+51,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[21]),64);
            tracep->chgQData(oldp+53,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[22]),64);
            tracep->chgQData(oldp+55,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[23]),64);
            tracep->chgQData(oldp+57,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[24]),64);
            tracep->chgQData(oldp+59,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[25]),64);
            tracep->chgQData(oldp+61,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[26]),64);
            tracep->chgQData(oldp+63,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[27]),64);
            tracep->chgQData(oldp+65,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[28]),64);
            tracep->chgQData(oldp+67,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[29]),64);
            tracep->chgQData(oldp+69,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[30]),64);
            tracep->chgQData(oldp+71,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[31]),64);
        }
        tracep->chgBit(oldp+73,(vlSelf->clk));
        tracep->chgBit(oldp+74,(vlSelf->rst));
        tracep->chgIData(oldp+75,(vlSelf->inst),32);
        tracep->chgQData(oldp+76,(vlSelf->pc),64);
        tracep->chgQData(oldp+78,(vlSelf->fdata),64);
        tracep->chgQData(oldp+80,(((((((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                              >> 4U))))) 
                                       & (((- (QData)((IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU)))) 
                                           << 0xbU) 
                                          | (QData)((IData)(
                                                            (0x7ffU 
                                                             & (vlSelf->inst 
                                                                >> 0x14U)))))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                                >> 3U))))) 
                                         & (((- (QData)((IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU)))) 
                                             << 0xbU) 
                                            | (QData)((IData)(
                                                              ((0x7e0U 
                                                                & (vlSelf->inst 
                                                                   >> 0x14U)) 
                                                               | (0x1fU 
                                                                  & (vlSelf->inst 
                                                                     >> 7U)))))))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                               >> 2U))))) 
                                        & (((- (QData)((IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU)))) 
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
                                       & (((- (QData)((IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU)))) 
                                           << 0x1fU) 
                                          | (QData)((IData)(
                                                            (0x7ffff000U 
                                                             & vlSelf->inst)))))) 
                                   | ((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->npc__DOT__inst_type))))) 
                                      & (((- (QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x1fU)))) 
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
        tracep->chgQData(oldp+82,(((((((- (QData)((IData)(
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
        tracep->chgCData(oldp+84,((0x1fU & (vlSelf->inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+85,((0x1fU & (vlSelf->inst 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+86,((0x1fU & (vlSelf->inst 
                                            >> 7U))),5);
        tracep->chgCData(oldp+87,((vlSelf->inst >> 0x19U)),7);
        tracep->chgCData(oldp+88,((7U & (vlSelf->inst 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+89,((0x7fU & vlSelf->inst)),7);
        tracep->chgQData(oldp+90,((((0U != (0x1fU & 
                                            (vlSelf->inst 
                                             >> 0xfU))) 
                                    & (IData)(vlSelf->npc__DOT__ren))
                                    ? vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0xfU))]
                                    : 0ULL)),64);
        tracep->chgQData(oldp+92,((((0U != (0x1fU & 
                                            (vlSelf->inst 
                                             >> 0x14U))) 
                                    & (IData)(vlSelf->npc__DOT__ren))
                                    ? vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0x14U))]
                                    : 0ULL)),64);
        tracep->chgBit(oldp+94,((IData)((0x73U == (0x707fU 
                                                   & vlSelf->inst)))));
        tracep->chgBit(oldp+95,((0x37U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+96,((0x17U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+97,((0x6fU == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+98,((0x67U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+99,((0x63U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+100,((3U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+101,((0x23U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+102,((0x13U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+103,((0x33U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+104,((0x73U == (0x7fU & vlSelf->inst))));
        tracep->chgQData(oldp+105,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xbU) | (QData)((IData)(
                                                                (0x7ffU 
                                                                 & (vlSelf->inst 
                                                                    >> 0x14U)))))),64);
        tracep->chgQData(oldp+107,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xbU) | (QData)((IData)(
                                                                ((0x7e0U 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->inst 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+109,((((- (QData)((IData)(
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
        tracep->chgQData(oldp+111,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0x1fU) | (QData)((IData)(
                                                                 (0x7ffff000U 
                                                                  & vlSelf->inst))))),64);
        tracep->chgQData(oldp+113,((((- (QData)((IData)(
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
        tracep->chgQData(oldp+115,((QData)((IData)(
                                                   (vlSelf->inst 
                                                    >> 0x14U)))),64);
        tracep->chgQData(oldp+117,((((QData)((IData)(
                                                     (vlSelf->inst 
                                                      >> 0x19U))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->inst 
                                                                  >> 7U)))))),64);
        tracep->chgQData(oldp+119,((((QData)((IData)(
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
        tracep->chgQData(oldp+121,(((QData)((IData)(
                                                    (vlSelf->inst 
                                                     >> 0xcU))) 
                                    << 0xcU)),64);
        tracep->chgQData(oldp+123,((((QData)((IData)(
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
