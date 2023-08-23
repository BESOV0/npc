`include "ysyx_22050598_defines.v"
module ysyx_22050598_ifu(
input           clk               ,    
input           rst               ,
input           pc_stall          ,
input           flush_pc_en       ,
input  [63:0]   flush_pc          ,
input           prdt_pc_en        ,     
input  [63:0]   prdt_pc_add_op    ,
output          ifu_stall         ,         
output [63:0]   pc_now            ,
output [31:0]   id_inst
);
wire        pc_r_ena ;
wire [63:0] pc_in    ;
wire [63:0] pc_r     ;

wire [63:0] pc_add_op1 = pc_r ;
wire [63:0] pc_add_op2 = prdt_pc_en ? prdt_pc_add_op : 64'd4;

wire [63:0] pc_add_res = pc_add_op1 + pc_add_op2 ;

assign pc_r_ena   = ~pc_stall ;
assign pc_in      = flush_pc_en ? flush_pc : pc_add_res; 


ysyx_22050598_sirv_gnrl_dfflr_with_resetval #(64,64'h0000000080000000) pc_dfflr_resetval (pc_r_ena,pc_in,pc_r,clk,rst);

wire [63:0] raddr = {pc_r[63:3],3'b0};
wire [63:0] rdata;
/*
assign ifu_stall = 1'b0 ;
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
*/

wire            cpu_data_ok     ;
wire [63:0]     temp_mem_addr   ;
wire [63:0]     mem_addr        ;
wire [127:0]    mem_r_data      ;
wire            mem_r_req       ;
wire            mem_req_ready_r ;

wire [63:0] temp_mem_data ;
wire [63:0] temp_mem_data_r;

assign ifu_stall  = ~cpu_data_ok ;
ysyx_22050598_cache u_ysyx_22050598_icache (
    .clk                    (clk            ),
    .rst                    (rst            ),
    .cpu_read_req           (1'b1           ),
    .cpu_write_req          (1'b0           ),
    .cpu_addr               (raddr          ),
    .cpu_wmask              (8'b0           ),
    .cpu_write_data         (64'b0          ),
    .cpu_data_ok            (cpu_data_ok    ),
    .cpu_read_data          (rdata          ),
    .mem_req_addr           (temp_mem_addr  ),
    .mem_w_data             (),
    .mem_req_r              (mem_r_req      ), 
    .mem_req_w              (),   
    .mem_r_data             (mem_r_data     ),
    .mem_req_ready          (mem_req_ready_r)
);

wire mem_ready = ~mem_req_ready_r;
ysyx_22050598_sirv_gnrl_dfflr #(1) mem_req_ready_dfflr(mem_r_req, mem_ready, mem_req_ready_r, clk, rst);

ysyx_22050598_sirv_gnrl_dfflr #(64) icache_mem_dfflr(mem_r_req, temp_mem_data, temp_mem_data_r, clk, rst);
assign mem_r_data = {temp_mem_data, temp_mem_data_r};

assign mem_addr = mem_req_ready_r ? {temp_mem_addr[63:4],4'b1000} : {temp_mem_addr[63:4],4'b0000};

import "DPI-C" function void pmem_read (input longint raddr, output longint rdata);
always @(*) begin
    if(mem_r_req == 1'b1)
    pmem_read(mem_addr, temp_mem_data);
    else
    pmem_read(64'h0000000083008ed0,temp_mem_data);
    
end

assign pc_now = pc_r;
assign id_inst = ({32{~pc_r[2]}} & rdata[31:0]) |
                 ({32{ pc_r[2]}} & rdata[63:32]);

endmodule
