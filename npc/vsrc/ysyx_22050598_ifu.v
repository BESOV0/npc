`include "ysyx_22050598_defines.v"
module ysyx_22050598_ifu(
input           clk               ,    
input           rst               ,
input           pc_stall          ,
input           flush_pc_en       ,
input  [63:0]   flush_pc          ,
input           prdt_pc_en        ,     
input  [63:0]   prdt_pc_add_op    ,         
output [63:0]   pc_now            ,
output [31:0]   id_inst
);
wire        pc_r_ena ;
wire [63:0] pc_in    ;
wire [63:0] pc_r     ;

wire [63:0] pc_add_op1 = pc_r ;
wire [63:0] pc_add_op2 = prdt_pc_en ? prdt_pc_add_op : 64'd4;

wire [63:0] pc_add_res = pc_add_op1 + pc_add_op2 ;

assign pc_r_ena = ~pc_stall ;
assign pc_in    = flush_pc_en ? flush_pc : pc_add_res; 


ysyx_22050598_sirv_gnrl_dfflr_with_resetval #(64,64'h0000000080000000) pc_dfflr_resetval (pc_r_ena,pc_in,pc_r,clk,rst);

wire [63:0] raddr = {pc_r[63:3],3'b0};
wire [63:0] rdata;

import "DPI-C" function void pmem_read (input longint raddr, output longint rdata);
always @(*) begin
    if(rst == 1'b1)
    pmem_read(raddr, rdata);
    else
    pmem_read(64'h0000000080000000,rdata);
end
assign pc_now = pc_r;
assign id_inst = ({32{pc_r[2:0] == 3'b000}} & rdata[31:0]) |
                 ({32{pc_r[2:0] == 3'b100}} & rdata[63:32]);
endmodule
