module ysyx_22050598_set_cache_lru (
    input           clk             ,
    input           rst             ,
    input           wen             ,
    input  [1:0]    way_index_i     ,
    output [1:0]    way_index_o
);

    wire [1:0] way0_way1_data;
    wire [1:0] way1_way2_data;
    wire [1:0] way2_way3_data;
    wire [1:0] way3_out_data ;

    wire not_way_0 = (|(way_index_i ^ way0_way1_data)) & wen       ;
    wire not_way_1 = (|(way_index_i ^ way1_way2_data)) & not_way_0 ;
    wire not_way_2 = (|(way_index_i ^ way2_way3_data)) & not_way_1 ;

    //way 0 lru reg
    ysyx_22050598_sirv_gnrl_dfflr_with_resetval #(2,2'b00) u_cache_lru_reg_way0 (
    .lden         (wen            ), 
    .dnxt         (way_index_i    ),
    .qout         (way0_way1_data ),
    .clk          (clk            ),
    .rst_n        (rst            )
    );
    //way 1 lru reg
    ysyx_22050598_sirv_gnrl_dfflr_with_resetval #(2,2'b01) u_cache_lru_reg_way1 (
    .lden         (not_way_0      ), 
    .dnxt         (way0_way1_data ),
    .qout         (way1_way2_data ),
    .clk          (clk            ),
    .rst_n        (rst            )
    );
    //way 2 lru reg
    ysyx_22050598_sirv_gnrl_dfflr_with_resetval #(2,2'b10) u_cache_lru_reg_way2 (
    .lden         (not_way_1      ), 
    .dnxt         (way1_way2_data ),
    .qout         (way2_way3_data ),
    .clk          (clk            ),
    .rst_n        (rst            )
    );
    //way 3 lru reg
    ysyx_22050598_sirv_gnrl_dfflr_with_resetval #(2,2'b11) u_cache_lru_reg_way3 (
    .lden         (not_way_2      ), 
    .dnxt         (way2_way3_data ),
    .qout         (way3_out_data  ),
    .clk          (clk            ),
    .rst_n        (rst            )
    );

    assign way_index_o = way3_out_data;

endmodule