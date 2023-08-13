`include "ysyx_22050598_defines.v"
module ysyx_22050598_EX_LS (
    `ifdef ysyx_22050598_Test
    input   [31:0]    ex_ls_inst            ,
    output  [31:0]    ex_ls_inst_o          ,
    input   [63:0]    ex_ls_pc              ,
    output  [63:0]    ex_ls_pc_o            ,
    `endif
    input           clk                     ,
    input           rst                     ,
    input           ex_ls_stall             ,
    
    input   [63:0]  ex_ls_alu_rd_ls_data    ,
    input           ex_ls_alu_rd_data_en    ,
    input           ex_ls_load_en           ,
    input           ex_ls_store_en          ,
    input   [63:0]  ex_ls_store_data        ,
    input   [1:0]   ex_ls_ls_data_bus       ,
    input   [4:0]   ex_ls_write_rd_idx      ,
    input           ex_ls_load_unsigned     ,

    output [63:0]   ex_ls_alu_rd_ls_data_o  ,
    output [63:0]   ex_ls_store_data_o      ,
    output          ex_ls_alu_rd_data_en_o  ,
    output          ex_ls_load_en_o         , 
    output          ex_ls_store_en_o        ,  
    output [1:0]    ex_ls_ls_data_type_o    ,
    output [4:0]    ex_ls_rd_idx_o          ,
    output          ex_ls_load_unsigned_o   ,

    input           ex_ls_inst_is_ebreak    ,
    output          ex_ls_inst_is_ebreak_o  
);

    wire [63:0] ex_ls_alu_rd_ls_data_r  ;
    wire [63:0] ex_ls_store_data_r      ;
    wire        ex_ls_alu_rd_data_en_r  ;
    wire        ex_ls_load_en_r         ;
    wire        ex_ls_store_en_r        ;
    wire [1:0]  ex_ls_ls_data_bus_r     ;
    wire [4:0]  ex_ls_write_rd_idx_r    ;
    wire        ex_ls_inst_is_ebreak_r  ;
    wire        ex_ls_load_unsigned_r   ;

    wire ex_ls_en = ~ex_ls_stall;
    wire ex_ls_store_data_en = ex_ls_en & ex_ls_store_en;
    
    ysyx_22050598_sirv_gnrl_dfflr #(64) ex_ls_alu_rd_ls_data_dfflr(ex_ls_en           , ex_ls_alu_rd_ls_data, ex_ls_alu_rd_ls_data_r, clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(1)  ex_ls_rd_data_en_dfflr    (ex_ls_en           , ex_ls_alu_rd_data_en, ex_ls_alu_rd_data_en_r, clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(1)  ex_ls_load_en_dfflr       (ex_ls_en           , ex_ls_load_en       , ex_ls_load_en_r       , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(1)  ex_ls_store_en_dfflr      (ex_ls_en           , ex_ls_store_en      , ex_ls_store_en_r      , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(2)  ex_ls_ls_data_bus_dfflr   (ex_ls_en           , ex_ls_ls_data_bus   , ex_ls_ls_data_bus_r   , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(5)  ex_ls_write_rd_idx_dfflr  (ex_ls_en           , ex_ls_write_rd_idx  , ex_ls_write_rd_idx_r  , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(64) ex_ls_store_data_dfflr    (ex_ls_store_data_en, ex_ls_store_data    , ex_ls_store_data_r    , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(1)  ex_ls_load_unsigned_dfflr (ex_ls_en           , ex_ls_load_unsigned , ex_ls_load_unsigned_r , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(1)  ex_ls_inst_is_ebreak_dfflr(ex_ls_en           , ex_ls_inst_is_ebreak, ex_ls_inst_is_ebreak_r, clk, rst);

    `ifdef ysyx_22050598_Test
    wire   [31:0]    ex_ls_inst_r    ;
    wire   [63:0]    ex_ls_pc_r      ;
    ysyx_22050598_sirv_gnrl_dfflr #(32)  ex_ls_inst_dfflr(ex_ls_en, ex_ls_inst, ex_ls_inst_r, clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(64)  ex_ls_pc_dfflr  (ex_ls_en, ex_ls_pc  , ex_ls_pc_r  , clk, rst);
    assign ex_ls_inst_o = ex_ls_inst_r ;
    assign ex_ls_pc_o   = ex_ls_pc_r ;
    `endif

    assign ex_ls_alu_rd_data_en_o  = ex_ls_alu_rd_data_en_r ;
    assign ex_ls_load_en_o         = ex_ls_load_en_r        ;
    assign ex_ls_store_en_o        = ex_ls_store_en_r       ;
    assign ex_ls_ls_data_type_o    = ex_ls_ls_data_bus_r    ;
    assign ex_ls_rd_idx_o          = ex_ls_write_rd_idx_r   ;
    assign ex_ls_alu_rd_ls_data_o  = ex_ls_alu_rd_ls_data_r ;
    assign ex_ls_store_data_o      = ex_ls_store_data_r     ;
    assign ex_ls_load_unsigned_o   = ex_ls_load_unsigned_r  ;
    assign ex_ls_inst_is_ebreak_o  = ex_ls_inst_is_ebreak_r ;
endmodule