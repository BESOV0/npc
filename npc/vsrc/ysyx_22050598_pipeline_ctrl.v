`include "ysyx_22050598_defines.v"
module ysyx_22050598_pipeline_ctrl (
    //pc_prdt_fail_fulsh
    input  [63:0] ex_pc_data        ,
    input         ex_pc_ena         ,
    input  [63:0] id_pc_data        ,
    output [2:0]  pipeline_flush    ,
    //muldiv
    input         muldiv_ready      ,
    input         muldivout_valid   ,
    input         exu_is_mul        ,
    input         exu_is_div        ,
    input         exu_is_rem        ,
    //foward_stall
    input         forward_load_stall,
    output [4:0]  pipeline_stall    
    //ebreak
    //input         if_id_ebreak       
);
    wire [63:0] temp_ex_pc_data = (ex_pc_data & {64{ex_pc_ena}}) ;
    wire [63:0] temp_id_pc_data = (id_pc_data & {64{ex_pc_ena}}) ;
    wire ex_id_not_equal        = |(temp_ex_pc_data ^ temp_id_pc_data) ;
    wire pc_flush_ena           = ex_id_not_equal ; 
    wire inst_is_muldiv         = exu_is_mul | exu_is_div | exu_is_rem ;
    //wire first_muldiv_stall     = muldiv_ready & inst_is_muldiv ;              
    wire muldiv_stall           = (~muldivout_valid) & inst_is_muldiv;

    assign pipeline_flush   = ({3{forward_load_stall}} & 3'b100) |
                              ({3{pc_flush_ena      }} & 3'b111) ;

    assign pipeline_stall   = ({5{forward_load_stall}} & 5'b00011) |
                              ({5{muldiv_stall      }} & 5'b11111) ;
endmodule