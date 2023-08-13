// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_lsu.h"

void Vnpc_ysyx_22050598_lsu____Vdpiimwrap_pmem_read_test_TOP__npc__u_ysyx_22050598_lsu(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ rlen);
void Vnpc_ysyx_22050598_lsu____Vdpiimwrap_pmem_write_test_TOP__npc__u_ysyx_22050598_lsu(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wlen);

VL_ATTR_COLD void Vnpc_ysyx_22050598_lsu___stl_sequent__TOP__npc__u_ysyx_22050598_lsu__0(Vnpc_ysyx_22050598_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_lsu___stl_sequent__TOP__npc__u_ysyx_22050598_lsu__0\n"); );
    // Body
    vlSelf->__PVT__raddr = vlSelf->__PVT__ls_loc;
    vlSelf->__PVT__size_b = (0U == (IData)(vlSelf->__PVT__ls_type));
    vlSelf->__PVT__size_hw = (1U == (IData)(vlSelf->__PVT__ls_type));
    vlSelf->__PVT__size_w = (2U == (IData)(vlSelf->__PVT__ls_type));
    vlSelf->__PVT__size_dw = (3U == (IData)(vlSelf->__PVT__ls_type));
    vlSelf->__PVT__waddr = vlSelf->__PVT__raddr;
    vlSelf->__PVT__wdata = ((((VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__size_b), 0x40U) 
                               & VL_REPLICATE_QII(8, 
                                                  (0xffU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__ls_store_data, 0U, 8U)), 8U)) 
                              | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__size_hw), 0x40U) 
                                 & VL_REPLICATE_QII(16, 
                                                    (0xffffU 
                                                     & VL_SEL_IQII(64, vlSelf->__PVT__ls_store_data, 0U, 0x10U)), 4U))) 
                             | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__size_w), 0x40U) 
                                & VL_REPLICATE_QII(32, 
                                                   VL_SEL_IQII(64, vlSelf->__PVT__ls_store_data, 0U, 0x20U), 2U))) 
                            | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__size_dw), 0x40U) 
                               & vlSelf->__PVT__ls_store_data));
    vlSelf->__PVT__rlen = ((((1U & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__size_b), 8U)) 
                             | (2U & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__size_hw), 8U))) 
                            | (4U & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__size_w), 8U))) 
                           | (8U & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__size_dw), 8U)));
    vlSelf->__PVT__wlen = vlSelf->__PVT__rlen;
    if (vlSelf->__PVT__load_en) {
        Vnpc_ysyx_22050598_lsu____Vdpiimwrap_pmem_read_test_TOP__npc__u_ysyx_22050598_lsu(vlSelf->__PVT__raddr, vlSelf->__Vtask_pmem_read_test__0__rdata, (IData)(vlSelf->__PVT__rlen));
        vlSelf->__PVT__rdata = vlSelf->__Vtask_pmem_read_test__0__rdata;
    } else {
        Vnpc_ysyx_22050598_lsu____Vdpiimwrap_pmem_read_test_TOP__npc__u_ysyx_22050598_lsu(0x80000000ULL, vlSelf->__Vtask_pmem_read_test__1__rdata, (IData)(vlSelf->__PVT__rlen));
        vlSelf->__PVT__rdata = vlSelf->__Vtask_pmem_read_test__1__rdata;
    }
    if (vlSelf->__PVT__store_en) {
        Vnpc_ysyx_22050598_lsu____Vdpiimwrap_pmem_write_test_TOP__npc__u_ysyx_22050598_lsu(vlSelf->__PVT__waddr, vlSelf->__PVT__wdata, (IData)(vlSelf->__PVT__wlen));
    }
    vlSelf->__PVT__load_data_o = ((((VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__size_b), 0x40U) 
                                     & VL_CONCAT_QQI(64,56,8, 
                                                     (0xffffffffffffffULL 
                                                      & VL_REPLICATE_QOI(1,
                                                                         (1U 
                                                                          & (VL_BITSEL_IQII(64, vlSelf->__PVT__rdata, 7U) 
                                                                             & (~ (IData)(vlSelf->__PVT__load_unsigned)))), 0x38U)), 
                                                     (0xffU 
                                                      & VL_SEL_IQII(64, vlSelf->__PVT__rdata, 0U, 8U)))) 
                                    | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__size_hw), 0x40U) 
                                       & VL_CONCAT_QQI(64,48,16, 
                                                       (0xffffffffffffULL 
                                                        & VL_REPLICATE_QOI(1,
                                                                           (1U 
                                                                            & (VL_BITSEL_IQII(64, vlSelf->__PVT__rdata, 0xfU) 
                                                                               & (~ (IData)(vlSelf->__PVT__load_unsigned)))), 0x30U)), 
                                                       (0xffffU 
                                                        & VL_SEL_IQII(64, vlSelf->__PVT__rdata, 0U, 0x10U))))) 
                                   | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__size_w), 0x40U) 
                                      & VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & (VL_BITSEL_IQII(64, vlSelf->__PVT__rdata, 0x1fU) 
                                                                                & (~ (IData)(vlSelf->__PVT__load_unsigned)))), 0x20U), 
                                                      VL_SEL_IQII(64, vlSelf->__PVT__rdata, 0U, 0x20U)))) 
                                  | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__size_dw), 0x40U) 
                                     & vlSelf->__PVT__rdata));
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_lsu___ctor_var_reset(Vnpc_ysyx_22050598_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_lsu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__ls_store_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ls_loc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__load_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__store_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ls_type = VL_RAND_RESET_I(2);
    vlSelf->__PVT__load_unsigned = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_data_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__raddr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__waddr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__wdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__rlen = VL_RAND_RESET_I(8);
    vlSelf->__PVT__wlen = VL_RAND_RESET_I(8);
    vlSelf->__PVT__size_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__size_hw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__size_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__size_dw = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_pmem_read_test__0__rdata = 0;
    vlSelf->__Vtask_pmem_read_test__1__rdata = 0;
}
