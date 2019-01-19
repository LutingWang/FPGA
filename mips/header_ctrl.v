// Decode
`define nop 32'h0000_0000
`define eret 32'h4200_0018

`define R 6'b000000
	`define sll 6'b000000
	`define srl 6'b000010
	`define sra 6'b000011
	`define sllv 6'b000100
	`define srlv 6'b000110
	`define srav 6'b000111
	
	`define jr 6'b001000
	`define jalr 6'b001001
	
	`define add 6'b100000
	`define addu 6'b100001
	`define sub 6'b100010
	`define subu 6'b100011
	
	`define and_funct 6'b100100
	`define or_funct 6'b100101
	`define xor_funct 6'b100110
	`define nor_funct 6'b100111
	
	`define slt 6'b101010
	`define sltu 6'b101011

`define bgez 6'b000001
`define bltz 6'b000001
`define beq 6'b000100
`define bne 6'b000101
`define blez 6'b000110
`define bgtz 6'b000111

`define addi 6'b001000
`define addiu 6'b001001
`define slti 6'b001010
`define sltiu 6'b001011

`define andi 6'b001100
`define ori 6'b001101
`define xori 6'b001110
`define lui 6'b001111

`define lb 6'b100000
`define lh 6'b100001
`define lw 6'b100011
`define lbu 6'b100100
`define lhu 6'b100101
`define sb 6'b101000
`define sh 6'b101001
`define sw 6'b101011
`define j 6'b000010
`define jal 6'b000011

`define COP0 6'b010000
`define mfc0 5'b00000
`define mtc0 5'b00100

// Hazard
`define mf_pc4e 3'b100
`define mf_ao 3'b011
`define mf_pc4m 3'b010
`define mf_wd 3'b001
`define mf_rd 3'b000

`define hzd_nop 4'b0000
`define hzd_cal_r 4'b0001
`define hzd_cal_i 4'b0010
`define hzd_load 4'b0011
`define hzd_store 4'b0100
`define hzd_b 4'b0101
`define hzd_j 4'b0110
`define hzd_jr 4'b0111
`define hzd_jal 4'b1000
`define hzd_jalr 4'b1001
`define hzd_cp0_load 4'b1101
`define hzd_cp0_store 4'b1110
`define hzd_default 4'b1111

`define cp0_sr 6'b101100
`define cp0_cause 6'b101101
`define cp0_epc 6'b101110
`define cp0_prid 6'b101111

// Controller
`define npc_add4 2'b00
`define npc_jump 2'b01
`define npc_branch 2'b10
`define npc_jr 2'b11
`define npc_default 2'b00

`define npc_ext_b 1'b0
`define npc_ext_j	1'b1
`define npc_ext_default 1'b0

`define cmp_eq 3'b000
`define cmp_gez 3'b001
`define cmp_gtz 3'b010
`define cmp_lez 3'b011
`define cmp_ltz 3'b100
`define cmp_ne 3'b101
`define cmp_default 3'b000

`define ext_unsigned 2'b00
`define ext_signed 2'b01
`define ext_lui 2'b10
`define ext_default 2'b11

`define alu_a_rd1 1'b0
`define alu_a_shamt 1'b1
`define alu_a_default 1'b0

`define alu_b_rd2 1'b0
`define alu_b_imm 1'b1
`define alu_b_default 1'b0

`define alu_nop 4'b0000
`define alu_add 4'b0001
`define alu_sub 4'b0010
`define alu_and 4'b0011
`define alu_or 4'b0100
`define alu_nor 4'b0101
`define alu_xor 4'b0110
`define alu_lt 4'b0111
`define alu_ltu 4'b1000
`define alu_sll 4'b1001
`define alu_sra 4'b1010
`define alu_srl 4'b1011
`define alu_undef_0 4'b1100
`define alu_undef_1 4'b1101
`define alu_undef_2 4'b1110
`define alu_default 4'b1111

`define be_byte 2'b00
`define be_half 2'b01
`define be_word 2'b10
`define be_default 2'b11

`define RegDst_A3 2'b00
`define RegDst_A2 2'b01
`define RegDst_ra 2'b10
`define RegDst_default 2'b11

`define load_ext_signed 1'b0
`define load_ext_unsigned 1'b1
`define load_ext_default 1'b0

`define DataSrc_alu 2'b00
`define DataSrc_dm 2'b01
`define DataSrc_pc4 2'b10
`define DataSrc_default 2'b11