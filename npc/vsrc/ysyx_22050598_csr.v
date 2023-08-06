`include "defines.v"
module ysyx_22050598_csr (
    input         clk                ,
    input         rst                ,
    input [5:0]   ex_csr_bus_i       ,
    input [63:0]  csr_imm_i          ,
    input [63:0]  csr_reg_i          ,
    input [63:0]  csr_zimm_i         ,
    input [63:0]  csr_ecall_pc       ,
    input         ex_inst_is_mret_i  ,
    input         ex_inst_is_ecall_i ,

    output [63:0] csr_rd_pc_data 
);
    wire [`ysyx_22050598_CSR_XLEN-1:0] csr_mstatus_data ;
    wire [`ysyx_22050598_CSR_XLEN-1:0] csr_mtvec_data   ;
    wire [`ysyx_22050598_CSR_XLEN-1:0] csr_mepc_data    ;
    wire [`ysyx_22050598_CSR_XLEN-1:0] csr_mcause_data  ;

    wire [`ysyx_22050598_CSR_XLEN-1:0] csr_mstatus_data_r ;
    wire [`ysyx_22050598_CSR_XLEN-1:0] csr_mtvec_data_r   ;
    wire [`ysyx_22050598_CSR_XLEN-1:0] csr_mepc_data_r    ;
    wire [`ysyx_22050598_CSR_XLEN-1:0] csr_mcause_data_r  ;
    
    wire mstatus_r_ena ;
    wire mtvec_r_ena   ;
    wire mepc_r_ena    ;
    wire mcause_r_ena  ;

    //wire [`ysyx_22050598_CSR_XLEN-1:0] ecall_mstatus_data  ;
    /*******************************************************csr*******************************/
    wire csr_ena = |ex_csr_bus_i; 
    wire [`ysyx_22050598_CSR_XLEN-1:0] read_csr_data  ;
    wire [`ysyx_22050598_CSR_XLEN-1:0] write_csr_data ;

    wire csr_imm_is_0x300 = (csr_imm_i[11:0] == 12'h300);
    wire csr_imm_is_0x305 = (csr_imm_i[11:0] == 12'h305);
    wire csr_imm_is_0x341 = (csr_imm_i[11:0] == 12'h341);
    wire csr_imm_is_0x342 = (csr_imm_i[11:0] == 12'h342);

    wire csr_mstatus_ena = (csr_imm_is_0x300 & csr_ena) ;
    wire csr_mtvec_ena   = (csr_imm_is_0x305 & csr_ena) ;
    wire csr_mepc_ena    = (csr_imm_is_0x341 & csr_ena) ;
    wire csr_mcause_ena  = (csr_imm_is_0x342 & csr_ena) ;

    //for inst csrrs csrrsi
    wire write_csr_or = (ex_csr_bus_i[4] | ex_csr_bus_i[1]);
    wire [63:0] write_csr_or_data1 = read_csr_data & {64{write_csr_or}};
    wire [63:0] write_csr_or_data2 = ({64{ex_csr_bus_i[4]}} & csr_reg_i)  | 
                                     ({64{ex_csr_bus_i[1]}} & csr_zimm_i) ; 
    wire [63:0] write_csr_or_data = write_csr_or_data1 | write_csr_or_data2;
    //for inst csrrw csrrwi
    wire write_csr_self = (ex_csr_bus_i[5] | ex_csr_bus_i[2]);
    wire [63:0] write_csr_self_data = ({64{ex_csr_bus_i[5]}} & csr_reg_i)  | 
                                      ({64{ex_csr_bus_i[2]}} & csr_zimm_i) ; 
    //for inst csrrc csrrci
    wire write_csr_and = (ex_csr_bus_i[3] | ex_csr_bus_i[0]);
    wire [63:0] write_csr_and_data1 = read_csr_data & {64{write_csr_and}};
    wire [63:0] write_csr_and_data2 = ({64{ex_csr_bus_i[3]}} & csr_reg_i)  | 
                                      ({64{ex_csr_bus_i[0]}} & csr_zimm_i) ; 
    wire [63:0] write_csr_and_data = write_csr_or_data1 & (~write_csr_or_data2);

    assign read_csr_data = ({64{csr_mstatus_ena}} & csr_mstatus_data_r) |
                           ({64{csr_mtvec_ena}}   & csr_mtvec_data_r  ) | 
                           ({64{csr_mepc_ena}}    & csr_mepc_data_r   ) |
                           ({64{csr_mcause_ena}}  & csr_mcause_data_r ) ;

    assign write_csr_data = ({64{write_csr_self}} & write_csr_self_data) | 
                            ({64{write_csr_or}}   & write_csr_or_data  ) | 
                            ({64{write_csr_and}}  & write_csr_and_data ) ;
/**********************************************************************************************/
    assign mstatus_r_ena    = csr_mstatus_ena  ;//| ex_inst_is_mret_i ;
    assign mtvec_r_ena      = csr_mtvec_ena    ;
    assign mepc_r_ena       = (csr_mepc_ena    | ex_inst_is_ecall_i);
    assign mcause_r_ena     = (csr_mcause_ena  | ex_inst_is_ecall_i);

    //assign ecall_mstatus_data = csr_mstatus_data_r;

    assign csr_mstatus_data = (write_csr_data     & {64{csr_mstatus_ena  }}) ; 
                              //(ecall_mstatus_data & {64{ex_inst_is_mret_i}}) ; 

    assign csr_mtvec_data   = (write_csr_data & {64{csr_mtvec_ena     }}) ;

    assign csr_mepc_data    = (write_csr_data & {64{csr_mepc_ena      }}) | 
                              (csr_ecall_pc   & {64{ex_inst_is_ecall_i}}) ;
                              
    assign csr_mcause_data  = (write_csr_data & {64{csr_mcause_ena }})    |  
                              (64'h0b         & {64{ex_inst_is_ecall_i }});

    ysyx_22050598_sirv_gnrl_dfflr_with_resetval #(`ysyx_22050598_CSR_XLEN,`ysyx_22050598_CSR_MSTATUS_RESETVAL) mstatus_dfflr(mstatus_r_ena, csr_mstatus_data, csr_mstatus_data_r, clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(`ysyx_22050598_CSR_XLEN) mtvec_dfflr  (mtvec_r_ena  , csr_mtvec_data  , csr_mtvec_data_r  , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(`ysyx_22050598_CSR_XLEN) mepc_dfflr   (mepc_r_ena   , csr_mepc_data   , csr_mepc_data_r   , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(`ysyx_22050598_CSR_XLEN) mcause_dfflr (mcause_r_ena , csr_mcause_data , csr_mcause_data_r , clk, rst);

    assign csr_rd_pc_data = (read_csr_data    & {64{csr_ena}})            |
                            (csr_mtvec_data_r & {64{ex_inst_is_ecall_i}}) |
                            (csr_mepc_data_r  & {64{ex_inst_is_mret_i}})  ;
endmodule