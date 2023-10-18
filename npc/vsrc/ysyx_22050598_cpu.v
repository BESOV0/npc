`include "ysyx_22050598_defines.v"
module ysyx_22050598_cpu(
    `ifdef ysyx_22050598_Test
    output [63:0]   test_if_pc       ,
    output [31:0]   test_if_inst     , 
    output [63:0]   test_id_pc       ,
    output [31:0]   test_id_inst     , 
    output [63:0]   test_ex_pc       ,
    output [31:0]   test_ex_inst     , 
    output [63:0]   test_ls_pc       ,
    output [31:0]   test_ls_inst     ,  
    output [63:0]   test_wb_pc       ,
    output [31:0]   test_wb_inst     ,
    output          npc_stall        , 
    output          negedge_stall    ,
    output          posedge_stall    ,
    `endif
    input            clk             ,
    input            rst             ,
    output           M_AXI_AWID      ,
	output [63:0]    M_AXI_AWADDR    ,
	output [7:0]     M_AXI_AWLEN     ,
	output [2:0]     M_AXI_AWSIZE    ,
	output [1:0]     M_AXI_AWBURST   ,
	output [3:0]     M_AXI_AWCACHE   ,
	output [2:0]     M_AXI_AWPROT    ,
	output [3:0]     M_AXI_AWQOS     ,
	output           M_AXI_AWVALID   ,
	input            M_AXI_AWREADY   ,

	output [63:0]    M_AXI_WDATA     ,
	output [7:0]     M_AXI_WSTRB     ,
	output           M_AXI_WLAST     ,
	output           M_AXI_WVALID    ,
	input            M_AXI_WREADY    ,

	input            M_AXI_BID       ,
	input  [1:0]     M_AXI_BRESP     ,
	input            M_AXI_BVALID    ,
	output           M_AXI_BREADY    ,

	output           M_AXI_ARID      ,
	output [63:0]    M_AXI_ARADDR    ,
	output [7:0]     M_AXI_ARLEN     ,
	output [2:0]     M_AXI_ARSIZE    ,
	output [1:0]     M_AXI_ARBURST   ,
	output [3:0]     M_AXI_ARCACHE   ,
	output [2:0]     M_AXI_ARPROT    ,
	output [3:0]     M_AXI_ARQOS     ,
	output           M_AXI_ARVALID   ,
	input            M_AXI_ARREADY   ,

	input            M_AXI_RID       ,
	input  [63:0]    M_AXI_RDATA     ,
	input  [1:0]     M_AXI_RRESP     ,
	input            M_AXI_RLAST     ,
	input            M_AXI_RVALID    ,
	output           M_AXI_RREADY
);
    wire [63:0]   ifu_mem_addr        ;
    wire          ifu_mem_valid       ;
    wire [127:0]  ifu_mem_data        ;
    wire          ifu_mem_ready       ;
    wire [63:0]   lsu_mem_addr        ;
    wire [127:0]  lsu_mem_wdata       ;
    wire          lsu_mem_r_req       ;
    wire          lsu_mem_w_req       ;
    wire [7:0]    lsu_wmask           ;

    wire [63:0]   core_ifu_mem_addr   ;
    wire          core_ifu_mem_valid  ;
    wire [127:0]  core_ifu_mem_data   ;
    wire          core_ifu_mem_ready  ;
    wire [63:0]   core_lsu_mem_addr   ;
    wire [127:0]  core_lsu_mem_wdata  ;
    wire          core_lsu_mem_r_req  ;
    wire          core_lsu_mem_w_req  ;
    wire          core_lsu_is_device  ;
    wire [7:0]    core_lsu_wmask      ;
    wire [127:0]  core_lsu_mem_rdata  ;
    wire          core_lsu_mem_ready  ;

ysyx_22050598_core u_ysyx_22050598_core(
    `ifdef ysyx_22050598_Test
    .test_if_pc          (test_if_pc        ),
    .test_if_inst        (test_if_inst      ), 
    .test_id_pc          (test_id_pc        ),
    .test_id_inst        (test_id_inst      ), 
    .test_ex_pc          (test_ex_pc        ),
    .test_ex_inst        (test_ex_inst      ), 
    .test_ls_pc          (test_ls_pc        ),
    .test_ls_inst        (test_ls_inst      ),  
    .test_wb_pc          (test_wb_pc        ),
    .test_wb_inst        (test_wb_inst      ),
    .npc_stall           (npc_stall         ), 
    .negedge_stall       (negedge_stall     ),
    .posedge_stall       (posedge_stall     ),
    `endif
    .clk                 (clk               ),
    .rst                 (rst               ),
    .ifu_mem_addr        (core_ifu_mem_addr ),
    .ifu_mem_valid       (core_ifu_mem_valid),
    .ifu_mem_data        (core_ifu_mem_data ),
    .ifu_mem_ready       (core_ifu_mem_ready),
    .lsu_mem_addr        (core_lsu_mem_addr ),
    .lsu_mem_wdata       (core_lsu_mem_wdata),
    .lsu_mem_r_req       (core_lsu_mem_r_req),
    .lsu_mem_w_req       (core_lsu_mem_w_req),
    .lsu_wmask           (core_lsu_wmask    ),
    .lsu_is_device       (core_lsu_is_device),
    .lsu_mem_rdata       (core_lsu_mem_rdata),
    .lsu_mem_ready       (core_lsu_mem_ready)
);
/*****************************************************************************ifu************************************************************/
    assign ifu_mem_addr  = {core_ifu_mem_addr[63:4],4'b0000};
    assign ifu_mem_valid = core_ifu_mem_valid ;
/*****************************************************************************lsu************************************************************/
    assign lsu_mem_addr  = ({64{~core_lsu_is_device}} & {core_lsu_mem_addr[63:4],4'b0000}) | 
                           ({64{ core_lsu_is_device}} & core_lsu_mem_addr)                 ;
    assign lsu_mem_wdata = core_lsu_mem_wdata ;
    assign lsu_mem_r_req = core_lsu_mem_r_req ;
    assign lsu_mem_w_req = core_lsu_mem_w_req ;
    assign lsu_wmask     = ({8{core_lsu_is_device}} & core_lsu_wmask) | 
                           {8{~core_lsu_is_device}}                   ;
/*************************************************************************AXI*****************************************************************/
/*********************************************************************ctrl signal*************************************************************/   
    //assignment	 
	wire m_axi_waddr_ok = M_AXI_AWVALID & M_AXI_AWREADY	        ;
	wire m_axi_wdata_ok = M_AXI_WVALID  & M_AXI_WREADY		    ;
    wire m_axi_wresp_ok = M_AXI_BVALID  & M_AXI_BREADY          ;
	wire m_axi_raddr_ok = M_AXI_ARVALID & M_AXI_ARREADY		    ;
	wire m_axi_rdata_ok = M_AXI_RVALID  & M_AXI_RREADY		    ;
    //write fsm

	//write addr channal
    wire lsu_mem_w_req_r                                        ;
    wire write_posedge      = ~lsu_mem_w_req_r & lsu_mem_w_req  ;

    wire m_axi_awvalid_r                                        ;
    wire m_axi_awvalid_in   =  write_posedge                    ;
    wire m_axi_awvalid_ena  =  write_posedge | m_axi_waddr_ok   ;

    ysyx_22050598_sirv_gnrl_dfflr #(1) m_axi_w_posedge_dfflr(1'b1, lsu_mem_w_req, lsu_mem_w_req_r, clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(1) m_axi_awvalid_dfflr(m_axi_awvalid_ena, m_axi_awvalid_in, m_axi_awvalid_r, clk, rst);
    //write data channal
    wire m_axi_cnt_r                                            ;
    wire m_axi_cnt_in  =  ~m_axi_cnt_r                          ;   
    wire m_axi_cnt_ena =  ~core_lsu_is_device & m_axi_wdata_ok  ;
    ysyx_22050598_sirv_gnrl_dfflr #(1) m_axi_cnt_dfflr(m_axi_cnt_ena, m_axi_cnt_in, m_axi_cnt_r, clk, rst);

    wire m_axi_wlast = (core_lsu_is_device & m_axi_wdata_ok) | (~core_lsu_is_device & m_axi_wdata_ok & m_axi_cnt_r);

    wire m_axi_wvalid_r                                         ;
	wire m_axi_wvalid_in  = m_axi_waddr_ok                      ;     
    wire m_axi_wvalid_ena = m_axi_waddr_ok | m_axi_wlast        ;
	ysyx_22050598_sirv_gnrl_dfflr#(1) m_axi_wvalid_dfflr(m_axi_wvalid_ena, m_axi_wvalid_in, m_axi_wvalid_r, clk, rst);
    //read addr channal
    wire lsu_mem_r_req_r                                             ;
    wire lsu_read_posedge   = ~lsu_mem_r_req_r & lsu_mem_r_req       ;
    wire ifu_mem_r_req_r                                             ;
    wire ifu_read_posedge   = ~ifu_mem_r_req_r & ifu_mem_valid       ;
    wire read_posedge       = lsu_read_posedge | ifu_read_posedge    ;
    wire read_confilct      = lsu_read_posedge & ifu_read_posedge    ;
    ysyx_22050598_sirv_gnrl_dfflr #(1) m_axi_r_lsu_posedge_dfflr(1'b1, lsu_mem_r_req, lsu_mem_r_req_r, clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(1) m_axi_r_ifu_posedge_dfflr(1'b1, ifu_mem_valid, ifu_mem_r_req_r, clk, rst);
    /*
    import "DPI-C" function void confilct_read();
    always @(posedge read_confilct) begin
        confilct_read();    
    end
    */
    //FSM
    localparam READ_IDLE    = 2'b00                                  ;
    localparam CLSU_READ    = 2'b01                                  ;
    localparam LSU_READ     = 2'b10                                  ;
    localparam IFU_READ     = 2'b11                                  ;
    wire [1:0] state_r                                               ;
    wire       sta_is_idle          = (~state_r[1]) & (~state_r[0])  ;
    wire       sta_is_clsu_read     = (~state_r[1]) & ( state_r[0])  ;
    wire       sta_is_lsu_read      = ( state_r[1]) & (~state_r[0])  ;
    wire       sta_is_ifu_read      = ( state_r[1]) & ( state_r[0])  ;

    wire       read_done            = M_AXI_RLAST & m_axi_rdata_ok   ;
    wire       sta_is_idle_exit_ena = sta_is_idle & read_posedge     ;
    wire       sta_is_clsu_exit_ena = sta_is_clsu_read & read_done   ;
    wire       sta_is_lsu_exit_ena  = sta_is_lsu_read  & read_done   ;
    wire       sta_is_ifu_exit_ena  = sta_is_ifu_read  & read_done   ;
    wire [1:0] sta_is_idle_nxt      = ({2{read_confilct                    }} & CLSU_READ) |
                                      ({2{lsu_read_posedge & ~read_confilct}} & LSU_READ ) |
                                      ({2{ifu_read_posedge & ~read_confilct}} & IFU_READ ) ;
    wire [1:0] sta_is_clsu_read_nxt = IFU_READ                            ;
    wire [1:0] sta_is_lsu_read_nxt  = READ_IDLE                           ;
    wire [1:0] sta_is_ifu_read_nxt  = READ_IDLE                           ;

    wire       state_ena = sta_is_idle_exit_ena | 
                           sta_is_clsu_exit_ena | 
                           sta_is_lsu_exit_ena  | 
                           sta_is_ifu_exit_ena  ;

    wire [1:0] state_nxt = ({2{sta_is_idle_exit_ena}} & sta_is_idle_nxt     ) |
                           ({2{sta_is_clsu_exit_ena}} & sta_is_clsu_read_nxt) |
                           ({2{sta_is_lsu_exit_ena }} & sta_is_lsu_read_nxt ) |
                           ({2{sta_is_ifu_exit_ena }} & sta_is_ifu_read_nxt ) ;

    wire lsu_ena = sta_is_clsu_read | sta_is_lsu_read ;
    ysyx_22050598_sirv_gnrl_dfflr #(2) m_axi_read_fsm_dfflr(state_ena, state_nxt, state_r, clk, rst);

    wire sta_is_clsu_exit_ena_r                                                 ;
    wire cread_posedge      = ~sta_is_clsu_exit_ena_r & sta_is_clsu_exit_ena    ;//c stands for confilct read
    wire m_axi_arvalid_r                                                        ;
    wire m_axi_arvalid_in   =  read_posedge | cread_posedge                     ;
    wire m_axi_arvalid_ena  =  read_posedge | cread_posedge | m_axi_raddr_ok    ;

    ysyx_22050598_sirv_gnrl_dfflr #(1) m_axi_cposedge_dfflr(1'b1, sta_is_clsu_exit_ena, sta_is_clsu_exit_ena_r, clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(1) m_axi_arvalid_dfflr(m_axi_arvalid_ena, m_axi_arvalid_in, m_axi_arvalid_r, clk, rst);
    //read data channal
    wire [63:0] m_axi_read_data_r ;
    wire        m_axi_read_data_ena = m_axi_rdata_ok & ~core_lsu_is_device & ~M_AXI_RLAST;
    ysyx_22050598_sirv_gnrl_dfflr #(64) m_axi_read_data_dfflr(m_axi_read_data_ena, M_AXI_RDATA, m_axi_read_data_r, clk, rst);
/********************************************************************Assign AXI**********************************************************/
	//write addr channel
    assign M_AXI_AWID    = 1'b1             				 	                            ;
    assign M_AXI_AWLEN   = {7'b0,~core_lsu_is_device}              		                    ;//device one time cache twice
    assign M_AXI_AWSIZE  = `ysyx_22050598_AXI_SIZE_8Byte 				 	                ;
    assign M_AXI_AWBURST = `ysyx_22050598_AXI_BURST_TYPE_INCR                               ;
    assign M_AXI_AWCACHE = `ysyx_22050598_AXI_AXCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE   ;
    assign M_AXI_AWPROT  = `ysyx_22050598_AXI_PROT_UNPRIVILEGED_ACCESS                      |
						   `ysyx_22050598_AXI_PROT_SECURE_ACCESS                            |
		   				   `ysyx_22050598_AXI_PROT_DATA_ACCESS             	                ;
    assign M_AXI_AWQOS   = 4'b0                            				 	                ;
    assign M_AXI_AWADDR  = lsu_mem_addr  	                                                ;
    assign M_AXI_AWVALID = m_axi_awvalid_r                     				                ;
    //write data channel				 
    assign M_AXI_WSTRB   = lsu_wmask                           				                ;
    assign M_AXI_WDATA   = m_axi_wlast ? lsu_mem_wdata[127:64] : lsu_mem_wdata[63:0]        ; 
    assign M_AXI_WLAST   = m_axi_wlast									                    ; 
    assign M_AXI_WVALID  = m_axi_wvalid_r                   				                ;
	//write resp channel				 
    assign M_AXI_BREADY  = 1'b1                             				                ; 
    //read addr channel				 
    assign M_AXI_ARID    = lsu_ena ? 1'b1 : 1'b0                              		        ;
    assign M_AXI_ARADDR  = lsu_ena ? lsu_mem_addr : ifu_mem_addr                            ;
    assign M_AXI_ARLEN   = {7'b0,~core_lsu_is_device}               				        ;
    assign M_AXI_ARSIZE  = `ysyx_22050598_AXI_SIZE_8Byte                      				;
    assign M_AXI_ARBURST = `ysyx_22050598_AXI_BURST_TYPE_INCR                               ;
    assign M_AXI_ARCACHE = `ysyx_22050598_AXI_AXCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE   ;
    assign M_AXI_ARPROT  = `ysyx_22050598_AXI_PROT_UNPRIVILEGED_ACCESS                      |
						   `ysyx_22050598_AXI_PROT_SECURE_ACCESS                            |
		   				   `ysyx_22050598_AXI_PROT_DATA_ACCESS                              ;                             			
    assign M_AXI_ARQOS   = 4'b0                              				                ;
    assign M_AXI_ARVALID = m_axi_arvalid_r                  				                ;
    //read data channel				 
    assign M_AXI_RREADY  = 1'b1                                                             ;     
/*****************************************************************************ifu************************************************************/
    assign core_ifu_mem_data  = {M_AXI_RDATA, m_axi_read_data_r} ;
    assign core_ifu_mem_ready = sta_is_ifu_exit_ena              ;
/*****************************************************************************lsu************************************************************/
    assign core_lsu_mem_rdata = ({128{~core_lsu_is_device}} & {M_AXI_RDATA, m_axi_read_data_r}) |
                                ({128{ core_lsu_is_device}} & {2{M_AXI_RDATA}})                 ;
    assign core_lsu_mem_ready = sta_is_clsu_exit_ena | sta_is_lsu_exit_ena | m_axi_wresp_ok;             				
endmodule