`include "ysyx_22050598_defines.v"
module ysyx_22050598_IF_ID(
    input           clk             ,
    input           rst             ,
    input [31:0]    if_inst         ,
    input [63:0]    if_pc_i         ,
    input           if_flush        ,
    input           if_stall        ,
    output [63:0]   if_pc_o         ,
    output [31:0]   if_inst_o       
);
    wire [31:0] temp_inst;
    wire [63:0] temp_pc  ;
    wire temp_flush;
    //reg part 
    wire [63:0] pc_r;
    wire [31:0] inst_r;
    // if flush is true, instruction needs to be flushed
    assign temp_inst = if_flush ? 32'h00000013 : if_inst;//addi x0,x0,0 nop
    assign temp_pc   = if_flush ? 64'h0        : if_pc_i;

    wire if_en = ~if_stall;
    ysyx_22050598_sirv_gnrl_dfflr #(64) pc_dfflr   (if_en, temp_pc    , pc_r   , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(32) inst_dfflr (if_en, temp_inst  , inst_r , clk, rst);

    assign if_pc_o    = pc_r;
    assign if_inst_o  = inst_r;

endmodule