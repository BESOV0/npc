// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_idu_decode.h"

VL_INLINE_OPT void Vnpc_ysyx_22050598_idu_decode___nba_sequent__TOP__npc__u_ysyx_22050598_idu_decode__0(Vnpc_ysyx_22050598_idu_decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_idu_decode___nba_sequent__TOP__npc__u_ysyx_22050598_idu_decode__0\n"); );
    // Body
    vlSelf->__PVT__sxxiw_shamt_legl = (1U & (~ VL_BITSEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x19U)));
    vlSelf->__PVT__Iimm = VL_CONCAT_QQI(64,53,11, (0x1fffffffffffffULL 
                                                   & VL_REPLICATE_QOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x1fU)), 0x35U)), 
                                        (0x7ffU & VL_SEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x14U, 0xbU)));
    vlSelf->__PVT__Simm = VL_CONCAT_QQI(64,53,11, (0x1fffffffffffffULL 
                                                   & VL_REPLICATE_QOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x1fU)), 0x35U)), 
                                        VL_CONCAT_III(11,6,5, 
                                                      (0x3fU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x19U, 6U)), 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__id_inst_i, 7U, 5U))));
    vlSelf->__PVT__Bimm = VL_CONCAT_QQI(64,52,12, (0xfffffffffffffULL 
                                                   & VL_REPLICATE_QOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x1fU)), 0x34U)), 
                                        VL_CONCAT_III(12,1,11, 
                                                      (1U 
                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__id_inst_i, 7U)), 
                                                      VL_CONCAT_III(11,6,5, 
                                                                    (0x3fU 
                                                                     & VL_SEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x19U, 6U)), 
                                                                    VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__id_inst_i, 8U, 4U)), 0U))));
    vlSelf->__PVT__Uimm = VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(1,
                                                                   (1U 
                                                                    & VL_BITSEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x1fU)), 0x20U), 
                                        VL_CONCAT_III(32,20,12, 
                                                      (0xfffffU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__id_inst_i, 0xcU, 0x14U)), 0U));
    vlSelf->__PVT__Jimm = VL_CONCAT_QQI(64,44,20, (0xfffffffffffULL 
                                                   & VL_REPLICATE_QOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x1fU)), 0x2cU)), 
                                        VL_CONCAT_III(20,8,12, 
                                                      (0xffU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__id_inst_i, 0xcU, 8U)), 
                                                      VL_CONCAT_III(12,1,11, 
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x14U)), 
                                                                    VL_CONCAT_III(11,10,1, 
                                                                                (0x3ffU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x15U, 0xaU)), 0U))));
    vlSelf->__PVT__rd_idx = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__id_inst_i, 7U, 5U));
    vlSelf->__PVT__func6_010000 = (1U & ((((((~ VL_BITSEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x1fU)) 
                                             & VL_BITSEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x1eU)) 
                                            & (~ VL_BITSEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x1dU))) 
                                           & (~ VL_BITSEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x1cU))) 
                                          & (~ VL_BITSEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x1bU))) 
                                         & (~ VL_BITSEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x1aU))));
    vlSelf->__PVT__func6_000000 = (1U & (~ VL_REDOR_I(
                                                      (0x3fU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x1aU, 6U)))));
    vlSelf->__PVT__func7 = (0x7fU & VL_SEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x19U, 7U));
    vlSelf->__PVT__rs1_idx = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__id_inst_i, 0xfU, 5U));
    vlSelf->__PVT__rs2_idx = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__id_inst_i, 0x14U, 5U));
    vlSelf->__PVT__func3 = (7U & VL_SEL_IIII(32, vlSelf->__PVT__id_inst_i, 0xcU, 3U));
    vlSelf->__PVT__opcode = (0x7fU & VL_SEL_IIII(32, vlSelf->__PVT__id_inst_i, 0U, 7U));
    vlSelf->__PVT__id_write_rd_idx_o = vlSelf->__PVT__rd_idx;
    vlSelf->__PVT__rd_00000 = (1U & (~ VL_REDOR_I((IData)(vlSelf->__PVT__rd_idx))));
    vlSelf->__PVT__func7_0011000 = (1U & (~ VL_REDOR_I(
                                                       (0x18U 
                                                        ^ (IData)(vlSelf->__PVT__func7)))));
    vlSelf->__PVT__func7_0100000 = (1U & (~ VL_REDOR_I(
                                                       (0x20U 
                                                        ^ (IData)(vlSelf->__PVT__func7)))));
    vlSelf->__PVT__func7_0000000 = (1U & (~ VL_REDOR_I((IData)(vlSelf->__PVT__func7))));
    vlSelf->__PVT__func7_0000001 = (1U & (~ VL_REDOR_I(
                                                       (1U 
                                                        ^ (IData)(vlSelf->__PVT__func7)))));
    vlSelf->__PVT__rs1_00000 = (1U & (~ VL_REDOR_I((IData)(vlSelf->__PVT__rs1_idx))));
    vlSelf->__PVT__id_read_rs1_idx_o = vlSelf->__PVT__rs1_idx;
    vlSelf->__PVT__rs2_00000 = (1U & (~ VL_REDOR_I((IData)(vlSelf->__PVT__rs2_idx))));
    vlSelf->__PVT__rs2_00001 = (1U & (~ VL_REDOR_I(
                                                   (1U 
                                                    ^ (IData)(vlSelf->__PVT__rs2_idx)))));
    vlSelf->__PVT__rs2_00010 = (1U & (~ VL_REDOR_I(
                                                   (2U 
                                                    ^ (IData)(vlSelf->__PVT__rs2_idx)))));
    vlSelf->__PVT__id_read_rs2_idx_o = vlSelf->__PVT__rs2_idx;
    vlSelf->__PVT__func3_100 = (1U & (~ VL_REDOR_I(
                                                   (4U 
                                                    ^ (IData)(vlSelf->__PVT__func3)))));
    vlSelf->__PVT__func3_000 = (1U & (~ VL_REDOR_I((IData)(vlSelf->__PVT__func3))));
    vlSelf->__PVT__func3_010 = (1U & (~ VL_REDOR_I(
                                                   (2U 
                                                    ^ (IData)(vlSelf->__PVT__func3)))));
    vlSelf->__PVT__func3_111 = (1U & (~ VL_REDOR_I(
                                                   (7U 
                                                    & (~ (IData)(vlSelf->__PVT__func3))))));
    vlSelf->__PVT__func3_011 = (1U & (~ VL_REDOR_I(
                                                   (3U 
                                                    ^ (IData)(vlSelf->__PVT__func3)))));
    vlSelf->__PVT__func3_110 = (1U & (~ VL_REDOR_I(
                                                   (6U 
                                                    ^ (IData)(vlSelf->__PVT__func3)))));
    vlSelf->__PVT__func3_001 = (1U & (~ VL_REDOR_I(
                                                   (1U 
                                                    ^ (IData)(vlSelf->__PVT__func3)))));
    vlSelf->__PVT__func3_101 = (1U & (~ VL_REDOR_I(
                                                   (5U 
                                                    ^ (IData)(vlSelf->__PVT__func3)))));
    vlSelf->__PVT__opcode_jalr = (1U & (~ VL_REDOR_I(
                                                     (0x67U 
                                                      ^ (IData)(vlSelf->__PVT__opcode)))));
    vlSelf->__PVT__opcode_aluiw = (1U & (~ VL_REDOR_I(
                                                      (0x1bU 
                                                       ^ (IData)(vlSelf->__PVT__opcode)))));
    vlSelf->__PVT__opcode_load = (1U & (~ VL_REDOR_I(
                                                     (3U 
                                                      ^ (IData)(vlSelf->__PVT__opcode)))));
    vlSelf->__PVT__opcode_alui = (1U & (~ VL_REDOR_I(
                                                     (0x13U 
                                                      ^ (IData)(vlSelf->__PVT__opcode)))));
    vlSelf->__PVT__opcode_branch = (1U & (~ VL_REDOR_I(
                                                       (0x63U 
                                                        ^ (IData)(vlSelf->__PVT__opcode)))));
    vlSelf->__PVT__opcode_alurw = (1U & (~ VL_REDOR_I(
                                                      (0x3bU 
                                                       ^ (IData)(vlSelf->__PVT__opcode)))));
    vlSelf->__PVT__opcode_alur = (1U & (~ VL_REDOR_I(
                                                     (0x33U 
                                                      ^ (IData)(vlSelf->__PVT__opcode)))));
    vlSelf->__PVT__opcode_auipc = (1U & (~ VL_REDOR_I(
                                                      (0x17U 
                                                       ^ (IData)(vlSelf->__PVT__opcode)))));
    vlSelf->__PVT__opcode_lui = (1U & (~ VL_REDOR_I(
                                                    (0x37U 
                                                     ^ (IData)(vlSelf->__PVT__opcode)))));
    vlSelf->__PVT__opcode_jal = (1U & (~ VL_REDOR_I(
                                                    (0x6fU 
                                                     ^ (IData)(vlSelf->__PVT__opcode)))));
    vlSelf->__PVT__opcode_store = (1U & (~ VL_REDOR_I(
                                                      (0x23U 
                                                       ^ (IData)(vlSelf->__PVT__opcode)))));
    vlSelf->__PVT__opcode_system = (1U & (~ VL_REDOR_I(
                                                       (0x73U 
                                                        ^ (IData)(vlSelf->__PVT__opcode)))));
    vlSelf->__PVT__inst_jalr = ((IData)(vlSelf->__PVT__opcode_jalr) 
                                & (IData)(vlSelf->__PVT__func3_000));
    vlSelf->__PVT__inst_addiw = ((IData)(vlSelf->__PVT__opcode_aluiw) 
                                 & (IData)(vlSelf->__PVT__func3_000));
    vlSelf->__PVT__inst_slliw = (((IData)(vlSelf->__PVT__opcode_aluiw) 
                                  & (IData)(vlSelf->__PVT__func3_001)) 
                                 & (IData)(vlSelf->__PVT__func6_000000));
    vlSelf->__PVT__inst_srliw = (((IData)(vlSelf->__PVT__opcode_aluiw) 
                                  & (IData)(vlSelf->__PVT__func3_101)) 
                                 & (IData)(vlSelf->__PVT__func6_000000));
    vlSelf->__PVT__inst_sraiw = (((IData)(vlSelf->__PVT__opcode_aluiw) 
                                  & (IData)(vlSelf->__PVT__func3_101)) 
                                 & (IData)(vlSelf->__PVT__func6_010000));
    vlSelf->__PVT__inst_lbu = ((IData)(vlSelf->__PVT__opcode_load) 
                               & (IData)(vlSelf->__PVT__func3_100));
    vlSelf->__PVT__inst_ld = ((IData)(vlSelf->__PVT__opcode_load) 
                              & (IData)(vlSelf->__PVT__func3_011));
    vlSelf->__PVT__inst_lh = ((IData)(vlSelf->__PVT__opcode_load) 
                              & (IData)(vlSelf->__PVT__func3_001));
    vlSelf->__PVT__inst_lw = ((IData)(vlSelf->__PVT__opcode_load) 
                              & (IData)(vlSelf->__PVT__func3_010));
    vlSelf->__PVT__inst_lhu = ((IData)(vlSelf->__PVT__opcode_load) 
                               & (IData)(vlSelf->__PVT__func3_101));
    vlSelf->__PVT__inst_lwu = ((IData)(vlSelf->__PVT__opcode_load) 
                               & (IData)(vlSelf->__PVT__func3_110));
    vlSelf->__PVT__inst_slli = (((IData)(vlSelf->__PVT__opcode_alui) 
                                 & (IData)(vlSelf->__PVT__func3_001)) 
                                & (IData)(vlSelf->__PVT__func6_000000));
    vlSelf->__PVT__inst_xori = ((IData)(vlSelf->__PVT__opcode_alui) 
                                & (IData)(vlSelf->__PVT__func3_100));
    vlSelf->__PVT__inst_ori = ((IData)(vlSelf->__PVT__opcode_alui) 
                               & (IData)(vlSelf->__PVT__func3_110));
    vlSelf->__PVT__inst_andi = ((IData)(vlSelf->__PVT__opcode_alui) 
                                & (IData)(vlSelf->__PVT__func3_111));
    vlSelf->__PVT__inst_srli = (((IData)(vlSelf->__PVT__opcode_alui) 
                                 & (IData)(vlSelf->__PVT__func3_101)) 
                                & (IData)(vlSelf->__PVT__func6_000000));
    vlSelf->__PVT__inst_addi = ((IData)(vlSelf->__PVT__opcode_alui) 
                                & (IData)(vlSelf->__PVT__func3_000));
    vlSelf->__PVT__inst_slti = ((IData)(vlSelf->__PVT__opcode_alui) 
                                & (IData)(vlSelf->__PVT__func3_010));
    vlSelf->__PVT__inst_srai = (((IData)(vlSelf->__PVT__opcode_alui) 
                                 & (IData)(vlSelf->__PVT__func3_101)) 
                                & (IData)(vlSelf->__PVT__func6_010000));
    vlSelf->__PVT__inst_sltiu = ((IData)(vlSelf->__PVT__opcode_alui) 
                                 & (IData)(vlSelf->__PVT__func3_011));
    vlSelf->__PVT__inst_beq = ((IData)(vlSelf->__PVT__opcode_branch) 
                               & (IData)(vlSelf->__PVT__func3_000));
    vlSelf->__PVT__inst_bne = ((IData)(vlSelf->__PVT__opcode_branch) 
                               & (IData)(vlSelf->__PVT__func3_001));
    vlSelf->__PVT__inst_blt = ((IData)(vlSelf->__PVT__opcode_branch) 
                               & (IData)(vlSelf->__PVT__func3_100));
    vlSelf->__PVT__inst_bge = ((IData)(vlSelf->__PVT__opcode_branch) 
                               & (IData)(vlSelf->__PVT__func3_101));
    vlSelf->__PVT__inst_bltu = ((IData)(vlSelf->__PVT__opcode_branch) 
                                & (IData)(vlSelf->__PVT__func3_110));
    vlSelf->__PVT__inst_bgeu = ((IData)(vlSelf->__PVT__opcode_branch) 
                                & (IData)(vlSelf->__PVT__func3_111));
    vlSelf->__PVT__rv64_inst = ((IData)(vlSelf->__PVT__opcode_alurw) 
                                | (IData)(vlSelf->__PVT__opcode_aluiw));
    vlSelf->__PVT__inst_subw = (((IData)(vlSelf->__PVT__opcode_alurw) 
                                 & (IData)(vlSelf->__PVT__func3_000)) 
                                & (IData)(vlSelf->__PVT__func7_0100000));
    vlSelf->__PVT__inst_divuw = (((IData)(vlSelf->__PVT__opcode_alurw) 
                                  & (IData)(vlSelf->__PVT__func3_101)) 
                                 & (IData)(vlSelf->__PVT__func7_0000001));
    vlSelf->__PVT__inst_remuw = (((IData)(vlSelf->__PVT__opcode_alurw) 
                                  & (IData)(vlSelf->__PVT__func3_111)) 
                                 & (IData)(vlSelf->__PVT__func7_0000001));
    vlSelf->__PVT__inst_addw = (((IData)(vlSelf->__PVT__opcode_alurw) 
                                 & (IData)(vlSelf->__PVT__func3_000)) 
                                & (IData)(vlSelf->__PVT__func7_0000000));
    vlSelf->__PVT__inst_divw = (((IData)(vlSelf->__PVT__opcode_alurw) 
                                 & (IData)(vlSelf->__PVT__func3_100)) 
                                & (IData)(vlSelf->__PVT__func7_0000001));
    vlSelf->__PVT__inst_remw = (((IData)(vlSelf->__PVT__opcode_alurw) 
                                 & (IData)(vlSelf->__PVT__func3_110)) 
                                & (IData)(vlSelf->__PVT__func7_0000001));
    vlSelf->__PVT__inst_mulw = (((IData)(vlSelf->__PVT__opcode_alurw) 
                                 & (IData)(vlSelf->__PVT__func3_000)) 
                                & (IData)(vlSelf->__PVT__func7_0000001));
    vlSelf->__PVT__inst_sllw = (((IData)(vlSelf->__PVT__opcode_alurw) 
                                 & (IData)(vlSelf->__PVT__func3_001)) 
                                & (IData)(vlSelf->__PVT__func7_0000000));
    vlSelf->__PVT__inst_srlw = (((IData)(vlSelf->__PVT__opcode_alurw) 
                                 & (IData)(vlSelf->__PVT__func3_101)) 
                                & (IData)(vlSelf->__PVT__func7_0000000));
    vlSelf->__PVT__inst_sraw = (((IData)(vlSelf->__PVT__opcode_alurw) 
                                 & (IData)(vlSelf->__PVT__func3_101)) 
                                & (IData)(vlSelf->__PVT__func7_0100000));
    vlSelf->__PVT__inst_sub = (((IData)(vlSelf->__PVT__opcode_alur) 
                                & (IData)(vlSelf->__PVT__func3_000)) 
                               & (IData)(vlSelf->__PVT__func7_0100000));
    vlSelf->__PVT__inst_sll = (((IData)(vlSelf->__PVT__opcode_alur) 
                                & (IData)(vlSelf->__PVT__func3_001)) 
                               & (IData)(vlSelf->__PVT__func7_0000000));
    vlSelf->__PVT__inst_divu = (((IData)(vlSelf->__PVT__opcode_alur) 
                                 & (IData)(vlSelf->__PVT__func3_101)) 
                                & (IData)(vlSelf->__PVT__func7_0000001));
    vlSelf->__PVT__inst_remu = (((IData)(vlSelf->__PVT__opcode_alur) 
                                 & (IData)(vlSelf->__PVT__func3_111)) 
                                & (IData)(vlSelf->__PVT__func7_0000001));
    vlSelf->__PVT__inst_xor = (((IData)(vlSelf->__PVT__opcode_alur) 
                                & (IData)(vlSelf->__PVT__func3_100)) 
                               & (IData)(vlSelf->__PVT__func7_0000000));
    vlSelf->__PVT__inst_or = (((IData)(vlSelf->__PVT__opcode_alur) 
                               & (IData)(vlSelf->__PVT__func3_110)) 
                              & (IData)(vlSelf->__PVT__func7_0000000));
    vlSelf->__PVT__inst_and = (((IData)(vlSelf->__PVT__opcode_alur) 
                                & (IData)(vlSelf->__PVT__func3_111)) 
                               & (IData)(vlSelf->__PVT__func7_0000000));
    vlSelf->__PVT__inst_srl = (((IData)(vlSelf->__PVT__opcode_alur) 
                                & (IData)(vlSelf->__PVT__func3_101)) 
                               & (IData)(vlSelf->__PVT__func7_0000000));
    vlSelf->__PVT__inst_add = (((IData)(vlSelf->__PVT__opcode_alur) 
                                & (IData)(vlSelf->__PVT__func3_000)) 
                               & (IData)(vlSelf->__PVT__func7_0000000));
    vlSelf->__PVT__inst_div = (((IData)(vlSelf->__PVT__opcode_alur) 
                                & (IData)(vlSelf->__PVT__func3_100)) 
                               & (IData)(vlSelf->__PVT__func7_0000001));
    vlSelf->__PVT__inst_rem = (((IData)(vlSelf->__PVT__opcode_alur) 
                                & (IData)(vlSelf->__PVT__func3_110)) 
                               & (IData)(vlSelf->__PVT__func7_0000001));
    vlSelf->__PVT__inst_mul = (((IData)(vlSelf->__PVT__opcode_alur) 
                                & (IData)(vlSelf->__PVT__func3_000)) 
                               & (IData)(vlSelf->__PVT__func7_0000001));
    vlSelf->__PVT__inst_mulh = (((IData)(vlSelf->__PVT__opcode_alur) 
                                 & (IData)(vlSelf->__PVT__func3_001)) 
                                & (IData)(vlSelf->__PVT__func7_0000001));
    vlSelf->__PVT__inst_mulhsu = (((IData)(vlSelf->__PVT__opcode_alur) 
                                   & (IData)(vlSelf->__PVT__func3_010)) 
                                  & (IData)(vlSelf->__PVT__func7_0000001));
    vlSelf->__PVT__inst_mulhu = (((IData)(vlSelf->__PVT__opcode_alur) 
                                  & (IData)(vlSelf->__PVT__func3_011)) 
                                 & (IData)(vlSelf->__PVT__func7_0000001));
    vlSelf->__PVT__inst_slt = (((IData)(vlSelf->__PVT__opcode_alur) 
                                & (IData)(vlSelf->__PVT__func3_010)) 
                               & (IData)(vlSelf->__PVT__func7_0000000));
    vlSelf->__PVT__inst_sra = (((IData)(vlSelf->__PVT__opcode_alur) 
                                & (IData)(vlSelf->__PVT__func3_101)) 
                               & (IData)(vlSelf->__PVT__func7_0100000));
    vlSelf->__PVT__inst_sltu = (((IData)(vlSelf->__PVT__opcode_alur) 
                                 & (IData)(vlSelf->__PVT__func3_011)) 
                                & (IData)(vlSelf->__PVT__func7_0000000));
    VL_ASSIGNBIT_II(5U, vlSelf->__PVT__inst_type, ((IData)(vlSelf->__PVT__opcode_alur) 
                                                   | (IData)(vlSelf->__PVT__opcode_alurw)));
    vlSelf->__PVT__inst_auipc = vlSelf->__PVT__opcode_auipc;
    vlSelf->__PVT__inst_lui = vlSelf->__PVT__opcode_lui;
    vlSelf->__PVT__id_inst_is_jal_o = vlSelf->__PVT__opcode_jal;
    vlSelf->__PVT__inst_jal = vlSelf->__PVT__opcode_jal;
    VL_ASSIGNSEL_II(3,2,0U, vlSelf->__PVT__alu_operand_sel_a, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__opcode_jal) 
                                          | (IData)(vlSelf->__PVT__opcode_auipc)), (IData)(vlSelf->__PVT__opcode_lui)));
    VL_ASSIGNBIT_II(0U, vlSelf->__PVT__inst_type, vlSelf->__PVT__opcode_jal);
    vlSelf->__PVT__id_ls_req_o = ((IData)(vlSelf->__PVT__opcode_load) 
                                  | (IData)(vlSelf->__PVT__opcode_store));
    vlSelf->__PVT__inst_sh = ((IData)(vlSelf->__PVT__opcode_store) 
                              & (IData)(vlSelf->__PVT__func3_001));
    vlSelf->__PVT__inst_sw = ((IData)(vlSelf->__PVT__opcode_store) 
                              & (IData)(vlSelf->__PVT__func3_010));
    vlSelf->__PVT__inst_sd = ((IData)(vlSelf->__PVT__opcode_store) 
                              & (IData)(vlSelf->__PVT__func3_011));
    vlSelf->__PVT__id_inst_is_store_o = vlSelf->__PVT__opcode_store;
    VL_ASSIGNSEL_II(6,3,1U, vlSelf->__PVT__inst_type, 
                    VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__opcode_store), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__opcode_branch), 
                                                ((IData)(vlSelf->__PVT__opcode_lui) 
                                                 | (IData)(vlSelf->__PVT__opcode_auipc)))));
    vlSelf->__PVT__inst_ebreak = ((((((IData)(vlSelf->__PVT__opcode_system) 
                                      & (IData)(vlSelf->__PVT__func3_000)) 
                                     & (IData)(vlSelf->__PVT__func7_0000000)) 
                                    & (IData)(vlSelf->__PVT__rs1_00000)) 
                                   & (IData)(vlSelf->__PVT__rs2_00001)) 
                                  & (IData)(vlSelf->__PVT__rd_00000));
    vlSelf->__PVT__inst_ecall = ((((((IData)(vlSelf->__PVT__opcode_system) 
                                     & (IData)(vlSelf->__PVT__func3_000)) 
                                    & (IData)(vlSelf->__PVT__func7_0000000)) 
                                   & (IData)(vlSelf->__PVT__rs1_00000)) 
                                  & (IData)(vlSelf->__PVT__rs2_00000)) 
                                 & (IData)(vlSelf->__PVT__rd_00000));
    vlSelf->__PVT__inst_mret = ((((((IData)(vlSelf->__PVT__opcode_system) 
                                    & (IData)(vlSelf->__PVT__func3_000)) 
                                   & (IData)(vlSelf->__PVT__func7_0011000)) 
                                  & (IData)(vlSelf->__PVT__rs1_00000)) 
                                 & (IData)(vlSelf->__PVT__rs2_00010)) 
                                & (IData)(vlSelf->__PVT__rd_00000));
    vlSelf->__PVT__inst_csrrw = ((IData)(vlSelf->__PVT__opcode_system) 
                                 & (IData)(vlSelf->__PVT__func3_001));
    vlSelf->__PVT__inst_csrrs = ((IData)(vlSelf->__PVT__opcode_system) 
                                 & (IData)(vlSelf->__PVT__func3_010));
    vlSelf->__PVT__inst_csrrc = ((IData)(vlSelf->__PVT__opcode_system) 
                                 & (IData)(vlSelf->__PVT__func3_011));
    vlSelf->__PVT__inst_csrrwi = ((IData)(vlSelf->__PVT__opcode_system) 
                                  & (IData)(vlSelf->__PVT__func3_101));
    vlSelf->__PVT__inst_csrrsi = ((IData)(vlSelf->__PVT__opcode_system) 
                                  & (IData)(vlSelf->__PVT__func3_110));
    vlSelf->__PVT__inst_csrrci = ((IData)(vlSelf->__PVT__opcode_system) 
                                  & (IData)(vlSelf->__PVT__func3_111));
    vlSelf->__PVT__id_inst_is_jalr_o = vlSelf->__PVT__inst_jalr;
    vlSelf->__PVT__sxxiw_shamt_ilgl = ((((IData)(vlSelf->__PVT__inst_slliw) 
                                         | (IData)(vlSelf->__PVT__inst_srliw)) 
                                        | (IData)(vlSelf->__PVT__inst_sraiw)) 
                                       & (~ (IData)(vlSelf->__PVT__sxxiw_shamt_legl)));
    vlSelf->__PVT__load_unsigned = (((IData)(vlSelf->__PVT__inst_lbu) 
                                     | (IData)(vlSelf->__PVT__inst_lhu)) 
                                    | (IData)(vlSelf->__PVT__inst_lwu));
    vlSelf->__PVT__id_branch_bus_o = VL_CONCAT_III(6,1,5, (IData)(vlSelf->__PVT__inst_beq), 
                                                   VL_CONCAT_III(5,1,4, (IData)(vlSelf->__PVT__inst_bne), 
                                                                 VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__inst_blt), 
                                                                               VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__inst_bge), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__inst_bltu), (IData)(vlSelf->__PVT__inst_bgeu))))));
    vlSelf->__PVT__id_inst_is_rv64_o = vlSelf->__PVT__rv64_inst;
    vlSelf->__PVT__id_inst_5_shamt_o = (((IData)(vlSelf->__PVT__inst_sraw) 
                                         | (IData)(vlSelf->__PVT__inst_srlw)) 
                                        | (IData)(vlSelf->__PVT__inst_sllw));
    VL_ASSIGNBIT_II(4U, vlSelf->__PVT__inst_opcode, 
                    ((((IData)(vlSelf->__PVT__inst_sll) 
                       | (IData)(vlSelf->__PVT__inst_slli)) 
                      | (IData)(vlSelf->__PVT__inst_slliw)) 
                     | (IData)(vlSelf->__PVT__inst_sllw)));
    VL_ASSIGNSEL_II(10,3,0U, vlSelf->__PVT__inst_opcode, 
                    VL_CONCAT_III(3,1,2, ((IData)(vlSelf->__PVT__inst_or) 
                                          | (IData)(vlSelf->__PVT__inst_ori)), 
                                  VL_CONCAT_III(2,1,1, 
                                                ((IData)(vlSelf->__PVT__inst_and) 
                                                 | (IData)(vlSelf->__PVT__inst_andi)), 
                                                ((IData)(vlSelf->__PVT__inst_xor) 
                                                 | (IData)(vlSelf->__PVT__inst_xori)))));
    VL_ASSIGNBIT_II(6U, vlSelf->__PVT__inst_opcode, 
                    ((((IData)(vlSelf->__PVT__inst_div) 
                       | (IData)(vlSelf->__PVT__inst_divu)) 
                      | (IData)(vlSelf->__PVT__inst_divuw)) 
                     | (IData)(vlSelf->__PVT__inst_divw)));
    vlSelf->__PVT__id_inst_divrem_bus_o = ((((IData)(vlSelf->__PVT__inst_rem) 
                                             | (IData)(vlSelf->__PVT__inst_remw)) 
                                            | (IData)(vlSelf->__PVT__inst_div)) 
                                           | (IData)(vlSelf->__PVT__inst_divw));
    VL_ASSIGNBIT_II(5U, vlSelf->__PVT__inst_opcode, 
                    ((((IData)(vlSelf->__PVT__inst_rem) 
                       | (IData)(vlSelf->__PVT__inst_remu)) 
                      | (IData)(vlSelf->__PVT__inst_remuw)) 
                     | (IData)(vlSelf->__PVT__inst_remw)));
    vlSelf->__PVT__id_inst_mul_bus_o = VL_CONCAT_III(5,1,4, (IData)(vlSelf->__PVT__inst_mul), 
                                                     VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__inst_mulh), 
                                                                   VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__inst_mulhsu), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__inst_mulhu), (IData)(vlSelf->__PVT__inst_mulw)))));
    VL_ASSIGNBIT_II(7U, vlSelf->__PVT__inst_opcode, 
                    (((((IData)(vlSelf->__PVT__inst_mul) 
                        | (IData)(vlSelf->__PVT__inst_mulh)) 
                       | (IData)(vlSelf->__PVT__inst_mulhsu)) 
                      | (IData)(vlSelf->__PVT__inst_mulhu)) 
                     | (IData)(vlSelf->__PVT__inst_mulw)));
    vlSelf->__PVT__id_inst_is_srax_o = ((((IData)(vlSelf->__PVT__inst_sra) 
                                          | (IData)(vlSelf->__PVT__inst_srai)) 
                                         | (IData)(vlSelf->__PVT__inst_sraiw)) 
                                        | (IData)(vlSelf->__PVT__inst_sraw));
    VL_ASSIGNBIT_II(3U, vlSelf->__PVT__inst_opcode, 
                    ((((((((IData)(vlSelf->__PVT__inst_sra) 
                           | (IData)(vlSelf->__PVT__inst_srai)) 
                          | (IData)(vlSelf->__PVT__inst_sraiw)) 
                         | (IData)(vlSelf->__PVT__inst_sraw)) 
                        | (IData)(vlSelf->__PVT__inst_srl)) 
                       | (IData)(vlSelf->__PVT__inst_srli)) 
                      | (IData)(vlSelf->__PVT__inst_srliw)) 
                     | (IData)(vlSelf->__PVT__inst_srlw)));
    vlSelf->__PVT__cmp_unsigned = ((((IData)(vlSelf->__PVT__inst_sltu) 
                                     | (IData)(vlSelf->__PVT__inst_sltiu)) 
                                    | (IData)(vlSelf->__PVT__inst_bltu)) 
                                   | (IData)(vlSelf->__PVT__inst_bgeu));
    vlSelf->__PVT__inst_set_en = ((((IData)(vlSelf->__PVT__inst_slt) 
                                    | (IData)(vlSelf->__PVT__inst_slti)) 
                                   | (IData)(vlSelf->__PVT__inst_sltiu)) 
                                  | (IData)(vlSelf->__PVT__inst_sltu));
    VL_ASSIGNBIT_II(9U, vlSelf->__PVT__inst_opcode, 
                    ((((((((((IData)(vlSelf->__PVT__inst_add) 
                             | (IData)(vlSelf->__PVT__inst_addi)) 
                            | (IData)(vlSelf->__PVT__inst_addiw)) 
                           | (IData)(vlSelf->__PVT__inst_addw)) 
                          | (IData)(vlSelf->__PVT__inst_auipc)) 
                         | (IData)(vlSelf->__PVT__inst_jalr)) 
                        | (IData)(vlSelf->__PVT__inst_jal)) 
                       | (IData)(vlSelf->__PVT__opcode_store)) 
                      | (IData)(vlSelf->__PVT__opcode_load)) 
                     | (IData)(vlSelf->__PVT__inst_lui)));
    vlSelf->__PVT__ls_type = (3U & (((1U & VL_REPLICATE_IOI(1,
                                                            (((IData)(vlSelf->__PVT__inst_lh) 
                                                              | (IData)(vlSelf->__PVT__inst_lhu)) 
                                                             | (IData)(vlSelf->__PVT__inst_sh)), 2U)) 
                                     | (2U & VL_REPLICATE_IOI(1,
                                                              (((IData)(vlSelf->__PVT__inst_lw) 
                                                                | (IData)(vlSelf->__PVT__inst_lwu)) 
                                                               | (IData)(vlSelf->__PVT__inst_sw)), 2U))) 
                                    | VL_REPLICATE_IOI(1,
                                                       ((IData)(vlSelf->__PVT__inst_ld) 
                                                        | (IData)(vlSelf->__PVT__inst_sd)), 2U)));
    vlSelf->__PVT__id_inst_is_ebreak_o = vlSelf->__PVT__inst_ebreak;
    vlSelf->__PVT__id_inst_is_ecall_o = vlSelf->__PVT__inst_ecall;
    vlSelf->__PVT__id_inst_is_mret_o = vlSelf->__PVT__inst_mret;
    vlSelf->__PVT__csr_need_rs1 = (((IData)(vlSelf->__PVT__inst_csrrw) 
                                    | (IData)(vlSelf->__PVT__inst_csrrs)) 
                                   | (IData)(vlSelf->__PVT__inst_csrrc));
    vlSelf->__PVT__id_csr_bus_o = VL_CONCAT_III(6,1,5, (IData)(vlSelf->__PVT__inst_csrrw), 
                                                VL_CONCAT_III(5,1,4, (IData)(vlSelf->__PVT__inst_csrrs), 
                                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__inst_csrrc), 
                                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__inst_csrrwi), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__inst_csrrsi), (IData)(vlSelf->__PVT__inst_csrrci))))));
    vlSelf->__PVT__inst_is_csri = (((IData)(vlSelf->__PVT__inst_csrrwi) 
                                    | (IData)(vlSelf->__PVT__inst_csrrsi)) 
                                   | (IData)(vlSelf->__PVT__inst_csrrci));
    vlSelf->__PVT__id_inst_is_illegal_o = vlSelf->__PVT__sxxiw_shamt_ilgl;
    vlSelf->__PVT__id_unsigned_bus_o = VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__cmp_unsigned), (IData)(vlSelf->__PVT__load_unsigned));
    vlSelf->__PVT__id_inst_is_set_o = vlSelf->__PVT__inst_set_en;
    VL_ASSIGNBIT_II(8U, vlSelf->__PVT__inst_opcode, 
                    ((((IData)(vlSelf->__PVT__inst_sub) 
                       | (IData)(vlSelf->__PVT__inst_subw)) 
                      | (IData)(vlSelf->__PVT__inst_set_en)) 
                     | (IData)(vlSelf->__PVT__opcode_branch)));
    vlSelf->__PVT__id_ls_data_bus_o = vlSelf->__PVT__ls_type;
    vlSelf->__PVT__id_inst_is_csri_o = vlSelf->__PVT__inst_is_csri;
    vlSelf->__PVT__inst_is_csr = ((IData)(vlSelf->__PVT__csr_need_rs1) 
                                  | (IData)(vlSelf->__PVT__inst_is_csri));
    vlSelf->__PVT__id_op_type_o = vlSelf->__PVT__inst_opcode;
    VL_ASSIGNBIT_II(4U, vlSelf->__PVT__inst_type, (
                                                   ((((IData)(vlSelf->__PVT__opcode_alui) 
                                                      | (IData)(vlSelf->__PVT__opcode_aluiw)) 
                                                     | (IData)(vlSelf->__PVT__opcode_jalr)) 
                                                    | (IData)(vlSelf->__PVT__opcode_load)) 
                                                   | (IData)(vlSelf->__PVT__inst_is_csr)));
    vlSelf->__PVT__id_w_reg_en_o = (1U & (((VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 5U) 
                                            | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 4U)) 
                                           | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 1U)) 
                                          | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 0U)));
    vlSelf->__PVT__imm = (((((VL_REPLICATE_QOI(1,(1U 
                                                  & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 4U)), 0x40U) 
                              & vlSelf->__PVT__Iimm) 
                             | (VL_REPLICATE_QOI(1,
                                                 (1U 
                                                  & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 3U)), 0x40U) 
                                & vlSelf->__PVT__Simm)) 
                            | (VL_REPLICATE_QOI(1,(1U 
                                                   & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 2U)), 0x40U) 
                               & vlSelf->__PVT__Bimm)) 
                           | (VL_REPLICATE_QOI(1,(1U 
                                                  & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 1U)), 0x40U) 
                              & vlSelf->__PVT__Uimm)) 
                          | (VL_REPLICATE_QOI(1,(1U 
                                                 & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 0U)), 0x40U) 
                             & vlSelf->__PVT__Jimm));
    VL_ASSIGNBIT_II(2U, vlSelf->__PVT__alu_operand_sel_a, 
                    (1U & (((VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 5U) 
                             | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 4U)) 
                            | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 3U)) 
                           | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 2U))));
    VL_ASSIGNBIT_II(1U, vlSelf->__PVT__alu_operand_sel_b, 
                    (1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 5U) 
                           | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 2U))));
    VL_ASSIGNBIT_II(0U, vlSelf->__PVT__alu_operand_sel_b, 
                    (1U & (((VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 4U) 
                             | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 3U)) 
                            | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 1U)) 
                           | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__inst_type), 0U))));
    vlSelf->__PVT__id_imm_o = vlSelf->__PVT__imm;
    vlSelf->__PVT__id_op_a_sel_o = vlSelf->__PVT__alu_operand_sel_a;
    vlSelf->__PVT__id_op_b_sel_o = vlSelf->__PVT__alu_operand_sel_b;
}
