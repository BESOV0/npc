module npc(
input           clk     ,
input           rst     ,  
output [31:0]   inst    ,  
output [63:0]   pc_now  ,
output [63:0]   fdata
);

wire [63:0] ebreak_a0;
//ifu
wire jump_flag;
wire [63:0] j_pc;
//wire [63:0] pc_now;
//wire [31:0] inst;
//idu_decode
wire    [9:0]   id_ex_op_type          ;
wire    [2:0]   id_op_a_sel            ;
wire    [1:0]   id_op_b_sel            ;
wire    [63:0]  id_imm                 ;
wire    [4:0]   id_read_rs1_idx        ;
wire    [4:0]   id_read_rs2_idx        ;
wire            id_ex_w_reg_en         ;
wire    [4:0]   id_write_rd_idx        ;
wire            id_ex_inst_is_ebreak   ;
wire            id_ex_inst_is_ecall    ;
wire            id_ex_inst_is_jalr     ;
wire            id_ex_inst_is_jal      ;
wire            id_ex_inst_is_store    ;
wire            id_ex_inst_is_set      ;
wire            id_ex_inst_is_srax     ;
wire            id_ex_inst_5_shamt     ;
wire            id_ex_inst_is_mret     ;
wire            id_ex_inst_is_csri     ;
wire    [1:0]   id_ex_ls_data_bus      ;
wire            id_ex_inst_divrem_bus  ;
wire    [4:0]   id_ex_inst_mul_bus     ;
wire    [5:0]   id_ex_csr_bus          ;
wire    [5:0]   id_ex_branch_bus       ;
wire    [1:0]   id_ex_unsigned_bus     ;
wire            id_ex_ls_req           ;
wire            id_ex_inst_is_rv64     ;
wire            id_ex_inst_is_illegal  ;
//idu_regfile
wire [63:0] read_rs1_data   ;
wire [63:0] read_rs2_data   ;
wire        wb_rd_en        ;
wire [4:0]  wb_rd_idx       ;
wire [63:0] wb_data         ;
wire [63:0] rd_data         ;
//idu_forward
wire [63:0] alu_op_a        ;
wire [63:0] alu_op_b        ;
wire [63:0] ex_bs_data      ;
/****************************************************exu*******************************************************/
wire [63:0] ex_alu_rd_ls_data   ;
wire        ex_alu_rd_data_en   ;
wire [63:0] ex_alu_pc_o         ;
wire        ex_alu_pc_en_o      ;
wire        ex_load_en_o        ;
wire        ex_store_en_o       ;
wire [63:0] ex_store_data_o     ;
wire [4:0]  ex_write_rd_idx_o   ;
//csr
wire [63:0] csr_rd_data         ;
wire [63:0] alu_rd_data_o       ;
//lsu
wire [63:0] load_data           ;


ysyx_22050598_IFU u_ysyx_22050598_IFU(
.clk(clk),
.rst(rst),
.jump_flag(jump_flag),
.j_pc(j_pc),
.pc_now(pc_now),
.id_inst(inst)
);

ysyx_22050598_idu_decode u_ysyx_22050598_idu_decode (
    .id_inst_i             (inst                  ),
    .id_op_type_o          (id_ex_op_type         ),
    .id_op_a_sel_o         (id_op_a_sel           ),
    .id_op_b_sel_o         (id_op_b_sel           ),
    .id_imm_o              (id_imm                ),
    .id_read_rs1_idx_o     (id_read_rs1_idx       ),
    .id_read_rs2_idx_o     (id_read_rs2_idx       ),
    .id_w_reg_en_o         (id_ex_w_reg_en        ),
    .id_write_rd_idx_o     (id_write_rd_idx       ),
    .id_inst_is_ebreak_o   (id_ex_inst_is_ebreak  ),
    .id_inst_is_ecall_o    (id_ex_inst_is_ecall   ),
    .id_inst_is_jalr_o     (id_ex_inst_is_jalr    ),
    .id_inst_is_jal_o      (id_ex_inst_is_jal     ),
    .id_inst_is_store_o    (id_ex_inst_is_store   ),
    .id_inst_is_set_o      (id_ex_inst_is_set     ),
    .id_inst_is_srax_o     (id_ex_inst_is_srax    ),
    .id_inst_5_shamt_o     (id_ex_inst_5_shamt    ),
    .id_inst_is_mret_o     (id_ex_inst_is_mret    ),
    .id_inst_is_csri_o     (id_ex_inst_is_csri    ),           
    .id_ls_data_bus_o      (id_ex_ls_data_bus     ),
    .id_inst_divrem_bus_o  (id_ex_inst_divrem_bus ),
    .id_inst_mul_bus_o     (id_ex_inst_mul_bus    ),
    .id_csr_bus_o          (id_ex_csr_bus         ),
    .id_branch_bus_o       (id_ex_branch_bus      ),
    .id_unsigned_bus_o     (id_ex_unsigned_bus    ),
    .id_ls_req_o           (id_ex_ls_req          ),
    .id_inst_is_rv64_o     (id_ex_inst_is_rv64    ),
    .id_inst_is_illegal_o  (id_ex_inst_is_illegal )
);

ysyx_22050598_regfile u_ysyx_22050598_regfile (
    .clk             (clk               ),
    .rst             (rst               ),
    .read_rs1_idx    (id_read_rs1_idx   ),
    .read_rs2_idx    (id_read_rs2_idx   ),
    .read_rs1_data   (read_rs1_data     ),
    .read_rs2_data   (read_rs2_data     ),  
    .write_en        (ex_alu_rd_data_en ),
    .write_rd_idx    (ex_write_rd_idx_o ),
    .write_rd_data   (rd_data           ),
    .ebreak_a0       (ebreak_a0         )
);

ysyx_22050598_idu_forward ysyx_22050598_idu_forward (
    .id_rs1_idx        (id_read_rs1_idx   ),
    .id_rs2_idx        (id_read_rs2_idx   ),
    .alu_op_a_sel      (id_op_a_sel       ),
    .alu_op_b_sel      (id_op_b_sel       ),
    .id_rd_idx         (id_write_rd_idx   ),
    .rs1_data          (read_rs1_data     ),
    .rs2_data          (read_rs2_data     ),
    .id_imm            (id_imm            ),
    .pc_data           (pc_now            ),
    .id_inst_is_csri   (id_ex_inst_is_csri),
    .id_branch_bus     (id_ex_branch_bus  ),
    .id_inst_is_store  (id_ex_inst_is_store),

    .ex_rd_idx         (5'b0              ),
    .ex_rd_en          (1'b0              ),
    .ex_load_en        (1'b0              ),
    .ex_alu_data       (64'b0             ),
    
    .mem_rd_idx        (5'b0              ),
    .mem_rd_en         (1'b0              ),
    .mem_data          (64'b0             ),
    
    .wb_rd_idx         (5'b0              ),
    .wb_rd_en          (1'b0              ),
    .wb_data           (64'b0             ),

    .load_stall_signal (                  ),
    .alu_op_a          (alu_op_a          ),
    .alu_op_b          (alu_op_b          ),
    .ex_bs_data        (ex_bs_data        )
   );

  ysyx_22050598_exu_alu u_ysyx_22050598_exu_alu (
    //.clk                 (),
    //.rst                 (),
    //.ex_muldiv_flush     (),
    .ex_alu_op_type      (id_ex_op_type         ),//What operations do ALU need to perform, + - * / % << >> | & ^
    .ex_alu_op_a         (alu_op_a              ),//ALU'S Operand
    .ex_alu_op_b         (alu_op_b              ),//ALU'S Operand
    .ex_pc               (pc_now                ),//branch instructions pc
    .ex_bs_data          (ex_bs_data            ),//for branch instructions or store instructions 
    .ex_write_rd_idx     (id_write_rd_idx       ),
    .ex_write_reg_en     (id_ex_w_reg_en        ),//instruction has rd 
    .ex_inst_is_jalr     (id_ex_inst_is_jalr    ),//instruction is jalr
    .ex_inst_is_jal      (id_ex_inst_is_jal     ),//instruction is jal
    .ex_inst_is_store    (id_ex_inst_is_store   ),//instruction is s type
    .ex_inst_is_set      (id_ex_inst_is_set     ),//instruction is set if less than type
    .ex_inst_is_srax     (id_ex_inst_is_srax    ),//instruction is Shift Right Arithmetic
    .ex_inst_5_shamt     (id_ex_inst_5_shamt    ),//for srlw sraw sllw
    .ex_inst_divrem_bus  (id_ex_inst_divrem_bus ),//Indicate which rem it is, inst_rem div and inst_remw divw  all signed
    .ex_inst_mul_bus     (id_ex_inst_mul_bus    ),//inst_mul , inst_mulh , inst_mulhsu , inst_mulhu , inst_mulw
    .ex_branch_bus       (id_ex_branch_bus      ),//branch instruction type , beq bne blt bge bltu bgeu
    .ex_unsigned_bus     (id_ex_unsigned_bus    ),//compare is unsigned type
    .ex_ls_req           (id_ex_ls_req          ),// L/S instruction req to bus
    .ex_inst_is_rv64     (id_ex_inst_is_rv64    ),//instruction is rv64 type

    .ex_alu_rd_ls_data   (ex_alu_rd_ls_data     ),//for rd or store loc or load loc
    .ex_alu_rd_data_en   (ex_alu_rd_data_en     ),
    .ex_alu_pc_o         (ex_alu_pc_o           ),
    .ex_alu_pc_en_o      (ex_alu_pc_en_o        ),
    .ex_load_en_o        (ex_load_en_o          ),
    .ex_store_en_o       (ex_store_en_o         ),
    .ex_store_data_o     (ex_store_data_o       ),
    .ex_write_rd_idx_o   (ex_write_rd_idx_o     )
    //.muldiv_ready       ()     ,
    //.muldivout_valid    ()
); 

ysyx_22050598_csr u_ysyx_22050598_csr (
    .clk                (clk                ),
    .rst                (rst                ),
    .ex_csr_bus_i       (id_ex_csr_bus      ),
    .csr_imm_i          (alu_op_b           ),
    .csr_reg_i          (alu_op_a           ),
    .csr_zimm_i         (ex_bs_data         ),
    .csr_ecall_pc       (pc_now             ),
    .ex_inst_is_mret_i  (id_ex_inst_is_mret ),
    .ex_inst_is_ecall_i (id_ex_inst_is_ecall),
    .csr_rd_pc_data     (csr_rd_data        )
);

ysyx_22050598_exu_rd_mux u_ysyx_22050598_exu_rd_mux (
    .csr_rd_data       (csr_rd_data      ),
    .alu_rd_data       (ex_alu_rd_ls_data),
    .csr_ena           (|id_ex_csr_bus   ),
    .alu_rd_data_o     (alu_rd_data_o    )
);

ysyx_22050598_lsu u_ysyx_22050598_lsu (
    .store_data         (ex_store_data_o        ),
    .ls_loc             (alu_rd_data_o          ),
    .load_en            (ex_load_en_o           ),
    .store_en           (ex_store_en_o          ),
    .ls_type            (id_ex_ls_data_bus      ),
    .load_unsigned      (id_ex_unsigned_bus[0]  ),
    .load_data          (load_data              )
);

assign rd_data = ex_load_en_o ? load_data : alu_rd_data_o;

ysyx_22050598_EBREAK u_ysyx_22050598_EBREAK(
.ebreak_flag(id_ex_inst_is_ebreak),
.ebreak_a0(ebreak_a0)
);

assign fdata = rd_data;
assign jump_flag = ex_alu_pc_en_o | id_ex_inst_is_mret | id_ex_inst_is_ecall;
assign j_pc = (id_ex_inst_is_mret | id_ex_inst_is_ecall) ? csr_rd_data : ex_alu_pc_o;
endmodule
