`include "ysyx_22050598_defines.v"
module npc(
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
	output    		posedge_stall    ,
    `endif
    input            clk             ,
    input            rst             
);
    wire           AXI_AWID      ;
	wire [63:0]    AXI_AWADDR    ;
	wire [7:0]     AXI_AWLEN     ;
	wire [2:0]     AXI_AWSIZE    ;
	wire [1:0]     AXI_AWBURST   ;
	wire [3:0]     AXI_AWCACHE   ;
	wire [2:0]     AXI_AWPROT    ;
	wire [3:0]     AXI_AWQOS     ;
	wire           AXI_AWVALID   ;
	wire           AXI_AWREADY   ;

	wire [63:0]    AXI_WDATA     ;
	wire [7:0]     AXI_WSTRB     ;
	wire           AXI_WLAST     ;
	wire           AXI_WVALID    ;
	wire           AXI_WREADY    ;

	wire           AXI_BID       ;
	wire [1:0]     AXI_BRESP     ;
	wire           AXI_BVALID    ;
	wire           AXI_BREADY    ;

	wire           AXI_ARID      ;
	wire [63:0]    AXI_ARADDR    ;
	wire [7:0]     AXI_ARLEN     ;
	wire [2:0]     AXI_ARSIZE    ;
	wire [1:0]     AXI_ARBURST   ;
	wire [3:0]     AXI_ARCACHE   ;
	wire [2:0]     AXI_ARPROT    ;
	wire [3:0]     AXI_ARQOS     ;
	wire           AXI_ARVALID   ;
	wire           AXI_ARREADY   ;

	wire           AXI_RID       ;
	wire [63:0]    AXI_RDATA     ;
	wire [1:0]     AXI_RRESP     ;
	wire           AXI_RLAST     ;
	wire           AXI_RVALID    ;
	wire           AXI_RREADY    ;
ysyx_22050598_cpu u_ysyx_22050598_cpu(
    `ifdef ysyx_22050598_Test
    .test_if_pc     (test_if_pc     ),
    .test_if_inst   (test_if_inst   ), 
    .test_id_pc     (test_id_pc     ),
    .test_id_inst   (test_id_inst   ), 
    .test_ex_pc     (test_ex_pc     ),
    .test_ex_inst   (test_ex_inst   ), 
    .test_ls_pc     (test_ls_pc     ),
    .test_ls_inst   (test_ls_inst   ),  
    .test_wb_pc     (test_wb_pc     ),
    .test_wb_inst   (test_wb_inst   ),
    .npc_stall      (npc_stall      ), 
	.negedge_stall  (negedge_stall	),
	.posedge_stall	(posedge_stall	),
    `endif
    .clk            (clk            ),
    .rst            (rst            ),
    .M_AXI_AWID     (AXI_AWID       ),
	.M_AXI_AWADDR   (AXI_AWADDR     ),
	.M_AXI_AWLEN    (AXI_AWLEN      ),
	.M_AXI_AWSIZE   (AXI_AWSIZE     ),
	.M_AXI_AWBURST  (AXI_AWBURST    ),
	.M_AXI_AWCACHE  (AXI_AWCACHE    ),
	.M_AXI_AWPROT   (AXI_AWPROT     ),
	.M_AXI_AWQOS    (AXI_AWQOS      ),
	.M_AXI_AWVALID  (AXI_AWVALID    ),
	.M_AXI_AWREADY  (AXI_AWREADY    ),

	.M_AXI_WDATA    (AXI_WDATA      ),
	.M_AXI_WSTRB    (AXI_WSTRB      ),
	.M_AXI_WLAST    (AXI_WLAST      ),
	.M_AXI_WVALID   (AXI_WVALID     ),
	.M_AXI_WREADY   (AXI_WREADY     ),

	.M_AXI_BID      (AXI_BID        ),
	.M_AXI_BRESP    (AXI_BRESP      ),
	.M_AXI_BVALID   (AXI_BVALID     ),
	.M_AXI_BREADY   (AXI_BREADY     ),

	.M_AXI_ARID     (AXI_ARID       ),
	.M_AXI_ARADDR   (AXI_ARADDR     ),
	.M_AXI_ARLEN    (AXI_ARLEN      ),
	.M_AXI_ARSIZE   (AXI_ARSIZE     ),
	.M_AXI_ARBURST  (AXI_ARBURST    ),
	.M_AXI_ARCACHE  (AXI_ARCACHE    ),
	.M_AXI_ARPROT   (AXI_ARPROT     ),
	.M_AXI_ARQOS    (AXI_ARQOS      ),
	.M_AXI_ARVALID  (AXI_ARVALID    ),
	.M_AXI_ARREADY  (AXI_ARREADY    ),

	.M_AXI_RID      (AXI_RID        ),
	.M_AXI_RDATA    (AXI_RDATA      ),
	.M_AXI_RRESP    (AXI_RRESP      ),
	.M_AXI_RLAST    (AXI_RLAST      ),
	.M_AXI_RVALID   (AXI_RVALID     ),
	.M_AXI_RREADY   (AXI_RREADY     )
);       

ysyx_22050598_axi_s u_ysyx_22050598_axi_s(
	.S_AXI_ACLK     (clk			),
	.S_AXI_ARESETN  (rst			),

	.S_AXI_AWID     (AXI_AWID    	),
	.S_AXI_AWADDR   (AXI_AWADDR  	),
	.S_AXI_AWLEN    (AXI_AWLEN   	),
	.S_AXI_AWSIZE   (AXI_AWSIZE  	),
	.S_AXI_AWBURST  (AXI_AWBURST 	),
	.S_AXI_AWCACHE  (AXI_AWCACHE 	),
	.S_AXI_AWPROT   (AXI_AWPROT  	),
	.S_AXI_AWQOS    (AXI_AWQOS   	),
	.S_AXI_AWVALID  (AXI_AWVALID 	),
	.S_AXI_AWREADY  (AXI_AWREADY 	),

	.S_AXI_WDATA    (AXI_WDATA 		),
	.S_AXI_WSTRB    (AXI_WSTRB 		),
	.S_AXI_WLAST    (AXI_WLAST 		),
	.S_AXI_WVALID   (AXI_WVALID		),
	.S_AXI_WREADY   (AXI_WREADY		),

	.S_AXI_BID      (AXI_BID   		),
	.S_AXI_BRESP    (AXI_BRESP 		),
	.S_AXI_BVALID   (AXI_BVALID		),
	.S_AXI_BREADY   (AXI_BREADY		),

	.S_AXI_ARID     (AXI_ARID   	),
	.S_AXI_ARADDR   (AXI_ARADDR 	),
	.S_AXI_ARLEN    (AXI_ARLEN  	),
	.S_AXI_ARSIZE   (AXI_ARSIZE 	),
	.S_AXI_ARBURST  (AXI_ARBURST	),
	.S_AXI_ARCACHE  (AXI_ARCACHE	),
	.S_AXI_ARPROT   (AXI_ARPROT 	),
	.S_AXI_ARQOS    (AXI_ARQOS  	),
	.S_AXI_ARVALID  (AXI_ARVALID	),
	.S_AXI_ARREADY  (AXI_ARREADY	),

	.S_AXI_RID      (AXI_RID   		),
	.S_AXI_RDATA    (AXI_RDATA 		),
	.S_AXI_RRESP    (AXI_RRESP 		),
	.S_AXI_RLAST    (AXI_RLAST 		),
	.S_AXI_RVALID   (AXI_RVALID		),
	.S_AXI_RREADY   (AXI_RREADY		)  
);

endmodule