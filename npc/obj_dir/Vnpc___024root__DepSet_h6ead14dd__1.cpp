// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc___024root.h"

void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ rlen, QData/*63:0*/ addr, IData/*31:0*/ inst);
void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_ifu__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_write_test_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wlen, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vnpc___024root___nba_sequent__TOP__3(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___nba_sequent__TOP__3\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hd3664b44__0;
    VlWide<3>/*95:0*/ __Vtemp_h98fb2d34__0;
    VlWide<3>/*95:0*/ __Vtemp_hd73cf306__0;
    VlWide<3>/*95:0*/ __Vtemp_h9773c22f__0;
    VlWide<3>/*95:0*/ __Vtemp_h7d614966__0;
    VlWide<3>/*95:0*/ __Vtemp_h17e4fef5__0;
    VlWide<5>/*159:0*/ __Vtemp_h767d36ad__0;
    VlWide<5>/*159:0*/ __Vtemp_h8a3f8fbf__0;
    VlWide<5>/*159:0*/ __Vtemp_h52c87e79__0;
    VlWide<5>/*159:0*/ __Vtemp_hf1ed535d__0;
    VlWide<5>/*159:0*/ __Vtemp_h86ffcfc6__0;
    VlWide<3>/*95:0*/ __Vtemp_h76123d41__0;
    VlWide<3>/*95:0*/ __Vtemp_hfea38da8__0;
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0x1cU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__28__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0x1bU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__27__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0x1aU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__26__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0x19U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__25__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0x18U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__24__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0x17U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__23__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0x16U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__22__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0x15U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__21__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0x14U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__20__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0x13U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__19__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0x12U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__18__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0x11U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__17__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0x10U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__16__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0xfU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__15__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0xeU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__14__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0xdU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__13__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0xcU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__12__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0xbU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__11__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0xaU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__10__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[9U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__9__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[8U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__8__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[7U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__7__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[6U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__6__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[5U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__5__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[4U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__4__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[3U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__3__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[2U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__2__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[1U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__1__KET____DOT__tag_vaild_ram__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file[0U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_ram__BRA__0__KET____DOT__tag_vaild_ram__DOT__qout_r;
    if (vlSelf->rst) {
        if ((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r))) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cpu_addr_dfflr__DOT__qout_r 
                = (0xfffffffffffffff8ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r);
        }
        if ((1U & (~ ((IData)(vlSelf->npc__DOT__pipeline_stall) 
                      >> 2U)))) {
            if ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))) {
                vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r = 0ULL;
                vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_ls_data_bus_dfflr__DOT__qout_r = 0U;
                vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r = 0U;
            } else {
                vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r 
                    = vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r;
                vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_ls_data_bus_dfflr__DOT__qout_r 
                    = (3U & ((1U & (- (IData)((((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x7fU 
                                                             & (3U 
                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_001)) 
                                               | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu) 
                                                  | ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7fU 
                                                                  & (0x23U 
                                                                     ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                     & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_001))))))) 
                             | ((2U & (- (IData)(((
                                                   (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x7fU 
                                                                & (3U 
                                                                   ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_010)) 
                                                  | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu) 
                                                     | ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fU 
                                                                     & (0x23U 
                                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                        & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_010))))))) 
                                | (- (IData)((((~ (IData)(
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
                                                                 ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_011)))))));
                vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r 
                    = ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu) 
                         | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu) 
                            | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu) 
                               | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu)))) 
                        << 1U) | (((~ (IData)((0U != 
                                               (0x7fU 
                                                & (3U 
                                                   ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_100)) 
                                  | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu) 
                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu))));
            }
            vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r 
                = (1U & ((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                             >> 2U)) & ((~ (IData)(
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
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
            vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__temp_id_ex_inst_bus;
        }
        if ((1U & ((~ ((IData)(vlSelf->npc__DOT__pipeline_stall) 
                       >> 2U)) & ((0U != (IData)(vlSelf->npc__DOT__id_ex_branch_bus)) 
                                  | ((~ (IData)((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (0x23U 
                                                     ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                     | (IData)(vlSelf->npc__DOT__id_ex_inst_is_csri)))))) {
            vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r 
                = ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                    ? 0ULL : (((- (QData)((IData)((0U 
                                                   != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
                               & vlSelf->npc__DOT__id_imm) 
                              | (((- (QData)((IData)(
                                                     (1U 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fU 
                                                                     & (0x23U 
                                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))))) 
                                  & vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__forward_rs2_data) 
                                 | ((- (QData)((IData)(vlSelf->npc__DOT__id_ex_inst_is_csri))) 
                                    & (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                          >> 0xfU))))))));
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__not_way_0) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__state_ena) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__state_nxt;
        }
        if ((1U & (~ ((IData)(vlSelf->npc__DOT__pipeline_stall) 
                      >> 1U)))) {
            vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r 
                = ((2U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                    ? 0ULL : vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r);
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram____pinNumber3) {
            vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i;
        }
        if ((1U & (~ (IData)(vlSelf->npc__DOT__pipeline_stall)))) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_in;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cpu_addr_dfflr__DOT__qout_r = 0ULL;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r = 0ULL;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_ls_data_bus_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r = 0ULL;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r = 1U;
        vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r = 0ULL;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r = 0x80000000ULL;
    }
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h38fdc48a__0 
        = (IData)((2ULL == (6ULL & vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_hbd221c51__0 
        = (IData)((0ULL == (6ULL & vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h731ddbdb__0 
        = (IData)((4ULL == (6ULL & vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h78a17283__0 
        = (IData)((6ULL == (6ULL & vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device 
        = (IData)((0xa0000000ULL == (0xf0000000ULL 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r)));
    vlSelf->test_ex_inst = vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_b 
        = (IData)((0U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_h 
        = (IData)((1U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_w 
        = (IData)((2U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d 
        = (IData)((3U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1fU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1eU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1dU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1cU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1bU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1aU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x19U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x18U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x17U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x16U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x15U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x14U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x13U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x12U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x11U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x10U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xfU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xeU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xdU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xcU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xbU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[9U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[8U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[7U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[6U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[5U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[4U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[3U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[2U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[1U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mepc_ena 
        = ((0x341U == (0xfffU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))) 
           & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mcause_ena 
        = ((0x342U == (0xfffU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))) 
           & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mstatus_r_ena 
        = ((0x300U == (0xfffU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))) 
           & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mtvec_r_ena 
        = ((0x305U == (0xfffU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))) 
           & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_cnt 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r) 
           & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_cnt_next 
        = (0x3fU & ((- (IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul) 
                                | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div)))) 
                    & ((IData)(1U) + (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_cnt 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r) 
           & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__add_sub_cin 
        = ((((0x20U >= (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r)) 
             & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_booth_inv_reg__DOT__qout_r 
                        >> (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r)))) 
            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul)) 
           | ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_div_cin_reg__DOT__qout_r)) 
              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div)));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_is_valid_q 
        = (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_div_q_reg__DOT__qout_r 
           & (- (QData)((IData)(vlSelf->npc__DOT__muldivout_valid))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_fix_ena 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_div_cin_reg__DOT__qout_r) 
           & (IData)(vlSelf->npc__DOT__muldivout_valid));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a 
        = (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
           & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_010 
        = ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r)) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h38fdc48a__0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_011 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h38fdc48a__0) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_001 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_hbd221c51__0) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_000 
        = ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r)) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_hbd221c51__0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_100 
        = ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r)) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h731ddbdb__0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_101 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h731ddbdb__0) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_110 
        = ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r)) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h78a17283__0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_111 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h78a17283__0) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__cpu_write_req 
        = ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device)) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_en_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
        = ((0xfffffffffffffff8ULL & ((- (QData)((IData)(
                                                        (1U 
                                                         & ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r)) 
                                                            & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device))))))) 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r)) 
           | (((- (QData)((IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r)) 
                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device))))) 
               & vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r) 
              | ((- (QData)((IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device)) 
                                     & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))))) 
                 & ((1ULL + (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r 
                             >> 3U)) << 3U))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__read_csr_data 
        = (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mstatus_r_ena))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mstatus_dfflr__DOT__qout_r) 
           | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mtvec_r_ena))) 
               & vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mtvec_dfflr__DOT__qout_r) 
              | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mepc_ena))) 
                  & vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mepc_dfflr__DOT__qout_r) 
                 | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mcause_ena))) 
                    & vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mcause_dfflr__DOT__qout_r))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_ena 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_en_dfflr__DOT__qout_r) 
           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_en_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__cpu_read_req 
        = ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device)) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_en_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__quotient 
        = ((((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_div_rs1_sign_reg__DOT__qout_r)) 
             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_div_rs2_sign_reg__DOT__qout_r)) 
            | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_op_10))
            ? (1ULL + (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_is_valid_q))
            : vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_is_valid_q);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h285f1209__0[0U] 
        = (- (IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div) 
                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_fix_ena))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h285f1209__0[1U] 
        = (- (IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div) 
                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_fix_ena))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h285f1209__0[2U] 
        = (- (IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div) 
                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_fix_ena))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h285f1209__0[3U] 
        = (- (IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div) 
                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_fix_ena))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h285f1209__0[4U] 
        = (3U & (- (IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div) 
                            | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_fix_ena)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
        = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a;
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfffffffffffffff8ULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x3fU))))))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffffffffffffffc7ULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfffffffffffffe3fULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfffffffffffff1ffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffffffffffff8fffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfffffffffffc7fffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffffffffffe3ffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffffffffff1fffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfffffffff8ffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffffffffc7ffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfffffffe3fffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfffffff1ffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffffff8fffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfffffc7fffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffffe3ffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffff1fffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfff8ffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffc7ffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfe3fffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xf1ffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0x8fffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0x7fffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)((1U & (IData)(vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in)))) 
              << 0x3fU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
        = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a);
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xfffffff8U & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((4U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                     >> 0x1bU)) | ((2U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                          >> 0x1dU)) 
                                   | (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                      >> 0x1fU))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xffffffc7U & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x20U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                        >> 0x15U)) | ((0x10U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                               >> 0x19U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xfffffe3fU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x100U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                         >> 0xfU)) | ((0x80U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                  >> 0x13U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xfffff1ffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x800U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                         >> 9U)) | ((0x400U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                 >> 0xdU)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xffff8fffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x4000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                          >> 3U)) | ((0x2000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                   >> 7U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xfffc7fffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x20000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                           << 3U)) | ((0x10000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                          >> 1U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xffe3ffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x100000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                            << 9U)) | ((0x80000U & 
                                        (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                         << 5U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xff1fffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x800000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                               << 0xbU)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xf8ffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x4000000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                 << 0x11U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xc7ffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x20000000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                  << 0x17U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0x3fffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
               << 0x1fU) | (0x40000000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                           << 0x1dU))));
    if ((0x10U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))) {
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
            = vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout;
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
            = vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout;
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
            = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a;
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
            = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a);
    }
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_tag_valid_way0_en 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                  >> 2U) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_tag_valid_way1_en 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                  >> 2U) & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                            >> 1U)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_tag_valid_way2_en 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r)) 
                 >> 2U));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_tag_valid_way3_en 
        = (IData)((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                    >> 2U) & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                              >> 3U)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_dirty_en 
        = (IData)((0U != (0xcU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__fill_done 
        = ((IData)((0U != (6U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r)))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__dcache_mem_req_dfflr__DOT__qout_r));
    vlSelf->test_ex_pc = vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_010 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_010));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_011 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_011));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_001 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_001));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_100 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_100));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_101 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_101));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_101 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_w) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_101));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_110 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_110));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_110 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_w) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_110));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h45b65299__0 
        = ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_111))) 
           & (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
              << 0x38U));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h538522a8__0 
        = ((0xc0U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_110)))) 
           | (0x80U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_111)))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_111 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_111));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_h_111 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_h) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_111));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_111 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_w) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_111));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_o 
        = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_file
        [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                           >> 4U)))];
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__tag_valid_way0_data 
        = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way0_cache_tag_valid__DOT__cache_tag_vaild_file
        [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                           >> 4U)))];
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__tag_valid_way1_data 
        = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file
        [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                           >> 4U)))];
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__tag_valid_way2_data 
        = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way2_cache_tag_valid__DOT__cache_tag_vaild_file
        [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                           >> 4U)))];
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__tag_valid_way3_data 
        = vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way3_cache_tag_valid__DOT__cache_tag_vaild_file
        [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                           >> 4U)))];
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_rs1_sign 
        = ((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_signed)) 
           & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)) 
               & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                          >> 0x3fU))) | ((IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                                                  >> 0x1fU)) 
                                         & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hceef93fd__0 
        = ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h1f58b0a1__0 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_rs2_sign 
        = (1U & ((~ ((~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_signed)))) 
                     | (IData)((2U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_signed))))) 
                 & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)) 
                     & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
                                >> 0x3fU))) | ((IData)(
                                                       (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
                                                        >> 0x1fU)) 
                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U] 
        = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U] 
        = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
           & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
                      >> 0x20U)));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U] 
        = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
           & (IData)(((~ ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r) 
                          >> 1U)) & (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
                                     >> 0x3fU))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data1 
        = (vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__read_csr_data 
           & vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT____VdfgTmp_ha455a053__0);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data2 
        = (((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r) 
                                      >> 4U))))) & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
           | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r) 
                                        >> 1U))))) 
              & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__cpu_read_req) 
              | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__cpu_write_req)));
    VL_SHIFTL_WWI(130,130,32, __Vtemp_hd3664b44__0, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_op2_reg__DOT__qout_r, 1U);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__adder_op2[0U] 
        = (((((0x20U >= (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r)) 
              & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_booth_set_reg__DOT__qout_r 
                         >> (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r))))
              ? 0U : (((0x20U >= (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r)) 
                       & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_booth_mul_reg__DOT__qout_r 
                                  >> (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r))))
                       ? __Vtemp_hd3664b44__0[0U] : 
                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_op2_reg__DOT__qout_r[0U])) 
            & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul)))) 
           | (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_op2_reg__DOT__qout_r[0U] 
              & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h285f1209__0[0U]));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__adder_op2[1U] 
        = (((((0x20U >= (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r)) 
              & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_booth_set_reg__DOT__qout_r 
                         >> (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r))))
              ? 0U : (((0x20U >= (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r)) 
                       & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_booth_mul_reg__DOT__qout_r 
                                  >> (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r))))
                       ? __Vtemp_hd3664b44__0[1U] : 
                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_op2_reg__DOT__qout_r[1U])) 
            & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul)))) 
           | (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_op2_reg__DOT__qout_r[1U] 
              & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h285f1209__0[1U]));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__adder_op2[2U] 
        = (((((0x20U >= (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r)) 
              & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_booth_set_reg__DOT__qout_r 
                         >> (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r))))
              ? 0U : (((0x20U >= (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r)) 
                       & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_booth_mul_reg__DOT__qout_r 
                                  >> (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r))))
                       ? __Vtemp_hd3664b44__0[2U] : 
                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_op2_reg__DOT__qout_r[2U])) 
            & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul)))) 
           | (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_op2_reg__DOT__qout_r[2U] 
              & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h285f1209__0[2U]));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__adder_op2[3U] 
        = (((((0x20U >= (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r)) 
              & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_booth_set_reg__DOT__qout_r 
                         >> (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r))))
              ? 0U : (((0x20U >= (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r)) 
                       & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_booth_mul_reg__DOT__qout_r 
                                  >> (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r))))
                       ? __Vtemp_hd3664b44__0[3U] : 
                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_op2_reg__DOT__qout_r[3U])) 
            & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul)))) 
           | (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_op2_reg__DOT__qout_r[3U] 
              & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h285f1209__0[3U]));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__adder_op2[4U] 
        = (3U & (((((0x20U >= (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r)) 
                    & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_booth_set_reg__DOT__qout_r 
                               >> (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r))))
                    ? 0U : (((0x20U >= (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r)) 
                             & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_booth_mul_reg__DOT__qout_r 
                                        >> (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_cnt__DOT__qout_r))))
                             ? __Vtemp_hd3664b44__0[4U]
                             : vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_op2_reg__DOT__qout_r[4U])) 
                  & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul)))) 
                 | (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_op2_reg__DOT__qout_r[4U] 
                    & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h285f1209__0[4U])));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_dirty_way0_en 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_dirty_en) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_dirty_way1_en 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_dirty_en) 
           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
              >> 1U));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_dirty_way2_en 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_dirty_en) 
           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
              >> 2U));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_dirty_way3_en 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_dirty_en) 
           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
              >> 3U));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT____VdfgTmp_h4cdd7866__0 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                  >> 3U) | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                             >> 2U) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__fill_done))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h1df5cd66__0 
        = (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_101))) 
            & (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
               << 0x28U)) | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_110))) 
                              & (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                 << 0x30U)) | vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h45b65299__0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h5f167d90__0 
        = ((0xf0U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_100)))) 
           | ((0xe0U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_101)))) 
              | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h538522a8__0)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_unalign 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_h_111) 
           | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_101) 
              | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_110) 
                 | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_111) 
                    | ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_000)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__chose_way0 
        = (IData)((0U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_o)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__chose_way1 
        = (IData)((1U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_o)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__chose_way2 
        = (IData)((2U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_o)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__chose_way3 
        = (IData)((3U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_o)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way0 
        = (1U & ((~ (IData)((0U != (0x3fffffffffffffULL 
                                    & ((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                                        >> 0xaU) ^ 
                                       (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__tag_valid_way0_data 
                                        >> 1U)))))) 
                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__tag_valid_way0_data)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way1 
        = (1U & ((~ (IData)((0U != (0x3fffffffffffffULL 
                                    & ((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                                        >> 0xaU) ^ 
                                       (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__tag_valid_way1_data 
                                        >> 1U)))))) 
                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__tag_valid_way1_data)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way2 
        = (1U & ((~ (IData)((0U != (0x3fffffffffffffULL 
                                    & ((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                                        >> 0xaU) ^ 
                                       (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__tag_valid_way2_data 
                                        >> 1U)))))) 
                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__tag_valid_way2_data)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__temp_mem_addr 
        = ((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cpu_addr_dfflr__DOT__qout_r 
            & (- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                        >> 2U)))))) 
           | (((0xfffffffffffffc00ULL & ((((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r))))) 
                                           << 0xaU) 
                                          & (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__tag_valid_way0_data 
                                             << 9U)) 
                                         | ((((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                                                                     >> 1U))))) 
                                              << 0xaU) 
                                             & (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__tag_valid_way1_data 
                                                << 9U)) 
                                            | ((((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                                                                        >> 2U))))) 
                                                 << 0xaU) 
                                                & (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__tag_valid_way2_data 
                                                   << 9U)) 
                                               | (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                                                                          >> 3U))))) 
                                                   << 0xaU) 
                                                  & (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__tag_valid_way3_data 
                                                     << 9U)))))) 
               | (QData)((IData)((0x3ffU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cpu_addr_dfflr__DOT__qout_r))))) 
              & (- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                          >> 1U)))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way3 
        = (1U & ((~ (IData)((0U != (0x3fffffffffffffULL 
                                    & ((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                                        >> 0xaU) ^ 
                                       (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__tag_valid_way3_data 
                                        >> 1U)))))) 
                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__tag_valid_way3_data)));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_rs1_sign 
        = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hceef93fd__0) 
            & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                       >> 0x3fU))) | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h1f58b0a1__0) 
                                      & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                                                 >> 0x1fU))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_rs2_sign 
        = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hceef93fd__0) 
            & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
                       >> 0x3fU))) | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h1f58b0a1__0) 
                                      & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
                                                 >> 0x1fU))));
    __Vtemp_h98fb2d34__0[0U] = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r));
    __Vtemp_h98fb2d34__0[1U] = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                                & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                                           >> 0x20U)));
    __Vtemp_h98fb2d34__0[2U] = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                                & (IData)(((~ ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r) 
                                               >> 1U)) 
                                           & (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                                              >> 0x3fU))));
    if ((0x100U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))) {
        __Vtemp_hd73cf306__0[0U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U]);
        __Vtemp_hd73cf306__0[1U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U]);
        __Vtemp_hd73cf306__0[2U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U]);
    } else {
        __Vtemp_hd73cf306__0[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U];
        __Vtemp_hd73cf306__0[1U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U];
        __Vtemp_hd73cf306__0[2U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U];
    }
    __Vtemp_h9773c22f__0[0U] = (1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                      >> 8U));
    __Vtemp_h9773c22f__0[1U] = 0U;
    __Vtemp_h9773c22f__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h7d614966__0, __Vtemp_hd73cf306__0, __Vtemp_h9773c22f__0);
    VL_ADD_W(3, __Vtemp_h17e4fef5__0, __Vtemp_h98fb2d34__0, __Vtemp_h7d614966__0);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U] 
        = __Vtemp_h17e4fef5__0[0U];
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U] 
        = __Vtemp_h17e4fef5__0[1U];
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U] 
        = (1U & __Vtemp_h17e4fef5__0[2U]);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_data 
        = (((- (QData)((IData)((0U != (0x24U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r)))))) 
            & (((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r) 
                                          >> 5U))))) 
                & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r) 
                                            >> 2U))))) 
                  & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r))) 
           | ((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT____VdfgTmp_ha455a053__0 
               & (vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data1 
                  | vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data2)) 
              | ((- (QData)((IData)((0U != (9U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r)))))) 
                 & ((~ vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data2) 
                    & vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data1))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__state_ena 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           | (0U != (0x1eU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r))));
    __Vtemp_h767d36ad__0[0U] = ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[0U] 
                                 & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul)))) 
                                | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)
                                     ? (((IData)((0x1ffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[1U])) 
                                                      << 1U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[0U])) 
                                                        >> 0x1fU)))) 
                                         & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div)))) 
                                        | (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[1U] 
                                           & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_fix_ena)))))
                                     : ((((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[2U] 
                                           << 1U) | 
                                          (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[1U] 
                                           >> 0x1fU)) 
                                         & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div)))) 
                                        | ((IData)(
                                                   (((QData)((IData)(
                                                                     vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[2U])))) 
                                           & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_fix_ena)))))) 
                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h285f1209__0[0U]));
    __Vtemp_h767d36ad__0[1U] = ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[1U] 
                                 & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul)))) 
                                | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)
                                     ? ((IData)(((0x1ffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[1U])) 
                                                      << 1U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[0U])) 
                                                        >> 0x1fU))) 
                                                 >> 0x20U)) 
                                        & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div))))
                                     : ((((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[3U] 
                                           << 1U) | 
                                          (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[2U] 
                                           >> 0x1fU)) 
                                         & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div)))) 
                                        | ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[2U]))) 
                                                    >> 0x20U)) 
                                           & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_fix_ena)))))) 
                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h285f1209__0[1U]));
    __Vtemp_h767d36ad__0[2U] = ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[2U] 
                                 & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul)))) 
                                | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)
                                     ? 0U : ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[3U] 
                                              >> 0x1fU) 
                                             & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div))))) 
                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h285f1209__0[2U]));
    __Vtemp_h767d36ad__0[3U] = (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[3U] 
                                & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul))));
    __Vtemp_h767d36ad__0[4U] = (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[4U] 
                                & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul))));
    if (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__add_sub_cin) {
        __Vtemp_h8a3f8fbf__0[0U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__adder_op2[0U]);
        __Vtemp_h8a3f8fbf__0[1U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__adder_op2[1U]);
        __Vtemp_h8a3f8fbf__0[2U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__adder_op2[2U]);
        __Vtemp_h8a3f8fbf__0[3U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__adder_op2[3U]);
        __Vtemp_h8a3f8fbf__0[4U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__adder_op2[4U]);
    } else {
        __Vtemp_h8a3f8fbf__0[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__adder_op2[0U];
        __Vtemp_h8a3f8fbf__0[1U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__adder_op2[1U];
        __Vtemp_h8a3f8fbf__0[2U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__adder_op2[2U];
        __Vtemp_h8a3f8fbf__0[3U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__adder_op2[3U];
        __Vtemp_h8a3f8fbf__0[4U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__adder_op2[4U];
    }
    __Vtemp_h52c87e79__0[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__add_sub_cin;
    __Vtemp_h52c87e79__0[1U] = 0U;
    __Vtemp_h52c87e79__0[2U] = 0U;
    __Vtemp_h52c87e79__0[3U] = 0U;
    __Vtemp_h52c87e79__0[4U] = 0U;
    VL_ADD_W(5, __Vtemp_hf1ed535d__0, __Vtemp_h8a3f8fbf__0, __Vtemp_h52c87e79__0);
    VL_ADD_W(5, __Vtemp_h86ffcfc6__0, __Vtemp_h767d36ad__0, __Vtemp_hf1ed535d__0);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[0U] 
        = __Vtemp_h86ffcfc6__0[0U];
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[1U] 
        = __Vtemp_h86ffcfc6__0[1U];
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[2U] 
        = __Vtemp_h86ffcfc6__0[2U];
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[3U] 
        = __Vtemp_h86ffcfc6__0[3U];
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[4U] 
        = (3U & __Vtemp_h86ffcfc6__0[4U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__wen 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT____VdfgTmp_h4cdd7866__0) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way1_ram__DOT__wen 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT____VdfgTmp_h4cdd7866__0) 
           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
              >> 1U));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way2_ram__DOT__wen 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT____VdfgTmp_h4cdd7866__0) 
           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
              >> 2U));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way3_ram__DOT__wen 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT____VdfgTmp_h4cdd7866__0) 
           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
              >> 3U));
    vlSelf->npc__DOT__ex_inst_is_fencei = (1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                 >> 9U));
    if (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r) {
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul_exit_ena 
            = (1U & (IData)(((0x10U == (0x30U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_cnt))) 
                             & (~ (IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_cnt))))))));
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div_exit_ena 
            = (IData)((0x1fU == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_cnt)));
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_multiplicand[0U] 
            = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r);
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_multiplicand[1U] 
            = (IData)((0x1ffffffffULL & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_rs1_sign)))));
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_multiplicand[2U] 
            = (IData)(((0x1ffffffffULL & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_rs1_sign)))) 
                       >> 0x20U));
        __Vtemp_h76123d41__0[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32;
        __Vtemp_h76123d41__0[1U] = (IData)((0x1ffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                   >> 2U) 
                                                                  & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                                     >> 0x1fU)))))));
        __Vtemp_h76123d41__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                    >> 2U) 
                                                                   & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                                      >> 0x1fU)))))) 
                                            >> 0x20U));
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul_exit_ena 
            = (1U & ((~ (IData)((0U != (0x1fU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_cnt))))) 
                     & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_cnt) 
                        >> 5U)));
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div_exit_ena 
            = (0x3fU == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_cnt));
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_multiplicand[0U] 
            = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r);
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_multiplicand[1U] 
            = (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                       >> 0x20U));
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_multiplicand[2U] 
            = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_rs1_sign;
        __Vtemp_h76123d41__0[0U] = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64);
        __Vtemp_h76123d41__0[1U] = (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                            >> 0x20U));
        __Vtemp_h76123d41__0[2U] = (IData)((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                             >> 2U) 
                                            & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                               >> 0x3fU)));
    }
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hfea38da8__0, __Vtemp_h76123d41__0, 
                   (0x3fU & ((2U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r))
                              ? (0x1fU & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r) 
                                          & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))
                              : ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r) 
                                 & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[0U] 
        = __Vtemp_hfea38da8__0[0U];
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[1U] 
        = __Vtemp_hfea38da8__0[1U];
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[2U] 
        = (1U & __Vtemp_hfea38da8__0[2U]);
    vlSelf->npc__DOT__ex_csr_rd_pc_data = ((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__read_csr_data 
                                            & (- (QData)((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r)))))) 
                                           | ((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mtvec_dfflr__DOT__qout_r 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                        >> 7U)))))) 
                                              | (vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mepc_dfflr__DOT__qout_r 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r))))))));
    vlSelf->npc__DOT__ex_ls_load_en = ((~ ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                           >> 4U)) 
                                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_ls_req_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_rd_pc_mux__DOT__csr_pc_en 
        = (IData)((0U != (0x81U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en 
        = (IData)((0U != (0x60U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__state_ena 
        = (IData)((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_tag_valid_way0_en 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                  >> 2U) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_tag_valid_way1_en 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                  >> 2U) & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                            >> 1U)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_tag_valid_way2_en 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r)) 
                 >> 2U));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_tag_valid_way3_en 
        = (IData)((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                    >> 2U) & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                              >> 3U)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_dirty_en 
        = (IData)((0U != (0xcU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__fill_done 
        = ((IData)((0U != (6U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r)))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__mem_req_ready_dfflr__DOT__qout_r));
    vlSelf->test_id_pc = vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__normal_wdata 
        = (((- (QData)((IData)((1U & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r)))))) 
            & (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_b))) 
                & (((QData)((IData)((0xffU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                    << 0x38U) | (((QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                  << 0x30U) | (((QData)((IData)(
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
               | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_h))) 
                   & (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_000))) 
                       & (((QData)((IData)((0xffffU 
                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                           << 0x30U) | (((QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                         << 0x20U) 
                                        | (((QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))))))) 
                      | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_010))) 
                          & (((QData)((IData)((0xffffU 
                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                              << 0x30U) | (((QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                            << 0x20U) 
                                           | (((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))))))) 
                         | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_100))) 
                             & (((QData)((IData)((0xffffU 
                                                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                 << 0x30U) | (((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                               << 0x20U) 
                                              | (((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))))))) 
                            | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_110))) 
                                & (((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                    << 0x30U) | (((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                  << 0x20U) 
                                                 | (((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))))))) 
                               | ((0xffffffffffff00ULL 
                                   & ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_001))) 
                                      & (((QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                          << 0x28U) 
                                         | (((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                               << 8U))))) 
                                  | ((0xffffffffffff00ULL 
                                      & ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_011))) 
                                         & (((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                             << 0x28U) 
                                            | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                  << 8U))))) 
                                     | ((0xffffffffffff00ULL 
                                         & ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_101))) 
                                            & (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                     << 8U))))) 
                                        | vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h45b65299__0)))))))) 
                  | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_w))) 
                      & (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_000))) 
                          & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)) 
                              << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                         | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_100))) 
                             & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                            | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_001))) 
                                & ((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)) 
                                   << 8U)) | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_010))) 
                                               & ((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)) 
                                                  << 0x10U)) 
                                              | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_011))) 
                                                  & ((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)) 
                                                     << 0x18U)) 
                                                 | vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h1df5cd66__0)))))) 
                     | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d))) 
                        & (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_000))) 
                            & vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r) 
                           | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_001))) 
                               & (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                  << 8U)) | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_010))) 
                                              & (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                 << 0x10U)) 
                                             | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_011))) 
                                                 & (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                    << 0x18U)) 
                                                | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_100))) 
                                                    & (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                       << 0x20U)) 
                                                   | vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h1df5cd66__0)))))))))) 
           | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))) 
              & (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_h))) 
                  & (((QData)((IData)((0xffU & (IData)(
                                                       (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                        >> 8U))))) 
                      << 0x38U) | (((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                                >> 8U))))) 
                                    << 0x30U) | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                                              >> 8U))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                                                >> 8U))))) 
                                                     << 0x20U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                                                >> 8U))))) 
                                                        << 0x18U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                                                >> 8U))))) 
                                                           << 0x10U) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                                                >> 8U))))) 
                                                              << 8U) 
                                                             | (QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                                                >> 8U))))))))))))) 
                 | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_w))) 
                     & (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_101))) 
                         & (QData)((IData)((0xffU & (IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                             >> 0x18U)))))) 
                        | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_110))) 
                            & (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                          >> 0x10U)))))) 
                           | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_111))) 
                              & (QData)((IData)((0xffffffU 
                                                 & (IData)(
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                            >> 8U))))))))) 
                    | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d))) 
                       & (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_001))) 
                           & (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                              >> 0x38U)) | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_010))) 
                                             & (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                >> 0x30U)) 
                                            | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_011))) 
                                                & (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                   >> 0x28U)) 
                                               | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_100))) 
                                                   & (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                      >> 0x20U)) 
                                                  | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_101))) 
                                                      & (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                         >> 0x18U)) 
                                                     | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_110))) 
                                                         & (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                            >> 0x10U)) 
                                                        | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_111))) 
                                                           & (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                                                              >> 8U)))))))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__wmask 
        = (0xffU & (((- (IData)((1U & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))))) 
                     & (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_b))) 
                         & ((1U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_000)))) 
                            | ((2U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_001)))) 
                               | ((4U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_010)))) 
                                  | ((8U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_011)))) 
                                     | ((0x10U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_100)))) 
                                        | ((0x20U & 
                                            (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_101)))) 
                                           | ((0x40U 
                                               & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_110)))) 
                                              | (0x80U 
                                                 & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_111)))))))))))) 
                        | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_h))) 
                            & ((3U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_000)))) 
                               | ((6U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_001)))) 
                                  | ((0xcU & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_010)))) 
                                     | ((0x18U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_011)))) 
                                        | ((0x30U & 
                                            (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_100)))) 
                                           | ((0x60U 
                                               & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_101)))) 
                                              | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h538522a8__0)))))))) 
                           | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_w))) 
                               & ((0xfU & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_000)))) 
                                  | ((0x1eU & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_001)))) 
                                     | ((0x3cU & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_010)))) 
                                        | ((0x78U & 
                                            (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_011)))) 
                                           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h5f167d90__0)))))) 
                              | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d))) 
                                 & ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_000))) 
                                    | ((0xfeU & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_001)))) 
                                       | ((0xfcU & 
                                           (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_010)))) 
                                          | ((0xf8U 
                                              & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_011)))) 
                                             | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_h5f167d90__0)))))))))) 
                    | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))) 
                       & ((1U & ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_h))) 
                                 & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_h_111))))) 
                          | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_w))) 
                              & ((1U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_101)))) 
                                 | ((3U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_110)))) 
                                    | (7U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_111))))))) 
                             | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d))) 
                                & ((1U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_001)))) 
                                   | ((3U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_010)))) 
                                      | ((7U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_011)))) 
                                         | ((0xfU & 
                                             (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_100)))) 
                                            | ((0x1fU 
                                                & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_101)))) 
                                               | ((0x3fU 
                                                   & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_110)))) 
                                                  | (0x7fU 
                                                     & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_111))))))))))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_ha5e1dba3__0 
        = ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r)) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_unalign));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__line_dirty 
        = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__chose_way0) 
            & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way0_cache_dirty__DOT__cache_tag_vaild_file
            [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                               >> 4U)))]) | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__chose_way1) 
                                              & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way1_cache_dirty__DOT__cache_tag_vaild_file
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                                                           >> 4U)))]) 
                                             | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__chose_way2) 
                                                 & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way2_cache_dirty__DOT__cache_tag_vaild_file
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                                                              >> 4U)))]) 
                                                | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__chose_way3) 
                                                   & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way3_cache_dirty__DOT__cache_tag_vaild_file
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                                                               >> 4U)))]))));
    if ((1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                >> 2U) | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_en_dfflr__DOT__qout_r) 
                          & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device))))) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test_TOP(
                                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device)))))) 
                                                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__dcache_mem_req_dfflr__DOT__qout_r)
                                                                                 ? 
                                                                                (8ULL 
                                                                                | (0xfffffffffffffff0ULL 
                                                                                & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__temp_mem_addr))
                                                                                 : 
                                                                                (0xfffffffffffffff0ULL 
                                                                                & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__temp_mem_addr))) 
                                                                                | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device))) 
                                                                                & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)), vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test__7__rdata, 8U, vlSelf->test_ls_pc, vlSelf->test_ls_inst);
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__temp_mem_data 
            = vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test__7__rdata;
    } else {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test_TOP(0x80000000ULL, vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test__8__rdata, 8U, 1ULL, 0U);
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__temp_mem_data 
            = vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test__8__rdata;
    }
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_q 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)
            ? ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div))) 
               & (QData)((IData)((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_div_q_reg__DOT__qout_r) 
                                   << 1U) | (1U & (~ 
                                                   vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[1U]))))))
            : ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div))) 
               & ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_div_q_reg__DOT__qout_r 
                   << 1U) | (QData)((IData)((1U & (~ 
                                                   vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[2U])))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way0) 
           | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way1) 
              | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way2) 
                 | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way3))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result 
        = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub) 
            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))
            ? (((- (QData)((IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U] 
                                    >> 0x1fU)))) << 0x1fU) 
               | (QData)((IData)((0x7fffffffU & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))
            : (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT____VdfgTmp_h3a483039__0 
        = (1U & ((~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                 | (~ (IData)((0U != (((QData)((IData)(
                                                       vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_is_valid_rem 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_fix_ena)
            ? (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[0U])))
            : (((((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[3U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[2U]))) 
                & (- (QData)((IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)) 
                                      & (IData)(vlSelf->npc__DOT__muldivout_valid)))))) 
               | ((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[1U])) 
                  & (- (QData)((IData)(((IData)(vlSelf->npc__DOT__muldivout_valid) 
                                        & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x3f0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x3e0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x3d0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x3c0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x3b0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x3a0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x390ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x380ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x370ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x360ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x350ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x340ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x330ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x320ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x310ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x300ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x2f0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x2e0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x2d0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x2c0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x2b0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x2a0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x290ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x280ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x270ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x260ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x250ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x240ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x230ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x220ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x210ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x200ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x1f0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x1e0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x1d0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x1c0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x1b0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x1a0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x190ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x180ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x170ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x160ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x150ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x140ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x130ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x120ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x110ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x100ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0xf0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0xe0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0xd0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0xc0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0xb0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0xa0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x90ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x80ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x70ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x60ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x50ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x40ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x30ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x20ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0x10ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena) 
           & (0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
        = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[0U];
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xfffffff8U & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((4U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                     >> 0x1bU)) | ((2U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                          >> 0x1dU)) 
                                   | (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                      >> 0x1fU))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xffffffc7U & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x20U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                        >> 0x15U)) | ((0x10U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                               >> 0x19U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xfffffe3fU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x100U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                         >> 0xfU)) | ((0x80U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                  >> 0x13U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xfffff1ffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x800U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                         >> 9U)) | ((0x400U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                 >> 0xdU)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xffff8fffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x4000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                          >> 3U)) | ((0x2000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                   >> 7U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xfffc7fffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x20000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                           << 3U)) | ((0x10000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                          >> 1U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xffe3ffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x100000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                            << 9U)) | ((0x80000U & 
                                        (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                         << 5U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xff1fffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x800000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                               << 0xbU)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xf8ffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x4000000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                 << 0x11U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xc7ffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x20000000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                  << 0x17U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0x3fffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
               << 0x1fU) | (0x40000000U & (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                           << 0x1dU))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev 
        = vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout;
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[0U])));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfffffffffffffff8ULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x3fU))))))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffffffffffffffc7ULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfffffffffffffe3fULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfffffffffffff1ffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffffffffffff8fffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfffffffffffc7fffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffffffffffe3ffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffffffffff1fffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfffffffff8ffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffffffffc7ffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfffffffe3fffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfffffff1ffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffffff8fffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfffffc7fffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffffe3ffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffff1fffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfff8ffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffc7ffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfe3fffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xf1ffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0x8fffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0x7fffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)((1U & (IData)(vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in)))) 
              << 0x3fU));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev 
        = vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_dirty_way0_en 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_dirty_en) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_dirty_way1_en 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_dirty_en) 
           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
              >> 1U));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_dirty_way2_en 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_dirty_en) 
           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
              >> 2U));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_dirty_way3_en 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_dirty_en) 
           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
              >> 3U));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT____VdfgTmp_h4cdd7866__0 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                  >> 3U) | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                             >> 2U) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__fill_done))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__wmask 
        = (((QData)((IData)((0xffU & (- (IData)((1U 
                                                 & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__wmask) 
                                                    >> 7U))))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__wmask) 
                                                          >> 6U))))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__wmask) 
                                                                          >> 5U))))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__wmask) 
                                                                           >> 4U))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__wmask) 
                                                                           >> 3U)))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__wmask) 
                                                                                >> 2U)))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__wmask) 
                                                                                >> 1U)))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__wmask))))))))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_data[0U] 
        = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cpu_write_data_dfflr__DOT__qout_r) 
            & (- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                >> 3U))))) | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__dcache_mem_dfflr__DOT__qout_r) 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                                               >> 2U))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_data[1U] 
        = (((IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cpu_write_data_dfflr__DOT__qout_r 
                     >> 0x20U)) & (- (IData)((1U & 
                                              ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                               >> 3U))))) 
           | ((IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__dcache_mem_dfflr__DOT__qout_r 
                       >> 0x20U)) & (- (IData)((1U 
                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                                   >> 2U))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_data[2U] 
        = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cpu_write_data_dfflr__DOT__qout_r) 
            & (- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                >> 3U))))) | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__temp_mem_data) 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                                               >> 2U))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_data[3U] 
        = (((IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cpu_write_data_dfflr__DOT__qout_r 
                     >> 0x20U)) & (- (IData)((1U & 
                                              ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                               >> 3U))))) 
           | ((IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__temp_mem_data 
                       >> 0x20U)) & (- (IData)((1U 
                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                                   >> 2U))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT____VdfgTmp_he65a9bb9__0 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__cpu_read_req));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way0) 
           | ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit)) 
              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__chose_way0)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way1 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way1) 
           | ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit)) 
              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__chose_way1)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way2 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way2) 
           | ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit)) 
              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__chose_way2)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way3) 
           | ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit)) 
              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__chose_way3)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i 
        = (3U & ((1U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way1)))) 
                 | ((2U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way2)))) 
                    | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way3))) 
                       | ((- (IData)((1U & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit))))) 
                          & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_o))))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__branch_en 
        = (1U & (((~ (IData)((0U != (((QData)((IData)(
                                                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))) 
                  & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                     >> 5U)) | (((0U != (((QData)((IData)(
                                                          vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))) 
                                 & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                                    >> 4U)) | ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                                                 >> 3U) 
                                                & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                               | ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                                                    >> 2U) 
                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT____VdfgTmp_h3a483039__0)) 
                                                  | ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                                                       >> 1U) 
                                                      & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                                     | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                                                        & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT____VdfgTmp_h3a483039__0))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__remainder 
        = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_op_10) 
            | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_div_rs1_sign_reg__DOT__qout_r) 
               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_div_rs2_sign_reg__DOT__qout_r)))
            ? (1ULL + (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_is_valid_rem))
            : vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_is_valid_rem);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way0_ram__DOT__wen 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT____VdfgTmp_h4cdd7866__0) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way1_ram__DOT__wen 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT____VdfgTmp_h4cdd7866__0) 
           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
              >> 1U));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way2_ram__DOT__wen 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT____VdfgTmp_h4cdd7866__0) 
           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
              >> 2U));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way3_ram__DOT__wen 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT____VdfgTmp_h4cdd7866__0) 
           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
              >> 3U));
    vlSelf->test_if_pc = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x10ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x20ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x30ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x40ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x50ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x60ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x70ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x80ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x90ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0xa0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0xb0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0xc0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0xd0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0xe0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0xf0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x100ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x110ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x120ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x130ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x140ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x150ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x160ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x170ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x180ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x190ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x1a0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x1b0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x1c0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x1d0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x1e0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x1f0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x200ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x210ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x220ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x230ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x240ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x250ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x260ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x270ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x280ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x290ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x2a0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x2b0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x2c0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x2d0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x2e0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x2f0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x300ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x310ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x320ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x330ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x340ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x350ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x360ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x370ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x380ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x390ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x3a0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x3b0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x3c0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x3d0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x3e0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram____pinNumber3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
           & (0x3f0ULL == (0x3f0ULL & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_o 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_file
        [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                           >> 4U)))];
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__tag_valid_way0_data 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way0_cache_tag_valid__DOT__cache_tag_vaild_file
        [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                           >> 4U)))];
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__tag_valid_way1_data 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_tag_valid__DOT__cache_tag_vaild_file
        [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                           >> 4U)))];
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__tag_valid_way2_data 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way2_cache_tag_valid__DOT__cache_tag_vaild_file
        [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                           >> 4U)))];
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__tag_valid_way3_data 
        = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way3_cache_tag_valid__DOT__cache_tag_vaild_file
        [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                           >> 4U)))];
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__bwen[0U] 
        = ((((- (IData)((1U & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__set_offset_dfflr__DOT__qout_r))))) 
             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__wmask)) 
            & (- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                >> 3U))))) | (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                                            >> 2U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__bwen[1U] 
        = ((((- (IData)((1U & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__set_offset_dfflr__DOT__qout_r))))) 
             & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__wmask 
                        >> 0x20U))) & (- (IData)((1U 
                                                  & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                                     >> 3U))))) 
           | (- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                               >> 2U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__bwen[2U] 
        = ((((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__set_offset_dfflr__DOT__qout_r))) 
             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__wmask)) 
            & (- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                >> 3U))))) | (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                                            >> 2U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__bwen[3U] 
        = ((((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__set_offset_dfflr__DOT__qout_r))) 
             & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__wmask 
                        >> 0x20U))) & (- (IData)((1U 
                                                  & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                                     >> 3U))))) 
           | (- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                               >> 2U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__state_nxt 
        = (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dff_ena))) 
            & ((1U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT____VdfgTmp_he65a9bb9__0)))) 
               | ((8U & (- (IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit) 
                                    & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__cpu_write_req))))) 
                  | ((2U & (- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit)) 
                                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__line_dirty))))) 
                     | (4U & (- (IData)((1U & ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit)) 
                                               & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__line_dirty))))))))))) 
           | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                 >> 1U)))) & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__fill_done)
                                               ? 4U
                                               : 2U)) 
              | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                    >> 2U)))) & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__fill_done) 
                                                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__cpu_read_req))
                                                  ? 0x10U
                                                  : 
                                                 (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__fill_done) 
                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__cpu_write_req))
                                                   ? 8U
                                                   : 4U))) 
                 | (1U & ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                            >> 4U)))) 
                          | (- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                              >> 3U)))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__cpu_data_ok 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT____VdfgTmp_he65a9bb9__0) 
                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r)) 
                 | (IData)((0U != (0x18U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__cen 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0) 
                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r)) 
                 | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way1_ram__DOT__cen 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way1) 
                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r)) 
                 | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                    >> 1U)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way2_ram__DOT__cen 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way2) 
                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r)) 
                 | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                    >> 2U)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way3_ram__DOT__cen 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way3) 
                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r)) 
                 | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                    >> 3U)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc 
        = ((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r 
            & (- (QData)((IData)(((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r)) 
                                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)))))) 
           + (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__branch_en))) 
               & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r) 
              | (4ULL & (- (QData)((IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en) 
                                            | ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__branch_en)) 
                                               & (0U 
                                                  != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r))))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__chose_way0 
        = (IData)((0U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_o)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__chose_way1 
        = (IData)((1U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_o)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__chose_way2 
        = (IData)((2U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_o)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__chose_way3 
        = (IData)((3U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_o)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way0 
        = (1U & ((~ (IData)((0U != (0x3fffffffffffffULL 
                                    & ((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                        >> 0xaU) ^ 
                                       (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__tag_valid_way0_data 
                                        >> 1U)))))) 
                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__tag_valid_way0_data)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way1 
        = (1U & ((~ (IData)((0U != (0x3fffffffffffffULL 
                                    & ((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                        >> 0xaU) ^ 
                                       (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__tag_valid_way1_data 
                                        >> 1U)))))) 
                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__tag_valid_way1_data)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way2 
        = (1U & ((~ (IData)((0U != (0x3fffffffffffffULL 
                                    & ((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                        >> 0xaU) ^ 
                                       (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__tag_valid_way2_data 
                                        >> 1U)))))) 
                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__tag_valid_way2_data)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__temp_mem_addr 
        = ((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cpu_addr_dfflr__DOT__qout_r 
            & (- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                                        >> 2U)))))) 
           | (((0xfffffffffffffc00ULL & ((((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r))))) 
                                           << 0xaU) 
                                          & (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__tag_valid_way0_data 
                                             << 9U)) 
                                         | ((((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                                                                     >> 1U))))) 
                                              << 0xaU) 
                                             & (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__tag_valid_way1_data 
                                                << 9U)) 
                                            | ((((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                                                                        >> 2U))))) 
                                                 << 0xaU) 
                                                & (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__tag_valid_way2_data 
                                                   << 9U)) 
                                               | (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                                                                          >> 3U))))) 
                                                   << 0xaU) 
                                                  & (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__tag_valid_way3_data 
                                                     << 9U)))))) 
               | (QData)((IData)((0x3ffU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cpu_addr_dfflr__DOT__qout_r))))) 
              & (- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                                          >> 1U)))))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way3 
        = (1U & ((~ (IData)((0U != (0x3fffffffffffffULL 
                                    & ((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                        >> 0xaU) ^ 
                                       (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__tag_valid_way3_data 
                                        >> 1U)))))) 
                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__tag_valid_way3_data)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_state_ena 
        = (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r)) 
            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_unalign) 
               & ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device)) 
                  & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_ena) 
                     & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__cpu_data_ok))))) 
           | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__cpu_data_ok) 
              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way0[0U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                              >> 4U)))][0U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way0[1U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                              >> 4U)))][1U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way0[2U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                              >> 4U)))][2U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way0[3U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way0_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                              >> 4U)))][3U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way1[0U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way1_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way1_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way1_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                              >> 4U)))][0U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way1[1U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way1_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way1_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way1_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                              >> 4U)))][1U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way1[2U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way1_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way1_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way1_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                              >> 4U)))][2U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way1[3U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way1_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way1_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way1_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                              >> 4U)))][3U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way2[0U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way2_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way2_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way2_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                              >> 4U)))][0U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way2[1U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way2_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way2_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way2_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                              >> 4U)))][1U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way2[2U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way2_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way2_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way2_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                              >> 4U)))][2U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way2[3U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way2_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way2_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way2_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                              >> 4U)))][3U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way3[0U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way3_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way3_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way3_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                              >> 4U)))][0U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way3[1U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way3_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way3_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way3_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                              >> 4U)))][1U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way3[2U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way3_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way3_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way3_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                              >> 4U)))][2U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way3[3U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way3_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way3_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_way3_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                              >> 4U)))][3U]);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__ex_pc_data = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_rd_pc_mux__DOT__csr_pc_en)
                                     ? vlSelf->npc__DOT__ex_csr_rd_pc_data
                                     : (((- (QData)((IData)(
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
                                                    & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result))))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__line_dirty 
        = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__chose_way0) 
            & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way0_cache_dirty__DOT__cache_tag_vaild_file
            [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                               >> 4U)))]) | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__chose_way1) 
                                              & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way1_cache_dirty__DOT__cache_tag_vaild_file
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                                           >> 4U)))]) 
                                             | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__chose_way2) 
                                                 & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way2_cache_dirty__DOT__cache_tag_vaild_file
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                                              >> 4U)))]) 
                                                | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__chose_way3) 
                                                   & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way3_cache_dirty__DOT__cache_tag_vaild_file
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                                               >> 4U)))]))));
    if ((4U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r))) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_ifu__DOT__pmem_read_TOP(
                                                                                ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__mem_req_ready_dfflr__DOT__qout_r)
                                                                                 ? 
                                                                                (8ULL 
                                                                                | (0xfffffffffffffff0ULL 
                                                                                & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__temp_mem_addr))
                                                                                 : 
                                                                                (0xfffffffffffffff0ULL 
                                                                                & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__temp_mem_addr)), vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_ifu__DOT__pmem_read__0__rdata);
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__temp_mem_data 
            = vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_ifu__DOT__pmem_read__0__rdata;
    } else {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_ifu__DOT__pmem_read_TOP(0x83008ed0ULL, vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_ifu__DOT__pmem_read__1__rdata);
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__temp_mem_data 
            = vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_ifu__DOT__pmem_read__1__rdata;
    }
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT____VdfgTmp_he65a9bb9__0 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way0) 
           | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way1) 
              | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way2) 
                 | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way3))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__temp_hit_read_data[0U] 
        = (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way0))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way0[0U]) 
           | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way1))) 
               & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way1[0U]) 
              | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way2))) 
                  & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way2[0U]) 
                 | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way3))) 
                    & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way3[0U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__temp_hit_read_data[1U] 
        = (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way0))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way0[1U]) 
           | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way1))) 
               & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way1[1U]) 
              | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way2))) 
                  & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way2[1U]) 
                 | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way3))) 
                    & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way3[1U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__temp_hit_read_data[2U] 
        = (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way0))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way0[2U]) 
           | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way1))) 
               & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way1[2U]) 
              | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way2))) 
                  & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way2[2U]) 
                 | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way3))) 
                    & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way3[2U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__temp_hit_read_data[3U] 
        = (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way0))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way0[3U]) 
           | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way1))) 
               & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way1[3U]) 
              | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way2))) 
                  & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way2[3U]) 
                 | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__hit_way3))) 
                    & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way3[3U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__mem_w_data[0U] 
        = (((- (IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r)))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way0[0U]) 
           | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                                 >> 1U)))) & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way1[0U]) 
              | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                                    >> 2U)))) & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way2[0U]) 
                 | ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                                      >> 3U)))) & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way3[0U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__mem_w_data[1U] 
        = (((- (IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r)))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way0[1U]) 
           | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                                 >> 1U)))) & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way1[1U]) 
              | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                                    >> 2U)))) & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way2[1U]) 
                 | ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                                      >> 3U)))) & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way3[1U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__mem_w_data[2U] 
        = (((- (IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r)))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way0[2U]) 
           | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                                 >> 1U)))) & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way1[2U]) 
              | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                                    >> 2U)))) & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way2[2U]) 
                 | ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                                      >> 3U)))) & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way3[2U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__mem_w_data[3U] 
        = (((- (IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r)))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way0[3U]) 
           | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                                 >> 1U)))) & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way1[3U]) 
              | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                                    >> 2U)))) & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way2[3U]) 
                 | ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__way_num_dfflr__DOT__qout_r) 
                                      >> 3U)))) & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__block_data_way3[3U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_data[0U] 
        = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cpu_write_data_dfflr__DOT__qout_r) 
            & (- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                                >> 3U))))) | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__icache_mem_dfflr__DOT__qout_r) 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                                                               >> 2U))))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_data[1U] 
        = (((IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cpu_write_data_dfflr__DOT__qout_r 
                     >> 0x20U)) & (- (IData)((1U & 
                                              ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                                               >> 3U))))) 
           | ((IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__icache_mem_dfflr__DOT__qout_r 
                       >> 0x20U)) & (- (IData)((1U 
                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                                                   >> 2U))))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_data[2U] 
        = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cpu_write_data_dfflr__DOT__qout_r) 
            & (- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                                >> 3U))))) | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__temp_mem_data) 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                                                               >> 2U))))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_data[3U] 
        = (((IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cpu_write_data_dfflr__DOT__qout_r 
                     >> 0x20U)) & (- (IData)((1U & 
                                              ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                                               >> 3U))))) 
           | ((IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__temp_mem_data 
                       >> 0x20U)) & (- (IData)((1U 
                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                                                   >> 2U))))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__state_nxt 
        = (((- (IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r)))) 
            & ((1U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT____VdfgTmp_he65a9bb9__0)))) 
               | ((2U & (- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT____VdfgTmp_he65a9bb9__0)) 
                                    & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__line_dirty))))) 
                  | (4U & (- (IData)((1U & ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT____VdfgTmp_he65a9bb9__0)) 
                                            & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__line_dirty)))))))))) 
           | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                                 >> 1U)))) & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__fill_done)
                                               ? 4U
                                               : 2U)) 
              | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                                    >> 2U)))) & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__fill_done)
                                                  ? 0x10U
                                                  : 4U)) 
                 | (1U & ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                                            >> 4U)))) 
                          | (- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                                              >> 3U)))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way0 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way0) 
           | ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT____VdfgTmp_he65a9bb9__0)) 
              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__chose_way0)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way1 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way1) 
           | ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT____VdfgTmp_he65a9bb9__0)) 
              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__chose_way1)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way2 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way2) 
           | ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT____VdfgTmp_he65a9bb9__0)) 
              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__chose_way2)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way3 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way3) 
           | ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT____VdfgTmp_he65a9bb9__0)) 
              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__chose_way3)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i 
        = (3U & ((1U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way1)))) 
                 | ((2U & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way2)))) 
                    | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way3))) 
                       | ((- (IData)((1U & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT____VdfgTmp_he65a9bb9__0))))) 
                          & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_o))))));
    if ((1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                >> 1U) | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_en_dfflr__DOT__qout_r) 
                          & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device))))) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_write_test_TOP(
                                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device)))))) 
                                                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__dcache_mem_req_dfflr__DOT__qout_r)
                                                                                 ? 
                                                                                (8ULL 
                                                                                | (0xfffffffffffffff0ULL 
                                                                                & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__temp_mem_addr))
                                                                                 : 
                                                                                (0xfffffffffffffff0ULL 
                                                                                & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__temp_mem_addr))) 
                                                                                | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device))) 
                                                                                & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr)), 
                                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device)))))) 
                                                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__dcache_mem_req_dfflr__DOT__qout_r)
                                                                                 ? 
                                                                                (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__mem_w_data[3U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__mem_w_data[2U])))
                                                                                 : 
                                                                                (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__mem_w_data[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__mem_w_data[0U]))))) 
                                                                                | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device))) 
                                                                                & (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_b))) 
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
                                                                                | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_h))) 
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
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))))))) 
                                                                                | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_w))) 
                                                                                & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                                                | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d))) 
                                                                                & vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))))), 
                                                                                ((1U 
                                                                                & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_b)))) 
                                                                                | ((2U 
                                                                                & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_h)))) 
                                                                                | ((4U 
                                                                                & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_w)))) 
                                                                                | (8U 
                                                                                & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d))))))), 0xffU);
    }
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
        = (((- (QData)((IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r))))) 
            & (((- (QData)((IData)((1U & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                                                  >> 3U)))))) 
                & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__temp_hit_read_data[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__temp_hit_read_data[2U])))) 
               | ((- (QData)((IData)((1U & (~ (IData)(
                                                      (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__waddr 
                                                       >> 3U))))))) 
                  & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__temp_hit_read_data[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__temp_hit_read_data[0U])))))) 
           | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__cache_state_dfflr__DOT__qout_r) 
                                        >> 4U))))) 
              & (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__set_offset_dfflr__DOT__qout_r))) 
                  & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__mem_w_data[3U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__mem_w_data[2U])))) 
                 | ((- (QData)((IData)((1U & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__u_ysyx_22050598_dcache__DOT__set_offset_dfflr__DOT__qout_r)))))) 
                    & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__mem_w_data[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__mem_w_data[0U])))))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way0_ram__DOT__cen 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way0) 
                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r)) 
                 | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way1_ram__DOT__cen 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way1) 
                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r)) 
                 | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                    >> 1U)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way2_ram__DOT__cen 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way2) 
                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r)) 
                 | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                    >> 2U)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way3_ram__DOT__cen 
        = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way3) 
                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r)) 
                 | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                    >> 3U)));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__not_way_0 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way0__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT____Vcellinp__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram____pinNumber3));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__idle_unalign_load_data 
        = (0xffffffffffffffULL & (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_010))) 
                                   & (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                      >> 0x10U)) | 
                                  (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_011))) 
                                    & (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                       >> 0x18U)) | 
                                   (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_100))) 
                                     & (QData)((IData)(
                                                       (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                        >> 0x20U)))) 
                                    | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_101))) 
                                        & (QData)((IData)(
                                                          (0xffffffU 
                                                           & (IData)(
                                                                     (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                      >> 0x28U)))))) 
                                       | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_101))) 
                                           & (QData)((IData)(
                                                             (0xffffffU 
                                                              & (IData)(
                                                                        (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                         >> 0x28U)))))) 
                                          | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_110))) 
                                              & (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                            >> 0x30U)))))) 
                                             | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_110))) 
                                                 & (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(
                                                                              (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                               >> 0x30U)))))) 
                                                | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_h_111))) 
                                                    & (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                                >> 0x38U)))))) 
                                                   | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_111))) 
                                                       & (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                                >> 0x38U)))))) 
                                                      | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_111))) 
                                                          & (QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                                >> 0x38U)))))) 
                                                         | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_001))) 
                                                            & (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                               >> 8U)))))))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__temp_unalign_load_data 
        = (((- (QData)((IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_h_111) 
                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))))) 
            & (QData)((IData)(((0xff00U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata) 
                                           << 8U)) 
                               | (0xffU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_load_data_dfflr__DOT__qout_r)))))) 
           | (((- (QData)((IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_101) 
                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))))) 
               & (QData)((IData)((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata) 
                                   << 0x18U) | (0xffffffU 
                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_load_data_dfflr__DOT__qout_r)))))) 
              | (((- (QData)((IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_110) 
                                      & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))))) 
                  & (QData)((IData)((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata) 
                                      << 0x10U) | (0xffffU 
                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_load_data_dfflr__DOT__qout_r)))))) 
                 | (((- (QData)((IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_w_111) 
                                         & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))))) 
                     & (QData)((IData)((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata) 
                                         << 8U) | (0xffU 
                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_load_data_dfflr__DOT__qout_r)))))) 
                    | (((- (QData)((IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_001) 
                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))))) 
                        & (((QData)((IData)((0xffU 
                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata)))) 
                            << 0x38U) | vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_load_data_dfflr__DOT__qout_r)) 
                       | (((- (QData)((IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_010) 
                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))))) 
                           & (((QData)((IData)((0xffffU 
                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata)))) 
                               << 0x30U) | (0xffffffffffffULL 
                                            & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_load_data_dfflr__DOT__qout_r))) 
                          | (((- (QData)((IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_011) 
                                                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))))) 
                              & (((QData)((IData)((0xffffffU 
                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata)))) 
                                  << 0x28U) | (0xffffffffffULL 
                                               & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_load_data_dfflr__DOT__qout_r))) 
                             | (((- (QData)((IData)(
                                                    ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_100) 
                                                     & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))))) 
                                 & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata)) 
                                     << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_load_data_dfflr__DOT__qout_r)))) 
                                | (((- (QData)((IData)(
                                                       ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_101) 
                                                        & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))))) 
                                    & ((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                        << 0x18U) | (QData)((IData)(
                                                                    (0xffffffU 
                                                                     & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_load_data_dfflr__DOT__qout_r)))))) 
                                   | (((- (QData)((IData)(
                                                          ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_110) 
                                                           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))))) 
                                       & ((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_load_data_dfflr__DOT__qout_r)))))) 
                                      | ((- (QData)((IData)(
                                                            ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_d_111) 
                                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))))) 
                                         & ((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                             << 8U) 
                                            | (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__unalign_load_data_dfflr__DOT__qout_r))))))))))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
        = (((- (QData)((IData)((1U & ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_unalign)) 
                                      & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device))))))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata) 
           | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device))) 
              & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__temp_mem_data));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way0[0U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way0_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way0_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way0_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                              >> 4U)))][0U]);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way0[1U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way0_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way0_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way0_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                              >> 4U)))][1U]);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way0[2U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way0_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way0_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way0_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                              >> 4U)))][2U]);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way0[3U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way0_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way0_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way0_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                              >> 4U)))][3U]);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way1[0U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way1_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way1_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way1_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                              >> 4U)))][0U]);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way1[1U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way1_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way1_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way1_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                              >> 4U)))][1U]);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way1[2U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way1_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way1_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way1_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                              >> 4U)))][2U]);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way1[3U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way1_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way1_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way1_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                              >> 4U)))][3U]);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way2[0U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way2_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way2_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way2_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                              >> 4U)))][0U]);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way2[1U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way2_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way2_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way2_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                              >> 4U)))][1U]);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way2[2U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way2_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way2_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way2_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                              >> 4U)))][2U]);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way2[3U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way2_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way2_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way2_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                              >> 4U)))][3U]);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way3[0U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way3_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way3_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way3_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                              >> 4U)))][0U]);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way3[1U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way3_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way3_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way3_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                              >> 4U)))][1U]);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way3[2U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way3_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way3_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way3_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                              >> 4U)))][2U]);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way3[3U] 
        = ((- (IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way3_ram__DOT__wen)) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way3_ram__DOT__cen)))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_way3_ram__DOT__ram
           [(0x3fU & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                              >> 4U)))][3U]);
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__0__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__1__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__2__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__3__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__4__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__5__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__6__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__7__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__8__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__9__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__10__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__11__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__12__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__13__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__14__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__15__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__16__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__17__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__18__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__19__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__20__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__21__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__22__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__23__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__24__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__25__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__26__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__27__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__28__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__29__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__30__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__31__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__32__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__33__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__34__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__35__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__36__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__37__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__38__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__39__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__40__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__41__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__42__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__43__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__44__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__45__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__46__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__47__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__48__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__49__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__50__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__51__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__52__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__53__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__54__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__55__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__56__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__57__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__58__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__59__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__60__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__61__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__62__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__not_way_1 
        = ((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__u_cache_lru_reg_way1__DOT__qout_r) 
                   ^ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_i))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__u_cache_lru__DOT__cache_lru_ram__BRA__63__KET____DOT__set_cache_ram__DOT__not_way_0));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_load_data_w 
        = (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_000))) 
            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata)) 
           | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_001))) 
               & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                          >> 8U))) | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_010))) 
                                       & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                                                  >> 0x10U))) 
                                      | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_011))) 
                                          & (IData)(
                                                    (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                                                     >> 0x18U))) 
                                         | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_100))) 
                                            & (IData)(
                                                      (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                                                       >> 0x20U)))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_load_data_h 
        = (0xffffU & (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_000))) 
                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata)) 
                      | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_001))) 
                          & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                                     >> 8U))) | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_010))) 
                                                  & (IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                                                             >> 0x10U))) 
                                                 | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_011))) 
                                                     & (IData)(
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                                                                >> 0x18U))) 
                                                    | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_100))) 
                                                        & (IData)(
                                                                  (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                                                                   >> 0x20U))) 
                                                       | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_101))) 
                                                           & (IData)(
                                                                     (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                                                                      >> 0x28U))) 
                                                          | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_110))) 
                                                             & (IData)(
                                                                       (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                                                                        >> 0x30U))))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_load_data_b 
        = (0xffU & (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_000))) 
                     & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata)) 
                    | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_001))) 
                        & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                                   >> 8U))) | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_010))) 
                                                & (IData)(
                                                          (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                                                           >> 0x10U))) 
                                               | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_011))) 
                                                   & (IData)(
                                                             (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                                                              >> 0x18U))) 
                                                  | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_100))) 
                                                      & (IData)(
                                                                (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                                                                 >> 0x20U))) 
                                                     | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_101))) 
                                                         & (IData)(
                                                                   (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                                                                    >> 0x28U))) 
                                                        | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_110))) 
                                                            & (IData)(
                                                                      (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                                                                       >> 0x30U))) 
                                                           | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__loc_111))) 
                                                              & (IData)(
                                                                        (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata 
                                                                         >> 0x38U)))))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__mem_w_data[0U] 
        = (((- (IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r)))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way0[0U]) 
           | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                                 >> 1U)))) & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way1[0U]) 
              | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                                    >> 2U)))) & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way2[0U]) 
                 | ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                                      >> 3U)))) & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way3[0U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__mem_w_data[1U] 
        = (((- (IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r)))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way0[1U]) 
           | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                                 >> 1U)))) & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way1[1U]) 
              | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                                    >> 2U)))) & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way2[1U]) 
                 | ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                                      >> 3U)))) & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way3[1U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__mem_w_data[2U] 
        = (((- (IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r)))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way0[2U]) 
           | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                                 >> 1U)))) & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way1[2U]) 
              | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                                    >> 2U)))) & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way2[2U]) 
                 | ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                                      >> 3U)))) & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way3[2U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__mem_w_data[3U] 
        = (((- (IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r)))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way0[3U]) 
           | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                                 >> 1U)))) & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way1[3U]) 
              | (((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                                    >> 2U)))) & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way2[3U]) 
                 | ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__way_num_dfflr__DOT__qout_r) 
                                      >> 3U)))) & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way3[3U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__temp_hit_read_data[0U] 
        = (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way0))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way0[0U]) 
           | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way1))) 
               & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way1[0U]) 
              | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way2))) 
                  & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way2[0U]) 
                 | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way3))) 
                    & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way3[0U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__temp_hit_read_data[1U] 
        = (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way0))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way0[1U]) 
           | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way1))) 
               & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way1[1U]) 
              | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way2))) 
                  & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way2[1U]) 
                 | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way3))) 
                    & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way3[1U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__temp_hit_read_data[2U] 
        = (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way0))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way0[2U]) 
           | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way1))) 
               & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way1[2U]) 
              | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way2))) 
                  & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way2[2U]) 
                 | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way3))) 
                    & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way3[2U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__temp_hit_read_data[3U] 
        = (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way0))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way0[3U]) 
           | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way1))) 
               & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way1[3U]) 
              | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way2))) 
                  & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way2[3U]) 
                 | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__hit_way3))) 
                    & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__block_data_way3[3U]))));
    vlSelf->npc__DOT__ls_wb_load_data = (((- (QData)((IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r)))))) 
                                          & (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_b))) 
                                              & (((- (QData)((IData)(
                                                                     ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r)) 
                                                                      & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_load_data_b) 
                                                                         >> 7U))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_load_data_b)))) 
                                             | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_h))) 
                                                 & (((- (QData)((IData)(
                                                                        ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r)) 
                                                                         & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_load_data_h) 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_load_data_h)))) 
                                                | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_w))) 
                                                    & (((QData)((IData)(
                                                                        (- (IData)(
                                                                                ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r)) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_load_data_w 
                                                                                >> 0x1fU)))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_load_data_w)))) 
                                                   | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d))) 
                                                      & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__align_rdata))))) 
                                         | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))) 
                                            & (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_h))) 
                                                & (((- (QData)((IData)(
                                                                       (1U 
                                                                        & ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r)) 
                                                                           & (IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__temp_unalign_load_data 
                                                                                >> 0xfU))))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__temp_unalign_load_data)))))) 
                                               | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_w))) 
                                                   & (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r)) 
                                                                                & (IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__temp_unalign_load_data 
                                                                                >> 0x1fU)))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__temp_unalign_load_data)))) 
                                                  | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__size_d))) 
                                                     & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__temp_unalign_load_data)))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__rdata 
        = (((- (QData)((IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r))))) 
            & (((- (QData)((IData)((1U & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                                  >> 3U)))))) 
                & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__temp_hit_read_data[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__temp_hit_read_data[2U])))) 
               | ((- (QData)((IData)((1U & (~ (IData)(
                                                      (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                                       >> 3U))))))) 
                  & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__temp_hit_read_data[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__temp_hit_read_data[0U])))))) 
           | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r) 
                                        >> 4U))))) 
              & (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__set_offset_dfflr__DOT__qout_r))) 
                  & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__mem_w_data[3U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__mem_w_data[2U])))) 
                 | ((- (QData)((IData)((1U & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__set_offset_dfflr__DOT__qout_r)))))) 
                    & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__mem_w_data[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__mem_w_data[0U])))))));
}

void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_EBREAK__DOT__ebreak_TOP(QData/*63:0*/ ebreak_a0);

VL_INLINE_OPT void Vnpc___024root___nba_sequent__TOP__4(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___nba_sequent__TOP__4\n"); );
    // Body
    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_EBREAK__DOT__ebreak_TOP(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r);
}

VL_INLINE_OPT void Vnpc___024root___nba_sequent__TOP__5(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___nba_sequent__TOP__5\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h9049ee16__0;
    VlWide<5>/*159:0*/ __Vtemp_h14b001f1__0;
    VlWide<5>/*159:0*/ __Vtemp_hd3664bad__0;
    // Body
    if (vlSelf->rst) {
        if (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
             & (0xaU == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r)))) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
        if ((1U & (~ ((IData)(vlSelf->npc__DOT__pipeline_stall) 
                      >> 4U)))) {
            vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ls_rd_data;
            vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r;
            vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r;
        }
        if ((1U & (~ ((IData)(vlSelf->npc__DOT__pipeline_stall) 
                      >> 3U)))) {
            vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r;
            vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r;
        }
        if ((1U & (~ ((IData)(vlSelf->npc__DOT__pipeline_stall) 
                      >> 2U)))) {
            vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r 
                = ((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                       >> 2U)) & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hd2b65eb3__0) 
                                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_he21f0188__0)));
            vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r 
                = ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                    ? 0U : (0x1fU & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                     >> 7U)));
        }
        if ((1U & (~ ((IData)(vlSelf->npc__DOT__pipeline_stall) 
                      >> 1U)))) {
            vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                = ((2U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                    ? 0x13U : vlSelf->test_if_inst);
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
        vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r = 0ULL;
        vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r = 0U;
    }
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xaU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__ls_rd_data = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_en_dfflr__DOT__qout_r)
                                     ? vlSelf->npc__DOT__ls_wb_load_data
                                     : vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r);
    vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT____VdfgTmp_hf02178dc__0 
        = ((~ (IData)(vlSelf->npc__DOT__ex_ls_load_en)) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r));
    vlSelf->npc__DOT__ex_ls_alu_rd_ls_data = ((((- (QData)((IData)(
                                                                   ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub) 
                                                                    & ((~ 
                                                                        ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                         >> 3U)) 
                                                                       & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))))))) 
                                                & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                                               | (((- (QData)((IData)(
                                                                      ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub) 
                                                                       & ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)) 
                                                                          & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                             >> 3U)))))) 
                                                   & (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])))) 
                                                  | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))) 
                                                      & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc) 
                                                     | (((- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                                >> 7U))))) 
                                                         & (((- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r) 
                                                                                >> 4U))))) 
                                                             & (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[0U])))) 
                                                            | (((- (QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xeU 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r)))))) 
                                                                & (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[2U])))) 
                                                               | ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r))))) 
                                                                  & (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[0U] 
                                                                                >> 0x1fU))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[0U]))))))) 
                                                        | (((- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                                >> 6U))))) 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)
                                                                ? 
                                                               (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__quotient 
                                                                                >> 0x1fU))))))) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__quotient)))
                                                                : vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__quotient)) 
                                                           | (((- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                                >> 5U))))) 
                                                               & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__remainder 
                                                                                >> 0x1fU))))))) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__remainder)))
                                                                   : vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__remainder)) 
                                                              | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift))) 
                                                                  & (((- (QData)((IData)(
                                                                                (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                                >> 4U) 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))) 
                                                                      & (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev 
                                                                                >> 0x1fU))))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev)))) 
                                                                     | (((- (QData)((IData)(
                                                                                (1U 
                                                                                & ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)) 
                                                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                                >> 4U)))))) 
                                                                         & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev) 
                                                                        | ((- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                                >> 3U))))) 
                                                                           & (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[1U])) 
                                                                               << 0x20U) 
                                                                              | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[0U]))))))) 
                                                                 | (((- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                                >> 2U))))) 
                                                                     & (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                                                                        | vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)) 
                                                                    | (((- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                                >> 1U))))) 
                                                                        & (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                                                                           & ((- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                                >> 1U))))) 
                                                                              & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))) 
                                                                       | ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))))) 
                                                                          & (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))))) 
                                                                              & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
                                                                             ^ 
                                                                             ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))))) 
                                                                              & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)))))))))))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                        >> 4U) 
                                                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r)))))));
    vlSelf->npc__DOT__ex_rd_data = ((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r))
                                     ? vlSelf->npc__DOT__ex_csr_rd_pc_data
                                     : vlSelf->npc__DOT__ex_ls_alu_rd_ls_data);
    vlSelf->test_if_inst = (((- (IData)((1U & (~ (IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                                          >> 2U)))))) 
                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__rdata)) 
                            | ((- (IData)((1U & (IData)(
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                                         >> 2U))))) 
                               & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__rdata 
                                          >> 0x20U))));
    vlSelf->test_id_inst = vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h94f5d679__0 
        = (1U & ((~ (IData)((0U != (0x7fU & (0x37U 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 | (~ (IData)((0U != (0x7fU & (0x17U 
                                               ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h192224e7__0 
        = (1U & ((~ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                     >> 0x18U)) & (~ (IData)((0U != 
                                              (0xc00000U 
                                               & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hddf70a56__0 
        = (1U & ((~ (IData)((0U != (0x1fU & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                             >> 0x14U))))) 
                 & (~ (IData)((0U != (0x1fU & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                               >> 7U)))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func6_010000 
        = (IData)((0x40000000U == (0xfc000000U & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hfc4903d4__0 
        = (IData)((0U == (0xc0000000U & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h54ad921d__0 
        = (IData)((0U == (0x6000U & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h5a7fce99__0 
        = (IData)((0x4000U == (0x6000U & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h9cbdbee1__0 
        = (1U & ((~ (IData)((0U != (0x7fU & (0x33U 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 | (~ (IData)((0U != (0x7fU & (0x3bU 
                                               ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hbcb0bc3c__0 
        = (IData)((0x6000U == (0x6000U & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h40955298__0 
        = (IData)((0x2000U == (0x6000U & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_he21f0188__0 
        = (1U & ((~ (IData)((0U != (0x7fU & (0x6fU 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h94f5d679__0)));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0100000 
        = ((~ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
               >> 0x19U)) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func6_010000));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0000001 
        = (IData)(((0x2000000U == (0x3e000000U & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)) 
                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hfc4903d4__0)));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_000 
        = ((~ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
               >> 0xcU)) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h54ad921d__0));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_001 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h54ad921d__0) 
           & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
              >> 0xcU));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_100 
        = ((~ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
               >> 0xcU)) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h5a7fce99__0));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_101 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h5a7fce99__0) 
           & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
              >> 0xcU));
    vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT____VdfgTmp_h896c8c9f__0 
        = (1U & ((~ (IData)((0U != (0x7fU & (0x63U 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h9cbdbee1__0)));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_111 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hbcb0bc3c__0) 
           & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
              >> 0xcU));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_110 
        = ((~ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
               >> 0xcU)) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hbcb0bc3c__0));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_010 
        = ((~ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
               >> 0xcU)) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h40955298__0));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_011 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h40955298__0) 
           & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
              >> 0xcU));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h7a2f2ab2__0 
        = ((~ (IData)((0U != (0x7fU & (0x73U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_000));
    vlSelf->npc__DOT__id_ex_inst_is_jalr = ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x67U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_000));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hfd90ed7e__0 
        = ((~ (IData)((0U != (0x7fU & (0x33U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_000));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h46fd2716__0 
        = ((~ (IData)((0U != (0x7fU & (0x3bU ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_000));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw 
        = ((~ (IData)((0U != (0x7fU & (0x3bU ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & ((~ (IData)((0U != (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                 >> 0x19U)))) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_001)));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hf985e437__0 
        = ((~ (IData)((0U != (0x7fU & (0x33U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_001));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h98ab03f3__0 
        = ((~ (IData)((0U != (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                              >> 0x1aU)))) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_001));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw 
        = ((~ (IData)((0U != (0x7fU & (0x73U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_001));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw 
        = ((~ (IData)((0U != (0x7fU & (0x3bU ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_100) 
              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0000001)));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hf7011bf2__0 
        = ((~ (IData)((0U != (0x7fU & (0x33U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_100));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu 
        = ((~ (IData)((0U != (0x7fU & (3U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_101));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h5e5d771c__0 
        = ((~ (IData)((0U != (0x7fU & (0x33U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_101));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h1bbea5c8__0 
        = ((~ (IData)((0U != (0x7fU & (0x13U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_101));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h52b499f6__0 
        = ((~ (IData)((0U != (0x7fU & (0x1bU ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_101));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hfb369d34__0 
        = ((~ (IData)((0U != (0x7fU & (0x3bU ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_101));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi 
        = ((~ (IData)((0U != (0x7fU & (0x73U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_101));
    vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild 
        = (0x1fU & ((vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                     >> 0x14U) & (- (IData)((1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x7fU 
                                                                & (0x23U 
                                                                   ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                   | (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT____VdfgTmp_h896c8c9f__0)))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu 
        = ((~ (IData)((0U != (0x7fU & (0x63U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_111));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h8167181c__0 
        = ((~ (IData)((0U != (0x7fU & (0x33U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_111));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci 
        = ((~ (IData)((0U != (0x7fU & (0x73U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_111));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu 
        = ((~ (IData)((0U != (0x7fU & (3U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_110));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu 
        = ((~ (IData)((0U != (0x7fU & (0x63U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_110));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw 
        = ((~ (IData)((0U != (0x7fU & (0x3bU ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_110) 
              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0000001)));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h55900b59__0 
        = ((~ (IData)((0U != (0x7fU & (0x33U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_110));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi 
        = ((~ (IData)((0U != (0x7fU & (0x73U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_110));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_he9ffaffd__0 
        = ((~ (IData)((0U != (0x7fU & (0x33U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_010));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs 
        = ((~ (IData)((0U != (0x7fU & (0x73U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_010));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu 
        = ((~ (IData)((0U != (0x7fU & (0x13U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_011));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h2487f35f__0 
        = ((~ (IData)((0U != (0x7fU & (0x33U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_011));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc 
        = ((~ (IData)((0U != (0x7fU & (0x73U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_011));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h0e7c522c__0 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h7a2f2ab2__0) 
           & ((~ (IData)((0U != (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                 >> 0x19U)))) & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                >> 0xfU)))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hfd90ed7e__0) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0000001));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h46fd2716__0) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0000001));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hf985e437__0) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0000001));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw 
        = ((~ (IData)((0U != (0x7fU & (0x1bU ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h98ab03f3__0));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hf7011bf2__0) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0000001));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw 
        = ((~ (IData)((0U != (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                              >> 0x1aU)))) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h52b499f6__0));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h52b499f6__0) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func6_010000));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw 
        = ((~ (IData)((0U != (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                              >> 0x19U)))) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hfb369d34__0));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hfb369d34__0) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0100000));
    vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT____VdfgTmp_he3e1cc5d__0 
        = ((~ (IData)((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                              ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild))))) 
           & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__id_ex_branch_bus = ((((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x63U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_000)) 
                                           << 5U) | 
                                          ((((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x63U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_001)) 
                                            << 4U) 
                                           | ((((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x7fU 
                                                             & (0x63U 
                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_100)) 
                                               << 3U) 
                                              | ((((~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x7fU 
                                                                & (0x63U 
                                                                   ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_101)) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h55900b59__0) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0000001));
    vlSelf->npc__DOT__id_ex_inst_is_csri = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi) 
                                            | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi) 
                                               | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci)));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_he9ffaffd__0) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0000001));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h2487f35f__0) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0000001));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu 
        = ((~ (IData)((0U != (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                              >> 0x19U)))) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h2487f35f__0));
    vlSelf->npc__DOT__id_ex_inst_is_srax = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h5e5d771c__0) 
                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0100000)) 
                                            | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h1bbea5c8__0) 
                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func6_010000)) 
                                               | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw) 
                                                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw))));
    vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__forward_rs2_data 
        = (((IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT____VdfgTmp_hf02178dc__0) 
            & (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT____VdfgTmp_he3e1cc5d__0))
            ? vlSelf->npc__DOT__ex_rd_data : (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r) 
                                               & ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r) 
                                                               ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild))))) 
                                                  & (0U 
                                                     != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r))))
                                               ? vlSelf->npc__DOT__ls_rd_data
                                               : (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                                                   & ((~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  ((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r) 
                                                                   ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild))))) 
                                                      & (0U 
                                                         != (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))))
                                                   ? vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r
                                                   : 
                                                  vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                      >> 0x14U))])));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_ha277bd0a__0 
        = (1U & ((~ (IData)((0U != (0x7fU & (0x13U 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 | ((~ (IData)((0U != (0x7fU & (0x1bU 
                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                    | ((~ (IData)((0U != (0x7fU & (0x67U 
                                                   ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                       | ((~ (IData)((0U != (0x7fU 
                                             & (3U 
                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                          | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                             | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs) 
                                | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc) 
                                   | (IData)(vlSelf->npc__DOT__id_ex_inst_is_csri)))))))));
    vlSelf->npc__DOT__id_ex_inst_is_set = (((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0x19U)))) 
                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_he9ffaffd__0)) 
                                           | (((~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fU 
                                                            & (0x13U 
                                                               ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_010)) 
                                              | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu) 
                                                 | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu))));
    vlSelf->npc__DOT__id_imm = (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_ha277bd0a__0))) 
                                 & (((- (QData)((IData)(
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0x1fU)))) 
                                     << 0xbU) | (QData)((IData)(
                                                                (0x7ffU 
                                                                 & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                    >> 0x14U)))))) 
                                | (((- (QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x7fU 
                                                                       & (0x23U 
                                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))))) 
                                    & (((- (QData)((IData)(
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x1fU)))) 
                                        << 0xbU) | (QData)((IData)(
                                                                   ((0x7e0U 
                                                                     & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                          >> 7U))))))) 
                                   | (((- (QData)((IData)(
                                                          (1U 
                                                           & (~ (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x7fU 
                                                                          & (0x63U 
                                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))))) 
                                       & (((- (QData)((IData)(
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0x1fU)))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            ((0x800U 
                                                              & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                 << 4U)) 
                                                             | ((0x7e0U 
                                                                 & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                    >> 0x14U)) 
                                                                | (0x1eU 
                                                                   & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                      >> 7U)))))))) 
                                      | (((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h94f5d679__0))) 
                                          & (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (0xfffff000U 
                                                                & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & (~ (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x7fU 
                                                                               & (0x6fU 
                                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))))) 
                                            & (((- (QData)((IData)(
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
                                                                           >> 0x14U))))))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hd2b65eb3__0 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h9cbdbee1__0) 
           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_ha277bd0a__0));
    vlSelf->npc__DOT__id_ex_op_type = ((0x200U & ((
                                                   ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                 >> 0x19U)))) 
                                                    & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hfd90ed7e__0)) 
                                                   | (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7fU 
                                                                    & (0x13U 
                                                                       ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_000)) 
                                                      | (((~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x7fU 
                                                                       & (0x1bU 
                                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                          & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_000)) 
                                                         | (((~ (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                          >> 0x19U)))) 
                                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h46fd2716__0)) 
                                                            | ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x7fU 
                                                                            & (0x17U 
                                                                               ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                               | ((IData)(vlSelf->npc__DOT__id_ex_inst_is_jalr) 
                                                                  | ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (0x6fU 
                                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                                     | ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (0x23U 
                                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                                        | ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (3U 
                                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                                           | (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (0x37U 
                                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))))))))))) 
                                                  << 9U)) 
                                       | ((0x100U & 
                                           ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hfd90ed7e__0) 
                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0100000)) 
                                             | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h46fd2716__0) 
                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0100000)) 
                                                | ((~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x7fU 
                                                                & (0x63U 
                                                                   ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                   | (IData)(vlSelf->npc__DOT__id_ex_inst_is_set)))) 
                                            << 8U)) 
                                          | ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul) 
                                               | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh) 
                                                  | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu) 
                                                     | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu) 
                                                        | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw))))) 
                                              << 7U) 
                                             | ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div) 
                                                  | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h5e5d771c__0) 
                                                      & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0000001)) 
                                                     | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hfb369d34__0) 
                                                         & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0000001)) 
                                                        | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw)))) 
                                                 << 6U) 
                                                | ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem) 
                                                     | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h8167181c__0) 
                                                         & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0000001)) 
                                                        | (((~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x7fU 
                                                                         & (0x3bU 
                                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_111) 
                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func7_0000001))) 
                                                           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw)))) 
                                                    << 5U) 
                                                   | (((((~ (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                      >> 0x19U)))) 
                                                         & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hf985e437__0)) 
                                                        | (((~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x7fU 
                                                                         & (0x13U 
                                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h98ab03f3__0)) 
                                                           | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw) 
                                                              | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw)))) 
                                                       << 4U) 
                                                      | ((((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                                                           | (((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                            >> 0x19U)))) 
                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h5e5d771c__0)) 
                                                              | (((~ (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                               >> 0x1aU)))) 
                                                                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h1bbea5c8__0)) 
                                                                 | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw) 
                                                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw))))) 
                                                          << 3U) 
                                                         | (((((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                            >> 0x19U)))) 
                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h55900b59__0)) 
                                                              | ((~ (IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x7fU 
                                                                              & (0x13U 
                                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_110))) 
                                                             << 2U) 
                                                            | (((((~ (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                               >> 0x19U)))) 
                                                                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h8167181c__0)) 
                                                                 | ((~ (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (0x13U 
                                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                                    & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_111))) 
                                                                << 1U) 
                                                               | (((~ (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 0x19U)))) 
                                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hf7011bf2__0)) 
                                                                  | ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (0x13U 
                                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                                     & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_100))))))))))));
    vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT____VdfgTmp_h96f3168c__0 
        = (1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hd2b65eb3__0) 
                 | ((~ (IData)((0U != (0x7fU & (0x63U 
                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                    | (~ (IData)((0U != (0x7fU & (0x23U 
                                                  ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
    vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild 
        = (0x1fU & ((vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                     >> 0xfU) & (- (IData)((IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT____VdfgTmp_h96f3168c__0)))));
    vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT____VdfgTmp_hf6acb3f9__0 
        = ((~ (IData)((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                              ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild))))) 
           & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__forward_load_stall = ((IData)(vlSelf->npc__DOT__ex_ls_load_en) 
                                            & ((IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT____VdfgTmp_hf6acb3f9__0) 
                                               | (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT____VdfgTmp_he3e1cc5d__0)));
    vlSelf->npc__DOT__pipeline_stall = (0x1fU & ((3U 
                                                  & (- (IData)((IData)(vlSelf->npc__DOT__forward_load_stall)))) 
                                                 | (- (IData)(
                                                              (1U 
                                                               & (((~ (IData)(vlSelf->npc__DOT__muldivout_valid)) 
                                                                   & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                       >> 7U) 
                                                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_valid))) 
                                                                  | ((~ 
                                                                      (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT____VdfgTmp_he65a9bb9__0) 
                                                                        & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r)) 
                                                                       | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__u_ysyx_22050598_icache__DOT__cache_state_dfflr__DOT__qout_r)))))) 
                                                                     | (((((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device)) 
                                                                           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT____VdfgTmp_ha5e1dba3__0)) 
                                                                          | ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_unalign)) 
                                                                             & ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r)) 
                                                                                & ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__addr_is_device)) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__cpu_data_ok)))))) 
                                                                         & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_ena)) 
                                                                        | ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__cpu_data_ok)) 
                                                                           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__lsu_fsm_dfflr__DOT__qout_r))))))))));
    vlSelf->npc__DOT__pipeline_flush = (7U & ((4U & 
                                               (- (IData)((IData)(vlSelf->npc__DOT__forward_load_stall)))) 
                                              | (- (IData)(
                                                           (0U 
                                                            != 
                                                            ((vlSelf->npc__DOT__ex_pc_data 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (((0U 
                                                                                != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r)) 
                                                                                | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                                >> 6U)) 
                                                                                | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_rd_pc_mux__DOT__csr_pc_en))))))) 
                                                             ^ 
                                                             (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (((0U 
                                                                                != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r)) 
                                                                                | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                                >> 6U)) 
                                                                                | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_rd_pc_mux__DOT__csr_pc_en)))))))))))));
    vlSelf->npc_stall = (0x1fU == (IData)(vlSelf->npc__DOT__pipeline_stall));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_in 
        = ((1U & (IData)(vlSelf->npc__DOT__pipeline_flush))
            ? vlSelf->npc__DOT__ex_pc_data : (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                              + (((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->test_if_inst)) 
                                                  | (IData)(
                                                            (0x80000063U 
                                                             == 
                                                             (0x8000007fU 
                                                              & vlSelf->test_if_inst))))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (0x6fU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->test_if_inst))))) 
                                                   & (((- (QData)((IData)(
                                                                          (vlSelf->test_if_inst 
                                                                           >> 0x1fU)))) 
                                                       << 0x14U) 
                                                      | (QData)((IData)(
                                                                        ((0xff000U 
                                                                          & vlSelf->test_if_inst) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->test_if_inst 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->test_if_inst 
                                                                                >> 0x14U)))))))) 
                                                  | ((- (QData)((IData)(
                                                                        (0x63U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->test_if_inst))))) 
                                                     & (((- (QData)((IData)(
                                                                            (vlSelf->test_if_inst 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->test_if_inst 
                                                                               << 4U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->test_if_inst 
                                                                                >> 0x14U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->test_if_inst 
                                                                                >> 7U)))))))))
                                                  : 4ULL)));
    vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__temp_id_ex_inst_bus 
        = ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
            ? 0U : ((((~ (IData)((0U != (0x7fU & (0xfU 
                                                  ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                      & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func3_001) 
                         & ((~ (IData)((0U != (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                               >> 0x19U)))) 
                            & ((~ (IData)((0U != (0x1fU 
                                                  & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                     >> 0xfU))))) 
                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hddf70a56__0))))) 
                     << 9U) | ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h0e7c522c__0) 
                                 & ((~ (IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                    >> 7U))))) 
                                    & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h192224e7__0) 
                                       & (IData)((0x100000U 
                                                  == 
                                                  (0x300000U 
                                                   & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                                << 8U) | ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h0e7c522c__0) 
                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hddf70a56__0)) 
                                           << 7U) | 
                                          (((IData)(vlSelf->npc__DOT__id_ex_inst_is_jalr) 
                                            << 6U) 
                                           | ((0x20U 
                                               & ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (0x6fU 
                                                                  ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7fU 
                                                                  & (0x23U 
                                                                     ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                     << 4U)) 
                                                 | (((IData)(vlSelf->npc__DOT__id_ex_inst_is_set) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw) 
                                                            | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw) 
                                                               | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw))) 
                                                           << 1U) 
                                                          | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h7a2f2ab2__0) 
                                                             & ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_hfc4903d4__0) 
                                                                  & (0x30200000U 
                                                                     == 
                                                                     (0x3e300000U 
                                                                      & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))) 
                                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT____VdfgTmp_h192224e7__0)) 
                                                                & ((~ (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x1fU 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 0xfU))))) 
                                                                   & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 7U))))))))))))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_is_valid 
        = ((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
               >> 2U)) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_valid));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_is_valid 
        = (1U & ((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                     >> 2U)) & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                >> 7U)));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_start_ena 
        = ((IData)(vlSelf->npc__DOT__muldiv_ready) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_is_valid));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_idle_exit_ena 
        = ((IData)(vlSelf->npc__DOT__muldiv_ready) 
           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_is_valid) 
              | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_is_valid)));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__booth_ena 
        = ((IData)(vlSelf->npc__DOT__muldiv_ready) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_is_valid));
    if (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r) {
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_op1_sign 
            = ((((QData)((IData)((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_rs1_sign))))) 
                 << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r))) 
               & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_start_ena))));
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_op2_sign 
            = ((((QData)((IData)((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_rs2_sign))))) 
                 << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))) 
               & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_start_ena))));
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
            = ((IData)(((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)) 
                        << 1U)) & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__booth_ena))));
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
            = ((((IData)((0x3ffffffffULL & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_rs2_sign))))) 
                 << 1U) | (IData)((((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)) 
                                    << 1U) >> 0x20U))) 
               & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__booth_ena))));
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[2U] 
            = ((((IData)((0x3ffffffffULL & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_rs2_sign))))) 
                 >> 0x1fU) | ((IData)(((0x3ffffffffULL 
                                        & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_rs2_sign)))) 
                                       >> 0x20U)) << 1U)) 
               & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__booth_ena))));
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_op1_sign 
            = (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
               & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_start_ena))));
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_op2_sign 
            = (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
               & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_start_ena))));
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
            = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r) 
                << 1U) & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__booth_ena))));
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
            = ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r) 
                 >> 0x1fU) | ((IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
                                       >> 0x20U)) << 1U)) 
               & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__booth_ena))));
        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[2U] 
            = (((6U & ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_rs2_sign))) 
                       << 1U)) | ((IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
                                           >> 0x20U)) 
                                  >> 0x1fU)) & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__booth_ena))));
    }
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_ena 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul) 
           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__booth_ena));
    __Vtemp_h9049ee16__0[1U] = ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)
                                   ? ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[0U] 
                                       << 0x1fU) | 
                                      (0x7fffffffU 
                                       & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[0U]))
                                   : (IData)((0x7fffffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[0U])))))) 
                                 >> 0x1fU) | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)
                                                ? (
                                                   vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[0U] 
                                                   >> 1U)
                                                : (
                                                   ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[0U])))) 
                                                    << 0x1fU) 
                                                   | (IData)(
                                                             ((0x7fffffffffffffffULL 
                                                               & (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[0U])))) 
                                                              >> 0x20U)))) 
                                              << 1U));
    __Vtemp_h9049ee16__0[2U] = ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)
                                   ? (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[0U] 
                                      >> 1U) : (((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[0U])))) 
                                                 << 0x1fU) 
                                                | (IData)(
                                                          ((0x7fffffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[0U])))) 
                                                           >> 0x20U)))) 
                                 >> 0x1fU) | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)
                                                ? 0U
                                                : (
                                                   ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[0U])))) 
                                                    >> 1U) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[0U]))) 
                                                               >> 0x20U)) 
                                                      << 0x1fU))) 
                                              << 1U));
    __Vtemp_h14b001f1__0[3U] = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div))) 
                                & ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)
                                      ? 0U : (((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[0U])))) 
                                               >> 1U) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[0U]))) 
                                                          >> 0x20U)) 
                                                 << 0x1fU))) 
                                    >> 0x1fU) | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)
                                                   ? 0U
                                                   : 
                                                  ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 1U)) 
                                                 << 1U)));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__muldiv_res[0U] 
        = (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[0U]) 
           | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_start_ena))) 
               & (IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_rs1_sign)
                           ? (1ULL + (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_op1_sign))
                           : vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_op1_sign))) 
              | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div))) 
                 & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)
                      ? ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[0U] 
                          << 0x1fU) | (0x7fffffffU 
                                       & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[0U]))
                      : (IData)((0x7fffffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_res_reg__DOT__qout_r[0U])))))) 
                    << 1U))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__muldiv_res[1U] 
        = (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[1U]) 
           | (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_start_ena))) 
               & (IData)((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_rs1_sign)
                            ? (1ULL + (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_op1_sign))
                            : vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_op1_sign) 
                          >> 0x20U))) | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div))) 
                                         & __Vtemp_h9049ee16__0[1U])));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__muldiv_res[2U] 
        = (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[2U]) 
           | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_div))) 
              & __Vtemp_h9049ee16__0[2U]));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__muldiv_res[3U] 
        = (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul))) 
            & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[3U]) 
           | __Vtemp_h14b001f1__0[3U]);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__muldiv_res[4U] 
        = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul))) 
           & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sum_sub_data[4U]);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__muldiv_op2_reg_ena 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_start_ena) 
           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_ena));
    VL_SHIFTL_WWI(130,130,32, __Vtemp_hd3664bad__0, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__ysyx_22050598_muldiv_op2_reg__DOT__qout_r, 2U);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_muldiv_op2[0U] 
        = (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_start_ena))) 
            & (IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_rs2_sign)
                        ? (1ULL + (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_op2_sign))
                        : vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_op2_sign))) 
           | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_ena))) 
              & (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__booth_ena))) 
                  & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_multiplicand[0U]) 
                 | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul))) 
                    & __Vtemp_hd3664bad__0[0U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_muldiv_op2[1U] 
        = (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_start_ena))) 
            & (IData)((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_rs2_sign)
                         ? (1ULL + (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_op2_sign))
                         : vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__div_op2_sign) 
                       >> 0x20U))) | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_ena))) 
                                      & (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__booth_ena))) 
                                          & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_multiplicand[1U]) 
                                         | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul))) 
                                            & __Vtemp_hd3664bad__0[1U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_muldiv_op2[2U] 
        = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_ena))) 
           & (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__booth_ena))) 
               & (((- (IData)((1U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_multiplicand[2U]))) 
                   << 1U) | vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_multiplicand[2U])) 
              | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul))) 
                 & __Vtemp_hd3664bad__0[2U])));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_muldiv_op2[3U] 
        = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_ena))) 
           & (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__booth_ena))) 
               & (((- (IData)((1U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_multiplicand[2U]))) 
                   >> 0x1fU) | ((- (IData)((1U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_multiplicand[2U]))) 
                                << 1U))) | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul))) 
                                            & __Vtemp_hd3664bad__0[3U])));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_muldiv_op2[4U] 
        = (3U & ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__mul_ena))) 
                 & (((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__booth_ena))) 
                     & (((- (IData)((1U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_multiplicand[2U]))) 
                         >> 0x1fU) | (2U & ((- (IData)(
                                                       (1U 
                                                        & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_multiplicand[2U]))) 
                                            << 1U)))) 
                    | ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__sta_is_mul))) 
                       & __Vtemp_hd3664bad__0[4U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_ha2424e89__0 
        = (1U & ((~ (IData)((0U != (7U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[2U])))) 
                 | (7U == (7U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[2U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_ha7939d0a__0 
        = (1U & ((~ (IData)((0U != (7U & ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[2U] 
                                           << 2U) | 
                                          (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                           >> 0x1eU)))))) 
                 | (7U == (7U & ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[2U] 
                                  << 2U) | (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                            >> 0x1eU))))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h3240a5c6__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                          >> 0x1cU))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                 >> 0x1cU)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h289a2833__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                          >> 0x1aU))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                 >> 0x1aU)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h545114f4__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                          >> 0x18U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                 >> 0x18U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h5f93ffec__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                          >> 0x16U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                 >> 0x16U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_ha9d31a01__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                          >> 0x14U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                 >> 0x14U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_ha257a6bf__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                          >> 0x12U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                 >> 0x12U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd6610ddb__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                          >> 0x10U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                 >> 0x10U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd485866c__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                          >> 0xeU))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                 >> 0xeU)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h1bc49e00__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                          >> 0xcU))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                 >> 0xcU)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_ha2fd2af9__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                          >> 0xaU))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                 >> 0xaU)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd6ae47c2__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                          >> 8U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                 >> 8U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd5c4eec4__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                          >> 6U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                 >> 6U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd1199578__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                          >> 4U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                 >> 4U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hdb035ac6__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                          >> 2U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                 >> 2U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h4c2c508d__0 
        = (1U & ((~ (IData)((0U != (7U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U])))) 
                 | (7U == (7U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h4fa46bbd__0 
        = (1U & ((~ (IData)((0U != (7U & ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                           << 2U) | 
                                          (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                           >> 0x1eU)))))) 
                 | (7U == (7U & ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                  << 2U) | (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                            >> 0x1eU))))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd3ef218a__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                          >> 0x1cU))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                 >> 0x1cU)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd7242808__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                          >> 0x1aU))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                 >> 0x1aU)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h7da8c338__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                          >> 0x18U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                 >> 0x18U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h0da22071__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                          >> 0x16U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                 >> 0x16U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h468c331c__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                          >> 0x14U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                 >> 0x14U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h45af9e9b__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                          >> 0x12U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                 >> 0x12U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hfe67f5ff__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                          >> 0x10U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                 >> 0x10U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hf06bc343__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                          >> 0xeU))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                 >> 0xeU)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h25af4137__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                          >> 0xcU))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                 >> 0xcU)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hec3e39a9__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                          >> 0xaU))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                 >> 0xaU)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h42737ea4__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                          >> 8U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                 >> 8U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h3baef745__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                          >> 6U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                 >> 6U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hf28c71fd__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                          >> 4U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                 >> 4U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hf46fcc16__0 
        = (1U & ((~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                          >> 2U))))) 
                 | (7U == (7U & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                 >> 2U)))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h603e810f__0 
        = (1U & ((~ (IData)((0U != (7U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U])))) 
                 | (7U == (7U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U]))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__booth_inv 
        = (((QData)((IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_ha2424e89__0)) 
                             & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[2U] 
                                >> 2U)))) << 0x20U) 
           | (QData)((IData)(((((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_ha7939d0a__0)) 
                                & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[2U]) 
                               << 0x1fU) | ((0x40000000U 
                                             & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h3240a5c6__0)) 
                                                 << 0x1eU) 
                                                & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U])) 
                                            | ((0x20000000U 
                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h289a2833__0)) 
                                                    << 0x1dU) 
                                                   & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                      << 1U))) 
                                               | ((0x10000000U 
                                                   & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h545114f4__0)) 
                                                       << 0x1cU) 
                                                      & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                         << 2U))) 
                                                  | ((0x8000000U 
                                                      & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h5f93ffec__0)) 
                                                          << 0x1bU) 
                                                         & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                            << 3U))) 
                                                     | ((0x4000000U 
                                                         & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_ha9d31a01__0)) 
                                                             << 0x1aU) 
                                                            & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                               << 4U))) 
                                                        | ((0x2000000U 
                                                            & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_ha257a6bf__0)) 
                                                                << 0x19U) 
                                                               & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                  << 5U))) 
                                                           | ((0x1000000U 
                                                               & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd6610ddb__0)) 
                                                                   << 0x18U) 
                                                                  & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                     << 6U))) 
                                                              | ((0x800000U 
                                                                  & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd485866c__0)) 
                                                                      << 0x17U) 
                                                                     & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                        << 7U))) 
                                                                 | ((0x400000U 
                                                                     & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h1bc49e00__0)) 
                                                                         << 0x16U) 
                                                                        & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                           << 8U))) 
                                                                    | ((0x200000U 
                                                                        & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_ha2fd2af9__0)) 
                                                                            << 0x15U) 
                                                                           & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                              << 9U))) 
                                                                       | ((0x100000U 
                                                                           & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd6ae47c2__0)) 
                                                                               << 0x14U) 
                                                                              & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                                << 0xaU))) 
                                                                          | ((0x80000U 
                                                                              & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd5c4eec4__0)) 
                                                                                << 0x13U) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                                << 0xbU))) 
                                                                             | ((0x40000U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd1199578__0)) 
                                                                                << 0x12U) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                                << 0xcU))) 
                                                                                | ((0x20000U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hdb035ac6__0)) 
                                                                                << 0x11U) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                                << 0xdU))) 
                                                                                | ((0x10000U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h4c2c508d__0)) 
                                                                                << 0x10U) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                                << 0xeU))) 
                                                                                | ((0x8000U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h4fa46bbd__0)) 
                                                                                & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U]) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd3ef218a__0)) 
                                                                                << 0xeU) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x10U))) 
                                                                                | ((0x2000U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd7242808__0)) 
                                                                                << 0xdU) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0xfU))) 
                                                                                | ((0x1000U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h7da8c338__0)) 
                                                                                << 0xcU) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0xeU))) 
                                                                                | ((0x800U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h0da22071__0)) 
                                                                                << 0xbU) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0xdU))) 
                                                                                | ((0x400U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h468c331c__0)) 
                                                                                << 0xaU) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0xcU))) 
                                                                                | ((0x200U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h45af9e9b__0)) 
                                                                                << 9U) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0xbU))) 
                                                                                | ((0x100U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hfe67f5ff__0)) 
                                                                                << 8U) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0xaU))) 
                                                                                | ((0x80U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hf06bc343__0)) 
                                                                                << 7U) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 9U))) 
                                                                                | ((0x40U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h25af4137__0)) 
                                                                                << 6U) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 8U))) 
                                                                                | ((0x20U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hec3e39a9__0)) 
                                                                                << 5U) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 7U))) 
                                                                                | ((0x10U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h42737ea4__0)) 
                                                                                << 4U) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 6U))) 
                                                                                | ((8U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h3baef745__0)) 
                                                                                << 3U) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 5U))) 
                                                                                | ((4U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hf28c71fd__0)) 
                                                                                << 2U) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 4U))) 
                                                                                | ((2U 
                                                                                & (((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hf46fcc16__0)) 
                                                                                << 1U) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 3U))) 
                                                                                | (1U 
                                                                                & ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h603e810f__0)) 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 2U)))))))))))))))))))))))))))))))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__booth_mul 
        = (((QData)((IData)((1U & ((~ (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[2U] 
                                       ^ (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[2U] 
                                          >> 1U))) 
                                   & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_ha2424e89__0)))))) 
            << 0x20U) | (QData)((IData)(((((~ ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                >> 0x1eU) 
                                               ^ (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                  >> 0x1fU))) 
                                           & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_ha7939d0a__0))) 
                                          << 0x1fU) 
                                         | ((0x40000000U 
                                             & (((~ 
                                                  ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                    >> 0x1cU) 
                                                   ^ 
                                                   (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                    >> 0x1dU))) 
                                                 & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h3240a5c6__0))) 
                                                << 0x1eU)) 
                                            | ((0x20000000U 
                                                & (((~ 
                                                     ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                       >> 0x1aU) 
                                                      ^ 
                                                      (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                       >> 0x1bU))) 
                                                    & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h289a2833__0))) 
                                                   << 0x1dU)) 
                                               | ((0x10000000U 
                                                   & (((~ 
                                                        ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                          >> 0x18U) 
                                                         ^ 
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                          >> 0x19U))) 
                                                       & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h545114f4__0))) 
                                                      << 0x1cU)) 
                                                  | ((0x8000000U 
                                                      & (((~ 
                                                           ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                             >> 0x16U) 
                                                            ^ 
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                             >> 0x17U))) 
                                                          & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h5f93ffec__0))) 
                                                         << 0x1bU)) 
                                                     | ((0x4000000U 
                                                         & (((~ 
                                                              ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                >> 0x14U) 
                                                               ^ 
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                >> 0x15U))) 
                                                             & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_ha9d31a01__0))) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & (((~ 
                                                                 ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                   >> 0x12U) 
                                                                  ^ 
                                                                  (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                   >> 0x13U))) 
                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_ha257a6bf__0))) 
                                                               << 0x19U)) 
                                                           | ((0x1000000U 
                                                               & (((~ 
                                                                    ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                      >> 0x10U) 
                                                                     ^ 
                                                                     (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                      >> 0x11U))) 
                                                                   & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd6610ddb__0))) 
                                                                  << 0x18U)) 
                                                              | ((0x800000U 
                                                                  & (((~ 
                                                                       ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                         >> 0xeU) 
                                                                        ^ 
                                                                        (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                         >> 0xfU))) 
                                                                      & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd485866c__0))) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & (((~ 
                                                                          ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                            >> 0xcU) 
                                                                           ^ 
                                                                           (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                            >> 0xdU))) 
                                                                         & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h1bc49e00__0))) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & (((~ 
                                                                             ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                               >> 0xaU) 
                                                                              ^ 
                                                                              (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                               >> 0xbU))) 
                                                                            & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_ha2fd2af9__0))) 
                                                                           << 0x15U)) 
                                                                       | ((0x100000U 
                                                                           & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                                >> 8U) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                                >> 9U))) 
                                                                               & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd6ae47c2__0))) 
                                                                              << 0x14U)) 
                                                                          | ((0x80000U 
                                                                              & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                                >> 6U) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                                >> 7U))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd5c4eec4__0))) 
                                                                                << 0x13U)) 
                                                                             | ((0x40000U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                                >> 4U) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                                >> 5U))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd1199578__0))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                                >> 2U) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                                >> 3U))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hdb035ac6__0))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((~ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[1U] 
                                                                                >> 1U))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h4c2c508d__0))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x1eU) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x1fU))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h4fa46bbd__0))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x1cU) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x1dU))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd3ef218a__0))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x1aU) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x1bU))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hd7242808__0))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x18U) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x19U))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h7da8c338__0))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x16U) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x17U))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h0da22071__0))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x14U) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x15U))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h468c331c__0))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x12U) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x13U))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h45af9e9b__0))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x10U) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0x11U))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hfe67f5ff__0))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0xeU) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0xfU))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hf06bc343__0))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0xcU) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0xdU))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h25af4137__0))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0xaU) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 0xbU))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hec3e39a9__0))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 8U) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 9U))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h42737ea4__0))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 6U) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 7U))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h3baef745__0))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 4U) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 5U))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hf28c71fd__0))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                ((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 2U) 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 3U))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_hf46fcc16__0))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((~ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT__temp_booth_multiplier[0U] 
                                                                                >> 1U))) 
                                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__u_ysyx_22050598___05Fmuldiv__DOT____VdfgTmp_h603e810f__0))))))))))))))))))))))))))))))))))))));
}
