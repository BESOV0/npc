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
output [31:0]   id_inst           ,
output [63:0]   ifu_mem_addr      ,
output          ifu_mem_valid     ,
input  [127:0]  ifu_mem_data      ,
input           ifu_mem_ready      
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

wire            cpu_data_ok     ;
wire [63:0]     ifu_req_addr    ;
wire            ifu_r_req       ;

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
    .mem_req_addr           (ifu_req_addr   ),
    .mem_w_data             (),
    .mem_req_r              (ifu_r_req      ), 
    .mem_req_w              (),   
    .mem_r_data             (ifu_mem_data   ),
    .mem_req_ready          (ifu_mem_ready  )
);

assign ifu_mem_addr  = ifu_req_addr     ;
assign ifu_mem_valid = ifu_r_req        ;

assign pc_now        = pc_r             ;
assign ifu_stall     = ~cpu_data_ok     ;
assign id_inst       = ({32{~pc_r[2]}} & rdata[31:0]) |
                       ({32{ pc_r[2]}} & rdata[63:32]);

endmodule
