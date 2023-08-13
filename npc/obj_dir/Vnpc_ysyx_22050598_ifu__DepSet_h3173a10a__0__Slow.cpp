// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_ysyx_22050598_ifu.h"

void Vnpc_ysyx_22050598_ifu____Vdpiimwrap_pmem_read_TOP__npc__u_ysyx_22050598_ifu(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

VL_ATTR_COLD void Vnpc_ysyx_22050598_ifu___stl_sequent__TOP__npc__u_ysyx_22050598_ifu__0(Vnpc_ysyx_22050598_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_ifu___stl_sequent__TOP__npc__u_ysyx_22050598_ifu__0\n"); );
    // Body
    vlSelf->__PVT__pc_r = vlSymsp->TOP__npc__u_ysyx_22050598_ifu__pc_dfflr_resetval.__PVT__qout;
    vlSymsp->TOP__npc__u_ysyx_22050598_ifu__pc_dfflr_resetval.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ifu__pc_dfflr_resetval.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSelf->__PVT__pc_add_op1 = vlSelf->__PVT__pc_r;
    vlSelf->__PVT__pc_now = vlSelf->__PVT__pc_r;
    vlSelf->__PVT__raddr = VL_CONCAT_QQI(64,61,3, (0x1fffffffffffffffULL 
                                                   & VL_SEL_QQII(64, vlSelf->__PVT__pc_r, 3U, 0x3dU)), 0U);
    if (vlSelf->__PVT__rst) {
        Vnpc_ysyx_22050598_ifu____Vdpiimwrap_pmem_read_TOP__npc__u_ysyx_22050598_ifu(vlSelf->__PVT__raddr, vlSelf->__Vtask_pmem_read__0__rdata);
        vlSelf->__PVT__rdata = vlSelf->__Vtask_pmem_read__0__rdata;
    } else {
        Vnpc_ysyx_22050598_ifu____Vdpiimwrap_pmem_read_TOP__npc__u_ysyx_22050598_ifu(0x80000000ULL, vlSelf->__Vtask_pmem_read__1__rdata);
        vlSelf->__PVT__rdata = vlSelf->__Vtask_pmem_read__1__rdata;
    }
    vlSelf->__PVT__id_inst = ((VL_REPLICATE_IOI(1,(0U 
                                                   == 
                                                   (7U 
                                                    & VL_SEL_IQII(64, vlSelf->__PVT__pc_r, 0U, 3U))), 0x20U) 
                               & VL_SEL_IQII(64, vlSelf->__PVT__rdata, 0U, 0x20U)) 
                              | (VL_REPLICATE_IOI(1,
                                                  (4U 
                                                   == 
                                                   (7U 
                                                    & VL_SEL_IQII(64, vlSelf->__PVT__pc_r, 0U, 3U))), 0x20U) 
                                 & VL_SEL_IQII(64, vlSelf->__PVT__rdata, 0x20U, 0x20U)));
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_ifu___stl_sequent__TOP__npc__u_ysyx_22050598_ifu__2(Vnpc_ysyx_22050598_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_ifu___stl_sequent__TOP__npc__u_ysyx_22050598_ifu__2\n"); );
    // Body
    vlSelf->__PVT__pc_r_ena = (1U & (~ (IData)(vlSelf->__PVT__pc_stall)));
    vlSelf->__PVT__pc_in = ((IData)(vlSelf->__PVT__flush_pc_en)
                             ? vlSelf->__PVT__flush_pc
                             : vlSelf->__PVT__pc_add_res);
    vlSymsp->TOP__npc__u_ysyx_22050598_ifu__pc_dfflr_resetval.__PVT__lden 
        = vlSelf->__PVT__pc_r_ena;
    vlSymsp->TOP__npc__u_ysyx_22050598_ifu__pc_dfflr_resetval.__PVT__dnxt 
        = vlSelf->__PVT__pc_in;
}
