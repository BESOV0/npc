module ysyx_22050598_cache (
    input            clk                    ,
    input            rst                    ,
    //cpu
    input            cpu_read_req           ,
    input            cpu_write_req          ,
    input  [63:0]    cpu_addr               ,
    input  [7:0]     cpu_wmask              ,
    input  [63:0]    cpu_write_data         ,
    output           cpu_data_ok            ,
    output [63:0]    cpu_read_data          ,
    //mem
    output [63:0]    mem_req_addr           ,
    output [127:0]   mem_w_data             ,
    output           mem_req_r              , 
    output           mem_req_w              ,   
    input  [127:0]   mem_r_data             ,
    input            mem_req_ready
);
/*************************************************************FSM*************************************************************/
    localparam CMP      = 5'b00001  ;
    localparam WMEM     = 5'b00010  ;
    localparam LINEFILL = 5'b00100  ;
    localparam WLINE    = 5'b01000  ;
    localparam RLINE    = 5'b10000  ;
    
    wire [4:0] state_r              ;

    wire state_cmp_exit_ena         ;
    wire state_wmem_exit_ena        ;
    wire state_linefill_exit_ena    ;
    wire state_wline_exit_ena       ;
    wire state_rline_exit_ena       ;

    wire [4:0] state_cmp_nxt        ;
    wire [4:0] state_wmem_nxt       ;
    wire [4:0] state_linefill_nxt   ;
    wire [4:0] state_wline_nxt      ;
    wire [4:0] state_rline_nxt      ;

    wire sta_is_cmp      = state_r[0];
    wire sta_is_wmem     = state_r[1];
    wire sta_is_linefill = state_r[2];
    wire sta_is_wline    = state_r[3];
    wire sta_is_rline    = state_r[4];
/***********************************************************Stage 1**********************************************************/
    wire [53:0] tag_i        = cpu_addr[63:10]  ;
    wire [5:0]  set_index_i  = cpu_addr[9:4]    ;
    wire [3:0]  set_offset_i = cpu_addr[3:0]    ;

    wire [54:0] tag_valid_way0_data ;
    wire [54:0] tag_valid_way1_data ;
    wire [54:0] tag_valid_way2_data ;
    wire [54:0] tag_valid_way3_data ;

    wire tag_way0 = ~(|(tag_i ^ tag_valid_way0_data[54:1]));
    wire tag_way1 = ~(|(tag_i ^ tag_valid_way1_data[54:1]));
    wire tag_way2 = ~(|(tag_i ^ tag_valid_way2_data[54:1]));
    wire tag_way3 = ~(|(tag_i ^ tag_valid_way3_data[54:1]));

    wire hit_way0 = (tag_way0 & tag_valid_way0_data[0]);
    wire hit_way1 = (tag_way1 & tag_valid_way1_data[0]);
    wire hit_way2 = (tag_way2 & tag_valid_way2_data[0]);
    wire hit_way3 = (tag_way3 & tag_valid_way3_data[0]);

    wire hit = hit_way0 | hit_way1 | hit_way2 | hit_way3;
    wire cpu_req = cpu_read_req | cpu_write_req ;
    //choose way
    wire [1:0] way_num_o;
    wire chose_way0 = (~way_num_o[1]) & (~way_num_o[0]) ;
    wire chose_way1 = (~way_num_o[1]) & ( way_num_o[0]) ;
    wire chose_way2 = ( way_num_o[1]) & (~way_num_o[0]) ;
    wire chose_way3 = ( way_num_o[1]) & ( way_num_o[0]) ;

    wire nhit_way0  = (~hit & chose_way0) ;
    wire nhit_way1  = (~hit & chose_way1) ;
    wire nhit_way2  = (~hit & chose_way2) ;
    wire nhit_way3  = (~hit & chose_way3) ;
    //ram enable
    wire cache_way0 = hit_way0 | nhit_way0;
    wire cache_way1 = hit_way1 | nhit_way1;
    wire cache_way2 = hit_way2 | nhit_way2;
    wire cache_way3 = hit_way3 | nhit_way3;
    //line dirty judge
    wire way0_dirty ;
    wire way1_dirty ;
    wire way2_dirty ;
    wire way3_dirty ;

    wire wmem_dirty_way0 = (chose_way0 & way0_dirty) ;
    wire wmem_dirty_way1 = (chose_way1 & way1_dirty) ;
    wire wmem_dirty_way2 = (chose_way2 & way2_dirty) ;
    wire wmem_dirty_way3 = (chose_way3 & way3_dirty) ;

    wire line_dirty = wmem_dirty_way0 | wmem_dirty_way1 | wmem_dirty_way2 | wmem_dirty_way3;
    //pipeline reg
    wire [3:0] way_num_res = {cache_way3, cache_way2, cache_way1, cache_way0};
    wire [3:0] way_num_r ;
    wire way_num_dff_ena = sta_is_cmp & cpu_req;
    ysyx_22050598_sirv_gnrl_dfflr #(4) way_num_dfflr (way_num_dff_ena, way_num_res, way_num_r, clk, rst);

    wire set_offset_r ;
    wire set_offset_ena = sta_is_cmp & cpu_req;
    ysyx_22050598_sirv_gnrl_dfflr #(1) set_offset_dfflr (set_offset_ena, set_offset_i[3], set_offset_r, clk, rst);

    wire [63:0] cpu_addr_r ;
    wire cpu_addr_dff_ena = sta_is_cmp & cpu_req;
    ysyx_22050598_sirv_gnrl_dfflr #(64) cpu_addr_dfflr (cpu_addr_dff_ena, cpu_addr, cpu_addr_r, clk, rst);

    wire [63:0] cpu_write_data_r ;
    wire cpu_write_data_dff_ena = sta_is_cmp & cpu_write_req;
    ysyx_22050598_sirv_gnrl_dfflr #(64) cpu_write_data_dfflr (cpu_write_data_dff_ena, cpu_write_data, cpu_write_data_r, clk, rst);
/**********************************************************hit read*********************************************************/
/*********************************************************nohit read********************************************************/
    wire [127:0] block_data_way0;
    wire [127:0] block_data_way1;
    wire [127:0] block_data_way2;
    wire [127:0] block_data_way3;

    wire [127:0] temp_hit_read_data = ({128{hit_way0}} & block_data_way0) |
                                      ({128{hit_way1}} & block_data_way1) |
                                      ({128{hit_way2}} & block_data_way2) |
                                      ({128{hit_way3}} & block_data_way3) ;

    wire [63:0] hit_read_data = ({64{ set_offset_i[3]}} & temp_hit_read_data[127:64]) | 
                                ({64{~set_offset_i[3]}} & temp_hit_read_data[63:0]  ) ;                            

    wire [127:0] temp_not_hit_read_data = ({128{way_num_r[0]}} & block_data_way0) |
                                          ({128{way_num_r[1]}} & block_data_way1) |
                                          ({128{way_num_r[2]}} & block_data_way2) |
                                          ({128{way_num_r[3]}} & block_data_way3) ;

    wire [63:0] not_hit_read_data = ({64{ set_offset_r}} & temp_not_hit_read_data[127:64]) | 
                                    ({64{~set_offset_r}} & temp_not_hit_read_data[63:0]  ) ;

    assign cpu_read_data = ({64{sta_is_cmp  }} & hit_read_data) | 
                           ({64{sta_is_rline}} & not_hit_read_data) ;
/***********************************************************wmem***********************************************************/
    wire [127:0] wmem_block_data_o = ({128{way_num_r[0]}} & block_data_way0) |
                                     ({128{way_num_r[1]}} & block_data_way1) |
                                     ({128{way_num_r[2]}} & block_data_way2) |
                                     ({128{way_num_r[3]}} & block_data_way3) ;

    wire [53:0] wmem_tag = ({54{way_num_r[0]}} & tag_valid_way0_data[54:1]) |
                           ({54{way_num_r[1]}} & tag_valid_way1_data[54:1]) |
                           ({54{way_num_r[2]}} & tag_valid_way2_data[54:1]) |
                           ({54{way_num_r[3]}} & tag_valid_way3_data[54:1]) ;

    wire [63:0] wmem_addr = {wmem_tag,cpu_addr_r[9:0]};
    assign mem_w_data     = wmem_block_data_o ;
    assign mem_req_addr   = (cpu_addr_r & {64{sta_is_linefill}}) | (wmem_addr & {64{sta_is_wmem}}); 
    assign mem_req_w      = sta_is_wmem ;
    wire mem_req_valid    = sta_is_wmem | sta_is_linefill;
    wire write_done       = mem_req_valid & mem_req_ready;//this part should change when use AXI
/**********************************************************linefill********************************************************/
    wire [63:0]  wmask = {{8{cpu_wmask[7]}}, 
                          {8{cpu_wmask[6]}}, 
                          {8{cpu_wmask[5]}}, 
                          {8{cpu_wmask[4]}},
                          {8{cpu_wmask[3]}}, 
                          {8{cpu_wmask[2]}},
                          {8{cpu_wmask[1]}}, 
                          {8{cpu_wmask[0]}}
                         };
    wire [127:0] wmask_lo      = {64'b0,wmask};
    wire [127:0] wmask_hi      = {wmask,64'b0};
    wire [127:0] wline_mask    = ({128{set_offset_r}} & wmask_hi) | ({128{~set_offset_r}} & wmask_lo) ;
    wire [127:0] linefill_mask = 128'hffffffff_ffffffff_ffffffff_ffffffff;
    wire [127:0] cache_bwen    = (wline_mask & {128{sta_is_wline}}) | (linefill_mask & {128{sta_is_linefill}});

    wire fill_done ;
    wire cache_way0_wen = ~((sta_is_wline | (sta_is_linefill & fill_done)) & way_num_r[0]);
    wire cache_way1_wen = ~((sta_is_wline | (sta_is_linefill & fill_done)) & way_num_r[1]);
    wire cache_way2_wen = ~((sta_is_wline | (sta_is_linefill & fill_done)) & way_num_r[2]);
    wire cache_way3_wen = ~((sta_is_wline | (sta_is_linefill & fill_done)) & way_num_r[3]);

    wire [127:0] linefill_data = mem_r_data;
    assign mem_req_r = sta_is_linefill ;
    assign fill_done = mem_req_valid & mem_req_ready;
/**********************************************************hitwrite********************************************************/
/*********************************************************nohitwrite*******************************************************/
    wire [127:0] wline_data = {2{cpu_write_data_r}} ;
    wire [127:0] cache_data = (wline_data & {128{sta_is_wline}}) | (linefill_data & {128{sta_is_linefill}});
/*********************************************************output ctrl******************************************************/
    assign cpu_data_ok = (hit & cpu_read_req & sta_is_cmp) | sta_is_wline | sta_is_rline ;
/*************************************************************FSM**********************************************************/
    //State :CMP
    assign state_cmp_exit_ena = sta_is_cmp & cpu_req ;
    assign state_cmp_nxt = ({5{( hit & cpu_read_req )}} & CMP     ) |
                           ({5{( hit & cpu_write_req)}} & WLINE   ) |
                           ({5{(~hit & line_dirty   )}} & WMEM    ) |
                           ({5{(~hit & ~line_dirty  )}} & LINEFILL) ;
    //State :Write MEM
    assign state_wmem_exit_ena = sta_is_wmem;
    assign state_wmem_nxt = write_done ? LINEFILL : WMEM ;
    //State :Linefill
    assign state_linefill_exit_ena = sta_is_linefill;
    assign state_linefill_nxt =  (fill_done & cpu_read_req )  ? RLINE : 
                                 (fill_done & cpu_write_req)  ? WLINE : LINEFILL;
    //State :Write line
    assign state_wline_exit_ena = sta_is_wline;
    assign state_wline_nxt = CMP;

    //State :Read line
    assign state_rline_exit_ena = sta_is_rline;
    assign state_rline_nxt = CMP;

    wire state_ena;
    assign state_ena = state_cmp_exit_ena      | 
                       state_wmem_exit_ena     |
                       state_linefill_exit_ena | 
                       state_rline_exit_ena    |
                       state_wline_exit_ena    ;

    wire [4:0] state_nxt;
    assign state_nxt = ({5{ state_cmp_exit_ena      }} & state_cmp_nxt      ) |
                       ({5{ state_wmem_exit_ena     }} & state_wmem_nxt     ) |
                       ({5{ state_linefill_exit_ena }} & state_linefill_nxt ) |
                       ({5{ state_rline_exit_ena    }} & state_rline_nxt    ) |
                       ({5{ state_wline_exit_ena    }} & state_wline_nxt    ) ;
                
    ysyx_22050598_sirv_gnrl_dfflr_with_resetval #(5,5'b00001) cache_state_dfflr (state_ena, state_nxt, state_r, clk, rst);  
/************************************************************LRU Part************************************************************/
    wire [1:0] way_num_i = ({2{hit_way0}} & 2'b00) |
                           ({2{hit_way1}} & 2'b01) |
                           ({2{hit_way2}} & 2'b10) |
                           ({2{hit_way3}} & 2'b11) |
                           ({2{~hit}} & way_num_o) ;
    wire lru_wen = sta_is_cmp & cpu_req;
    ysyx_22050598_cache_lru u_cache_lru (
        .clk            (clk            ), 
        .rst            (rst            ), 
        .wen            (lru_wen        ), 
        .set_index      (set_index_i    ), 
        .way_index_i    (way_num_i      ), 
        .way_index_o    (way_num_o      )
    );
/**************************************************************Dirty Part********************************************************/
    wire cache_dirty_en      = (sta_is_wline | sta_is_linefill);
    wire cache_dirty_way0_en = (cache_dirty_en) & (way_num_r[0]);
    wire cache_dirty_way1_en = (cache_dirty_en) & (way_num_r[1]);
    wire cache_dirty_way2_en = (cache_dirty_en) & (way_num_r[2]);
    wire cache_dirty_way3_en = (cache_dirty_en) & (way_num_r[3]);

    wire dirty_data = sta_is_wline;//wline write 1 linefill write 0

    ysyx_22050598_cache_tag_vaild #(1,64) way0_cache_dirty (
    .clk(clk),
    .rst(rst),
    .wen(cache_dirty_way0_en),
    .set_index(set_index_i),
    .tag_vaild_data_i(dirty_data),
    .tag_vaild_data_o(way0_dirty)
    );

    ysyx_22050598_cache_tag_vaild #(1,64) way1_cache_dirty (
    .clk(clk),
    .rst(rst),
    .wen(cache_dirty_way1_en),
    .set_index(set_index_i),
    .tag_vaild_data_i(dirty_data),
    .tag_vaild_data_o(way1_dirty)
    );

    ysyx_22050598_cache_tag_vaild #(1,64) way2_cache_dirty (
    .clk(clk),
    .rst(rst),
    .wen(cache_dirty_way2_en),
    .set_index(set_index_i),
    .tag_vaild_data_i(dirty_data),
    .tag_vaild_data_o(way2_dirty)
    );

    ysyx_22050598_cache_tag_vaild #(1,64) way3_cache_dirty (
    .clk(clk),
    .rst(rst),
    .wen(cache_dirty_way3_en),
    .set_index(set_index_i),
    .tag_vaild_data_i(dirty_data),
    .tag_vaild_data_o(way3_dirty)
    );
/*********************************************************Tag Valid Part*******************************************************/
    wire cache_tag_valid_way0_en = (sta_is_linefill) & (way_num_r[0]) ;
    wire cache_tag_valid_way1_en = (sta_is_linefill) & (way_num_r[1]) ;
    wire cache_tag_valid_way2_en = (sta_is_linefill) & (way_num_r[2]) ;
    wire cache_tag_valid_way3_en = (sta_is_linefill) & (way_num_r[3]) ;
    
    wire [54:0] cache_tag_valid_data = {cpu_addr_r[63:10],1'b1};
    ysyx_22050598_cache_tag_vaild #(55,64) way0_cache_tag_valid (
    .clk(clk),
    .rst(rst),
    .wen(cache_tag_valid_way0_en),
    .set_index(set_index_i),
    .tag_vaild_data_i(cache_tag_valid_data),
    .tag_vaild_data_o(tag_valid_way0_data)
    );

    ysyx_22050598_cache_tag_vaild #(55,64) way1_cache_tag_valid (
    .clk(clk),
    .rst(rst),
    .wen(cache_tag_valid_way1_en),
    .set_index(set_index_i),
    .tag_vaild_data_i(cache_tag_valid_data),
    .tag_vaild_data_o(tag_valid_way1_data)
    );

    ysyx_22050598_cache_tag_vaild #(55,64) way2_cache_tag_valid (
    .clk(clk),
    .rst(rst),
    .wen(cache_tag_valid_way2_en),
    .set_index(set_index_i),
    .tag_vaild_data_i(cache_tag_valid_data),
    .tag_vaild_data_o(tag_valid_way2_data)
    );

    ysyx_22050598_cache_tag_vaild #(55,64) way3_cache_tag_valid (
    .clk(clk),
    .rst(rst),
    .wen(cache_tag_valid_way3_en),
    .set_index(set_index_i),
    .tag_vaild_data_i(cache_tag_valid_data),
    .tag_vaild_data_o(tag_valid_way3_data)
    );
/********************************************************************cache ram***********************************************/
    wire [127:0] BWEN  = ~cache_bwen;
    wire cache_way0_en = ~((cache_way0 & sta_is_cmp) | way_num_r[0]);
    wire cache_way1_en = ~((cache_way1 & sta_is_cmp) | way_num_r[1]);
    wire cache_way2_en = ~((cache_way2 & sta_is_cmp) | way_num_r[2]);
    wire cache_way3_en = ~((cache_way3 & sta_is_cmp) | way_num_r[3]);
    S011HD1P_X32Y2D128_BW cache_way0_ram(
        .Q      (block_data_way0    ), 
        .CLK    (clk                ), 
        .CEN    (cache_way0_en      ), 
        .WEN    (cache_way0_wen     ), 
        .BWEN   (BWEN               ), 
        .A      (set_index_i        ), 
        .D      (cache_data         )
    );
    S011HD1P_X32Y2D128_BW cache_way1_ram(
        .Q      (block_data_way1    ), 
        .CLK    (clk                ),
        .CEN    (cache_way1_en      ), 
        .WEN    (cache_way1_wen     ), 
        .BWEN   (BWEN               ), 
        .A      (set_index_i        ), 
        .D      (cache_data         )
    );
    S011HD1P_X32Y2D128_BW cache_way2_ram(
        .Q      (block_data_way2    ), 
        .CLK    (clk                ), 
        .CEN    (cache_way2_en      ), 
        .WEN    (cache_way2_wen     ), 
        .BWEN   (BWEN               ), 
        .A      (set_index_i        ), 
        .D      (cache_data         )
    );
    S011HD1P_X32Y2D128_BW cache_way3_ram(
        .Q      (block_data_way3    ), 
        .CLK    (clk                ), 
        .CEN    (cache_way3_en      ), 
        .WEN    (cache_way3_wen     ), 
        .BWEN   (BWEN               ), 
        .A      (set_index_i        ), 
        .D      (cache_data         )
    );
endmodule