`include "ysyx_22050598_defines.v"
module ysyx_22050598_LS_WB (
    `ifdef ysyx_22050598_Test
    input   [31:0]    ls_wb_inst        ,
    output  [31:0]    ls_wb_inst_o      ,
    input   [63:0]    ls_wb_pc          ,
    output  [63:0]    ls_wb_pc_o        ,
    `endif
    input         clk                   ,
    input         rst                   ,
    input         ls_wb_stall           ,

    input  [63:0] ls_wb_rd_data         ,
    input         ls_wb_rd_en           ,
    input  [4:0]  ls_wb_rd_idx          ,
    input         ls_wb_inst_is_ebreak  ,
    output [63:0] ls_wb_rd_data_o       ,
    output        ls_wb_rd_en_o         ,
    output [4:0]  ls_wb_rd_idx_o        ,
    output        ls_wb_inst_is_ebreak_o 
);
    wire ls_wb_en = ~ls_wb_stall ;

    wire  [63:0] ls_wb_rd_data_r   ;
    wire         ls_wb_rd_en_r     ;
    wire  [4:0]  ls_wb_rd_idx_r    ;
    wire         ls_wb_inst_is_ebreak_r ;

    ysyx_22050598_sirv_gnrl_dfflr #(64) ls_wb_rd_data_dfflr (ls_wb_en ,ls_wb_rd_data ,ls_wb_rd_data_r , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(1)  ls_wb_rd_en_dfflr   (ls_wb_en ,ls_wb_rd_en   ,ls_wb_rd_en_r   , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(5)  ls_wb_rd_idx_dfflr  (ls_wb_en ,ls_wb_rd_idx  ,ls_wb_rd_idx_r  , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(1)  ls_wb_ebreak_dfflr  (ls_wb_en ,ls_wb_inst_is_ebreak ,ls_wb_inst_is_ebreak_r , clk, rst);

    `ifdef ysyx_22050598_Test
    wire   [31:0]    ls_wb_inst_r    ;
    wire   [63:0]    ls_wb_pc_r      ;
    ysyx_22050598_sirv_gnrl_dfflr #(32)  ls_wb_inst_dfflr(ls_wb_en, ls_wb_inst, ls_wb_inst_r, clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(64)  ls_wb_pc_dfflr  (ls_wb_en, ls_wb_pc  , ls_wb_pc_r  , clk, rst);
    assign ls_wb_inst_o = ls_wb_inst_r ;
    assign ls_wb_pc_o   = ls_wb_pc_r ;
    `endif
    
    assign ls_wb_rd_data_o =  ls_wb_rd_data_r ;
    assign ls_wb_rd_en_o   =  ls_wb_rd_en_r   ;
    assign ls_wb_rd_idx_o  =  ls_wb_rd_idx_r  ;
    assign ls_wb_inst_is_ebreak_o  =  ls_wb_inst_is_ebreak_r  ;

endmodule