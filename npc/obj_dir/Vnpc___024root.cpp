// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "Vnpc___024root.h"
#include "Vnpc__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_RegisterFile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_RegisterFile__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void ebreak(long long ebreak_a0);

VL_INLINE_OPT void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_EBREAK__DOT__ebreak_TOP(QData/*63:0*/ ebreak_a0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_EBREAK__DOT__ebreak_TOP\n"); );
    // Body
    long long ebreak_a0__Vcvt;
    for (size_t ebreak_a0__Vidx = 0; ebreak_a0__Vidx < 1; ++ebreak_a0__Vidx) ebreak_a0__Vcvt = ebreak_a0;
    ebreak(ebreak_a0__Vcvt);
}

VL_INLINE_OPT void Vnpc___024root___combo__TOP__1__PROF__ysyx_22050598_EXU__l27(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___combo__TOP__1__PROF__ysyx_22050598_EXU__l27\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_jalr 
        = (IData)((0x67U == (0x707fU & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___combo__TOP__2__PROF__ysyx_22050598_IDU__l46(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___combo__TOP__2__PROF__ysyx_22050598_IDU__l46\n"); );
    // Body
    vlSelf->npc__DOT__inst_type = ((((((2U & (- (IData)(
                                                        ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->inst)) 
                                                         | (0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->inst)))))) 
                                       | (1U & (- (IData)(
                                                          (0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->inst)))))) 
                                      | (0x10U & (- (IData)(
                                                            ((((0x67U 
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
                                                                 & vlSelf->inst))))))) 
                                     | (4U & (- (IData)(
                                                        (0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->inst)))))) 
                                    | (8U & (- (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->inst)))))) 
                                   | (0x20U & (- (IData)(
                                                         (0x33U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->inst))))));
}

VL_INLINE_OPT void Vnpc___024root___combo__TOP__3__PROF__ysyx_22050598_IDU__l67(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___combo__TOP__3__PROF__ysyx_22050598_IDU__l67\n"); );
    // Body
    vlSelf->npc__DOT__imm = ((((((- (QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                        >> 4U))))) 
                                 & (((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xbU) | (QData)((IData)(
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
                                       << 0xbU) | (QData)((IData)(
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
                              | ((- (QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                        >> 1U))))) 
                                 & (((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0x1fU) | (QData)((IData)(
                                                                 (0x7ffff000U 
                                                                  & vlSelf->inst)))))) 
                             | ((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->npc__DOT__inst_type))))) 
                                & (((- (QData)((IData)(
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
                                                                          >> 0x14U)))))))));
}

VL_INLINE_OPT void Vnpc___024root___combo__TOP__4__PROF__ysyx_22050598_Reg_READ__l11(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___combo__TOP__4__PROF__ysyx_22050598_Reg_READ__l11\n"); );
    // Body
    vlSelf->npc__DOT__ren = ((((0x10U == (IData)(vlSelf->npc__DOT__inst_type)) 
                               | (0x20U == (IData)(vlSelf->npc__DOT__inst_type))) 
                              | (4U == (IData)(vlSelf->npc__DOT__inst_type))) 
                             | (8U == (IData)(vlSelf->npc__DOT__inst_type)));
}

VL_INLINE_OPT void Vnpc___024root___combo__TOP__5__PROF__ysyx_22050598_EXU__l23(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___combo__TOP__5__PROF__ysyx_22050598_EXU__l23\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_ebreak 
        = ((0x73U == (0x7fU & vlSelf->inst)) & (1ULL 
                                                == 
                                                ((((((- (QData)((IData)(
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
                                                                                >> 0x14U)))))))))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__8__PROF__ysyx_22050598_EXU__l21(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__8__PROF__ysyx_22050598_EXU__l21\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__9__PROF__ysyx_22050598_IFU__l16(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__9__PROF__ysyx_22050598_IFU__l16\n"); );
    // Body
    vlSelf->pc = vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_next;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__10__PROF__ysyx_22050598_EXU__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__10__PROF__ysyx_22050598_EXU__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__jump_flag 
        = ((0x6fU == (0x7fU & vlSelf->inst)) | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_jalr));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__14__PROF__ysyx_22050598_RegisterFile__l26(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__14__PROF__ysyx_22050598_RegisterFile__l26\n"); );
    // Body
    vlSelf->npc__DOT__rdata1 = (((0U != (0x1fU & (vlSelf->inst 
                                                  >> 0xfU))) 
                                 & (IData)(vlSelf->npc__DOT__ren))
                                 ? vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf
                                [(0x1fU & (vlSelf->inst 
                                           >> 0xfU))]
                                 : 0ULL);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__15__PROF__ysyx_22050598_IFU__l14(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__15__PROF__ysyx_22050598_IFU__l14\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__jump_flag)
            ? (((vlSelf->pc + vlSelf->npc__DOT__imm) 
                & (- (QData)((IData)((0x6fU == (0x7fU 
                                                & vlSelf->inst)))))) 
               | (0xfffffffffffffffeULL & ((vlSelf->npc__DOT__imm 
                                            + vlSelf->npc__DOT__rdata1) 
                                           & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_jalr))))))
            : (4ULL + vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_next));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__16__PROF__ysyx_22050598_EXU__l41(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__16__PROF__ysyx_22050598_EXU__l41\n"); );
    // Body
    vlSelf->npc__DOT__wdata = ((((vlSelf->npc__DOT__rdata1 
                                  & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi)))) 
                                 | (vlSelf->pc & (- (QData)((IData)(
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
                                                          & vlSelf->inst))))))) 
                               + ((vlSelf->npc__DOT__imm 
                                   & (- (QData)((IData)(
                                                        ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi) 
                                                         | (0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->inst))))))) 
                                  | (4ULL & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__jump_flag))))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__17__PROF__npc__l87(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__17__PROF__npc__l87\n"); );
    // Body
    vlSelf->fdata = vlSelf->npc__DOT__wdata;
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__22__PROF__ysyx_22050598_RegisterFile__l20(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__22__PROF__ysyx_22050598_RegisterFile__l20\n"); );
    // Body
    vlSelf->__Vdlyvset__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0 = 0U;
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__23__PROF__ysyx_22050598_Reg__l8(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__23__PROF__ysyx_22050598_Reg__l8\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_next 
        = ((IData)(vlSelf->rst) ? vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc
            : 0x80000000ULL);
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__24__PROF__ysyx_22050598_RegisterFile__l18(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__24__PROF__ysyx_22050598_RegisterFile__l18\n"); );
    // Body
    if ((((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi) 
            | (0x17U == (0x7fU & vlSelf->inst))) | 
           (0x37U == (0x7fU & vlSelf->inst))) | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__jump_flag)) 
         & (0U != (0x1fU & (vlSelf->inst >> 7U))))) {
        vlSelf->__Vdlyvval__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0 
            = vlSelf->npc__DOT__wdata;
        vlSelf->__Vdlyvset__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0 = 1U;
        vlSelf->__Vdlyvdim0__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__29__PROF__ysyx_22050598_EBREAK__l8(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__29__PROF__ysyx_22050598_EBREAK__l8\n"); );
    // Body
    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_EBREAK__DOT__ebreak_TOP(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf
                                                                                [0xaU]);
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__32__PROF__ysyx_22050598_RegisterFile__l20(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__32__PROF__ysyx_22050598_RegisterFile__l20\n"); );
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
    Vnpc___024root___combo__TOP__1__PROF__ysyx_22050598_EXU__l27(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vnpc___024root___combo__TOP__2__PROF__ysyx_22050598_IDU__l46(vlSelf);
    Vnpc___024root___combo__TOP__3__PROF__ysyx_22050598_IDU__l67(vlSelf);
    Vnpc___024root___combo__TOP__4__PROF__ysyx_22050598_Reg_READ__l11(vlSelf);
    Vnpc___024root___combo__TOP__5__PROF__ysyx_22050598_EXU__l23(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vnpc___024root___sequent__TOP__22__PROF__ysyx_22050598_RegisterFile__l20(vlSelf);
        Vnpc___024root___sequent__TOP__23__PROF__ysyx_22050598_Reg__l8(vlSelf);
        Vnpc___024root___sequent__TOP__24__PROF__ysyx_22050598_RegisterFile__l18(vlSelf);
        Vnpc___024root___settle__TOP__9__PROF__ysyx_22050598_IFU__l16(vlSelf);
    }
    if (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_ebreak) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__npc__DOT__u_ysyx_22050598_EXU__DOT__inst_ebreak)))) {
        Vnpc___024root___sequent__TOP__29__PROF__ysyx_22050598_EBREAK__l8(vlSelf);
    }
    Vnpc___024root___settle__TOP__8__PROF__ysyx_22050598_EXU__l21(vlSelf);
    Vnpc___024root___settle__TOP__10__PROF__ysyx_22050598_EXU__l30(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vnpc___024root___sequent__TOP__32__PROF__ysyx_22050598_RegisterFile__l20(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vnpc___024root___settle__TOP__14__PROF__ysyx_22050598_RegisterFile__l26(vlSelf);
    Vnpc___024root___settle__TOP__15__PROF__ysyx_22050598_IFU__l14(vlSelf);
    Vnpc___024root___settle__TOP__16__PROF__ysyx_22050598_EXU__l41(vlSelf);
    Vnpc___024root___settle__TOP__17__PROF__npc__l87(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__npc__DOT__u_ysyx_22050598_EXU__DOT__inst_ebreak 
        = vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_ebreak;
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
