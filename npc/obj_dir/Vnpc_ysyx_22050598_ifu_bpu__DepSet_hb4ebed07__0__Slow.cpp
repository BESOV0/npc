// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_ifu_bpu.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_ifu_bpu___stl_sequent__TOP__npc__ysyx_22050598_ifu_bpu__0(Vnpc_ysyx_22050598_ifu_bpu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_ifu_bpu___stl_sequent__TOP__npc__ysyx_22050598_ifu_bpu__0\n"); );
    // Body
    vlSelf->__PVT__Jimm = VL_CONCAT_QQI(64,44,20, (0xfffffffffffULL 
                                                   & VL_REPLICATE_QOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__if_inst, 0x1fU)), 0x2cU)), 
                                        VL_CONCAT_III(20,8,12, 
                                                      (0xffU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__if_inst, 0xcU, 8U)), 
                                                      VL_CONCAT_III(12,1,11, 
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(32, vlSelf->__PVT__if_inst, 0x14U)), 
                                                                    VL_CONCAT_III(11,10,1, 
                                                                                (0x3ffU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__if_inst, 0x15U, 0xaU)), 0U))));
    vlSelf->__PVT__inst_is_jal = (0x6fU == (0x7fU & 
                                            VL_SEL_IIII(32, vlSelf->__PVT__if_inst, 0U, 7U)));
    vlSelf->__PVT__inst_is_bxx = (0x63U == (0x7fU & 
                                            VL_SEL_IIII(32, vlSelf->__PVT__if_inst, 0U, 7U)));
    vlSelf->__PVT__Bimm = VL_CONCAT_QQI(64,52,12, (0xfffffffffffffULL 
                                                   & VL_REPLICATE_QOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__if_inst, 0x1fU)), 0x34U)), 
                                        VL_CONCAT_III(12,1,11, 
                                                      (1U 
                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__if_inst, 7U)), 
                                                      VL_CONCAT_III(11,6,5, 
                                                                    (0x3fU 
                                                                     & VL_SEL_IIII(32, vlSelf->__PVT__if_inst, 0x19U, 6U)), 
                                                                    VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__if_inst, 8U, 4U)), 0U))));
    vlSelf->__PVT__prdt_taken = ((IData)(vlSelf->__PVT__inst_is_jal) 
                                 | ((IData)(vlSelf->__PVT__inst_is_bxx) 
                                    & VL_BITSEL_IQII(64, vlSelf->__PVT__Bimm, 0x3fU)));
    vlSelf->__PVT__bpu_pc_add_op = ((VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__inst_is_jal), 0x40U) 
                                     & vlSelf->__PVT__Jimm) 
                                    | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__inst_is_bxx), 0x40U) 
                                       & vlSelf->__PVT__Bimm));
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_ifu_bpu___ctor_var_reset(Vnpc_ysyx_22050598_ifu_bpu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_ifu_bpu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__if_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bpu_pc_add_op = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__prdt_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_jal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_bxx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Bimm = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__Jimm = VL_RAND_RESET_Q(64);
}
