`include "ysyx_22050598_defines.v"
module ysyx_22050598_axi_s#(
		parameter C_S_AXI_ID_WIDTH	    = 1,
		parameter C_S_AXI_DATA_WIDTH	= 64,
		parameter C_S_AXI_ADDR_WIDTH	= 64
)(
		input                              S_AXI_ACLK      ,
		input                              S_AXI_ARESETN   ,

		input  [C_S_AXI_ID_WIDTH-1:0]      S_AXI_AWID      ,
		input  [C_S_AXI_ADDR_WIDTH-1:0]    S_AXI_AWADDR    ,
		input  [7:0]                       S_AXI_AWLEN     ,
		input  [2:0]                       S_AXI_AWSIZE    ,
		input  [1:0]                       S_AXI_AWBURST   ,
		input  [3:0]                       S_AXI_AWCACHE   ,
		input  [2:0]                       S_AXI_AWPROT    ,
		input  [3:0]                       S_AXI_AWQOS     ,
		input                              S_AXI_AWVALID   ,
		output                             S_AXI_AWREADY   ,

		input [C_S_AXI_DATA_WIDTH-1:0]     S_AXI_WDATA     ,
		input [C_S_AXI_DATA_WIDTH/8-1:0]   S_AXI_WSTRB     ,
		input                              S_AXI_WLAST     ,
		input                              S_AXI_WVALID    ,
		output                             S_AXI_WREADY    ,

		output [C_S_AXI_ID_WIDTH-1:0]      S_AXI_BID       ,
		output [1:0]                       S_AXI_BRESP     ,
		output                             S_AXI_BVALID    ,
		input                              S_AXI_BREADY    ,

		input  [C_S_AXI_ID_WIDTH-1:0]      S_AXI_ARID      ,
		input  [C_S_AXI_ADDR_WIDTH-1:0]    S_AXI_ARADDR    ,
		input  [7:0]                       S_AXI_ARLEN     ,
		input  [2:0]                       S_AXI_ARSIZE    ,
		input  [1:0]                       S_AXI_ARBURST   ,
		input  [3:0]                       S_AXI_ARCACHE   ,
		input  [2:0]                       S_AXI_ARPROT    ,
		input  [3:0]                       S_AXI_ARQOS     ,
		input                              S_AXI_ARVALID   ,
		output                             S_AXI_ARREADY   ,

		output [C_S_AXI_ID_WIDTH-1:0]      S_AXI_RID       ,
		output [C_S_AXI_DATA_WIDTH-1:0]    S_AXI_RDATA     ,
		output [1:0]                       S_AXI_RRESP     ,
		output                             S_AXI_RLAST     ,
		output                             S_AXI_RVALID    ,
		input                              S_AXI_RREADY    
);
/*************************************************************************wire statement********************************************************/
        //write addr 
		wire  [C_S_AXI_ID_WIDTH-1:0]      s_axi_awid_r      ;	
		wire  [7:0]                       s_axi_awlen_r     ;
		wire  [2:0]                       s_axi_awsize_r    ;
		wire  [1:0]                       s_axi_awburst_r   ;
		wire  [3:0]                       s_axi_awcache_r   ;
		wire  [2:0]                       s_axi_awprot_r    ;
		wire  [3:0]                       s_axi_awqos_r     ;
        //write data
        wire [C_S_AXI_DATA_WIDTH/8-1:0]   s_axi_wstrb_r     ;
        //read addr
        wire  [C_S_AXI_ID_WIDTH-1:0]      s_axi_arid_r      ;	
		wire  [7:0]                       s_axi_arlen_r     ;
		wire  [2:0]                       s_axi_arsize_r    ;
		wire  [1:0]                       s_axi_arburst_r   ;
		wire  [3:0]                       s_axi_arcache_r   ;
		wire  [2:0]                       s_axi_arprot_r    ;
		wire  [3:0]                       s_axi_arqos_r     ;

		//write addr channel
        wire  [7:0]                       s_axi_wincr_num   ;  
        wire                              s_axi_awready_ena ;
		wire 						      s_axi_awready_in  ;
		wire                              s_axi_awready_r   ;
		//write data channel
        wire                              s_axi_awaddr_ena  ;
        wire  [C_S_AXI_ADDR_WIDTH-1:0]    s_axi_awaddr_in   ;
        wire  [C_S_AXI_ADDR_WIDTH-1:0]    s_axi_awaddr_r    ;
        //write resp channel
        wire                              s_axi_bvalid_ena  ;
        wire                              s_axi_bvalid_in   ;
        wire                              s_axi_bvalid_r    ;
 		//read addr channel
        wire [7:0]                        s_axi_rincr_num   ;
		wire 						      s_axi_arready_ena ;
		wire 						      s_axi_arready_in  ;
		wire 						      s_axi_arready_r   ;
		//read data channel
        wire                              s_axi_araddr_ena  ;
        wire  [C_S_AXI_ADDR_WIDTH-1:0]    s_axi_araddr_in   ;
        wire  [C_S_AXI_ADDR_WIDTH-1:0]    s_axi_araddr_r    ;
        wire 						      s_axi_rvalid_ena  ;
		wire 						      s_axi_rvalid_in   ;
		wire 						      s_axi_rvalid_r    ;
		//ctrl signal
		wire                              s_axi_waddr_ok    ;
		wire						      s_axi_wdata_ok    ;
        wire                              s_axi_wresp_ok    ;
        wire                              s_axi_raddr_ok    ;
        wire                              s_axi_rdata_ok    ;
/************************************************************combinational logic*****************************************************************/ 
        //assignment	 
	    assign s_axi_waddr_ok = S_AXI_AWVALID & S_AXI_AWREADY	;
		assign s_axi_wdata_ok = S_AXI_WVALID  & S_AXI_WREADY	;
        assign s_axi_wresp_ok = S_AXI_BVALID  & S_AXI_BREADY    ;
		assign s_axi_raddr_ok = S_AXI_ARVALID & S_AXI_ARREADY	;
		assign s_axi_rdata_ok = S_AXI_RVALID  & S_AXI_RREADY	;
		//write addr channel  
        wire   s_axi_wdata_last  = s_axi_wdata_ok & S_AXI_WLAST                             ;
        assign s_axi_awready_ena = s_axi_waddr_ok | s_axi_wdata_last                        ;
		assign s_axi_awready_in  = ~s_axi_waddr_ok                                          ;
        assign S_AXI_AWREADY     = s_axi_awready_r                  				        ;
        assign s_axi_wincr_num   = 8'b00001000                                              ;
        //write data channel  	 
        assign s_axi_awaddr_ena = s_axi_waddr_ok                                            ;
        assign s_axi_awaddr_in  = S_AXI_AWADDR                                              ;
        assign S_AXI_WREADY     = 1'b1                                                      ;                       
		//write resp channel				 
        assign S_AXI_BID        = s_axi_awid_r                                              ;
        assign S_AXI_BRESP      = 2'b0                                                      ;
        assign s_axi_bvalid_ena = s_axi_wdata_last | s_axi_wresp_ok                         ;
        assign s_axi_bvalid_in  = s_axi_wdata_last                                          ;
        assign S_AXI_BVALID     = s_axi_bvalid_r                                            ;
        //read addr channel
        wire   s_axi_rdata_last  = s_axi_rdata_ok & S_AXI_RLAST                             ;
        assign s_axi_arready_ena = s_axi_raddr_ok | s_axi_rdata_last                        ;
		assign s_axi_arready_in  = ~s_axi_raddr_ok                                          ;
        assign S_AXI_ARREADY     = s_axi_arready_r                  				        ;
        assign s_axi_rincr_num   = 8'b00001000                                              ;
        //read data channel	
        wire s_axi_cnt_r                                                                    ;
        wire s_axi_cnt_in  =  ~s_axi_cnt_r                                                  ;   
        wire s_axi_cnt_ena =  s_axi_arlen_r[0] & s_axi_rdata_ok                             ;
        ysyx_22050598_sirv_gnrl_dfflr #(1) s_axi_cnt_dfflr(s_axi_cnt_ena, s_axi_cnt_in, s_axi_cnt_r, S_AXI_ACLK, S_AXI_ARESETN);
        wire m_axi_rlast   = (~s_axi_arlen_r[0] & s_axi_rdata_ok) | ( s_axi_arlen_r[0] & s_axi_rdata_ok & s_axi_cnt_r);

        assign s_axi_araddr_ena  =  s_axi_raddr_ok                                          ;
        assign s_axi_araddr_in   =  S_AXI_ARADDR                                            ;

        assign s_axi_rvalid_ena  = s_axi_raddr_ok | m_axi_rlast                             ;
        assign s_axi_rvalid_in   = s_axi_raddr_ok                                           ; 
        assign S_AXI_RVALID      = s_axi_rvalid_r                                           ;

        assign S_AXI_RLAST       = m_axi_rlast                                              ;
        assign S_AXI_RID         = s_axi_arid_r                                             ;
        assign S_AXI_RRESP       = 2'b0                                                     ;
/****************************************reg**********************************************/
        //storage signal
        ysyx_22050598_sirv_gnrl_dfflr#(C_S_AXI_ID_WIDTH)     s_axi_awid_dfflr    (s_axi_waddr_ok, S_AXI_AWID    , s_axi_awid_r    , S_AXI_ACLK, S_AXI_ARESETN);
        ysyx_22050598_sirv_gnrl_dfflr#(8)                    s_axi_awlen_dfflr   (s_axi_waddr_ok, S_AXI_AWLEN   , s_axi_awlen_r   , S_AXI_ACLK, S_AXI_ARESETN);
        ysyx_22050598_sirv_gnrl_dfflr#(3)                    s_axi_awsize_dfflr  (s_axi_waddr_ok, S_AXI_AWSIZE  , s_axi_awsize_r  , S_AXI_ACLK, S_AXI_ARESETN);
        ysyx_22050598_sirv_gnrl_dfflr#(2)                    s_axi_awburst_dfflr (s_axi_waddr_ok, S_AXI_AWBURST , s_axi_awburst_r , S_AXI_ACLK, S_AXI_ARESETN);
        ysyx_22050598_sirv_gnrl_dfflr#(4)                    s_axi_awcache_dfflr (s_axi_waddr_ok, S_AXI_AWCACHE , s_axi_awcache_r , S_AXI_ACLK, S_AXI_ARESETN);
        ysyx_22050598_sirv_gnrl_dfflr#(3)                    s_axi_awprot_dfflr  (s_axi_waddr_ok, S_AXI_AWPROT  , s_axi_awprot_r  , S_AXI_ACLK, S_AXI_ARESETN);
        ysyx_22050598_sirv_gnrl_dfflr#(4)                    s_axi_awqos_dfflr   (s_axi_waddr_ok, S_AXI_AWQOS   , s_axi_awqos_r   , S_AXI_ACLK, S_AXI_ARESETN);
        ysyx_22050598_sirv_gnrl_dfflr#(C_S_AXI_DATA_WIDTH/8) s_axi_wstrb_dfflr   (s_axi_waddr_ok, S_AXI_WSTRB   , s_axi_wstrb_r   , S_AXI_ACLK, S_AXI_ARESETN);
        ysyx_22050598_sirv_gnrl_dfflr#(C_S_AXI_ID_WIDTH)     s_axi_arid_dfflr    (s_axi_raddr_ok, S_AXI_ARID    , s_axi_arid_r    , S_AXI_ACLK, S_AXI_ARESETN);
        ysyx_22050598_sirv_gnrl_dfflr#(8)                    s_axi_arlen_dfflr   (s_axi_raddr_ok, S_AXI_ARLEN   , s_axi_arlen_r   , S_AXI_ACLK, S_AXI_ARESETN);
        ysyx_22050598_sirv_gnrl_dfflr#(3)                    s_axi_arsize_dfflr  (s_axi_raddr_ok, S_AXI_ARSIZE  , s_axi_arsize_r  , S_AXI_ACLK, S_AXI_ARESETN);
        ysyx_22050598_sirv_gnrl_dfflr#(2)                    s_axi_arburst_dfflr (s_axi_raddr_ok, S_AXI_ARBURST , s_axi_arburst_r , S_AXI_ACLK, S_AXI_ARESETN);
        ysyx_22050598_sirv_gnrl_dfflr#(4)                    s_axi_arcache_dfflr (s_axi_raddr_ok, S_AXI_ARCACHE , s_axi_arcache_r , S_AXI_ACLK, S_AXI_ARESETN);
        ysyx_22050598_sirv_gnrl_dfflr#(3)                    s_axi_arprot_dfflr  (s_axi_raddr_ok, S_AXI_ARPROT  , s_axi_arprot_r  , S_AXI_ACLK, S_AXI_ARESETN);
        ysyx_22050598_sirv_gnrl_dfflr#(4)                    s_axi_arqos_dfflr   (s_axi_raddr_ok, S_AXI_ARQOS   , s_axi_arqos_r   , S_AXI_ACLK, S_AXI_ARESETN);
		//write addr channal
		ysyx_22050598_sirv_gnrl_dfflr_with_resetval#(1,1'b1) s_axi_awready_dfflr(s_axi_awready_ena, s_axi_awready_in, s_axi_awready_r, S_AXI_ACLK, S_AXI_ARESETN);
		//write data channal
        ysyx_22050598_sirv_gnrl_dfflr#(C_S_AXI_ADDR_WIDTH)   s_axi_awaddr_dfflr (s_axi_awaddr_ena , s_axi_awaddr_in , s_axi_awaddr_r , S_AXI_ACLK, S_AXI_ARESETN);
        //write resp channel
        ysyx_22050598_sirv_gnrl_dfflr#(1)                    s_axi_bvalid_dfflr (s_axi_bvalid_ena , s_axi_bvalid_in , s_axi_bvalid_r , S_AXI_ACLK, S_AXI_ARESETN);
		//read addr channal
		ysyx_22050598_sirv_gnrl_dfflr_with_resetval#(1,1'b1) s_axi_arready_dfflr(s_axi_arready_ena, s_axi_arready_in, s_axi_arready_r, S_AXI_ACLK, S_AXI_ARESETN);
		//read data channal
        ysyx_22050598_sirv_gnrl_dfflr#(C_S_AXI_ADDR_WIDTH)   s_axi_araddr_dfflr (s_axi_araddr_ena, s_axi_araddr_in, s_axi_araddr_r, S_AXI_ACLK, S_AXI_ARESETN);
        ysyx_22050598_sirv_gnrl_dfflr#(1)                    s_axi_rvalid_dfflr (s_axi_rvalid_ena, s_axi_rvalid_in, s_axi_rvalid_r, S_AXI_ACLK, S_AXI_ARESETN);
/**********************************************************************************dpic*******************************************************************/

        wire [63:0] temp_rmem_addr = S_AXI_RLAST ? {s_axi_araddr_r[63:4],4'b1000} : {s_axi_araddr_r[63:4],4'b0000};
        wire [63:0] rmem_addr      = ({64{s_axi_arlen_r[0]}} & temp_rmem_addr) | ({64{~s_axi_arlen_r[0]}} & s_axi_araddr_r);

        wire [63:0] temp_wmem_addr = S_AXI_WLAST ? {s_axi_awaddr_r[63:4],4'b1000} : {s_axi_awaddr_r[63:4],4'b0000};
        wire [63:0] wmem_addr      = ({64{s_axi_awlen_r[0]}} & temp_wmem_addr) | ({64{~s_axi_awlen_r[0]}} & s_axi_awaddr_r);
        import "DPI-C" function void pmem_read_test(input longint raddr, output longint rdata, input byte rlen);
        import "DPI-C" function void pmem_write_test(input longint waddr, input longint wdata, input byte wmask);
        always @(*) begin
            if(s_axi_rdata_ok == 1'b1)
                pmem_read_test(rmem_addr, S_AXI_RDATA, 8'd8);
            else
                pmem_read_test(64'h0000000080000000, S_AXI_RDATA, 8'd8);
        end

        always @(*) begin
            if(s_axi_wdata_ok == 1'b1)
                pmem_write_test(wmem_addr, S_AXI_WDATA, s_axi_wstrb_r);
        end


endmodule