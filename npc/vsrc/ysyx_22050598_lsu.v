module ysyx_22050598_lsu (
    input           clk             ,
    input           rst             ,
    input [63:0]    ls_store_data   ,
    input [63:0]    ls_loc          ,
    input           load_en         ,
    input           store_en        ,
    input [1:0]     ls_type         ,
    input           load_unsigned   ,
    input           lsu_stall       ,
    output          unalign_stall   ,
    output [63:0]   load_data_o     ,
    output [63:0]   lsu_mem_addr    ,
    output [127:0]  lsu_mem_wdata   ,
    output          lsu_mem_r_req   ,
    output          lsu_mem_w_req   ,
    output          lsu_is_device   ,
    output [7:0]    lsu_wmask       ,
    input  [127:0]  lsu_mem_rdata   ,
    input           lsu_mem_ready
);
/****************************************************Device******************************************************/
    wire addr_is_device = (ls_loc[31] & ~ls_loc[30] & ls_loc[29] & ~ls_loc[28]) ;
/*****************************************************FSM********************************************************/
    wire cpu_data_ok ;
    wire unalign_state_r                               ; 
    wire state_is_lsu_idle         = ~unalign_state_r  ;
    wire state_is_lsu_unalign      =  unalign_state_r  ;

    wire lsu_unalign ;
    wire device_sta_is_done ;
    wire lsu_ena = (load_en | store_en) ;
    wire device_exit_ena = ( addr_is_device & lsu_mem_ready) | device_sta_is_done;
    wire normal_exit_ena = (~addr_is_device & cpu_data_ok  );
    wire exit_ena = (device_exit_ena | normal_exit_ena);

    wire state_is_idle_exit_ena    =  state_is_lsu_idle & lsu_unalign & lsu_ena & exit_ena ;//shake should change
    wire state_is_unalign_exit_ena =  state_is_lsu_unalign & exit_ena;//shake should change

    wire unalign_state_ena = state_is_idle_exit_ena | state_is_unalign_exit_ena ;
    wire unalign_state_nxt = state_is_lsu_idle;
    ysyx_22050598_sirv_gnrl_dfflr #(1) lsu_fsm_dfflr(unalign_state_ena, unalign_state_nxt, unalign_state_r, clk, rst);
/***************************************************LOAD******************************************************/
    wire size_b  = (~ls_type[1]) & (~ls_type[0]) ;
    wire size_h  = (~ls_type[1]) & ( ls_type[0]) ;
    wire size_w  = ( ls_type[1]) & (~ls_type[0]) ;
    wire size_d  = ( ls_type[1]) & ( ls_type[0]) ;

    wire loc_000 = (~ls_loc[2]) & (~ls_loc[1]) & (~ls_loc[0]) ;
    wire loc_001 = (~ls_loc[2]) & (~ls_loc[1]) & ( ls_loc[0]) ;
    wire loc_010 = (~ls_loc[2]) & ( ls_loc[1]) & (~ls_loc[0]) ;
    wire loc_011 = (~ls_loc[2]) & ( ls_loc[1]) & ( ls_loc[0]) ;
    wire loc_100 = ( ls_loc[2]) & (~ls_loc[1]) & (~ls_loc[0]) ;
    wire loc_101 = ( ls_loc[2]) & (~ls_loc[1]) & ( ls_loc[0]) ;
    wire loc_110 = ( ls_loc[2]) & ( ls_loc[1]) & (~ls_loc[0]) ;
    wire loc_111 = ( ls_loc[2]) & ( ls_loc[1]) & ( ls_loc[0]) ;

    wire unalign_h_111 = (size_h & loc_111);
    wire unalign_w_101 = (size_w & loc_101);
    wire unalign_w_110 = (size_w & loc_110);
    wire unalign_w_111 = (size_w & loc_111);
    wire unalign_d_001 = (size_d & loc_001);
    wire unalign_d_010 = (size_d & loc_010);
    wire unalign_d_011 = (size_d & loc_011);
    wire unalign_d_100 = (size_d & loc_100);
    wire unalign_d_101 = (size_d & loc_101);
    wire unalign_d_110 = (size_d & loc_110);
    wire unalign_d_111 = (size_d & loc_111);

    assign lsu_unalign = unalign_h_111      |
                         unalign_w_101      |
                         unalign_w_110      |
                         unalign_w_111      |
                         (size_d & ~loc_000);
    
    wire [63:0] rdata;
    wire [63:0] device_load_data  = ({64{device_sta_is_done}} & device_load_data_r) | ({64{~device_sta_is_done}} & lsu_mem_rdata[63:0]);
    wire [63:0] align_rdata       = ({64{~lsu_unalign & ~addr_is_device}} & rdata) | ({64{addr_is_device}} & device_load_data);
    wire unalign_load_data_ena    = (lsu_unalign & state_is_lsu_idle & load_en);
    wire [63:0] unalign_rdata     = ({64{~addr_is_device}} & rdata) | ({64{addr_is_device}} & device_load_data);

    wire [7:0] align_load_data_b  = ({8{loc_000}} & align_rdata[7:0])    |
                                    ({8{loc_001}} & align_rdata[15:8])   |
                                    ({8{loc_010}} & align_rdata[23:16])  |
                                    ({8{loc_011}} & align_rdata[31:24])  |
                                    ({8{loc_100}} & align_rdata[39:32])  |
                                    ({8{loc_101}} & align_rdata[47:40])  |
                                    ({8{loc_110}} & align_rdata[55:48])  |
                                    ({8{loc_111}} & align_rdata[63:56])  ;

    wire [15:0] align_load_data_h = ({16{loc_000}} & align_rdata[15:0])  |
                                    ({16{loc_001}} & align_rdata[23:8])  |
                                    ({16{loc_010}} & align_rdata[31:16]) |
                                    ({16{loc_011}} & align_rdata[39:24]) |
                                    ({16{loc_100}} & align_rdata[47:32]) |
                                    ({16{loc_101}} & align_rdata[55:40]) |
                                    ({16{loc_110}} & align_rdata[63:48]) ;

    wire [31:0] align_load_data_w = ({32{loc_000}} & align_rdata[31:0])  |
                                    ({32{loc_001}} & align_rdata[39:8])  |
                                    ({32{loc_010}} & align_rdata[47:16]) |
                                    ({32{loc_011}} & align_rdata[55:24]) |
                                    ({32{loc_100}} & align_rdata[63:32]) ; 

    wire [63:0] align_load_data   = ({64{size_b}}  & {{56{align_load_data_b[7]  & ~load_unsigned}},align_load_data_b }) |
                                    ({64{size_h}}  & {{48{align_load_data_h[15] & ~load_unsigned}},align_load_data_h }) | 
                                    ({64{size_w}}  & {{32{align_load_data_w[31] & ~load_unsigned}},align_load_data_w }) |
                                    ({64{size_d}}  & align_rdata ) ;

    wire [55:0] idle_unalign_load_data_r ;
    wire [55:0] idle_unalign_load_data  = ({56{unalign_d_010}} & {8'b0 ,unalign_rdata[63:16]}) |
                                          ({56{unalign_d_011}} & {16'b0,unalign_rdata[63:24]}) |
                                          ({56{unalign_d_100}} & {24'b0,unalign_rdata[63:32]}) |
                                          ({56{unalign_w_101}} & {32'b0,unalign_rdata[63:40]}) |
                                          ({56{unalign_d_101}} & {32'b0,unalign_rdata[63:40]}) |
                                          ({56{unalign_w_110}} & {40'b0,unalign_rdata[63:48]}) |
                                          ({56{unalign_d_110}} & {40'b0,unalign_rdata[63:48]}) |
                                          ({56{unalign_h_111}} & {48'b0,unalign_rdata[63:56]}) |
                                          ({56{unalign_w_111}} & {48'b0,unalign_rdata[63:56]}) |
                                          ({56{unalign_d_111}} & {48'b0,unalign_rdata[63:56]}) |
                                          ({56{unalign_d_001}} & unalign_rdata[63:8]         ) ;

    wire [63:0] temp_unalign_load_data = ({64{unalign_h_111 & state_is_lsu_unalign}} & {48'b0,unalign_rdata[7:0] ,idle_unalign_load_data_r[7:0] }) |
                                         ({64{unalign_w_101 & state_is_lsu_unalign}} & {32'b0,unalign_rdata[7:0] ,idle_unalign_load_data_r[23:0]}) |
                                         ({64{unalign_w_110 & state_is_lsu_unalign}} & {32'b0,unalign_rdata[15:0],idle_unalign_load_data_r[15:0]}) |
                                         ({64{unalign_w_111 & state_is_lsu_unalign}} & {32'b0,unalign_rdata[23:0],idle_unalign_load_data_r[7:0] }) |
                                         ({64{unalign_d_001 & state_is_lsu_unalign}} & {unalign_rdata[7:0] ,idle_unalign_load_data_r[55:0]})       |
                                         ({64{unalign_d_010 & state_is_lsu_unalign}} & {unalign_rdata[15:0],idle_unalign_load_data_r[47:0]})       |
                                         ({64{unalign_d_011 & state_is_lsu_unalign}} & {unalign_rdata[23:0],idle_unalign_load_data_r[39:0]})       |
                                         ({64{unalign_d_100 & state_is_lsu_unalign}} & {unalign_rdata[31:0],idle_unalign_load_data_r[31:0]})       |
                                         ({64{unalign_d_101 & state_is_lsu_unalign}} & {unalign_rdata[39:0],idle_unalign_load_data_r[23:0]})       |
                                         ({64{unalign_d_110 & state_is_lsu_unalign}} & {unalign_rdata[47:0],idle_unalign_load_data_r[15:0]})       |
                                         ({64{unalign_d_111 & state_is_lsu_unalign}} & {unalign_rdata[55:0],idle_unalign_load_data_r[7:0]})        ;
                                     
    wire [63:0] unalign_load_data = ({64{size_h}}  & {{48{temp_unalign_load_data[15] & ~load_unsigned}},temp_unalign_load_data[15:0]}) | 
                                    ({64{size_w}}  & {{32{temp_unalign_load_data[31] & ~load_unsigned}},temp_unalign_load_data[31:0]}) |
                                    ({64{size_d}}  & temp_unalign_load_data ) ;                                 

    wire [63:0] cache_addr = ({64{state_is_lsu_idle}} & {ls_loc[63:3],3'b0})                                | 
                             ({64{state_is_lsu_unalign & ~addr_is_device}} & {ls_loc[63:3] + 1'b1, 3'b0})   ;
    wire [63:0] load_data  = ({64{state_is_lsu_idle}} & align_load_data) | ({64{state_is_lsu_unalign}} & unalign_load_data );
    ysyx_22050598_sirv_gnrl_dfflr #(56) unalign_load_data_dfflr(unalign_load_data_ena, idle_unalign_load_data, idle_unalign_load_data_r, clk, rst);
/*****************************************************************STORE******************************************************/
    wire [7:0]  wmask;

    wire [7:0] idle_wmask_b = ({8{loc_000}} & 8'b00000001)  |
                              ({8{loc_001}} & 8'b00000010)  |
                              ({8{loc_010}} & 8'b00000100)  |
                              ({8{loc_011}} & 8'b00001000)  |
                              ({8{loc_100}} & 8'b00010000)  |
                              ({8{loc_101}} & 8'b00100000)  |
                              ({8{loc_110}} & 8'b01000000)  |
                              ({8{loc_111}} & 8'b10000000)  ;

    wire [7:0] idle_wmask_h = ({8{loc_000}} & 8'b00000011) |
                              ({8{loc_001}} & 8'b00000110) |
                              ({8{loc_010}} & 8'b00001100) |
                              ({8{loc_011}} & 8'b00011000) |
                              ({8{loc_100}} & 8'b00110000) |
                              ({8{loc_101}} & 8'b01100000) |
                              ({8{loc_110}} & 8'b11000000) |
                              ({8{loc_111}} & 8'b10000000) ;  

    wire [7:0] idle_wmask_w = ({8{loc_000}} & 8'b00001111) |
                              ({8{loc_001}} & 8'b00011110) |
                              ({8{loc_010}} & 8'b00111100) |
                              ({8{loc_011}} & 8'b01111000) |
                              ({8{loc_100}} & 8'b11110000) |
                              ({8{loc_101}} & 8'b11100000) |
                              ({8{loc_110}} & 8'b11000000) |
                              ({8{loc_111}} & 8'b10000000) ;

    wire [7:0] idle_wmask_d = ({8{loc_000}} & 8'b11111111) |
                              ({8{loc_001}} & 8'b11111110) |
                              ({8{loc_010}} & 8'b11111100) |
                              ({8{loc_011}} & 8'b11111000) |
                              ({8{loc_100}} & 8'b11110000) |
                              ({8{loc_101}} & 8'b11100000) |
                              ({8{loc_110}} & 8'b11000000) |
                              ({8{loc_111}} & 8'b10000000) ;

    wire [7:0] idle_wmask = ({8{size_b}} & idle_wmask_b ) |
                            ({8{size_h}} & idle_wmask_h ) |
                            ({8{size_w}} & idle_wmask_w ) |
                            ({8{size_d}} & idle_wmask_d ) ;

    wire [7:0] unalign_wmask_h = ({8{unalign_h_111}} & 8'b00000001) ;  

    wire [7:0] unalign_wmask_w = ({8{unalign_w_101}} & 8'b00000001) |
                                 ({8{unalign_w_110}} & 8'b00000011) |
                                 ({8{unalign_w_111}} & 8'b00000111) ;

    wire [7:0] unalign_wmask_d = ({8{unalign_d_001}} & 8'b00000001) |
                                 ({8{unalign_d_010}} & 8'b00000011) |
                                 ({8{unalign_d_011}} & 8'b00000111) |
                                 ({8{unalign_d_100}} & 8'b00001111) |
                                 ({8{unalign_d_101}} & 8'b00011111) |
                                 ({8{unalign_d_110}} & 8'b00111111) |
                                 ({8{unalign_d_111}} & 8'b01111111) ;

    wire [7:0] unalign_wmask   = ({8{size_h}} & unalign_wmask_h ) |
                                 ({8{size_w}} & unalign_wmask_w ) |
                                 ({8{size_d}} & unalign_wmask_d ) ;
                                 
    assign wmask = ({8{state_is_lsu_idle}} & idle_wmask) | ({8{state_is_lsu_unalign}} & unalign_wmask) ;
    /////////store data
    wire [63:0] normal_store_data = ls_store_data ; 
    wire [63:0] idle_data_b  = {8{normal_store_data[7:0]}} ;

    wire [63:0] idle_data_h  = ({64{loc_000}} & {4{normal_store_data[15:0]}})             | 
                               ({64{loc_010}} & {4{normal_store_data[15:0]}})             |
                               ({64{loc_100}} & {4{normal_store_data[15:0]}})             |
                               ({64{loc_110}} & {4{normal_store_data[15:0]}})             |
                               ({64{loc_001}} & {8'b0,{3{normal_store_data[15:0]}},8'b0}) |
                               ({64{loc_011}} & {8'b0,{3{normal_store_data[15:0]}},8'b0}) |
                               ({64{loc_101}} & {8'b0,{3{normal_store_data[15:0]}},8'b0}) |
                               ({64{loc_111}} & {normal_store_data[7:0],56'b0})           ;

    wire [63:0] idle_data_w  = ({64{loc_000}} & {2{normal_store_data[31:0]}})           |
                               ({64{loc_100}} & {2{normal_store_data[31:0]}})           |
                               ({64{loc_001}} & {24'b0,normal_store_data[31:0],8'b0 })  |
                               ({64{loc_010}} & {16'b0,normal_store_data[31:0],16'b0})  |
                               ({64{loc_011}} & {8'b0,normal_store_data[31:0],24'b0})   |
                               ({64{loc_101}} & {normal_store_data[23:0],40'b0})        |
                               ({64{loc_110}} & {normal_store_data[15:0],48'b0})        |
                               ({64{loc_111}} & {normal_store_data[7:0],56'b0})         ;

    wire [63:0] idle_data_d  = ({64{loc_000}} & normal_store_data)                |
                               ({64{loc_001}} & {normal_store_data[55:0],8'b0 })  |
                               ({64{loc_010}} & {normal_store_data[47:0],16'b0})  |
                               ({64{loc_011}} & {normal_store_data[39:0],24'b0})  |
                               ({64{loc_100}} & {normal_store_data[31:0],32'b0})  |
                               ({64{loc_101}} & {normal_store_data[23:0],40'b0})  |
                               ({64{loc_110}} & {normal_store_data[15:0],48'b0})  |
                               ({64{loc_111}} & {normal_store_data[7:0] ,56'b0})  ;

    wire [63:0] idle_data = ({64{size_b}} & idle_data_b ) |
                            ({64{size_h}} & idle_data_h ) |
                            ({64{size_w}} & idle_data_w ) |
                            ({64{size_d}} & idle_data_d ) ;

    wire [63:0] unalign_data_h  = {8{normal_store_data[15:8]}} ;  

    wire [63:0] unalign_data_w  = ({64{unalign_w_101}} & {56'b0,normal_store_data[31:24]}) |
                                  ({64{unalign_w_110}} & {48'b0,normal_store_data[31:16]}) |
                                  ({64{unalign_w_111}} & {40'b0,normal_store_data[31:8]})  ;

    wire [63:0] unalign_data_d  = ({64{unalign_d_001}} & {56'b0,normal_store_data[63:56]})  |
                                  ({64{unalign_d_010}} & {48'b0,normal_store_data[63:48]})  |
                                  ({64{unalign_d_011}} & {40'b0,normal_store_data[63:40]})  |
                                  ({64{unalign_d_100}} & {32'b0,normal_store_data[63:32]})  |
                                  ({64{unalign_d_101}} & {24'b0,normal_store_data[63:24]})  |
                                  ({64{unalign_d_110}} & {16'b0,normal_store_data[63:16]})  |
                                  ({64{unalign_d_111}} & {8'b0 ,normal_store_data[63:8] })  ;

    wire [63:0] unalign_data =  ({64{size_h}} & unalign_data_h ) |
                                ({64{size_w}} & unalign_data_w ) |
                                ({64{size_d}} & unalign_data_d ) ;

    wire [63:0] normal_wdata = ({64{state_is_lsu_idle}} & idle_data) | ({64{state_is_lsu_unalign}} & unalign_data);
/*************************************************************Dcache***************************************************************/
    wire         cpu_read_req  = load_en  & ~addr_is_device ;
    wire         cpu_write_req = store_en & ~addr_is_device ; 
    wire [63:0]  cache_mem_addr                             ;
    wire [127:0] cache_mem_wdata                            ;
    wire         cache_mem_r                                ;
    wire         cache_mem_w                                ;
    ysyx_22050598_cache u_ysyx_22050598_dcache (
        .clk                    (clk            ),
        .rst                    (rst            ),
        .cpu_read_req           (cpu_read_req   ),
        .cpu_write_req          (cpu_write_req  ),
        .cpu_addr               (cache_addr     ),
        .cpu_wmask              (wmask          ),
        .cpu_write_data         (normal_wdata   ),
        .cpu_data_ok            (cpu_data_ok    ),
        .cpu_read_data          (rdata          ),
        .mem_req_addr           (cache_mem_addr ),
        .mem_w_data             (cache_mem_wdata),
        .mem_req_r              (cache_mem_r    ), 
        .mem_req_w              (cache_mem_w    ),   
        .mem_r_data             (lsu_mem_rdata  ),
        .mem_req_ready          (lsu_mem_ready  )
    );
    /****************************************************device fsm**************************************************************/
    localparam DEVICE_IDLE  = 2'b00 ;
    localparam DEVICE_WRITE = 2'b01 ;
    localparam DEVICE_READ  = 2'b10 ;
    localparam DEVICE_DONE  = 2'b11 ;

    wire [1:0] device_state_r ;
    wire       device_sta_is_idle  = ~device_state_r[1] & ~device_state_r[0];
    wire       device_sta_is_write = ~device_state_r[1] &  device_state_r[0];
    wire       device_sta_is_read  =  device_state_r[1] & ~device_state_r[0];
    assign     device_sta_is_done  =  device_state_r[1] &  device_state_r[0];

    wire   device_sta_is_idle_exit_ena   = device_sta_is_idle  & lsu_ena & addr_is_device  ; 
    wire   device_sta_is_write_exit_ena  = device_sta_is_write & lsu_mem_ready             ;
    wire   device_sta_is_read_exit_ena   = device_sta_is_read  & lsu_mem_ready             ;
    wire   device_sta_is_done_exit_ena   = device_sta_is_done  & ~lsu_stall                ;

    wire [1:0] device_sta_is_idle_nxt  = load_en    ? DEVICE_READ : DEVICE_WRITE           ; 
    wire [1:0] device_sta_is_write_nxt = lsu_stall  ? DEVICE_DONE : DEVICE_IDLE            ;
    wire [1:0] device_sta_is_read_nxt  = lsu_stall  ? DEVICE_DONE : DEVICE_IDLE            ;
    wire [1:0] device_sta_is_done_nxt  = DEVICE_IDLE                                       ;

    wire       device_ena = device_sta_is_idle_exit_ena  | 
                            device_sta_is_write_exit_ena | 
                            device_sta_is_read_exit_ena  |
                            device_sta_is_done_exit_ena  ;
    wire [1:0] device_nxt = ({2{device_sta_is_idle_exit_ena }} & device_sta_is_idle_nxt ) |
                            ({2{device_sta_is_write_exit_ena}} & device_sta_is_write_nxt) |
                            ({2{device_sta_is_read_exit_ena }} & device_sta_is_read_nxt ) |
                            ({2{device_sta_is_done_exit_ena }} & device_sta_is_done_nxt ) ;
    ysyx_22050598_sirv_gnrl_dfflr #(2) device_dfflr(device_ena, device_nxt, device_state_r, clk, rst); 

    wire        device_load_data_ena = device_sta_is_read_exit_ena ;
    wire [63:0] device_load_data_r ;

    ysyx_22050598_sirv_gnrl_dfflr #(64) device_load_data_dfflr(device_load_data_ena, lsu_mem_rdata[63:0], device_load_data_r, clk, rst);               
/**********************************************************************************************************************************/
    wire [63:0] device_wdata = ({64{size_b}} & {8{ls_store_data[7:0]}})  |
                               ({64{size_h}} & {4{ls_store_data[15:0]}}) |
                               ({64{size_w}} & {2{ls_store_data[31:0]}}) |
                               ({64{size_d}} & ls_store_data)            ;

    assign lsu_mem_addr     = ({64{~addr_is_device}}  & cache_mem_addr ) | ({64{addr_is_device }} & cache_addr) ;
    assign lsu_mem_wdata    = ({128{~addr_is_device}} & cache_mem_wdata) | ({128{addr_is_device}} & {2{device_wdata}}); 
    assign lsu_mem_r_req    = (cache_mem_r | device_sta_is_read );
    assign lsu_mem_w_req    = (cache_mem_w | device_sta_is_write); 
    assign lsu_is_device    = device_sta_is_read | device_sta_is_write ;
    assign lsu_wmask        = wmask ;

    assign unalign_stall = ( lsu_unalign & state_is_lsu_idle & lsu_ena            ) |//unalign stall 
                           (~lsu_unalign & state_is_lsu_idle & ~exit_ena & lsu_ena) |//align stall
                           ( state_is_lsu_unalign & ~exit_ena                     ) ;//shake should change
    assign load_data_o   = load_data ;

    wire device_unalign = addr_is_device & lsu_unalign ;
    import "DPI-C" function void deviceandunalign();
    always @(posedge device_unalign) begin
        deviceandunalign();    
    end
endmodule