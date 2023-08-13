`include "ysyx_22050598_defines.v"
module npc(
`ifdef ysyx_22050598_Test
output [63:0]   test_if_pc   ,
output [31:0]   test_if_inst , 
output [63:0]   test_id_pc   ,
output [31:0]   test_id_inst , 
output [63:0]   test_ex_pc   ,
output [31:0]   test_ex_inst , 
output [63:0]   test_ls_pc   ,
output [31:0]   test_ls_inst ,  
output [63:0]   test_wb_pc   ,
output [31:0]   test_wb_inst ,
output          npc_stall    , 
`endif
input           clk          ,
input           rst       
);
/****************************************************ifu*******************************************************/
wire [63:0] ebreak_a0;
//ifu_bpu
wire [63:0] if_bpu_pc_op  ;
wire        if_prdt_taken ; 
//ifu
wire [31:0] if_id_inst    ;
wire [63:0] if_id_pc      ;
//IF_ID
wire [31:0] if_inst       ;
wire [63:0] if_pc_i       ;
wire [63:0] id_pc         ;
wire [31:0] id_inst       ;
/****************************************************idu*******************************************************/
//idu_decode
wire [9:0]  id_ex_op_type          ;
wire [2:0]  id_op_a_sel            ;// Selection signal for operand A
wire [1:0]  id_op_b_sel            ;// Selection signal for operand B
wire [63:0] id_imm                 ;
wire [4:0]  id_read_rs1_idx        ;
wire [4:0]  id_read_rs2_idx        ;
wire        id_ex_w_reg_en         ;
wire [4:0]  id_write_rd_idx        ;
wire        id_ex_inst_is_ebreak   ;
wire        id_ex_inst_is_ecall    ;
wire        id_ex_inst_is_jalr     ;
wire        id_ex_inst_is_jal      ;
wire        id_ex_inst_is_store    ;// inst is s type
wire        id_ex_inst_is_set      ;// inst is Set if type 
wire        id_ex_inst_is_srax     ;// inst is sra type
wire        id_ex_inst_5_shamt     ;
wire        id_ex_inst_is_mret     ;
wire        id_ex_inst_is_csri     ;
wire [1:0]  id_ex_ls_data_bus      ;// B H W D 00 01 10 11
wire        id_ex_inst_divrem_bus  ;// Indicate which rem it is, inst_rem div and inst_remw divw all signed
wire [4:0]  id_ex_inst_mul_bus     ;// inst_mul , inst_mulh , inst_mulhsu , inst_mulhu , inst_mulw
wire [5:0]  id_ex_csr_bus          ;
wire [5:0]  id_ex_branch_bus       ;
wire [1:0]  id_ex_unsigned_bus     ;
wire        id_ex_ls_req           ;// L/S instruction req to bus
wire        id_ex_inst_is_rv64     ;
wire        id_inst_is_illegal     ;
//idu_regfile  
wire [63:0] id_read_rs1_data       ;
wire [63:0] id_read_rs2_data       ;
//idu_forward  
wire [63:0] id_ex_alu_op_a         ;
wire [63:0] id_ex_alu_op_b         ;
wire [63:0] id_ex_bs_zimm_data     ;
wire        forward_load_stall     ;
//ID_EX
`ifdef ysyx_22050598_Test
wire [31:0] ex_inst                ;
`endif
wire [9:0]  ex_op_type             ;
wire [63:0] ex_alu_op_a            ;
wire [63:0] ex_alu_op_b            ;
wire [63:0] ex_pc                  ;
wire [63:0] ex_bs_zimm_data        ;  
wire [4:0]  ex_write_rd_idx        ;
wire        ex_w_reg_en            ; 
wire        ex_inst_is_ebreak      ;
wire        ex_inst_is_ecall       ;
wire        ex_inst_is_jalr        ;
wire        ex_inst_is_jal         ;
wire        ex_inst_is_store       ;
wire        ex_inst_is_set         ;
wire        ex_inst_is_srax        ;
wire        ex_inst_5_shamt        ;
wire        ex_inst_is_mret        ;
wire [1:0]  ex_ls_data_bus         ;
wire        ex_inst_divrem_bus     ;
wire [4:0]  ex_inst_mul_bus        ;
wire [5:0]  ex_csr_bus             ;
wire [5:0]  ex_branch_bus          ;
wire [1:0]  ex_unsigned_bus        ;
wire        ex_ls_req              ;
wire        ex_inst_is_rv64        ;
wire        ex_inst_is_illegal     ;
/****************************************************exu*******************************************************/
//exu_alu
wire [63:0] ex_ls_alu_rd_ls_data ;//for rd or store loc or load loc
wire        ex_ls_alu_rd_data_en ;
wire [63:0] ex_ls_alu_pc         ;
wire        ex_ls_alu_pc_en      ;
wire        ex_ls_load_en        ;
wire        ex_ls_store_en       ;
wire [63:0] ex_ls_store_data     ;
wire        muldiv_ready         ;
wire        muldivout_valid      ;
//exu_csr
wire [63:0] ex_csr_rd_pc_data    ;
//exu_rd_pc_mux
wire [63:0] ex_rd_data           ;
wire        ex_pc_data_ena       ;
wire [63:0] ex_pc_data           ;
//EX_LS
`ifdef ysyx_22050598_Test
wire [31:0]    ls_inst           ;
wire [63:0]    ls_pc             ;
`endif
wire [63:0]   ls_alu_rd_ls_data  ;
wire [63:0]   ls_store_data      ;
wire          ls_alu_rd_data_en  ;
wire          ls_load_en         ; 
wire          ls_store_en        ;  
wire [1:0]    ls_ls_data_type    ;
wire [4:0]    ls_rd_idx          ;
wire          ls_inst_is_ebreak  ;
wire          ls_load_unsigned   ;
/****************************************************lsu*******************************************************/
`ifdef ysyx_22050598_Test
wire [31:0]    wb_inst           ;
wire [63:0]    wb_pc             ;
`endif
wire [63:0]   ls_wb_load_data    ;
wire [63:0]   ls_rd_data         ;
wire [63:0]   wb_rd_data         ;
wire          wb_rd_en           ;
wire [4:0]    wb_rd_idx          ;
wire          wb_inst_is_ebreak  ;
/****************************************************pipeline crtl********************************************/
wire [2:0]    pipeline_flush     ;
wire [4:0]    pipeline_stall     ;
/***************************************************instance**************************************************/
/****************************************************ifu******************************************************/
ysyx_22050598_ifu_bpu ysyx_22050598_ifu_bpu(
    .if_inst                 (if_id_inst            ),
    .bpu_pc_add_op           (if_bpu_pc_op          ),
    .prdt_taken              (if_prdt_taken         )          
);

ysyx_22050598_ifu u_ysyx_22050598_ifu(
    .clk                     (clk                   ),    
    .rst                     (rst                   ),
    .pc_stall                (pipeline_stall[0]     ),
    .flush_pc_en             (pipeline_flush[0]     ),
    .flush_pc                (ex_pc_data            ),
    .prdt_pc_en              (if_prdt_taken         ),     
    .prdt_pc_add_op          (if_bpu_pc_op          ),         
    .pc_now                  (if_id_pc              ),
    .id_inst                 (if_id_inst            )
);

ysyx_22050598_IF_ID u_ysyx_22050598_IF_ID(
    .clk                     (clk                   ),
    .rst                     (rst                   ),
    .if_inst                 (if_id_inst            ),
    .if_pc_i                 (if_id_pc              ),
    .if_flush                (pipeline_flush[1]     ),
    .if_stall                (pipeline_stall[1]     ),
    .if_pc_o                 (id_pc                 ),
    .if_inst_o               (id_inst               )
);
/****************************************************idu*******************************************************/
ysyx_22050598_idu_decode u_ysyx_22050598_idu_decode (
    .id_inst_i               (id_inst               ),
    .id_op_type_o            (id_ex_op_type         ),
    .id_op_a_sel_o           (id_op_a_sel           ),
    .id_op_b_sel_o           (id_op_b_sel           ),
    .id_imm_o                (id_imm                ),
    .id_read_rs1_idx_o       (id_read_rs1_idx       ),
    .id_read_rs2_idx_o       (id_read_rs2_idx       ),
    .id_w_reg_en_o           (id_ex_w_reg_en        ),
    .id_write_rd_idx_o       (id_write_rd_idx       ),
    .id_inst_is_ebreak_o     (id_ex_inst_is_ebreak  ),
    .id_inst_is_ecall_o      (id_ex_inst_is_ecall   ),
    .id_inst_is_jalr_o       (id_ex_inst_is_jalr    ),
    .id_inst_is_jal_o        (id_ex_inst_is_jal     ),
    .id_inst_is_store_o      (id_ex_inst_is_store   ),
    .id_inst_is_set_o        (id_ex_inst_is_set     ),
    .id_inst_is_srax_o       (id_ex_inst_is_srax    ),
    .id_inst_5_shamt_o       (id_ex_inst_5_shamt    ),
    .id_inst_is_mret_o       (id_ex_inst_is_mret    ),
    .id_inst_is_csri_o       (id_ex_inst_is_csri    ),           
    .id_ls_data_bus_o        (id_ex_ls_data_bus     ),
    .id_inst_divrem_bus_o    (id_ex_inst_divrem_bus ),
    .id_inst_mul_bus_o       (id_ex_inst_mul_bus    ),
    .id_csr_bus_o            (id_ex_csr_bus         ),
    .id_branch_bus_o         (id_ex_branch_bus      ),
    .id_unsigned_bus_o       (id_ex_unsigned_bus    ),
    .id_ls_req_o             (id_ex_ls_req          ),
    .id_inst_is_rv64_o       (id_ex_inst_is_rv64    ),
    .id_inst_is_illegal_o    (id_inst_is_illegal    )
);

ysyx_22050598_regfile u_ysyx_22050598_regfile (
    .ebreak_a0               (ebreak_a0             ),
    .clk                     (clk                   ),
    .rst                     (rst                   ),
    .read_rs1_idx            (id_read_rs1_idx       ),
    .read_rs2_idx            (id_read_rs2_idx       ),
    .read_rs1_data           (id_read_rs1_data      ),
    .read_rs2_data           (id_read_rs2_data      ),    
    .write_en                (wb_rd_en              ),
    .write_rd_idx            (wb_rd_idx             ),
    .write_rd_data           (wb_rd_data            )
);

ysyx_22050598_idu_forward ysyx_22050598_idu_forward (
    .id_rs1_idx              (id_read_rs1_idx       ),
    .id_rs2_idx              (id_read_rs2_idx       ),
    .alu_op_a_sel            (id_op_a_sel           ),
    .alu_op_b_sel            (id_op_b_sel           ),
    .id_rd_idx               (id_write_rd_idx       ),
    .rs1_data                (id_read_rs1_data      ),
    .rs2_data                (id_read_rs2_data      ),
    .id_imm                  (id_imm                ),
    .pc_data                 (id_pc                 ),
    .id_inst_is_csri         (id_ex_inst_is_csri    ),
    .id_branch_bus           (id_ex_branch_bus      ),
    .id_inst_is_store        (id_ex_inst_is_store   ),
    .ex_rd_idx               (ex_write_rd_idx       ),
    .ex_rd_en                (ex_ls_alu_rd_data_en  ),
    .ex_load_en              (ex_ls_load_en         ),
    .ex_alu_data             (ex_rd_data            ),
    .mem_rd_idx              (ls_rd_idx             ),
    .mem_rd_en               (ls_alu_rd_data_en     ),
    .mem_data                (ls_rd_data            ),
    .wb_rd_idx               (wb_rd_idx             ),
    .wb_rd_en                (wb_rd_en              ),
    .wb_data                 (wb_rd_data            ),
    .forward_load_stall      (forward_load_stall    ),    
    .alu_op_a                (id_ex_alu_op_a        ),
    .alu_op_b                (id_ex_alu_op_b        ),
    .ex_bs_zimm_data         (id_ex_bs_zimm_data    )
   );

    ysyx_22050598_ID_EX u_ysyx_22050598_ID_EX (
    `ifdef ysyx_22050598_Test
    .id_ex_inst              (id_inst               ),
    .id_ex_inst_o            (ex_inst               ),
    `endif
    .clk                     (clk                   ),
    .rst                     (rst                   ),
    .id_ex_flush             (pipeline_flush[2]     ),
    .id_ex_stall             (pipeline_stall[2]     ),
    .id_ex_op_type           (id_ex_op_type         ),
    .alu_op_a                (id_ex_alu_op_a        ),
    .alu_op_b                (id_ex_alu_op_b        ),
    .id_ex_pc                (id_pc                 ),
    .id_ex_bs_zimm_data      (id_ex_bs_zimm_data    ), 
    .id_write_rd_idx         (id_write_rd_idx       ),
    .id_ex_w_reg_en          (id_ex_w_reg_en        ),
    .id_ex_inst_is_ebreak    (id_ex_inst_is_ebreak  ),
    .id_ex_inst_is_ecall     (id_ex_inst_is_ecall   ),
    .id_ex_inst_is_jalr      (id_ex_inst_is_jalr    ),
    .id_ex_inst_is_jal       (id_ex_inst_is_jal     ),
    .id_ex_inst_is_store     (id_ex_inst_is_store   ),
    .id_ex_inst_is_set       (id_ex_inst_is_set     ),
    .id_ex_inst_is_srax      (id_ex_inst_is_srax    ),
    .id_ex_inst_5_shamt      (id_ex_inst_5_shamt    ),
    .id_ex_inst_is_mret      (id_ex_inst_is_mret    ),
    .id_inst_is_csri         (id_ex_inst_is_csri    ),
    .id_ex_ls_data_bus       (id_ex_ls_data_bus     ),
    .id_ex_inst_divrem_bus   (id_ex_inst_divrem_bus ),
    .id_ex_inst_mul_bus      (id_ex_inst_mul_bus    ),
    .id_ex_csr_bus           (id_ex_csr_bus         ),
    .id_ex_branch_bus        (id_ex_branch_bus      ),
    .id_ex_unsigned_bus      (id_ex_unsigned_bus    ),
    .id_ex_ls_req            (id_ex_ls_req          ),
    .id_ex_inst_is_rv64      (id_ex_inst_is_rv64    ),
    .id_ex_inst_is_illegal   (id_inst_is_illegal    ),  
    .id_ex_op_type_o         (ex_op_type            ),
    .alu_op_a_o              (ex_alu_op_a           ),
    .alu_op_b_o              (ex_alu_op_b           ),
    .id_ex_pc_o              (ex_pc                 ),
    .id_ex_bs_zimm_data_o    (ex_bs_zimm_data       ),  
    .id_write_rd_idx_o       (ex_write_rd_idx       ),
    .id_ex_w_reg_en_o        (ex_w_reg_en           ), 
    .id_ex_inst_is_ebreak_o  (ex_inst_is_ebreak     ),
    .id_ex_inst_is_ecall_o   (ex_inst_is_ecall      ),
    .id_ex_inst_is_jalr_o    (ex_inst_is_jalr       ),
    .id_ex_inst_is_jal_o     (ex_inst_is_jal        ),
    .id_ex_inst_is_store_o   (ex_inst_is_store      ),
    .id_ex_inst_is_set_o     (ex_inst_is_set        ),
    .id_ex_inst_is_srax_o    (ex_inst_is_srax       ),
    .id_ex_inst_5_shamt_o    (ex_inst_5_shamt       ),
    .id_ex_inst_is_mret_o    (ex_inst_is_mret       ),
    .id_ex_ls_data_bus_o     (ex_ls_data_bus        ),
    .id_ex_inst_divrem_bus_o (ex_inst_divrem_bus    ),
    .id_ex_inst_mul_bus_o    (ex_inst_mul_bus       ),
    .id_ex_csr_bus_o         (ex_csr_bus            ),
    .id_ex_branch_bus_o      (ex_branch_bus         ),
    .id_ex_unsigned_bus_o    (ex_unsigned_bus       ),
    .id_ex_ls_req_o          (ex_ls_req             ),
    .id_ex_inst_is_rv64_o    (ex_inst_is_rv64       ),
    .id_ex_inst_is_illegal_o (ex_inst_is_illegal    )
);
/****************************************************exu*******************************************************/
  ysyx_22050598_exu_alu u_ysyx_22050598_exu_alu (
    .clk                     (clk                   ),
    .rst                     (rst                   ),
    .ex_muldiv_flush         (pipeline_flush[2]     ),
    .ex_alu_op_type          (ex_op_type            ),//What operations do ALU need to perform, + - * / % << >> | & ^
    .ex_alu_op_a             (ex_alu_op_a           ),//ALU'S Operand
    .ex_alu_op_b             (ex_alu_op_b           ),//ALU'S Operand
    .ex_pc                   (ex_pc                 ),//branch instructions pc
    .ex_bs_zimm_data         (ex_bs_zimm_data       ),//for branch instructions or store instructions or zimm
    .ex_write_reg_en         (ex_w_reg_en           ),//instruction has rd 
    .ex_inst_is_jalr         (ex_inst_is_jalr       ),//instruction is jalr
    .ex_inst_is_jal          (ex_inst_is_jal        ),//instruction is jal
    .ex_inst_is_store        (ex_inst_is_store      ),//instruction is s type
    .ex_inst_is_set          (ex_inst_is_set        ),//instruction is set if less than type
    .ex_inst_is_srax         (ex_inst_is_srax       ),//instruction is Shift Right Arithmetic
    .ex_inst_5_shamt         (ex_inst_5_shamt       ),//for srlw sraw sllw
    .ex_inst_divrem_bus      (ex_inst_divrem_bus    ),//Indicate which rem it is, inst_rem div and inst_remw divw  all signed
    .ex_inst_mul_bus         (ex_inst_mul_bus       ),//inst_mul , inst_mulh , inst_mulhsu , inst_mulhu , inst_mulw
    .ex_branch_bus           (ex_branch_bus         ),//branch instruction type , beq bne blt bge bltu bgeu
    .ex_unsigned_bus         (ex_unsigned_bus[1]    ),//compare is unsigned type
    .ex_ls_req               (ex_ls_req             ),// L/S instruction req to bus
    .ex_inst_is_rv64         (ex_inst_is_rv64       ),//instruction is rv64 type
    .ex_alu_rd_ls_data       (ex_ls_alu_rd_ls_data  ),//for rd or store loc or load loc
    .ex_alu_rd_data_en       (ex_ls_alu_rd_data_en  ),
    .ex_alu_pc_o             (ex_ls_alu_pc          ),
    .ex_alu_pc_en_o          (ex_ls_alu_pc_en       ),
    .ex_load_en_o            (ex_ls_load_en         ),
    .ex_store_en_o           (ex_ls_store_en        ),
    .ex_store_data_o         (ex_ls_store_data      ),
    .muldiv_ready            (muldiv_ready          ),
    .muldivout_valid         (muldivout_valid       )
); 
           
ysyx_22050598_exu_csr u_ysyx_22050598_exu_csr (
    .clk                     (clk                   ),
    .rst                     (rst                   ),
    .ex_csr_bus_i            (ex_csr_bus            ),
    .csr_imm_i               (ex_alu_op_b           ),
    .csr_reg_i               (ex_alu_op_a           ),
    .csr_zimm_i              (ex_bs_zimm_data       ),
    .csr_ecall_pc            (ex_pc                 ),
    .ex_inst_is_mret_i       (ex_inst_is_mret       ),
    .ex_inst_is_ecall_i      (ex_inst_is_ecall      ),
    .csr_rd_pc_data          (ex_csr_rd_pc_data     )
);

ysyx_22050598_exu_rd_pc_mux u_ysyx_22050598_exu_rd_pc_mux (
    .csr_rd_pc_data          (ex_csr_rd_pc_data     ),
    .alu_rd_data             (ex_ls_alu_rd_ls_data  ),
    .alu_pc_data             (ex_ls_alu_pc          ),
    .csr_rd_en               (|ex_csr_bus           ),
    .alu_pc_en               (ex_ls_alu_pc_en       ),
    .csr_mret                (ex_inst_is_mret       ),
    .csr_ecall               (ex_inst_is_ecall      ),
    .ex_pc_data_ena_o        (ex_pc_data_ena        ),
    .ex_rd_data_o            (ex_rd_data            ),
    .ex_pc_data_o            (ex_pc_data            )
);

ysyx_22050598_EX_LS u_ysyx_22050598_EX_LS (
    `ifdef ysyx_22050598_Test
    .ex_ls_inst              (ex_inst               ),
    .ex_ls_inst_o            (ls_inst               ),
    .ex_ls_pc                (ex_pc                 ),
    .ex_ls_pc_o              (ls_pc                 ),
    `endif
    .clk                     (clk                   ),
    .rst                     (rst                   ),
    .ex_ls_stall             (pipeline_stall[3]     ),
    .ex_ls_alu_rd_ls_data    (ex_rd_data            ),
    .ex_ls_alu_rd_data_en    (ex_ls_alu_rd_data_en  ),
    .ex_ls_load_en           (ex_ls_load_en         ),
    .ex_ls_store_en          (ex_ls_store_en        ),
    .ex_ls_store_data        (ex_ls_store_data      ),
    .ex_ls_ls_data_bus       (ex_ls_data_bus        ),
    .ex_ls_write_rd_idx      (ex_write_rd_idx       ),
    .ex_ls_load_unsigned     (ex_unsigned_bus[0]    ),
    .ex_ls_alu_rd_ls_data_o  (ls_alu_rd_ls_data     ),
    .ex_ls_store_data_o      (ls_store_data         ),
    .ex_ls_alu_rd_data_en_o  (ls_alu_rd_data_en     ),
    .ex_ls_load_en_o         (ls_load_en            ), 
    .ex_ls_store_en_o        (ls_store_en           ),  
    .ex_ls_ls_data_type_o    (ls_ls_data_type       ),
    .ex_ls_rd_idx_o          (ls_rd_idx             ),
    .ex_ls_load_unsigned_o   (ls_load_unsigned      ),
    .ex_ls_inst_is_ebreak    (ex_inst_is_ebreak     ),
    .ex_ls_inst_is_ebreak_o  (ls_inst_is_ebreak     )
);
/****************************************************lsu*******************************************************/
ysyx_22050598_lsu u_ysyx_22050598_lsu (
    .ls_store_data           (ls_store_data         ),
    .ls_loc                  (ls_alu_rd_ls_data     ),
    .load_en                 (ls_load_en            ),
    .store_en                (ls_store_en           ),
    .ls_type                 (ls_ls_data_type       ),
    .load_unsigned           (ls_load_unsigned      ),
    .load_data_o             (ls_wb_load_data       )
);
ysyx_22050598_lsu_rd_mux ysyx_22050598_lsu_rd_mux (
    .ls_alu_rd_data          (ls_alu_rd_ls_data     ),
    .ls_lsu_rd_data          (ls_wb_load_data       ),
    .ls_load_en              (ls_load_en            ),
    .ls_rd_data              (ls_rd_data            )
);  

ysyx_22050598_LS_WB ysyx_22050598_LS_WB (
    `ifdef ysyx_22050598_Test
    .ls_wb_inst              (ls_inst               ),
    .ls_wb_inst_o            (wb_inst               ),
    .ls_wb_pc                (ls_pc                 ),
    .ls_wb_pc_o              (wb_pc                 ),
    `endif  
    .clk                     (clk                   ),
    .rst                     (rst                   ),
    .ls_wb_stall             (pipeline_stall[4]     ),    
    .ls_wb_rd_data           (ls_rd_data            ),
    .ls_wb_rd_en             (ls_alu_rd_data_en     ),
    .ls_wb_rd_idx            (ls_rd_idx             ),
    .ls_wb_inst_is_ebreak    (ls_inst_is_ebreak     ),
    .ls_wb_rd_data_o         (wb_rd_data            ),
    .ls_wb_rd_en_o           (wb_rd_en              ),
    .ls_wb_rd_idx_o          (wb_rd_idx             ),
    .ls_wb_inst_is_ebreak_o  (wb_inst_is_ebreak     )
);
/****************************************************ctrl*******************************************************/
ysyx_22050598_EBREAK u_ysyx_22050598_EBREAK(
.ebreak_flag                 (wb_inst_is_ebreak     ),
.ebreak_a0                   (ebreak_a0             )
);

ysyx_22050598_pipeline_ctrl ysyx_22050598_pipeline_ctrl (
    .ex_pc_data              (ex_pc_data            ),
    .ex_pc_ena               (ex_pc_data_ena        ),
    .id_pc_data              (id_pc                 ),
    .forward_load_stall      (forward_load_stall    ),
    .muldiv_ready            (muldiv_ready          ),
    .muldivout_valid         (muldivout_valid       ),
    .exu_is_mul              (ex_op_type[7]         ),
    .exu_is_div              (ex_op_type[6]         ),
    .exu_is_rem              (ex_op_type[5]         ),
    //.if_id_ebreak            (id_ex_inst_is_ebreak  ),
    .pipeline_flush          (pipeline_flush        ),
    .pipeline_stall          (pipeline_stall        )
);

`ifdef ysyx_22050598_Test
assign   test_if_pc     = if_id_pc   ;
assign   test_if_inst   = if_id_inst ;
assign   test_id_pc     = id_pc      ;
assign   test_id_inst   = id_inst    ;
assign   test_ex_pc     = ex_pc      ;
assign   test_ex_inst   = ex_inst    ;
assign   test_ls_pc     = ls_pc      ;
assign   test_ls_inst   = ls_inst    ;
assign   test_wb_pc     = wb_pc      ; 
assign   test_wb_inst   = wb_inst    ;
assign   npc_stall      = |pipeline_stall ;
`endif
endmodule
