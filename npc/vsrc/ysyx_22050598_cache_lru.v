module ysyx_22050598_cache_lru #(
    parameter DP = 64
) (
    input           clk         ,
    input           rst         ,
    input           wen         ,
    input   [5:0]   set_index   ,
    input   [1:0]   way_index_i ,
    output  [1:0]   way_index_o
);
    wire [1:0] cache_lru_file [DP-1:0];
    wire [DP-1:0] cache_wen;
    genvar i;
    generate 
      for (i=0; i<DP; i=i+1) begin:cache_lru_ram
            assign cache_wen[i] = wen & (set_index == i) ;
            ysyx_22050598_set_cache_lru set_cache_ram (clk, rst, cache_wen[i], way_index_i, cache_lru_file[i]);
      end
    endgenerate 

    assign way_index_o = cache_lru_file[set_index];

endmodule
