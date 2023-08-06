// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "Vnpc___024root.h"
#include "Vnpc__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_IFU__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_IFU__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void pmem_read_test(long long raddr, long long* rdata, char rlen);

VL_INLINE_OPT void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ rlen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    char rlen__Vcvt;
    for (size_t rlen__Vidx = 0; rlen__Vidx < 1; ++rlen__Vidx) rlen__Vcvt = rlen;
    pmem_read_test(raddr__Vcvt, &rdata__Vcvt, rlen__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write_test(long long waddr, long long wdata, char wlen);

VL_INLINE_OPT void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_write_test_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wlen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_write_test_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wlen__Vcvt;
    for (size_t wlen__Vidx = 0; wlen__Vidx < 1; ++wlen__Vidx) wlen__Vcvt = wlen;
    pmem_write_test(waddr__Vcvt, wdata__Vcvt, wlen__Vcvt);
}

extern "C" void ebreak(long long ebreak_a0);

VL_INLINE_OPT void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_EBREAK__DOT__ebreak_TOP(QData/*63:0*/ ebreak_a0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_EBREAK__DOT__ebreak_TOP\n"); );
    // Body
    long long ebreak_a0__Vcvt;
    for (size_t ebreak_a0__Vidx = 0; ebreak_a0__Vidx < 1; ++ebreak_a0__Vidx) ebreak_a0__Vcvt = ebreak_a0;
    ebreak(ebreak_a0__Vcvt);
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__76__PROF__ysyx_22050598_sirv_gnrl_dfflr_with_resetval__l13(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__76__PROF__ysyx_22050598_sirv_gnrl_dfflr_with_resetval__l13\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mstatus_ena) {
            vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mstatus_dfflr__DOT__qout_r 
                = (vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data 
                   & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mstatus_ena))));
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mstatus_dfflr__DOT__qout_r = 0xa00001800ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__77__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__77__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mcause_ena) 
             | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall))) {
            vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mcause_dfflr__DOT__qout_r 
                = ((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data 
                    & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mcause_ena)))) 
                   | (0xbULL & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall)))));
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mcause_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__78__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__78__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mtvec_ena) {
            vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mtvec_dfflr__DOT__qout_r 
                = (vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data 
                   & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mtvec_ena))));
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mtvec_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__79__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__79__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mepc_ena) 
             | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall))) {
            vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mepc_dfflr__DOT__qout_r 
                = ((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data 
                    & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mepc_ena)))) 
                   | (vlSelf->pc_now & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall)))));
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mepc_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__80__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__80__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
             >> 0x1fU)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__81__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__81__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x40000000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__82__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__82__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x20000000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__83__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__83__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x10000000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__84__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__84__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x8000000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__85__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__85__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x4000000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__86__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__86__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x2000000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__87__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__87__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x1000000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__88__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__88__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x800000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__89__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__89__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x400000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__90__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__90__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x200000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__91__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__91__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x100000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__92__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__92__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x80000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__93__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__93__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x40000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__94__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__94__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x20000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__95__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__95__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x10000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__96__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__96__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x8000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__97__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__97__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x4000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__98__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__98__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x2000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__99__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__99__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x1000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__100__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__100__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x800U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__101__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__101__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x400U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__102__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__102__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x200U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__103__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__103__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x100U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__104__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__104__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x80U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__105__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__105__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x40U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__106__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__106__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x20U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__107__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__107__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x10U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__108__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__108__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((8U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__109__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__109__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((4U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__110__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__110__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((2U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__rd_data;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__111__PROF__ysyx_22050598_sirv_gnrl_dfflr_with_resetval__l13(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__111__PROF__ysyx_22050598_sirv_gnrl_dfflr_with_resetval__l13\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__sign_reg__DOT__qout_r = 1U;
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__112__PROF__ysyx_22050598_sirv_gnrl_dfflr_with_resetval__l13(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__112__PROF__ysyx_22050598_sirv_gnrl_dfflr_with_resetval__l13\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_dfflr_resetval__DOT__qout_r 
        = ((IData)(vlSelf->rst) ? vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc
            : 0x80000000ULL);
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__150__PROF__ysyx_22050598_IFU__l24(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__150__PROF__ysyx_22050598_IFU__l24\n"); );
    // Body
    vlSelf->pc_now = vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_dfflr_resetval__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__151__PROF__ysyx_22050598_IFU__l20(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__151__PROF__ysyx_22050598_IFU__l20\n"); );
    // Body
    if (vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__sign_reg__DOT__qout_r) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_IFU__DOT__pmem_read_TOP(
                                                                                (0xfffffffffffffff8ULL 
                                                                                & vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_dfflr_resetval__DOT__qout_r), vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_IFU__DOT__pmem_read__0__rdata);
        vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__rdata 
            = vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_IFU__DOT__pmem_read__0__rdata;
    }
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__152__PROF__ysyx_22050598_IFU__l25(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__152__PROF__ysyx_22050598_IFU__l25\n"); );
    // Body
    vlSelf->inst = (((- (IData)((0U == (7U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_dfflr_resetval__DOT__qout_r))))) 
                     & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__rdata)) 
                    | ((- (IData)((4U == (7U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_dfflr_resetval__DOT__qout_r))))) 
                       & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__rdata 
                                  >> 0x20U))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__153__PROF__ysyx_22050598_exu_alu__l225(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__153__PROF__ysyx_22050598_exu_alu__l225\n"); );
    // Body
    vlSelf->npc__DOT__ex_load_en_o = (((3U == (0x7fU 
                                               & vlSelf->inst)) 
                                       | (0x23U == 
                                          (0x7fU & vlSelf->inst))) 
                                      & (0x23U != (0x7fU 
                                                   & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__154__PROF__ysyx_22050598_idu_decode__l157(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__154__PROF__ysyx_22050598_idu_decode__l157\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall 
        = (IData)(((0x73U == (0x1ffffffU & vlSelf->inst)) 
                   & (0U == (vlSelf->inst >> 0x19U))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__155__PROF__ysyx_22050598_idu_decode__l158(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__155__PROF__ysyx_22050598_idu_decode__l158\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mret 
        = (IData)(((0x200073U == (0x1ffffffU & vlSelf->inst)) 
                   & (0x18U == (vlSelf->inst >> 0x19U))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__156__PROF__ysyx_22050598_idu_decode__l147(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__156__PROF__ysyx_22050598_idu_decode__l147\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__157__PROF__ysyx_22050598_idu_decode__l149(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__157__PROF__ysyx_22050598_idu_decode__l149\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu 
        = (IData)((0x6003U == (0x707fU & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__158__PROF__ysyx_22050598_idu_decode__l134(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__158__PROF__ysyx_22050598_idu_decode__l134\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu 
        = (IData)((0x6063U == (0x707fU & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__159__PROF__ysyx_22050598_idu_decode__l135(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__159__PROF__ysyx_22050598_idu_decode__l135\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu 
        = (IData)((0x7063U == (0x707fU & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__160__PROF__ysyx_22050598_idu_decode__l261(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__160__PROF__ysyx_22050598_idu_decode__l261\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst 
        = ((0x3bU == (0x7fU & vlSelf->inst)) | (0x1bU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__161__PROF__ysyx_22050598_idu_decode__l96(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__161__PROF__ysyx_22050598_idu_decode__l96\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw 
        = ((IData)((0x101bU == (0x707fU & vlSelf->inst))) 
           & (0U == (vlSelf->inst >> 0x1aU)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__162__PROF__ysyx_22050598_idu_decode__l97(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__162__PROF__ysyx_22050598_idu_decode__l97\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw 
        = ((IData)((0x501bU == (0x707fU & vlSelf->inst))) 
           & (0U == (vlSelf->inst >> 0x1aU)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__163__PROF__ysyx_22050598_idu_decode__l110(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__163__PROF__ysyx_22050598_idu_decode__l110\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div 
        = ((IData)((0x4033U == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__164__PROF__ysyx_22050598_idu_decode__l116(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__164__PROF__ysyx_22050598_idu_decode__l116\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem 
        = ((IData)((0x6033U == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__165__PROF__ysyx_22050598_idu_decode__l125(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__165__PROF__ysyx_22050598_idu_decode__l125\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw 
        = ((IData)((0x403bU == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__166__PROF__ysyx_22050598_idu_decode__l127(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__166__PROF__ysyx_22050598_idu_decode__l127\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw 
        = ((IData)((0x603bU == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__167__PROF__ysyx_22050598_idu_decode__l112(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__167__PROF__ysyx_22050598_idu_decode__l112\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul 
        = ((IData)((0x33U == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__168__PROF__ysyx_22050598_idu_decode__l113(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__168__PROF__ysyx_22050598_idu_decode__l113\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh 
        = ((IData)((0x1033U == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__169__PROF__ysyx_22050598_idu_decode__l114(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__169__PROF__ysyx_22050598_idu_decode__l114\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu 
        = ((IData)((0x2033U == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__170__PROF__ysyx_22050598_idu_decode__l115(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__170__PROF__ysyx_22050598_idu_decode__l115\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu 
        = ((IData)((0x3033U == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__171__PROF__ysyx_22050598_idu_decode__l124(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__171__PROF__ysyx_22050598_idu_decode__l124\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw 
        = ((IData)((0x3bU == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__172__PROF__ysyx_22050598_idu_decode__l138(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__172__PROF__ysyx_22050598_idu_decode__l138\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr 
        = (IData)((0x67U == (0x707fU & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__173__PROF__ysyx_22050598_idu_decode__l121(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__173__PROF__ysyx_22050598_idu_decode__l121\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw 
        = ((IData)((0x103bU == (0x707fU & vlSelf->inst))) 
           & (0U == (vlSelf->inst >> 0x19U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__174__PROF__ysyx_22050598_idu_decode__l122(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__174__PROF__ysyx_22050598_idu_decode__l122\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw 
        = ((IData)((0x503bU == (0x707fU & vlSelf->inst))) 
           & (0U == (vlSelf->inst >> 0x19U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__175__PROF__ysyx_22050598_idu_decode__l93(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__175__PROF__ysyx_22050598_idu_decode__l93\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srai 
        = ((IData)((0x5013U == (0x707fU & vlSelf->inst))) 
           & (0x10U == (vlSelf->inst >> 0x1aU)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__176__PROF__ysyx_22050598_idu_decode__l98(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__176__PROF__ysyx_22050598_idu_decode__l98\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw 
        = ((IData)((0x501bU == (0x707fU & vlSelf->inst))) 
           & (0x10U == (vlSelf->inst >> 0x1aU)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__177__PROF__ysyx_22050598_idu_decode__l107(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__177__PROF__ysyx_22050598_idu_decode__l107\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sra 
        = ((IData)((0x5033U == (0x707fU & vlSelf->inst))) 
           & (0x20U == (vlSelf->inst >> 0x19U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__178__PROF__ysyx_22050598_idu_decode__l123(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__178__PROF__ysyx_22050598_idu_decode__l123\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw 
        = ((IData)((0x503bU == (0x707fU & vlSelf->inst))) 
           & (0x20U == (vlSelf->inst >> 0x19U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__179__PROF__ysyx_22050598_idu_decode__l87(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__179__PROF__ysyx_22050598_idu_decode__l87\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu 
        = (IData)((0x3013U == (0x707fU & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__180__PROF__ysyx_22050598_idu_decode__l104(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__180__PROF__ysyx_22050598_idu_decode__l104\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu 
        = ((IData)((0x3033U == (0x707fU & vlSelf->inst))) 
           & (0U == (vlSelf->inst >> 0x19U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__181__PROF__ysyx_22050598_idu_decode__l160(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__181__PROF__ysyx_22050598_idu_decode__l160\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__182__PROF__ysyx_22050598_idu_decode__l161(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__182__PROF__ysyx_22050598_idu_decode__l161\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__183__PROF__ysyx_22050598_idu_decode__l162(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__183__PROF__ysyx_22050598_idu_decode__l162\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__184__PROF__ysyx_22050598_idu_decode__l163(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__184__PROF__ysyx_22050598_idu_decode__l163\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi 
        = (IData)((0x5073U == (0x707fU & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__185__PROF__ysyx_22050598_idu_decode__l164(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__185__PROF__ysyx_22050598_idu_decode__l164\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__186__PROF__ysyx_22050598_idu_decode__l165(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__186__PROF__ysyx_22050598_idu_decode__l165\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci 
        = (IData)((0x7073U == (0x707fU & vlSelf->inst)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__187__PROF__ysyx_22050598_idu_decode__l156(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__187__PROF__ysyx_22050598_idu_decode__l156\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ebreak 
        = (IData)(((0x100073U == (0x1ffffffU & vlSelf->inst)) 
                   & (0U == (vlSelf->inst >> 0x19U))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__188__PROF__ysyx_22050598_idu_decode__l223(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__188__PROF__ysyx_22050598_idu_decode__l223\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type 
        = (3U & (((1U & (- (IData)((((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->inst))) 
                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu)) 
                                    | (IData)((0x1023U 
                                               == (0x707fU 
                                                   & vlSelf->inst))))))) 
                  | (2U & (- (IData)((((IData)((0x2003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->inst))) 
                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu)) 
                                      | (IData)((0x2023U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)))))))) 
                 | (- (IData)(((IData)((0x3003U == 
                                        (0x707fU & vlSelf->inst))) 
                               | (IData)((0x3023U == 
                                          (0x707fU 
                                           & vlSelf->inst))))))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__189__PROF__ysyx_22050598_idu_decode__l252(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__189__PROF__ysyx_22050598_idu_decode__l252\n"); );
    // Body
    vlSelf->npc__DOT__id_ex_branch_bus = (((IData)(
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst))) 
                                           << 5U) | 
                                          (((IData)(
                                                    (0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst))) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->inst))) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu))))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__190__PROF__ysyx_22050598_idu_decode__l254(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__190__PROF__ysyx_22050598_idu_decode__l254\n"); );
    // Body
    vlSelf->npc__DOT__id_ex_inst_divrem_bus = ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem) 
                                                 | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw)) 
                                                | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div)) 
                                               | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__191__PROF__ysyx_22050598_idu_decode__l253(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__191__PROF__ysyx_22050598_idu_decode__l253\n"); );
    // Body
    vlSelf->npc__DOT__id_ex_inst_mul_bus = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul) 
                                             << 4U) 
                                            | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh) 
                                                << 3U) 
                                               | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw)))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__192__PROF__ysyx_22050598_exu_alu__l206(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__192__PROF__ysyx_22050598_exu_alu__l206\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en 
        = ((0x6fU == (0x7fU & vlSelf->inst)) | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__193__PROF__ysyx_22050598_idu_decode__l246(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__193__PROF__ysyx_22050598_idu_decode__l246\n"); );
    // Body
    vlSelf->npc__DOT__id_ex_inst_is_srax = ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sra) 
                                              | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srai)) 
                                             | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw)) 
                                            | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__194__PROF__ysyx_22050598_idu_decode__l256(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__194__PROF__ysyx_22050598_idu_decode__l256\n"); );
    // Body
    vlSelf->npc__DOT__id_ex_unsigned_bus = ((((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu) 
                                                | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu)) 
                                               | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu)) 
                                              | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu)) 
                                             << 1U) 
                                            | (((IData)(
                                                        (0x4003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst))) 
                                                | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu)) 
                                               | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__195__PROF__ysyx_22050598_idu_decode__l172(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__195__PROF__ysyx_22050598_idu_decode__l172\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_set_en 
        = (((((IData)((0x2033U == (0x707fU & vlSelf->inst))) 
              & (0U == (vlSelf->inst >> 0x19U))) | (IData)(
                                                           (0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->inst)))) 
            | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu)) 
           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__196__PROF__ysyx_22050598_idu_decode__l251(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__196__PROF__ysyx_22050598_idu_decode__l251\n"); );
    // Body
    vlSelf->npc__DOT__id_ex_csr_bus = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                                        << 5U) | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci))))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__197__PROF__ysyx_22050598_idu_decode__l168(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__197__PROF__ysyx_22050598_idu_decode__l168\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri 
        = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi) 
            | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi)) 
           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__198__PROF__ysyx_22050598_idu_decode__l174(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__198__PROF__ysyx_22050598_idu_decode__l174\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode 
        = ((((((((((((((IData)((0x33U == (0x707fU & vlSelf->inst))) 
                       & (0U == (vlSelf->inst >> 0x19U))) 
                      | (IData)((0x13U == (0x707fU 
                                           & vlSelf->inst)))) 
                     | (IData)((0x1bU == (0x707fU & vlSelf->inst)))) 
                    | ((IData)((0x3bU == (0x707fU & vlSelf->inst))) 
                       & (0U == (vlSelf->inst >> 0x19U)))) 
                   | (0x17U == (0x7fU & vlSelf->inst))) 
                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr)) 
                 | (0x6fU == (0x7fU & vlSelf->inst))) 
                | (0x23U == (0x7fU & vlSelf->inst))) 
               | (3U == (0x7fU & vlSelf->inst))) | 
              (0x37U == (0x7fU & vlSelf->inst))) << 9U) 
            | (((((((IData)((0x33U == (0x707fU & vlSelf->inst))) 
                    & (0x20U == (vlSelf->inst >> 0x19U))) 
                   | ((IData)((0x3bU == (0x707fU & vlSelf->inst))) 
                      & (0x20U == (vlSelf->inst >> 0x19U)))) 
                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_set_en)) 
                 | (0x63U == (0x7fU & vlSelf->inst))) 
                << 8U) | (((((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul) 
                               | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh)) 
                              | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu)) 
                             | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu)) 
                            | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw)) 
                           << 7U) | ((((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div) 
                                         | ((IData)(
                                                    (0x5033U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst))) 
                                            & (1U == 
                                               (vlSelf->inst 
                                                >> 0x19U)))) 
                                        | ((IData)(
                                                   (0x503bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst))) 
                                           & (1U == 
                                              (vlSelf->inst 
                                               >> 0x19U)))) 
                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw)) 
                                      << 6U) | ((((
                                                   ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem) 
                                                    | ((IData)(
                                                               (0x7033U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->inst))) 
                                                       & (1U 
                                                          == 
                                                          (vlSelf->inst 
                                                           >> 0x19U)))) 
                                                   | ((IData)(
                                                              (0x703bU 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->inst))) 
                                                      & (1U 
                                                         == 
                                                         (vlSelf->inst 
                                                          >> 0x19U)))) 
                                                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw)) 
                                                 << 5U) 
                                                | (((((((IData)(
                                                                (0x1033U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->inst))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->inst 
                                                            >> 0x19U))) 
                                                       | ((IData)(
                                                                  (0x1013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->inst))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->inst 
                                                              >> 0x1aU)))) 
                                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw)) 
                                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw)) 
                                                    << 4U) 
                                                   | (((((((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sra) 
                                                             | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srai)) 
                                                            | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw)) 
                                                           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw)) 
                                                          | ((IData)(
                                                                     (0x5033U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->inst))) 
                                                             & (0U 
                                                                == 
                                                                (vlSelf->inst 
                                                                 >> 0x19U)))) 
                                                         | ((IData)(
                                                                    (0x5013U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->inst))) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->inst 
                                                                >> 0x1aU)))) 
                                                        | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw)) 
                                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw)) 
                                                      << 3U))))))) 
           | (((((IData)((0x6033U == (0x707fU & vlSelf->inst))) 
                 & (0U == (vlSelf->inst >> 0x19U))) 
                | (IData)((0x6013U == (0x707fU & vlSelf->inst)))) 
               << 2U) | (((((IData)((0x7033U == (0x707fU 
                                                 & vlSelf->inst))) 
                            & (0U == (vlSelf->inst 
                                      >> 0x19U))) | (IData)(
                                                            (0x7013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->inst)))) 
                          << 1U) | (((IData)((0x4033U 
                                              == (0x707fU 
                                                  & vlSelf->inst))) 
                                     & (0U == (vlSelf->inst 
                                               >> 0x19U))) 
                                    | (IData)((0x4013U 
                                               == (0x707fU 
                                                   & vlSelf->inst)))))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__199__PROF__ysyx_22050598_csr__l57(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__199__PROF__ysyx_22050598_csr__l57\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_and 
        = (IData)((0U != (9U & (IData)(vlSelf->npc__DOT__id_ex_csr_bus))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__200__PROF__ysyx_22050598_csr__l47(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__200__PROF__ysyx_22050598_csr__l47\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or 
        = (IData)((0U != (0x12U & (IData)(vlSelf->npc__DOT__id_ex_csr_bus))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__201__PROF__ysyx_22050598_idu_decode__l193(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__201__PROF__ysyx_22050598_idu_decode__l193\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type 
        = (((((0x33U == (0x7fU & vlSelf->inst)) | (0x3bU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))) 
             << 5U) | ((((((0x13U == (0x7fU & vlSelf->inst)) 
                           | (0x1bU == (0x7fU & vlSelf->inst))) 
                          | (0x67U == (0x7fU & vlSelf->inst))) 
                         | (3U == (0x7fU & vlSelf->inst))) 
                        | ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                             | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs)) 
                            | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc)) 
                           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri))) 
                       << 4U)) | (((0x23U == (0x7fU 
                                              & vlSelf->inst)) 
                                   << 3U) | (((0x63U 
                                               == (0x7fU 
                                                   & vlSelf->inst)) 
                                              << 2U) 
                                             | ((((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst)) 
                                                  | (0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst))) 
                                                 << 1U) 
                                                | (0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__202__PROF__ysyx_22050598_exu_alu__l37(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__202__PROF__ysyx_22050598_exu_alu__l37\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub 
        = (IData)((0U != (0x300U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__203__PROF__ysyx_22050598_exu_alu__l145(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__203__PROF__ysyx_22050598_exu_alu__l145\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift 
        = (IData)((0U != (0x18U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__204__PROF__ysyx_22050598_idu_decode__l237(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__204__PROF__ysyx_22050598_idu_decode__l237\n"); );
    // Body
    vlSelf->npc__DOT__id_ex_w_reg_en = (IData)((0U 
                                                != 
                                                (0x33U 
                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__205__PROF__ysyx_22050598_idu_decode__l220(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__205__PROF__ysyx_22050598_idu_decode__l220\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b 
        = (((IData)((0U != (0x24U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type)))) 
            << 1U) | (IData)((0U != (0x1bU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type)))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__206__PROF__ysyx_22050598_idu_decode__l206(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__206__PROF__ysyx_22050598_idu_decode__l206\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm 
        = ((((((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type) 
                                         >> 4U))))) 
               & (((- (QData)((IData)((vlSelf->inst 
                                       >> 0x1fU)))) 
                   << 0xbU) | (QData)((IData)((0x7ffU 
                                               & (vlSelf->inst 
                                                  >> 0x14U)))))) 
              | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type) 
                                           >> 3U))))) 
                 & (((- (QData)((IData)((vlSelf->inst 
                                         >> 0x1fU)))) 
                     << 0xbU) | (QData)((IData)(((0x7e0U 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->inst 
                                                       >> 7U)))))))) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type) 
                                          >> 2U))))) 
                & (((- (QData)((IData)((vlSelf->inst 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0x800U 
                                                 & (vlSelf->inst 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->inst 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->inst 
                                                         >> 7U))))))))) 
            | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type) 
                                         >> 1U))))) 
               & (((QData)((IData)((- (IData)((vlSelf->inst 
                                               >> 0x1fU))))) 
                   << 0x20U) | (QData)((IData)((0xfffff000U 
                                                & vlSelf->inst)))))) 
           | ((- (QData)((IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type))))) 
              & (((- (QData)((IData)((vlSelf->inst 
                                      >> 0x1fU)))) 
                  << 0x14U) | (QData)((IData)(((0xff000U 
                                                & vlSelf->inst) 
                                               | ((0x800U 
                                                   & (vlSelf->inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->inst 
                                                        >> 0x14U)))))))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__207__PROF__ysyx_22050598_idu_decode__l216(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__207__PROF__ysyx_22050598_idu_decode__l216\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a 
        = (((IData)((0U != (0x3cU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type)))) 
            << 2U) | ((((0x6fU == (0x7fU & vlSelf->inst)) 
                        | (0x17U == (0x7fU & vlSelf->inst))) 
                       << 1U) | (0x37U == (0x7fU & vlSelf->inst))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__208__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__208__PROF__ysyx_22050598_regfile__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xfffffff9U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                & (2U == (0x1fU & (vlSelf->inst >> 7U)))) 
               << 2U) | (((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                          & (1U == (0x1fU & (vlSelf->inst 
                                             >> 7U)))) 
                         << 1U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__209__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__209__PROF__ysyx_22050598_regfile__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xffffffe7U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                & (4U == (0x1fU & (vlSelf->inst >> 7U)))) 
               << 4U) | (((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                          & (3U == (0x1fU & (vlSelf->inst 
                                             >> 7U)))) 
                         << 3U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__210__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__210__PROF__ysyx_22050598_regfile__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xffffff9fU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                & (6U == (0x1fU & (vlSelf->inst >> 7U)))) 
               << 6U) | (((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                          & (5U == (0x1fU & (vlSelf->inst 
                                             >> 7U)))) 
                         << 5U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__211__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__211__PROF__ysyx_22050598_regfile__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xfffffe7fU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                & (8U == (0x1fU & (vlSelf->inst >> 7U)))) 
               << 8U) | (((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                          & (7U == (0x1fU & (vlSelf->inst 
                                             >> 7U)))) 
                         << 7U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__212__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__212__PROF__ysyx_22050598_regfile__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xfffff9ffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                & (0xaU == (0x1fU & (vlSelf->inst >> 7U)))) 
               << 0xaU) | (((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                            & (9U == (0x1fU & (vlSelf->inst 
                                               >> 7U)))) 
                           << 9U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__213__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__213__PROF__ysyx_22050598_regfile__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xffffe7ffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                & (0xcU == (0x1fU & (vlSelf->inst >> 7U)))) 
               << 0xcU) | (((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                            & (0xbU == (0x1fU & (vlSelf->inst 
                                                 >> 7U)))) 
                           << 0xbU)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__214__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__214__PROF__ysyx_22050598_regfile__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xffff9fffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                & (0xeU == (0x1fU & (vlSelf->inst >> 7U)))) 
               << 0xeU) | (((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                            & (0xdU == (0x1fU & (vlSelf->inst 
                                                 >> 7U)))) 
                           << 0xdU)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__215__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__215__PROF__ysyx_22050598_regfile__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xfffe7fffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                & (0x10U == (0x1fU & (vlSelf->inst 
                                      >> 7U)))) << 0x10U) 
              | (((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                  & (0xfU == (0x1fU & (vlSelf->inst 
                                       >> 7U)))) << 0xfU)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__216__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__216__PROF__ysyx_22050598_regfile__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xfff9ffffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                & (0x12U == (0x1fU & (vlSelf->inst 
                                      >> 7U)))) << 0x12U) 
              | (((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                  & (0x11U == (0x1fU & (vlSelf->inst 
                                        >> 7U)))) << 0x11U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__217__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__217__PROF__ysyx_22050598_regfile__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xffe7ffffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                & (0x14U == (0x1fU & (vlSelf->inst 
                                      >> 7U)))) << 0x14U) 
              | (((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                  & (0x13U == (0x1fU & (vlSelf->inst 
                                        >> 7U)))) << 0x13U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__218__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__218__PROF__ysyx_22050598_regfile__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xff9fffffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                & (0x16U == (0x1fU & (vlSelf->inst 
                                      >> 7U)))) << 0x16U) 
              | (((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                  & (0x15U == (0x1fU & (vlSelf->inst 
                                        >> 7U)))) << 0x15U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__219__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__219__PROF__ysyx_22050598_regfile__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xfe7fffffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                & (0x18U == (0x1fU & (vlSelf->inst 
                                      >> 7U)))) << 0x18U) 
              | (((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                  & (0x17U == (0x1fU & (vlSelf->inst 
                                        >> 7U)))) << 0x17U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__220__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__220__PROF__ysyx_22050598_regfile__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xf9ffffffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                & (0x1aU == (0x1fU & (vlSelf->inst 
                                      >> 7U)))) << 0x1aU) 
              | (((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                  & (0x19U == (0x1fU & (vlSelf->inst 
                                        >> 7U)))) << 0x19U)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__221__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__221__PROF__ysyx_22050598_regfile__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xe7ffffffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                & (0x1cU == (0x1fU & (vlSelf->inst 
                                      >> 7U)))) << 0x1cU) 
              | (((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                  & (0x1bU == (0x1fU & (vlSelf->inst 
                                        >> 7U)))) << 0x1bU)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__222__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__222__PROF__ysyx_22050598_regfile__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0x9fffffffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                & (0x1eU == (0x1fU & (vlSelf->inst 
                                      >> 7U)))) << 0x1eU) 
              | (((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                  & (0x1dU == (0x1fU & (vlSelf->inst 
                                        >> 7U)))) << 0x1dU)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__223__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__223__PROF__ysyx_22050598_regfile__l30\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0x7fffffffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | (((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
               & (0x1fU == (0x1fU & (vlSelf->inst >> 7U)))) 
              << 0x1fU));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__228__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__228__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[1U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__229__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__229__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[2U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__230__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__230__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[3U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__231__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__231__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[4U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__232__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__232__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[5U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__233__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__233__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[6U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__234__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__234__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[7U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__235__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__235__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[8U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__236__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__236__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[9U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__237__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__237__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xaU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__238__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__238__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xbU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__239__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__239__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xcU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__240__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__240__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xdU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__241__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__241__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xeU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__242__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__242__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xfU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__243__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__243__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x10U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__244__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__244__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x11U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__245__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__245__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x12U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__246__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__246__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x13U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__247__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__247__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x14U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__248__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__248__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x15U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__249__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__249__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x16U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__250__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__250__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x17U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__251__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__251__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x18U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__252__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__252__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x19U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__253__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__253__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1aU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__254__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__254__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1bU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__255__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__255__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1cU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__256__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__256__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1dU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__257__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__257__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1eU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__258__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__258__PROF__ysyx_22050598_regfile__l31\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1fU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__295__PROF__ysyx_22050598_regfile__l37(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__295__PROF__ysyx_22050598_regfile__l37\n"); );
    // Body
    vlSelf->npc__DOT__read_rs2_data = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
        [(0x1fU & (vlSelf->inst >> 0x14U))];
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__332__PROF__ysyx_22050598_idu_forward__l69(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__332__PROF__ysyx_22050598_idu_forward__l69\n"); );
    // Body
    vlSelf->npc__DOT__ex_bs_data = ((((- (QData)((IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
                                      & vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm) 
                                     | ((- (QData)((IData)(
                                                           (0x23U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->inst))))) 
                                        & vlSelf->npc__DOT__read_rs2_data)) 
                                    | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri))) 
                                       & (QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->inst 
                                                             >> 0xfU))))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__333__PROF__ysyx_22050598_idu_forward__l66(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__333__PROF__ysyx_22050598_idu_forward__l66\n"); );
    // Body
    vlSelf->npc__DOT__alu_op_b = (((- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b) 
                                                          >> 1U))))) 
                                   & vlSelf->npc__DOT__read_rs2_data) 
                                  | ((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b))))) 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__334__PROF__ysyx_22050598_idu_forward__l62(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__334__PROF__ysyx_22050598_idu_forward__l62\n"); );
    // Body
    vlSelf->npc__DOT__alu_op_a = (((- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a) 
                                                          >> 2U))))) 
                                   & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0xfU))]) 
                                  | ((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a) 
                                                            >> 1U))))) 
                                     & vlSelf->pc_now));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__335__PROF__ysyx_22050598_exu_alu__l228(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__335__PROF__ysyx_22050598_exu_alu__l228\n"); );
    // Body
    vlSelf->npc__DOT__ex_store_data_o = (vlSelf->npc__DOT__ex_bs_data 
                                         & (- (QData)((IData)(
                                                              (0x23U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->inst))))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__336__PROF__ysyx_22050598_exu_alu__l209(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__336__PROF__ysyx_22050598_exu_alu__l209\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc 
        = ((vlSelf->pc_now & (- (QData)((IData)(((0U 
                                                  != (IData)(vlSelf->npc__DOT__id_ex_branch_bus)) 
                                                 | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)))))) 
           + (((- (QData)((IData)((0U != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
               & vlSelf->npc__DOT__ex_bs_data) | (4ULL 
                                                  & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__337__PROF__ysyx_22050598_csr__l41(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__337__PROF__ysyx_22050598_csr__l41\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mstatus_ena 
        = ((0x300U == (0xfffU & (IData)(vlSelf->npc__DOT__alu_op_b))) 
           & (0U != (IData)(vlSelf->npc__DOT__id_ex_csr_bus)));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__338__PROF__ysyx_22050598_csr__l42(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__338__PROF__ysyx_22050598_csr__l42\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mtvec_ena 
        = ((0x305U == (0xfffU & (IData)(vlSelf->npc__DOT__alu_op_b))) 
           & (0U != (IData)(vlSelf->npc__DOT__id_ex_csr_bus)));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__339__PROF__ysyx_22050598_csr__l43(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__339__PROF__ysyx_22050598_csr__l43\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mepc_ena 
        = ((0x341U == (0xfffU & (IData)(vlSelf->npc__DOT__alu_op_b))) 
           & (0U != (IData)(vlSelf->npc__DOT__id_ex_csr_bus)));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__340__PROF__ysyx_22050598_csr__l44(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__340__PROF__ysyx_22050598_csr__l44\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mcause_ena 
        = ((0x342U == (0xfffU & (IData)(vlSelf->npc__DOT__alu_op_b))) 
           & (0U != (IData)(vlSelf->npc__DOT__id_ex_csr_bus)));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__341__PROF__ysyx_22050598_exu_alu__l43(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__341__PROF__ysyx_22050598_exu_alu__l43\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U] 
        = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
           & (IData)(vlSelf->npc__DOT__alu_op_b));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U] 
        = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
           & (IData)((vlSelf->npc__DOT__alu_op_b >> 0x20U)));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U] 
        = (1U & ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                 & ((~ ((IData)(vlSelf->npc__DOT__id_ex_unsigned_bus) 
                        >> 1U)) & (IData)((vlSelf->npc__DOT__alu_op_b 
                                           >> 0x3fU)))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__342__PROF__ysyx_22050598_exu_alu__l92(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__342__PROF__ysyx_22050598_exu_alu__l92\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_b_op 
        = (vlSelf->npc__DOT__alu_op_b & (- (QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst)))))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__343__PROF__ysyx_22050598_exu_alu__l90(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__343__PROF__ysyx_22050598_exu_alu__l90\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op 
        = ((IData)(vlSelf->npc__DOT__alu_op_b) & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__344__PROF__ysyx_22050598_exu_alu__l91(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__344__PROF__ysyx_22050598_exu_alu__l91\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_a_op 
        = (vlSelf->npc__DOT__alu_op_a & (- (QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst)))))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__345__PROF__ysyx_22050598_exu_alu__l89(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__345__PROF__ysyx_22050598_exu_alu__l89\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op 
        = ((IData)(vlSelf->npc__DOT__alu_op_a) & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__346__PROF__ysyx_22050598_exu_alu__l146(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__346__PROF__ysyx_22050598_exu_alu__l146\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a 
        = (vlSelf->npc__DOT__alu_op_a & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__347__PROF__ysyx_22050598_csr__l49(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__347__PROF__ysyx_22050598_csr__l49\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data2 
        = (((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__id_ex_csr_bus) 
                                      >> 4U))))) & vlSelf->npc__DOT__alu_op_a) 
           | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__id_ex_csr_bus) 
                                        >> 1U))))) 
              & vlSelf->npc__DOT__ex_bs_data));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__348__PROF__ysyx_22050598_csr__l63(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__348__PROF__ysyx_22050598_csr__l63\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__read_csr_data 
        = (((((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mstatus_ena))) 
              & vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mstatus_dfflr__DOT__qout_r) 
             | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mtvec_ena))) 
                & vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mtvec_dfflr__DOT__qout_r)) 
            | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mepc_ena))) 
               & vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mepc_dfflr__DOT__qout_r)) 
           | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mcause_ena))) 
              & vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mcause_dfflr__DOT__qout_r));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__349__PROF__ysyx_22050598_exu_alu__l46(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__349__PROF__ysyx_22050598_exu_alu__l46\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp7;
    VlWide<3>/*95:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    // Body
    __Vtemp7[0U] = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                    & (IData)(vlSelf->npc__DOT__alu_op_a));
    __Vtemp7[1U] = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                    & (IData)((vlSelf->npc__DOT__alu_op_a 
                               >> 0x20U)));
    __Vtemp7[2U] = (1U & ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                          & ((~ ((IData)(vlSelf->npc__DOT__id_ex_unsigned_bus) 
                                 >> 1U)) & (IData)(
                                                   (vlSelf->npc__DOT__alu_op_a 
                                                    >> 0x3fU)))));
    if ((0x100U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))) {
        __Vtemp10[0U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U]);
        __Vtemp10[1U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U]);
        __Vtemp10[2U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U]);
    } else {
        __Vtemp10[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U];
        __Vtemp10[1U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U];
        __Vtemp10[2U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U];
    }
    VL_ADD_W(3, __Vtemp11, __Vtemp7, __Vtemp10);
    VL_EXTEND_WI(65,1, __Vtemp12, (1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                         >> 8U)));
    VL_ADD_W(3, __Vtemp13, __Vtemp11, __Vtemp12);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U] 
        = __Vtemp13[0U];
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U] 
        = __Vtemp13[1U];
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U] 
        = (1U & __Vtemp13[2U]);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__350__PROF__ysyx_22050598_exu_alu__l112(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__350__PROF__ysyx_22050598_exu_alu__l112\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b 
        = ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                     >> 6U))))) & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_b_op);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__351__PROF__ysyx_22050598_exu_alu__l129(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__351__PROF__ysyx_22050598_exu_alu__l129\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b 
        = ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                     >> 5U))))) & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_b_op);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__352__PROF__ysyx_22050598_exu_alu__l95(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__352__PROF__ysyx_22050598_exu_alu__l95\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b 
        = ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                     >> 7U))))) & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_b_op);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__353__PROF__ysyx_22050598_exu_alu__l117(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__353__PROF__ysyx_22050598_exu_alu__l117\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_b 
        = ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                             >> 6U)))) & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__354__PROF__ysyx_22050598_exu_alu__l134(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__354__PROF__ysyx_22050598_exu_alu__l134\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_b 
        = ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                             >> 5U)))) & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__355__PROF__ysyx_22050598_exu_alu__l111(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__355__PROF__ysyx_22050598_exu_alu__l111\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a 
        = ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                     >> 6U))))) & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_a_op);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__356__PROF__ysyx_22050598_exu_alu__l128(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__356__PROF__ysyx_22050598_exu_alu__l128\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a 
        = ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                     >> 5U))))) & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_a_op);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__357__PROF__ysyx_22050598_exu_alu__l94(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__357__PROF__ysyx_22050598_exu_alu__l94\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a 
        = ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                     >> 7U))))) & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_a_op);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__358__PROF__ysyx_22050598_exu_alu__l116(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__358__PROF__ysyx_22050598_exu_alu__l116\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_a 
        = ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                             >> 6U)))) & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__359__PROF__ysyx_22050598_exu_alu__l133(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__359__PROF__ysyx_22050598_exu_alu__l133\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_a 
        = ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                             >> 5U)))) & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__360__PROF__ysyx_22050598_exu_alu__l102(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__360__PROF__ysyx_22050598_exu_alu__l102\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res 
        = VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, 
                                              ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                              >> 7U)))) 
                                               & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op)), 
                      VL_EXTENDS_QI(64,32, ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                           >> 7U)))) 
                                            & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op)));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__361__PROF__ysyx_22050598_exu_alu__l150(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__361__PROF__ysyx_22050598_exu_alu__l150\n"); );
    // Variables
    QData/*63:0*/ __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in;
    // Body
    __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
        = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a;
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xfffffffffffffff8ULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | (IData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0x3fU))))))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xffffffffffffffc7ULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xfffffffffffffe3fULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xfffffffffffff1ffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xffffffffffff8fffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xfffffffffffc7fffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xffffffffffe3ffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xffffffffff1fffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xfffffffff8ffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xffffffffc7ffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xfffffffe3fffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xfffffff1ffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xffffff8fffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xfffffc7fffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xffffe3ffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xffff1fffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xfff8ffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xffc7ffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xfe3fffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0xf1ffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0x8fffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout 
        = ((0x7fffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout) 
           | ((QData)((IData)((1U & (IData)(__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__in)))) 
              << 0x3fU));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
        = ((0x10U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))
            ? vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout
            : vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__362__PROF__ysyx_22050598_exu_alu__l151(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__362__PROF__ysyx_22050598_exu_alu__l151\n"); );
    // Variables
    IData/*31:0*/ __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in;
    // Body
    __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
        = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a);
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout 
        = ((0xfffffff8U & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout) 
           | ((4U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                     >> 0x1bU)) | ((2U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                          >> 0x1dU)) 
                                   | (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                      >> 0x1fU))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout 
        = ((0xffffffc7U & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout) 
           | ((0x20U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                        >> 0x15U)) | ((0x10U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                                >> 0x17U)) 
                                      | (8U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                               >> 0x19U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout 
        = ((0xfffffe3fU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout) 
           | ((0x100U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                         >> 0xfU)) | ((0x80U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                                >> 0x11U)) 
                                      | (0x40U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                                  >> 0x13U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout 
        = ((0xfffff1ffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout) 
           | ((0x800U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                         >> 9U)) | ((0x400U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                               >> 0xbU)) 
                                    | (0x200U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                                 >> 0xdU)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout 
        = ((0xffff8fffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout) 
           | ((0x4000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                          >> 3U)) | ((0x2000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                                 >> 5U)) 
                                     | (0x1000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                                   >> 7U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout 
        = ((0xfffc7fffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout) 
           | ((0x20000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                           << 3U)) | ((0x10000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                          >> 1U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout 
        = ((0xffe3ffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout) 
           | ((0x100000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                            << 9U)) | ((0x80000U & 
                                        (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                         << 5U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout 
        = ((0xff1fffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout) 
           | ((0x800000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                            << 0xfU)) | ((0x400000U 
                                          & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                               << 0xbU)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout 
        = ((0xf8ffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout) 
           | ((0x4000000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                             << 0x15U)) | ((0x2000000U 
                                            & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                                 << 0x11U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout 
        = ((0xc7ffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout) 
           | ((0x20000000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                              << 0x1bU)) | ((0x10000000U 
                                             & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                                  << 0x17U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout 
        = ((0x3fffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout) 
           | ((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
               << 0x1fU) | (0x40000000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__in 
                                           << 0x1dU))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
        = ((0x10U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))
            ? vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout
            : (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__363__PROF__ysyx_22050598_csr__l48(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__363__PROF__ysyx_22050598_csr__l48\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data1 
        = (vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__read_csr_data 
           & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__364__PROF__ysyx_22050598_csr__l95(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__364__PROF__ysyx_22050598_csr__l95\n"); );
    // Body
    vlSelf->npc__DOT__csr_rd_data = (((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__read_csr_data 
                                       & (- (QData)((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->npc__DOT__id_ex_csr_bus)))))) 
                                      | (vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mtvec_dfflr__DOT__qout_r 
                                         & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall))))) 
                                     | (vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mepc_dfflr__DOT__qout_r 
                                        & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mret)))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__365__PROF__ysyx_22050598_exu_alu__l49(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__365__PROF__ysyx_22050598_exu_alu__l49\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result 
        = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub) 
            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))
            ? (((- (QData)((IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U] 
                                    >> 0x1fU)))) << 0x1fU) 
               | (QData)((IData)((0x7fffffffU & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))
            : (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__366__PROF__ysyx_22050598_exu_alu__l97(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__366__PROF__ysyx_22050598_exu_alu__l97\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp15;
    VlWide<4>/*127:0*/ __Vtemp16;
    VlWide<4>/*127:0*/ __Vtemp17;
    // Body
    VL_EXTENDS_WQ(128,64, __Vtemp15, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
    VL_EXTENDS_WQ(128,64, __Vtemp16, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
    VL_MULS_WWW(128,128,128, __Vtemp17, __Vtemp15, __Vtemp16);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[0U] 
        = __Vtemp17[0U];
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[1U] 
        = __Vtemp17[1U];
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[2U] 
        = __Vtemp17[2U];
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[3U] 
        = __Vtemp17[3U];
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__367__PROF__ysyx_22050598_exu_alu__l118(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__367__PROF__ysyx_22050598_exu_alu__l118\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res 
        = VL_DIV_III(32, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_b);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__368__PROF__ysyx_22050598_exu_alu__l119(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__368__PROF__ysyx_22050598_exu_alu__l119\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res 
        = VL_DIVS_III(32, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_b);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__369__PROF__ysyx_22050598_exu_alu__l135(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__369__PROF__ysyx_22050598_exu_alu__l135\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod 
        = VL_MODDIV_III(32, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_b);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__370__PROF__ysyx_22050598_exu_alu__l136(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__370__PROF__ysyx_22050598_exu_alu__l136\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod 
        = VL_MODDIVS_III(32, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_b);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__371__PROF__ysyx_22050598_exu_alu__l157(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__371__PROF__ysyx_22050598_exu_alu__l157\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    // Body
    if (vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst) {
        __Vtemp21[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32;
        __Vtemp21[1U] = (IData)((0x1ffffffffULL & (- (QData)((IData)(
                                                                     ((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                                                                      & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                                         >> 0x1fU)))))));
        __Vtemp21[2U] = (IData)(((0x1ffffffffULL & 
                                  (- (QData)((IData)(
                                                     ((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                                                      & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                         >> 0x1fU)))))) 
                                 >> 0x20U));
    } else {
        __Vtemp21[0U] = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64);
        __Vtemp21[1U] = (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                 >> 0x20U));
        __Vtemp21[2U] = ((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                         & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                    >> 0x3fU)));
    }
    VL_SHIFTRS_WWI(65,65,6, __Vtemp22, __Vtemp21, (0x3fU 
                                                   & ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw) 
                                                        | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw)) 
                                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw))
                                                       ? 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->npc__DOT__alu_op_b) 
                                                          & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))
                                                       : 
                                                      ((IData)(vlSelf->npc__DOT__alu_op_b) 
                                                       & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[0U] 
        = __Vtemp22[0U];
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[1U] 
        = __Vtemp22[1U];
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[2U] 
        = (1U & __Vtemp22[2U]);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__372__PROF__ysyx_22050598_csr__l68(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__372__PROF__ysyx_22050598_csr__l68\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data 
        = ((((- (QData)((IData)((0U != (0x24U & (IData)(vlSelf->npc__DOT__id_ex_csr_bus)))))) 
             & (((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__id_ex_csr_bus) 
                                           >> 5U))))) 
                 & vlSelf->npc__DOT__alu_op_a) | ((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->npc__DOT__id_ex_csr_bus) 
                                                                         >> 2U))))) 
                                                  & vlSelf->npc__DOT__ex_bs_data))) 
            | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or))) 
               & (vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data1 
                  | vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data2))) 
           | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_and))) 
              & (vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data1 
                 & (~ vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data2))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__373__PROF__ysyx_22050598_IFU__l11(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__373__PROF__ysyx_22050598_IFU__l11\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc 
        = ((1U & (((((((((((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                           >> 5U) & (~ (IData)((0U 
                                                != 
                                                (((QData)((IData)(
                                                                  vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))) 
                         | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                             >> 4U) & (0U != (((QData)((IData)(
                                                               vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))) 
                        | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                            >> 3U) & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                       | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                           >> 2U) & ((~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                     | (~ (IData)((0U 
                                                   != 
                                                   (((QData)((IData)(
                                                                     vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                      | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                          >> 1U) & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                     | ((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                        & ((~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                           | (~ (IData)((0U != (((QData)((IData)(
                                                                 vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)) 
                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mret)) 
                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall)))
            ? (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mret) 
                | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall))
                ? vlSelf->npc__DOT__csr_rd_data : (
                                                   ((- (QData)((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
                                                    & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc) 
                                                   | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))) 
                                                      & (((- (QData)((IData)(
                                                                             (0x6fU 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->inst))))) 
                                                          & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                                                         | (0xfffffffffffffffeULL 
                                                            & ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr))) 
                                                               & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result))))))
            : (4ULL + vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_dfflr_resetval__DOT__qout_r));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__374__PROF__ysyx_22050598_exu_alu__l159(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__374__PROF__ysyx_22050598_exu_alu__l159\n"); );
    // Variables
    IData/*31:0*/ __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in;
    // Body
    __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
        = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[0U];
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xfffffff8U & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((4U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                     >> 0x1bU)) | ((2U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                          >> 0x1dU)) 
                                   | (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                      >> 0x1fU))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xffffffc7U & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x20U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                        >> 0x15U)) | ((0x10U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                >> 0x17U)) 
                                      | (8U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                               >> 0x19U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xfffffe3fU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x100U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                         >> 0xfU)) | ((0x80U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                >> 0x11U)) 
                                      | (0x40U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                  >> 0x13U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xfffff1ffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x800U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                         >> 9U)) | ((0x400U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                               >> 0xbU)) 
                                    | (0x200U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                 >> 0xdU)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xffff8fffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x4000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                          >> 3U)) | ((0x2000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                 >> 5U)) 
                                     | (0x1000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                   >> 7U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xfffc7fffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x20000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                           << 3U)) | ((0x10000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                          >> 1U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xffe3ffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x100000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                            << 9U)) | ((0x80000U & 
                                        (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                         << 5U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xff1fffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x800000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                            << 0xfU)) | ((0x400000U 
                                          & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                               << 0xbU)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xf8ffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x4000000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                             << 0x15U)) | ((0x2000000U 
                                            & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                 << 0x11U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xc7ffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x20000000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                              << 0x1bU)) | ((0x10000000U 
                                             & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                  << 0x17U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0x3fffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
               << 0x1fU) | (0x40000000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                           << 0x1dU))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev 
        = vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__375__PROF__ysyx_22050598_exu_alu__l160(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__375__PROF__ysyx_22050598_exu_alu__l160\n"); );
    // Variables
    QData/*63:0*/ __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in;
    // Body
    __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[0U])));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xfffffffffffffff8ULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | (IData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0x3fU))))))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xffffffffffffffc7ULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xfffffffffffffe3fULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xfffffffffffff1ffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xffffffffffff8fffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xfffffffffffc7fffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xffffffffffe3ffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xffffffffff1fffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xfffffffff8ffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xffffffffc7ffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xfffffffe3fffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xfffffff1ffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xffffff8fffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xfffffc7fffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xffffe3ffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xffff1fffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xfff8ffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xffc7ffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xfe3fffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0xf1ffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0x8fffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout 
        = ((0x7fffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout) 
           | ((QData)((IData)((1U & (IData)(__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__in)))) 
              << 0x3fU));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev 
        = vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout;
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__376__PROF__ysyx_22050598_exu_alu__l214(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__376__PROF__ysyx_22050598_exu_alu__l214\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp24;
    VlWide<4>/*127:0*/ __Vtemp25;
    VlWide<4>/*127:0*/ __Vtemp26;
    VlWide<4>/*127:0*/ __Vtemp27;
    VlWide<4>/*127:0*/ __Vtemp28;
    VlWide<4>/*127:0*/ __Vtemp29;
    // Body
    VL_EXTEND_WQ(128,64, __Vtemp24, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
    VL_EXTEND_WQ(128,64, __Vtemp25, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
    VL_MUL_W(4, __Vtemp26, __Vtemp24, __Vtemp25);
    VL_EXTEND_WQ(128,64, __Vtemp27, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
    VL_EXTEND_WQ(128,64, __Vtemp28, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
    VL_MUL_W(4, __Vtemp29, __Vtemp27, __Vtemp28);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_temp_rd_ls_data 
        = (((((((((((- (QData)((IData)((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub) 
                                         & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_set_en))) 
                                        & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)))))) 
                    & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                   | ((- (QData)((IData)((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub) 
                                           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_set_en)) 
                                          & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)))))) 
                      & (QData)((IData)((1U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]))))) 
                  | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))) 
                     & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc)) 
                 | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                              >> 7U))))) 
                    & ((((((- (QData)((IData)((1U & 
                                               ((IData)(vlSelf->npc__DOT__id_ex_inst_mul_bus) 
                                                >> 4U))))) 
                           & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[0U])))) 
                          | ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelf->npc__DOT__id_ex_inst_mul_bus) 
                                                    >> 3U))))) 
                             & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[2U]))))) 
                         | ((- (QData)((IData)((1U 
                                                & ((IData)(vlSelf->npc__DOT__id_ex_inst_mul_bus) 
                                                   >> 2U))))) 
                            & (((QData)((IData)(__Vtemp26[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            __Vtemp26[2U]))))) 
                        | ((- (QData)((IData)((1U & 
                                               ((IData)(vlSelf->npc__DOT__id_ex_inst_mul_bus) 
                                                >> 1U))))) 
                           & (((QData)((IData)(__Vtemp29[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           __Vtemp29[2U]))))) 
                       | ((- (QData)((IData)((1U & (IData)(vlSelf->npc__DOT__id_ex_inst_mul_bus))))) 
                          & (((- (QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res 
                                                             >> 0x1fU)))))) 
                              << 0x1fU) | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res))))))))) 
                | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                             >> 6U))))) 
                   & (((((- (QData)((IData)(((IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus) 
                                             & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst)))))) 
                         & VL_DIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b)) 
                        | ((- (QData)((IData)((1U & 
                                               ((~ (IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus)) 
                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))))) 
                           & VL_DIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b))) 
                       | ((- (QData)((IData)(((~ (IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus)) 
                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))) 
                          & (((- (QData)((IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res 
                                                  >> 0x1fU)))) 
                              << 0x1fU) | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res)))))) 
                      | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus) 
                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))) 
                         & (((- (QData)((IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res 
                                                 >> 0x1fU)))) 
                             << 0x1fU) | (QData)((IData)(
                                                         (0x7fffffffU 
                                                          & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res)))))))) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                            >> 5U))))) 
                  & (((((- (QData)((IData)(((IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus) 
                                            & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst)))))) 
                        & VL_MODDIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b)) 
                       | ((- (QData)((IData)((1U & 
                                              ((~ (IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus)) 
                                               & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))))) 
                          & VL_MODDIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b))) 
                      | ((- (QData)((IData)(((~ (IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus)) 
                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))) 
                         & (((- (QData)((IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod 
                                                 >> 0x1fU)))) 
                             << 0x1fU) | (QData)((IData)(
                                                         (0x7fffffffU 
                                                          & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod)))))) 
                     | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus) 
                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))) 
                        & (((- (QData)((IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod 
                                                >> 0x1fU)))) 
                            << 0x1fU) | (QData)((IData)(
                                                        (0x7fffffffU 
                                                         & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod)))))))) 
              | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift))) 
                 & ((((- (QData)((IData)((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                           >> 4U) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))) 
                      & (((QData)((IData)((- (IData)(
                                                     (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev 
                                                      >> 0x1fU))))) 
                          << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev)))) 
                     | ((- (QData)((IData)((1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                   >> 4U) 
                                                  & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))))) 
                        & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev)) 
                    | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                 >> 3U))))) 
                       & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[0U]))))))) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                          >> 2U))))) 
                & (((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                              >> 2U))))) 
                    & vlSelf->npc__DOT__alu_op_a) | 
                   ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                              >> 2U))))) 
                    & vlSelf->npc__DOT__alu_op_b)))) 
            | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                         >> 1U))))) 
               & (((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                             >> 1U))))) 
                   & vlSelf->npc__DOT__alu_op_a) & 
                  ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                             >> 1U))))) 
                   & vlSelf->npc__DOT__alu_op_b)))) 
           | ((- (QData)((IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))))) 
              & (((- (QData)((IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))))) 
                  & vlSelf->npc__DOT__alu_op_a) ^ (
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))))) 
                                                   & vlSelf->npc__DOT__alu_op_b))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__377__PROF__ysyx_22050598_exu_rd_mux__l8(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__377__PROF__ysyx_22050598_exu_rd_mux__l8\n"); );
    // Body
    vlSelf->npc__DOT__alu_rd_data_o = ((0U != (IData)(vlSelf->npc__DOT__id_ex_csr_bus))
                                        ? vlSelf->npc__DOT__csr_rd_data
                                        : (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_temp_rd_ls_data 
                                           & (- (QData)((IData)(
                                                                ((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                                                                 | (0x23U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->inst))))))));
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__378__PROF__ysyx_22050598_lsu__l154(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__378__PROF__ysyx_22050598_lsu__l154\n"); );
    // Body
    if ((0x23U == (0x7fU & vlSelf->inst))) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_write_test_TOP(vlSelf->npc__DOT__alu_rd_data_o, 
                                                                                (((((- (QData)((IData)(
                                                                                (0U 
                                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                                                                & (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                                                << 0x38U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                                                << 0x20U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                                                << 0x18U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                                                << 0x10U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                                                << 8U) 
                                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o)))))))))))) 
                                                                                | ((- (QData)((IData)(
                                                                                (1U 
                                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                                                                & (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                                                << 0x20U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                                                << 0x10U) 
                                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o))))))))) 
                                                                                | ((- (QData)((IData)(
                                                                                (2U 
                                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                                                                & (((QData)((IData)(vlSelf->npc__DOT__ex_store_data_o)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelf->npc__DOT__ex_store_data_o))))) 
                                                                                | ((- (QData)((IData)(
                                                                                (3U 
                                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                                                                & vlSelf->npc__DOT__ex_store_data_o)), 
                                                                                ((((1U 
                                                                                & (- (IData)(
                                                                                (0U 
                                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                                                                | (2U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type)))))) 
                                                                                | (4U 
                                                                                & (- (IData)(
                                                                                (2U 
                                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type)))))) 
                                                                                | (8U 
                                                                                & (- (IData)(
                                                                                (3U 
                                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type)))))));
    }
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__379__PROF__ysyx_22050598_lsu__l149(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__379__PROF__ysyx_22050598_lsu__l149\n"); );
    // Body
    if (vlSelf->npc__DOT__ex_load_en_o) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test_TOP(vlSelf->npc__DOT__alu_rd_data_o, vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test__6__rdata, 
                                                                                ((((1U 
                                                                                & (- (IData)(
                                                                                (0U 
                                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                                                                | (2U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type)))))) 
                                                                                | (4U 
                                                                                & (- (IData)(
                                                                                (2U 
                                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type)))))) 
                                                                                | (8U 
                                                                                & (- (IData)(
                                                                                (3U 
                                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type)))))));
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
            = vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test__6__rdata;
    }
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__380__PROF__npc__l222(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__380__PROF__npc__l222\n"); );
    // Body
    vlSelf->npc__DOT__rd_data = ((IData)(vlSelf->npc__DOT__ex_load_en_o)
                                  ? (((((- (QData)((IData)(
                                                           (0U 
                                                            == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                        & (((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(
                                                                           (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                            >> 7U)) 
                                                                   & (~ (IData)(vlSelf->npc__DOT__id_ex_unsigned_bus))))))) 
                                            << 8U) 
                                           | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata)))))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                          & (((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(
                                                                             (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                              >> 0xfU)) 
                                                                     & (~ (IData)(vlSelf->npc__DOT__id_ex_unsigned_bus))))))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))))))) 
                                      | ((- (QData)((IData)(
                                                            (2U 
                                                             == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                         & (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & ((IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                                >> 0x1fU)) 
                                                                            & (~ (IData)(vlSelf->npc__DOT__id_ex_unsigned_bus)))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))))) 
                                     | ((- (QData)((IData)(
                                                           (3U 
                                                            == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))
                                  : vlSelf->npc__DOT__alu_rd_data_o);
}

VL_INLINE_OPT void Vnpc___024root___settle__TOP__381__PROF__npc__l229(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__381__PROF__npc__l229\n"); );
    // Body
    vlSelf->fdata = vlSelf->npc__DOT__rd_data;
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__383__PROF__ysyx_22050598_EBREAK__l8(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__383__PROF__ysyx_22050598_EBREAK__l8\n"); );
    // Body
    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_EBREAK__DOT__ebreak_TOP(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                                                                [0xaU]);
}

void Vnpc___024root___eval(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vnpc___024root___sequent__TOP__76__PROF__ysyx_22050598_sirv_gnrl_dfflr_with_resetval__l13(vlSelf);
        Vnpc___024root___sequent__TOP__77__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__78__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__79__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__80__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__81__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__82__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__83__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__84__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__85__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__86__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__87__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__88__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__89__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__90__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__91__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__92__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__93__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__94__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__95__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__96__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__97__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__98__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__99__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__100__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__101__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__102__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__103__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__104__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__105__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__106__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__107__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__108__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__109__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__110__PROF__ysyx_22050598_sirv_gnrl_dfflr__l15(vlSelf);
        Vnpc___024root___sequent__TOP__111__PROF__ysyx_22050598_sirv_gnrl_dfflr_with_resetval__l13(vlSelf);
        Vnpc___024root___sequent__TOP__112__PROF__ysyx_22050598_sirv_gnrl_dfflr_with_resetval__l13(vlSelf);
        Vnpc___024root___sequent__TOP__150__PROF__ysyx_22050598_IFU__l24(vlSelf);
        Vnpc___024root___sequent__TOP__151__PROF__ysyx_22050598_IFU__l20(vlSelf);
        Vnpc___024root___sequent__TOP__152__PROF__ysyx_22050598_IFU__l25(vlSelf);
        Vnpc___024root___sequent__TOP__153__PROF__ysyx_22050598_exu_alu__l225(vlSelf);
        Vnpc___024root___sequent__TOP__154__PROF__ysyx_22050598_idu_decode__l157(vlSelf);
        Vnpc___024root___sequent__TOP__155__PROF__ysyx_22050598_idu_decode__l158(vlSelf);
        Vnpc___024root___sequent__TOP__156__PROF__ysyx_22050598_idu_decode__l147(vlSelf);
        Vnpc___024root___sequent__TOP__157__PROF__ysyx_22050598_idu_decode__l149(vlSelf);
        Vnpc___024root___sequent__TOP__158__PROF__ysyx_22050598_idu_decode__l134(vlSelf);
        Vnpc___024root___sequent__TOP__159__PROF__ysyx_22050598_idu_decode__l135(vlSelf);
        Vnpc___024root___sequent__TOP__160__PROF__ysyx_22050598_idu_decode__l261(vlSelf);
        Vnpc___024root___sequent__TOP__161__PROF__ysyx_22050598_idu_decode__l96(vlSelf);
        Vnpc___024root___sequent__TOP__162__PROF__ysyx_22050598_idu_decode__l97(vlSelf);
        Vnpc___024root___sequent__TOP__163__PROF__ysyx_22050598_idu_decode__l110(vlSelf);
        Vnpc___024root___sequent__TOP__164__PROF__ysyx_22050598_idu_decode__l116(vlSelf);
        Vnpc___024root___sequent__TOP__165__PROF__ysyx_22050598_idu_decode__l125(vlSelf);
        Vnpc___024root___sequent__TOP__166__PROF__ysyx_22050598_idu_decode__l127(vlSelf);
        Vnpc___024root___sequent__TOP__167__PROF__ysyx_22050598_idu_decode__l112(vlSelf);
        Vnpc___024root___sequent__TOP__168__PROF__ysyx_22050598_idu_decode__l113(vlSelf);
        Vnpc___024root___sequent__TOP__169__PROF__ysyx_22050598_idu_decode__l114(vlSelf);
        Vnpc___024root___sequent__TOP__170__PROF__ysyx_22050598_idu_decode__l115(vlSelf);
        Vnpc___024root___sequent__TOP__171__PROF__ysyx_22050598_idu_decode__l124(vlSelf);
        Vnpc___024root___sequent__TOP__172__PROF__ysyx_22050598_idu_decode__l138(vlSelf);
        Vnpc___024root___sequent__TOP__173__PROF__ysyx_22050598_idu_decode__l121(vlSelf);
        Vnpc___024root___sequent__TOP__174__PROF__ysyx_22050598_idu_decode__l122(vlSelf);
        Vnpc___024root___sequent__TOP__175__PROF__ysyx_22050598_idu_decode__l93(vlSelf);
        Vnpc___024root___sequent__TOP__176__PROF__ysyx_22050598_idu_decode__l98(vlSelf);
        Vnpc___024root___sequent__TOP__177__PROF__ysyx_22050598_idu_decode__l107(vlSelf);
        Vnpc___024root___sequent__TOP__178__PROF__ysyx_22050598_idu_decode__l123(vlSelf);
        Vnpc___024root___sequent__TOP__179__PROF__ysyx_22050598_idu_decode__l87(vlSelf);
        Vnpc___024root___sequent__TOP__180__PROF__ysyx_22050598_idu_decode__l104(vlSelf);
        Vnpc___024root___sequent__TOP__181__PROF__ysyx_22050598_idu_decode__l160(vlSelf);
        Vnpc___024root___sequent__TOP__182__PROF__ysyx_22050598_idu_decode__l161(vlSelf);
        Vnpc___024root___sequent__TOP__183__PROF__ysyx_22050598_idu_decode__l162(vlSelf);
        Vnpc___024root___sequent__TOP__184__PROF__ysyx_22050598_idu_decode__l163(vlSelf);
        Vnpc___024root___sequent__TOP__185__PROF__ysyx_22050598_idu_decode__l164(vlSelf);
        Vnpc___024root___sequent__TOP__186__PROF__ysyx_22050598_idu_decode__l165(vlSelf);
        Vnpc___024root___sequent__TOP__187__PROF__ysyx_22050598_idu_decode__l156(vlSelf);
        Vnpc___024root___sequent__TOP__188__PROF__ysyx_22050598_idu_decode__l223(vlSelf);
        Vnpc___024root___sequent__TOP__189__PROF__ysyx_22050598_idu_decode__l252(vlSelf);
        Vnpc___024root___sequent__TOP__190__PROF__ysyx_22050598_idu_decode__l254(vlSelf);
        Vnpc___024root___sequent__TOP__191__PROF__ysyx_22050598_idu_decode__l253(vlSelf);
        Vnpc___024root___sequent__TOP__192__PROF__ysyx_22050598_exu_alu__l206(vlSelf);
        Vnpc___024root___sequent__TOP__193__PROF__ysyx_22050598_idu_decode__l246(vlSelf);
        Vnpc___024root___sequent__TOP__194__PROF__ysyx_22050598_idu_decode__l256(vlSelf);
        Vnpc___024root___sequent__TOP__195__PROF__ysyx_22050598_idu_decode__l172(vlSelf);
        Vnpc___024root___sequent__TOP__196__PROF__ysyx_22050598_idu_decode__l251(vlSelf);
        Vnpc___024root___sequent__TOP__197__PROF__ysyx_22050598_idu_decode__l168(vlSelf);
        Vnpc___024root___sequent__TOP__198__PROF__ysyx_22050598_idu_decode__l174(vlSelf);
        Vnpc___024root___sequent__TOP__199__PROF__ysyx_22050598_csr__l57(vlSelf);
        Vnpc___024root___sequent__TOP__200__PROF__ysyx_22050598_csr__l47(vlSelf);
        Vnpc___024root___sequent__TOP__201__PROF__ysyx_22050598_idu_decode__l193(vlSelf);
        Vnpc___024root___sequent__TOP__202__PROF__ysyx_22050598_exu_alu__l37(vlSelf);
        Vnpc___024root___sequent__TOP__203__PROF__ysyx_22050598_exu_alu__l145(vlSelf);
        Vnpc___024root___sequent__TOP__204__PROF__ysyx_22050598_idu_decode__l237(vlSelf);
        Vnpc___024root___sequent__TOP__205__PROF__ysyx_22050598_idu_decode__l220(vlSelf);
        Vnpc___024root___sequent__TOP__206__PROF__ysyx_22050598_idu_decode__l206(vlSelf);
        Vnpc___024root___sequent__TOP__207__PROF__ysyx_22050598_idu_decode__l216(vlSelf);
        Vnpc___024root___sequent__TOP__208__PROF__ysyx_22050598_regfile__l30(vlSelf);
        Vnpc___024root___sequent__TOP__209__PROF__ysyx_22050598_regfile__l30(vlSelf);
        Vnpc___024root___sequent__TOP__210__PROF__ysyx_22050598_regfile__l30(vlSelf);
        Vnpc___024root___sequent__TOP__211__PROF__ysyx_22050598_regfile__l30(vlSelf);
        Vnpc___024root___sequent__TOP__212__PROF__ysyx_22050598_regfile__l30(vlSelf);
        Vnpc___024root___sequent__TOP__213__PROF__ysyx_22050598_regfile__l30(vlSelf);
        Vnpc___024root___sequent__TOP__214__PROF__ysyx_22050598_regfile__l30(vlSelf);
        Vnpc___024root___sequent__TOP__215__PROF__ysyx_22050598_regfile__l30(vlSelf);
        Vnpc___024root___sequent__TOP__216__PROF__ysyx_22050598_regfile__l30(vlSelf);
        Vnpc___024root___sequent__TOP__217__PROF__ysyx_22050598_regfile__l30(vlSelf);
        Vnpc___024root___sequent__TOP__218__PROF__ysyx_22050598_regfile__l30(vlSelf);
        Vnpc___024root___sequent__TOP__219__PROF__ysyx_22050598_regfile__l30(vlSelf);
        Vnpc___024root___sequent__TOP__220__PROF__ysyx_22050598_regfile__l30(vlSelf);
        Vnpc___024root___sequent__TOP__221__PROF__ysyx_22050598_regfile__l30(vlSelf);
        Vnpc___024root___sequent__TOP__222__PROF__ysyx_22050598_regfile__l30(vlSelf);
        Vnpc___024root___sequent__TOP__223__PROF__ysyx_22050598_regfile__l30(vlSelf);
    }
    if (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ebreak) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ebreak)))) {
        Vnpc___024root___sequent__TOP__383__PROF__ysyx_22050598_EBREAK__l8(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)))) {
        Vnpc___024root___settle__TOP__228__PROF__ysyx_22050598_regfile__l31(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vnpc___024root___settle__TOP__229__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__230__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__231__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__232__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__233__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__234__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__235__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__236__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__237__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__238__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__239__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__240__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__241__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__242__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__243__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__244__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__245__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__246__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__247__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__248__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__249__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__250__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__251__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__252__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__253__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__254__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__255__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__256__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__257__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__258__PROF__ysyx_22050598_regfile__l31(vlSelf);
        Vnpc___024root___settle__TOP__295__PROF__ysyx_22050598_regfile__l37(vlSelf);
        Vnpc___024root___settle__TOP__334__PROF__ysyx_22050598_idu_forward__l62(vlSelf);
        Vnpc___024root___settle__TOP__332__PROF__ysyx_22050598_idu_forward__l69(vlSelf);
        Vnpc___024root___settle__TOP__333__PROF__ysyx_22050598_idu_forward__l66(vlSelf);
        Vnpc___024root___settle__TOP__344__PROF__ysyx_22050598_exu_alu__l91(vlSelf);
        Vnpc___024root___settle__TOP__345__PROF__ysyx_22050598_exu_alu__l89(vlSelf);
        Vnpc___024root___settle__TOP__346__PROF__ysyx_22050598_exu_alu__l146(vlSelf);
        Vnpc___024root___settle__TOP__335__PROF__ysyx_22050598_exu_alu__l228(vlSelf);
        Vnpc___024root___settle__TOP__347__PROF__ysyx_22050598_csr__l49(vlSelf);
        Vnpc___024root___settle__TOP__336__PROF__ysyx_22050598_exu_alu__l209(vlSelf);
        Vnpc___024root___settle__TOP__337__PROF__ysyx_22050598_csr__l41(vlSelf);
        Vnpc___024root___settle__TOP__338__PROF__ysyx_22050598_csr__l42(vlSelf);
        Vnpc___024root___settle__TOP__339__PROF__ysyx_22050598_csr__l43(vlSelf);
        Vnpc___024root___settle__TOP__340__PROF__ysyx_22050598_csr__l44(vlSelf);
        Vnpc___024root___settle__TOP__341__PROF__ysyx_22050598_exu_alu__l43(vlSelf);
        Vnpc___024root___settle__TOP__342__PROF__ysyx_22050598_exu_alu__l92(vlSelf);
        Vnpc___024root___settle__TOP__343__PROF__ysyx_22050598_exu_alu__l90(vlSelf);
        Vnpc___024root___settle__TOP__355__PROF__ysyx_22050598_exu_alu__l111(vlSelf);
        Vnpc___024root___settle__TOP__356__PROF__ysyx_22050598_exu_alu__l128(vlSelf);
        Vnpc___024root___settle__TOP__357__PROF__ysyx_22050598_exu_alu__l94(vlSelf);
        Vnpc___024root___settle__TOP__358__PROF__ysyx_22050598_exu_alu__l116(vlSelf);
        Vnpc___024root___settle__TOP__359__PROF__ysyx_22050598_exu_alu__l133(vlSelf);
        Vnpc___024root___settle__TOP__361__PROF__ysyx_22050598_exu_alu__l150(vlSelf);
        Vnpc___024root___settle__TOP__362__PROF__ysyx_22050598_exu_alu__l151(vlSelf);
        Vnpc___024root___settle__TOP__348__PROF__ysyx_22050598_csr__l63(vlSelf);
        Vnpc___024root___settle__TOP__349__PROF__ysyx_22050598_exu_alu__l46(vlSelf);
        Vnpc___024root___settle__TOP__350__PROF__ysyx_22050598_exu_alu__l112(vlSelf);
        Vnpc___024root___settle__TOP__351__PROF__ysyx_22050598_exu_alu__l129(vlSelf);
        Vnpc___024root___settle__TOP__352__PROF__ysyx_22050598_exu_alu__l95(vlSelf);
        Vnpc___024root___settle__TOP__360__PROF__ysyx_22050598_exu_alu__l102(vlSelf);
        Vnpc___024root___settle__TOP__353__PROF__ysyx_22050598_exu_alu__l117(vlSelf);
        Vnpc___024root___settle__TOP__354__PROF__ysyx_22050598_exu_alu__l134(vlSelf);
        Vnpc___024root___settle__TOP__371__PROF__ysyx_22050598_exu_alu__l157(vlSelf);
        Vnpc___024root___settle__TOP__363__PROF__ysyx_22050598_csr__l48(vlSelf);
        Vnpc___024root___settle__TOP__364__PROF__ysyx_22050598_csr__l95(vlSelf);
        Vnpc___024root___settle__TOP__365__PROF__ysyx_22050598_exu_alu__l49(vlSelf);
        Vnpc___024root___settle__TOP__366__PROF__ysyx_22050598_exu_alu__l97(vlSelf);
        Vnpc___024root___settle__TOP__367__PROF__ysyx_22050598_exu_alu__l118(vlSelf);
        Vnpc___024root___settle__TOP__368__PROF__ysyx_22050598_exu_alu__l119(vlSelf);
        Vnpc___024root___settle__TOP__369__PROF__ysyx_22050598_exu_alu__l135(vlSelf);
        Vnpc___024root___settle__TOP__370__PROF__ysyx_22050598_exu_alu__l136(vlSelf);
        Vnpc___024root___settle__TOP__374__PROF__ysyx_22050598_exu_alu__l159(vlSelf);
        Vnpc___024root___settle__TOP__375__PROF__ysyx_22050598_exu_alu__l160(vlSelf);
        Vnpc___024root___settle__TOP__372__PROF__ysyx_22050598_csr__l68(vlSelf);
        Vnpc___024root___settle__TOP__373__PROF__ysyx_22050598_IFU__l11(vlSelf);
        Vnpc___024root___settle__TOP__376__PROF__ysyx_22050598_exu_alu__l214(vlSelf);
        Vnpc___024root___settle__TOP__377__PROF__ysyx_22050598_exu_rd_mux__l8(vlSelf);
        Vnpc___024root___settle__TOP__378__PROF__ysyx_22050598_lsu__l154(vlSelf);
        Vnpc___024root___settle__TOP__379__PROF__ysyx_22050598_lsu__l149(vlSelf);
        Vnpc___024root___settle__TOP__380__PROF__npc__l222(vlSelf);
        Vnpc___024root___settle__TOP__381__PROF__npc__l229(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    vlSelf->__Vclklast__TOP__npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ebreak 
        = vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ebreak;
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
