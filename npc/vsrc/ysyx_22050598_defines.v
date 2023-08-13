//Opcode Part
`define ysyx_22050598_OPCODE_LUI             7'b01_101_11
`define ysyx_22050598_OPCODE_AUIPC           7'b00_101_11
`define ysyx_22050598_OPCODE_JAL             7'b11_011_11
`define ysyx_22050598_OPCODE_JALR            7'b11_001_11
`define ysyx_22050598_OPCODE_BRANCH          7'b11_000_11
`define ysyx_22050598_OPCODE_LOAD            7'b00_000_11
`define ysyx_22050598_OPCODE_STORE           7'b01_000_11
`define ysyx_22050598_OPCODE_ALUI            7'b00_100_11
`define ysyx_22050598_OPCODE_ALUR            7'b01_100_11
`define ysyx_22050598_OPCODE_ALUIW           7'b00_110_11
`define ysyx_22050598_OPCODE_ALURW           7'b01_110_11
`define ysyx_22050598_OPCODE_FENCE           7'b00_011_11
`define ysyx_22050598_OPCODE_SYSTEM          7'b11_100_11
//Regfile Part
`define ysyx_22050598_RF_ADDR_WIDTH   5
`define ysyx_22050598_RF_DATA_LEN     64
`define ysyx_22050598_RF_LEN          64
//CSR
`define ysyx_22050598_CSR_XLEN        64
`define ysyx_22050598_CSR_MSTATUS_RESETVAL 64'h0000000a00001800
//Load and Store width
`define ysyx_22050598_Byte             2'b00
`define ysyx_22050598_Half_Word        2'b01
`define ysyx_22050598_Word             2'b10
`define ysyx_22050598_Double_WordByte  2'b11
//ALU Part
`define ysyx_22050598_ALU_ADDER_WIDTH  65
`define ysyx_22050598_ALU_XLEN         64
//Test
`define ysyx_22050598_Test 
//AXI BRUST
`define ysyx_22050598_AXI_BURST_TYPE_FIXED               2'b00
`define ysyx_22050598_AXI_BURST_TYPE_INCR                2'b01
`define ysyx_22050598_AXI_BURST_TYPE_WRAP                2'b10
//AXI CACHE
`define ysyx_22050598_AXI_AXCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define ysyx_22050598_AXI_AXCACHE_DEVICE_BUFFERABLE                       4'b0001
`define ysyx_22050598_AXI_AXCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define ysyx_22050598_AXI_AXCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define ysyx_22050598_AXI_AXCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
`define ysyx_22050598_AXI_AXCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
`define ysyx_22050598_AXI_AXCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
`define ysyx_22050598_AXI_AXCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define ysyx_22050598_AXI_AXCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
`define ysyx_22050598_AXI_AXCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
`define ysyx_22050598_AXI_AXCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
`define ysyx_22050598_AXI_AXCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
//AXI PROT
`define ysyx_22050598_AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
`define ysyx_22050598_AXI_PROT_PRIVILEGED_ACCESS                          3'b001
`define ysyx_22050598_AXI_PROT_SECURE_ACCESS                              3'b000
`define ysyx_22050598_AXI_PROT_NON_SECURE_ACCESS                          3'b010
`define ysyx_22050598_AXI_PROT_DATA_ACCESS                                3'b000
`define ysyx_22050598_AXI_PROT_INSTRUCTION_ACCESS                         3'b100
//AXI RAM
`define ysyx_22050598_AXI_ADDR_WIDTH   64
`define ysyx_22050598_AXI_DATA_LEN     64
`define ysyx_22050598_AXI_RAM_DP       256