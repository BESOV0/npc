// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpc__Syms.h"


void Vnpc___024root__traceInitSub0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vnpc___024root__traceInitTop(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vnpc___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vnpc___024root__traceInitSub0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+81,"clk", false,-1);
        tracep->declBit(c+82,"rst", false,-1);
        tracep->declBus(c+83,"inst", false,-1, 31,0);
        tracep->declQuad(c+84,"pc", false,-1, 63,0);
        tracep->declQuad(c+86,"fdata", false,-1, 63,0);
        tracep->declBit(c+81,"npc clk", false,-1);
        tracep->declBit(c+82,"npc rst", false,-1);
        tracep->declBus(c+83,"npc inst", false,-1, 31,0);
        tracep->declQuad(c+84,"npc pc", false,-1, 63,0);
        tracep->declQuad(c+86,"npc fdata", false,-1, 63,0);
        tracep->declQuad(c+13,"npc ebreak_a0", false,-1, 63,0);
        tracep->declQuad(c+1,"npc imm", false,-1, 63,0);
        tracep->declQuad(c+88,"npc immU", false,-1, 63,0);
        tracep->declQuad(c+90,"npc j_pc", false,-1, 63,0);
        tracep->declBus(c+92,"npc rs1", false,-1, 4,0);
        tracep->declBus(c+93,"npc rs2", false,-1, 4,0);
        tracep->declBus(c+94,"npc rd", false,-1, 4,0);
        tracep->declBus(c+92,"npc raddr1", false,-1, 4,0);
        tracep->declBus(c+93,"npc raddr2", false,-1, 4,0);
        tracep->declBus(c+94,"npc waddr", false,-1, 4,0);
        tracep->declBus(c+95,"npc funct7", false,-1, 6,0);
        tracep->declBus(c+96,"npc funct3", false,-1, 2,0);
        tracep->declBus(c+97,"npc opcode", false,-1, 6,0);
        tracep->declQuad(c+3,"npc rdata1", false,-1, 63,0);
        tracep->declQuad(c+98,"npc rdata2", false,-1, 63,0);
        tracep->declQuad(c+5,"npc wdata", false,-1, 63,0);
        tracep->declBus(c+7,"npc inst_type", false,-1, 5,0);
        tracep->declBit(c+8,"npc ren", false,-1);
        tracep->declBit(c+100,"npc wen", false,-1);
        tracep->declBit(c+9,"npc ebreak_flag", false,-1);
        tracep->declBit(c+10,"npc j_flag", false,-1);
        tracep->declBit(c+81,"npc u_ysyx_22050598_IFU clk", false,-1);
        tracep->declBit(c+82,"npc u_ysyx_22050598_IFU rst", false,-1);
        tracep->declBit(c+10,"npc u_ysyx_22050598_IFU jump_flag", false,-1);
        tracep->declQuad(c+90,"npc u_ysyx_22050598_IFU j_pc", false,-1, 63,0);
        tracep->declQuad(c+84,"npc u_ysyx_22050598_IFU pc_now", false,-1, 63,0);
        tracep->declQuad(c+101,"npc u_ysyx_22050598_IFU pc", false,-1, 63,0);
        tracep->declQuad(c+15,"npc u_ysyx_22050598_IFU pc_next", false,-1, 63,0);
        tracep->declBit(c+138,"npc u_ysyx_22050598_IFU wen", false,-1);
        tracep->declBus(c+139,"npc u_ysyx_22050598_IFU u_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+140,"npc u_ysyx_22050598_IFU u_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+81,"npc u_ysyx_22050598_IFU u_reg clk", false,-1);
        tracep->declBit(c+82,"npc u_ysyx_22050598_IFU u_reg rst", false,-1);
        tracep->declQuad(c+101,"npc u_ysyx_22050598_IFU u_reg din", false,-1, 63,0);
        tracep->declQuad(c+15,"npc u_ysyx_22050598_IFU u_reg dout", false,-1, 63,0);
        tracep->declBit(c+138,"npc u_ysyx_22050598_IFU u_reg wen", false,-1);
        tracep->declBus(c+83,"npc u_ysyx_22050598_IDU inst", false,-1, 31,0);
        tracep->declQuad(c+1,"npc u_ysyx_22050598_IDU imm", false,-1, 63,0);
        tracep->declQuad(c+88,"npc u_ysyx_22050598_IDU immU", false,-1, 63,0);
        tracep->declBus(c+92,"npc u_ysyx_22050598_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+93,"npc u_ysyx_22050598_IDU rs2", false,-1, 4,0);
        tracep->declBus(c+94,"npc u_ysyx_22050598_IDU rd", false,-1, 4,0);
        tracep->declBus(c+95,"npc u_ysyx_22050598_IDU funct7", false,-1, 6,0);
        tracep->declBus(c+96,"npc u_ysyx_22050598_IDU funct3", false,-1, 2,0);
        tracep->declBus(c+7,"npc u_ysyx_22050598_IDU inst_type", false,-1, 5,0);
        tracep->declBus(c+97,"npc u_ysyx_22050598_IDU opcode", false,-1, 6,0);
        tracep->declBit(c+103,"npc u_ysyx_22050598_IDU inst_is_LUI", false,-1);
        tracep->declBit(c+104,"npc u_ysyx_22050598_IDU inst_is_AUIPC", false,-1);
        tracep->declBit(c+105,"npc u_ysyx_22050598_IDU inst_is_JAL", false,-1);
        tracep->declBit(c+106,"npc u_ysyx_22050598_IDU inst_is_JALR", false,-1);
        tracep->declBit(c+107,"npc u_ysyx_22050598_IDU inst_is_BRANCH", false,-1);
        tracep->declBit(c+108,"npc u_ysyx_22050598_IDU inst_is_LOAD", false,-1);
        tracep->declBit(c+109,"npc u_ysyx_22050598_IDU inst_is_STORE", false,-1);
        tracep->declBit(c+110,"npc u_ysyx_22050598_IDU inst_is_ALU_IMM", false,-1);
        tracep->declBit(c+111,"npc u_ysyx_22050598_IDU inst_is_ALU_REG", false,-1);
        tracep->declBit(c+112,"npc u_ysyx_22050598_IDU inst_is_BREAK", false,-1);
        tracep->declQuad(c+113,"npc u_ysyx_22050598_IDU Iimm", false,-1, 63,0);
        tracep->declQuad(c+115,"npc u_ysyx_22050598_IDU Simm", false,-1, 63,0);
        tracep->declQuad(c+117,"npc u_ysyx_22050598_IDU Bimm", false,-1, 63,0);
        tracep->declQuad(c+119,"npc u_ysyx_22050598_IDU Uimm", false,-1, 63,0);
        tracep->declQuad(c+121,"npc u_ysyx_22050598_IDU Jimm", false,-1, 63,0);
        tracep->declQuad(c+123,"npc u_ysyx_22050598_IDU IimmU", false,-1, 63,0);
        tracep->declQuad(c+125,"npc u_ysyx_22050598_IDU SimmU", false,-1, 63,0);
        tracep->declQuad(c+127,"npc u_ysyx_22050598_IDU BimmU", false,-1, 63,0);
        tracep->declQuad(c+129,"npc u_ysyx_22050598_IDU UimmU", false,-1, 63,0);
        tracep->declQuad(c+131,"npc u_ysyx_22050598_IDU JimmU", false,-1, 63,0);
        tracep->declBit(c+81,"npc u_ysyx_22050598_RegisterFile clk", false,-1);
        tracep->declQuad(c+5,"npc u_ysyx_22050598_RegisterFile wdata", false,-1, 63,0);
        tracep->declBus(c+94,"npc u_ysyx_22050598_RegisterFile waddr", false,-1, 4,0);
        tracep->declBit(c+100,"npc u_ysyx_22050598_RegisterFile wen", false,-1);
        tracep->declBus(c+92,"npc u_ysyx_22050598_RegisterFile raddr1", false,-1, 4,0);
        tracep->declBit(c+8,"npc u_ysyx_22050598_RegisterFile ren", false,-1);
        tracep->declQuad(c+3,"npc u_ysyx_22050598_RegisterFile rdata1", false,-1, 63,0);
        tracep->declQuad(c+13,"npc u_ysyx_22050598_RegisterFile ebreak_a0", false,-1, 63,0);
        tracep->declBus(c+93,"npc u_ysyx_22050598_RegisterFile raddr2", false,-1, 4,0);
        tracep->declQuad(c+98,"npc u_ysyx_22050598_RegisterFile rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+17+i*2,"npc u_ysyx_22050598_RegisterFile rf", true,(i+0), 63,0);}}
        tracep->declBus(c+92,"npc u_ysyx_22050598_Reg_READ rs1", false,-1, 4,0);
        tracep->declBus(c+93,"npc u_ysyx_22050598_Reg_READ rs2", false,-1, 4,0);
        tracep->declBus(c+7,"npc u_ysyx_22050598_Reg_READ inst_type", false,-1, 5,0);
        tracep->declBit(c+8,"npc u_ysyx_22050598_Reg_READ ren", false,-1);
        tracep->declBus(c+92,"npc u_ysyx_22050598_Reg_READ raddr1", false,-1, 4,0);
        tracep->declBus(c+93,"npc u_ysyx_22050598_Reg_READ raddr2", false,-1, 4,0);
        tracep->declQuad(c+1,"npc u_ysyx_22050598_EXU imm", false,-1, 63,0);
        tracep->declQuad(c+88,"npc u_ysyx_22050598_EXU immU", false,-1, 63,0);
        tracep->declBus(c+94,"npc u_ysyx_22050598_EXU rd", false,-1, 4,0);
        tracep->declQuad(c+84,"npc u_ysyx_22050598_EXU pc", false,-1, 63,0);
        tracep->declBus(c+7,"npc u_ysyx_22050598_EXU inst_type", false,-1, 5,0);
        tracep->declBus(c+97,"npc u_ysyx_22050598_EXU opcode", false,-1, 6,0);
        tracep->declBus(c+96,"npc u_ysyx_22050598_EXU funct3", false,-1, 2,0);
        tracep->declBus(c+95,"npc u_ysyx_22050598_EXU funct7", false,-1, 6,0);
        tracep->declQuad(c+3,"npc u_ysyx_22050598_EXU rdata1", false,-1, 63,0);
        tracep->declQuad(c+98,"npc u_ysyx_22050598_EXU rdata2", false,-1, 63,0);
        tracep->declBit(c+10,"npc u_ysyx_22050598_EXU j_flag", false,-1);
        tracep->declQuad(c+90,"npc u_ysyx_22050598_EXU j_pc", false,-1, 63,0);
        tracep->declBit(c+100,"npc u_ysyx_22050598_EXU wen", false,-1);
        tracep->declBit(c+9,"npc u_ysyx_22050598_EXU ebreak_flag", false,-1);
        tracep->declBus(c+94,"npc u_ysyx_22050598_EXU waddr", false,-1, 4,0);
        tracep->declQuad(c+5,"npc u_ysyx_22050598_EXU wdata", false,-1, 63,0);
        tracep->declBit(c+11,"npc u_ysyx_22050598_EXU inst_addi", false,-1);
        tracep->declBit(c+133,"npc u_ysyx_22050598_EXU inst_sd", false,-1);
        tracep->declBit(c+9,"npc u_ysyx_22050598_EXU inst_ebreak", false,-1);
        tracep->declBit(c+104,"npc u_ysyx_22050598_EXU inst_auipc", false,-1);
        tracep->declBit(c+103,"npc u_ysyx_22050598_EXU inst_lui", false,-1);
        tracep->declBit(c+105,"npc u_ysyx_22050598_EXU inst_jal", false,-1);
        tracep->declBit(c+12,"npc u_ysyx_22050598_EXU inst_jalr", false,-1);
        tracep->declBit(c+10,"npc u_ysyx_22050598_EXU jump_flag", false,-1);
        tracep->declQuad(c+134,"npc u_ysyx_22050598_EXU data1", false,-1, 63,0);
        tracep->declQuad(c+136,"npc u_ysyx_22050598_EXU data2", false,-1, 63,0);
        tracep->declBit(c+9,"npc u_ysyx_22050598_EBREAK ebreak_flag", false,-1);
        tracep->declQuad(c+13,"npc u_ysyx_22050598_EBREAK ebreak_a0", false,-1, 63,0);
    }
}

void Vnpc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vnpc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vnpc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vnpc___024root__traceRegister(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vnpc___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vnpc___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vnpc___024root__traceCleanup, vlSelf);
    }
}

void Vnpc___024root__traceFullSub0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vnpc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vnpc___024root* const __restrict vlSelf = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vnpc___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vnpc___024root__traceFullSub0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->npc__DOT__imm),64);
        tracep->fullQData(oldp+3,(vlSelf->npc__DOT__rdata1),64);
        tracep->fullQData(oldp+5,(vlSelf->npc__DOT__wdata),64);
        tracep->fullCData(oldp+7,(vlSelf->npc__DOT__inst_type),6);
        tracep->fullBit(oldp+8,(vlSelf->npc__DOT__ren));
        tracep->fullBit(oldp+9,(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_ebreak));
        tracep->fullBit(oldp+10,(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__jump_flag));
        tracep->fullBit(oldp+11,(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi));
        tracep->fullBit(oldp+12,(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_jalr));
        tracep->fullQData(oldp+13,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf
                                   [0xaU]),64);
        tracep->fullQData(oldp+15,(vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_next),64);
        tracep->fullQData(oldp+17,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[0]),64);
        tracep->fullQData(oldp+19,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[1]),64);
        tracep->fullQData(oldp+21,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[2]),64);
        tracep->fullQData(oldp+23,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[3]),64);
        tracep->fullQData(oldp+25,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[4]),64);
        tracep->fullQData(oldp+27,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[5]),64);
        tracep->fullQData(oldp+29,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[6]),64);
        tracep->fullQData(oldp+31,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[7]),64);
        tracep->fullQData(oldp+33,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[8]),64);
        tracep->fullQData(oldp+35,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[9]),64);
        tracep->fullQData(oldp+37,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[10]),64);
        tracep->fullQData(oldp+39,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[11]),64);
        tracep->fullQData(oldp+41,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[12]),64);
        tracep->fullQData(oldp+43,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[13]),64);
        tracep->fullQData(oldp+45,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[14]),64);
        tracep->fullQData(oldp+47,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[15]),64);
        tracep->fullQData(oldp+49,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[16]),64);
        tracep->fullQData(oldp+51,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[17]),64);
        tracep->fullQData(oldp+53,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[18]),64);
        tracep->fullQData(oldp+55,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[19]),64);
        tracep->fullQData(oldp+57,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[20]),64);
        tracep->fullQData(oldp+59,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[21]),64);
        tracep->fullQData(oldp+61,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[22]),64);
        tracep->fullQData(oldp+63,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[23]),64);
        tracep->fullQData(oldp+65,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[24]),64);
        tracep->fullQData(oldp+67,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[25]),64);
        tracep->fullQData(oldp+69,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[26]),64);
        tracep->fullQData(oldp+71,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[27]),64);
        tracep->fullQData(oldp+73,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[28]),64);
        tracep->fullQData(oldp+75,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[29]),64);
        tracep->fullQData(oldp+77,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[30]),64);
        tracep->fullQData(oldp+79,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[31]),64);
        tracep->fullBit(oldp+81,(vlSelf->clk));
        tracep->fullBit(oldp+82,(vlSelf->rst));
        tracep->fullIData(oldp+83,(vlSelf->inst),32);
        tracep->fullQData(oldp+84,(vlSelf->pc),64);
        tracep->fullQData(oldp+86,(vlSelf->fdata),64);
        tracep->fullQData(oldp+88,(((((((- (QData)((IData)(
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
        tracep->fullQData(oldp+90,((((vlSelf->pc + vlSelf->npc__DOT__imm) 
                                     & (- (QData)((IData)(
                                                          (0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->inst)))))) 
                                    | (0xfffffffffffffffeULL 
                                       & ((vlSelf->npc__DOT__imm 
                                           + vlSelf->npc__DOT__rdata1) 
                                          & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_jalr))))))),64);
        tracep->fullCData(oldp+92,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+93,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+94,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+95,((vlSelf->inst >> 0x19U)),7);
        tracep->fullCData(oldp+96,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+97,((0x7fU & vlSelf->inst)),7);
        tracep->fullQData(oldp+98,((((0U != (0x1fU 
                                             & (vlSelf->inst 
                                                >> 0x14U))) 
                                     & (IData)(vlSelf->npc__DOT__ren))
                                     ? vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0x14U))]
                                     : 0ULL)),64);
        tracep->fullBit(oldp+100,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->inst))) 
                                    | (0x37U == (0x7fU 
                                                 & vlSelf->inst))) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__jump_flag))));
        tracep->fullQData(oldp+101,(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__jump_flag)
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
        tracep->fullBit(oldp+103,((0x37U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+104,((0x17U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+105,((0x6fU == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+106,((0x67U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+107,((0x63U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+108,((3U == (0x7fU & vlSelf->inst))));
        tracep->fullBit(oldp+109,((0x23U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+110,((0x13U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+111,((0x33U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+112,((0x73U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullQData(oldp+113,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xbU) | (QData)((IData)(
                                                                 (0x7ffU 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)))))),64);
        tracep->fullQData(oldp+115,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xbU) | (QData)((IData)(
                                                                 ((0x7e0U 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->inst 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+117,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+119,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7ffff000U 
                                                                   & vlSelf->inst))))),64);
        tracep->fullQData(oldp+121,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+123,((QData)((IData)(
                                                    (vlSelf->inst 
                                                     >> 0x14U)))),64);
        tracep->fullQData(oldp+125,((((QData)((IData)(
                                                      (vlSelf->inst 
                                                       >> 0x19U))) 
                                      << 5U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U)))))),64);
        tracep->fullQData(oldp+127,((((QData)((IData)(
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
        tracep->fullQData(oldp+129,(((QData)((IData)(
                                                     (vlSelf->inst 
                                                      >> 0xcU))) 
                                     << 0xcU)),64);
        tracep->fullQData(oldp+131,((((QData)((IData)(
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
        tracep->fullBit(oldp+133,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullQData(oldp+134,((((vlSelf->npc__DOT__rdata1 
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
        tracep->fullQData(oldp+136,(((vlSelf->npc__DOT__imm 
                                      & (- (QData)((IData)(
                                                           ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi) 
                                                            | (0x17U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->inst))))))) 
                                     | (4ULL & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__jump_flag)))))),64);
        tracep->fullBit(oldp+138,(1U));
        tracep->fullIData(oldp+139,(0x40U),32);
        tracep->fullQData(oldp+140,(0x80000000ULL),64);
    }
}
