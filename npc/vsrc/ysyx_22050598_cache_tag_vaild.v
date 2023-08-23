module ysyx_22050598_cache_tag_vaild #(
    parameter DW = 55,
    parameter DP = 64
) (
    input               clk                 ,
    input               rst                 ,
    input               wen                 ,
    input   [5:0]       set_index           ,
    input   [DW-1:0]    tag_vaild_data_i    ,
    output  [DW-1:0]    tag_vaild_data_o
);
    wire [DW-1:0] cache_tag_vaild_file [DP-1:0];
    wire [DP-1:0] cache_wen;
    genvar i;
    generate 
      for (i=0; i<DP; i=i+1) begin:cache_tag_vaild_ram
            assign cache_wen[i] = wen & (set_index == i) ;
            ysyx_22050598_sirv_gnrl_dfflr #(DW) tag_vaild_ram (cache_wen[i], tag_vaild_data_i, cache_tag_vaild_file[i], clk, rst);
      end
    endgenerate 

    assign tag_vaild_data_o = cache_tag_vaild_file[set_index];

endmodule