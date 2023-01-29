// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "Vnpc___024root.h"
#include "Vnpc__Syms.h"

#include "verilated_dpi.h"

//==========

void Vnpc___024unit____Vdpiimwrap_ebreak_TOP____024unit();

VL_INLINE_OPT void Vnpc___024root___combo__TOP__1__PROF__ysyx_22050598_EBREAK__l6(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___combo__TOP__1__PROF__ysyx_22050598_EBREAK__l6\n"); );
    // Body
    if ((IData)((0x73U == (0x707fU & vlSelf->inst)))) {
        Vnpc___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
}

VL_INLINE_OPT void Vnpc___024root___combo__TOP__2__PROF__ysyx_22050598_IDU__l46(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___combo__TOP__2__PROF__ysyx_22050598_IDU__l46\n"); );
    // Body
    vlSelf->npc__DOT__inst_type = (((0x37U == (0x7fU 
                                               & vlSelf->inst)) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->inst)))
                                    ? 2U : ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->inst))
                                             ? 1U : 
                                            (((((0x67U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst)) 
                                                | (0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))) 
                                               | (0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst))) 
                                              | (3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst)))
                                              ? 0x10U
                                              : ((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst))
                                                  ? 4U
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))
                                                   ? 8U
                                                   : 
                                                  ((0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst))
                                                    ? 0x20U
                                                    : 0U))))));
}

VL_INLINE_OPT void Vnpc___024root___combo__TOP__3__PROF__ysyx_22050598_Reg_READ__l11(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___combo__TOP__3__PROF__ysyx_22050598_Reg_READ__l11\n"); );
    // Body
    vlSelf->npc__DOT__ren = ((((0x10U == (IData)(vlSelf->npc__DOT__inst_type)) 
                               | (0x20U == (IData)(vlSelf->npc__DOT__inst_type))) 
                              | (4U == (IData)(vlSelf->npc__DOT__inst_type))) 
                             | (8U == (IData)(vlSelf->npc__DOT__inst_type)));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__6__PROF__ysyx_22050598_EXU__l18(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__6__PROF__ysyx_22050598_EXU__l18\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__7__PROF__ysyx_22050598_IFU__l13(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__7__PROF__ysyx_22050598_IFU__l13\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc 
        = (4ULL + vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_next);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__8__PROF__ysyx_22050598_IFU__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__8__PROF__ysyx_22050598_IFU__l15\n"); );
    // Body
    vlSelf->pc = vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_next;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__10__PROF__ysyx_22050598_EXU__l21(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__10__PROF__ysyx_22050598_EXU__l21\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__sum 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi)
            ? ((((0U != (0x1fU & (vlSelf->inst >> 0xfU))) 
                 & (IData)(vlSelf->npc__DOT__ren)) ? 
                vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf
                [(0x1fU & (vlSelf->inst >> 0xfU))] : 0ULL) 
               + ((((((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                >> 4U))))) 
                      & (((- (QData)((IData)((vlSelf->inst 
                                              >> 0x1fU)))) 
                          << 0xbU) | (QData)((IData)(
                                                     (0x7ffU 
                                                      & (vlSelf->inst 
                                                         >> 0x14U)))))) 
                     | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                  >> 3U))))) 
                        & (((- (QData)((IData)((vlSelf->inst 
                                                >> 0x1fU)))) 
                            << 0xbU) | (QData)((IData)(
                                                       ((0x7e0U 
                                                         & (vlSelf->inst 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->inst 
                                                              >> 7U)))))))) 
                    | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                 >> 2U))))) 
                       & (((- (QData)((IData)((vlSelf->inst 
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
                                                                >> 7U))))))))) 
                   | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                >> 1U))))) 
                      & (((- (QData)((IData)((vlSelf->inst 
                                              >> 0x1fU)))) 
                          << 0x1fU) | (QData)((IData)(
                                                      (0x7ffff000U 
                                                       & vlSelf->inst)))))) 
                  | ((- (QData)((IData)((1U & (IData)(vlSelf->npc__DOT__inst_type))))) 
                     & (((- (QData)((IData)((vlSelf->inst 
                                             >> 0x1fU)))) 
                         << 0x14U) | (QData)((IData)(
                                                     ((0xff000U 
                                                       & vlSelf->inst) 
                                                      | ((0x800U 
                                                          & (vlSelf->inst 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->inst 
                                                               >> 0x14U))))))))))
            : 0ULL);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__11__PROF__npc__l79(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__11__PROF__npc__l79\n"); );
    // Body
    vlSelf->fdata = vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__sum;
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__16__PROF__ysyx_22050598_RegisterFile__l17(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__16__PROF__ysyx_22050598_RegisterFile__l17\n"); );
    // Body
    vlSelf->__Vdlyvset__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0 = 0U;
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__17__PROF__ysyx_22050598_Reg__l8(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__17__PROF__ysyx_22050598_Reg__l8\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_next 
        = ((IData)(vlSelf->rst) ? vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc
            : 0x80000000ULL);
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__18__PROF__ysyx_22050598_RegisterFile__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__18__PROF__ysyx_22050598_RegisterFile__l15\n"); );
    // Body
    if (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi) 
         & (0U != (0x1fU & (vlSelf->inst >> 7U))))) {
        vlSelf->__Vdlyvval__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0 
            = vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__sum;
        vlSelf->__Vdlyvset__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0 = 1U;
        vlSelf->__Vdlyvdim0__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__20__PROF__ysyx_22050598_RegisterFile__l17(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__20__PROF__ysyx_22050598_RegisterFile__l17\n"); );
    // Body
    if (vlSelf->__Vdlyvset__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0) {
        vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[vlSelf->__Vdlyvdim0__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0] 
            = vlSelf->__Vdlyvval__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0;
    }
}

void Vnpc___024root___eval(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval\n"); );
    // Body
    Vnpc___024root___combo__TOP__1__PROF__ysyx_22050598_EBREAK__l6(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vnpc___024root___combo__TOP__2__PROF__ysyx_22050598_IDU__l46(vlSelf);
    Vnpc___024root___combo__TOP__3__PROF__ysyx_22050598_Reg_READ__l11(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vnpc___024root___sequent__TOP__16__PROF__ysyx_22050598_RegisterFile__l17(vlSelf);
        Vnpc___024root___sequent__TOP__17__PROF__ysyx_22050598_Reg__l8(vlSelf);
        Vnpc___024root___sequent__TOP__18__PROF__ysyx_22050598_RegisterFile__l15(vlSelf);
        Vnpc___024root___sequent__TOP__20__PROF__ysyx_22050598_RegisterFile__l17(vlSelf);
        Vnpc___024root___settle__TOP__7__PROF__ysyx_22050598_IFU__l13(vlSelf);
        Vnpc___024root___settle__TOP__8__PROF__ysyx_22050598_IFU__l15(vlSelf);
    }
    Vnpc___024root___settle__TOP__6__PROF__ysyx_22050598_EXU__l18(vlSelf);
    Vnpc___024root___settle__TOP__10__PROF__ysyx_22050598_EXU__l21(vlSelf);
    Vnpc___024root___settle__TOP__11__PROF__npc__l79(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vnpc___024root___change_request_1(Vnpc___024root* vlSelf);

VL_INLINE_OPT QData Vnpc___024root___change_request(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___change_request\n"); );
    // Body
    return (Vnpc___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vnpc___024root___change_request_1(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vnpc___024root___eval_debug_assertions(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
