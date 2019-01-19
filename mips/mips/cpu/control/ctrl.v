`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:19:45 11/25/2018 
// Design Name: 
// Module Name:    ctrl 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ctrl(
    input [31:0] instr,
	 output [1:0] NPC_Sel,
	 output NPCOp,
	 output [2:0] CmpOp,
    output [1:0] ExtOp,
	 output ALUASrc,
	 output ALUBSrc,
    output [3:0] ALUOp,
	 output [1:0] BEOp, 
	 output MemWrite,
	 output [1:0] RegDst,
	 output LoadExtOp, 
	 output [1:0] DataSrc,
    output RegWrite,
	 output [3:0] ic,
	 output [5:0] A1,
	 output [5:0] A2,
	 output [5:0] A3,
	 output RI_exp,
	 output iseret,
	 output iscp0,
	 output cp0_we
    );

	`include "header_ind.v"
	`include "header_ctrl.v"
	`include "header_hazard.v"
	
	// Segment
	wire [`OpCode] OpCode; 
	wire [`rs] rs; 
	wire [`rt] rt; 
	wire [`rd] rd; 
	wire [`Shamt] Shamt; 
	wire [`Funct] Funct;
	wire [`imm] imm;
	wire [`instr_index] instr_index;
	
	assign OpCode = instr[`OpCode];
	assign rs = instr[`rs];
	assign rt = instr[`rt];
	assign rd = instr[`rd];
	assign Shamt = instr[`Shamt];
	assign Funct = instr[`Funct];
	// assign imm = instr[`imm];
	// assign instr_index = instr[`instr_index];
	
	// Decode
		// R
		assign nop = (instr == `nop) ? 1'b1 : 1'b0;
		assign sll = (OpCode == `R && rs == 5'b0 && (rt != 5'b0 || rd != 5'b0 || Shamt != 5'b0) && Funct == `sll) ? 1'b1 : 1'b0;
		assign srl = (OpCode == `R && rs == 5'b0 && Funct == `srl) ? 1'b1 : 1'b0;
		assign sra = (OpCode == `R && rs == 5'b0 && Funct == `sra) ? 1'b1 : 1'b0;
		assign sllv = (OpCode == `R && Shamt == 5'b0 && Funct == `sllv) ? 1'b1 : 1'b0;
		assign srlv = (OpCode == `R && Shamt == 5'b0 && Funct == `srlv) ? 1'b1 : 1'b0;
		assign srav = (OpCode == `R && Shamt == 5'b0 && Funct == `srav) ? 1'b1 : 1'b0;
		assign jr = (OpCode == `R && rt == 5'b0 && rd == 5'b0 && Shamt == 5'b0 && Funct == `jr) ? 1'b1 : 1'b0;
		assign jalr = (OpCode == `R && rt == 5'b0 && Shamt == 5'b0 && Funct == `jalr) ? 1'b1 : 1'b0;
		
		assign add = (OpCode == `R && Shamt == 5'b0 && Funct == `add) ? 1'b1 : 1'b0;
		assign addu = (OpCode == `R && Shamt == 5'b0 && Funct == `addu) ? 1'b1 : 1'b0;
		assign sub = (OpCode == `R && Shamt == 5'b0 && Funct == `sub) ? 1'b1 : 1'b0;
		assign subu = (OpCode == `R && Shamt == 5'b0 && Funct == `subu) ? 1'b1 : 1'b0;
		assign is_and = (OpCode == `R && Shamt == 5'b0 && Funct == `and_funct) ? 1'b1 : 1'b0;
		assign is_nor = (OpCode == `R && Shamt == 5'b0 && Funct == `nor_funct) ? 1'b1 : 1'b0;
		assign is_or = (OpCode == `R && Shamt == 5'b0 && Funct == `or_funct) ? 1'b1 : 1'b0;
		assign is_xor = (OpCode == `R && Shamt == 5'b0 && Funct == `xor_funct) ? 1'b1 : 1'b0;
		assign slt = (OpCode == `R && Shamt == 5'b0 && Funct == `slt) ? 1'b1 : 1'b0;
		assign sltu = (OpCode == `R && Shamt == 5'b0 && Funct == `sltu) ? 1'b1 : 1'b0;
		// I
		assign bgez = (OpCode == `bgez && rt == 5'b00001) ? 1'b1 : 1'b0;
		assign bltz = (OpCode == `bltz && rt == 5'b00000) ? 1'b1 : 1'b0;
		assign beq = (OpCode == `beq) ? 1'b1 : 1'b0;
		assign bne = (OpCode == `bne) ? 1'b1 : 1'b0;
		assign blez = (OpCode == `blez && rt == 5'b00000) ? 1'b1 : 1'b0;
		assign bgtz = (OpCode == `bgtz && rt == 5'b00000) ? 1'b1 : 1'b0;
		
		assign addi = (OpCode == `addi) ? 1'b1 : 1'b0;
		assign addiu = (OpCode == `addiu) ? 1'b1 : 1'b0;
		assign slti = (OpCode == `slti) ? 1'b1 : 1'b0;
		assign sltiu = (OpCode == `sltiu) ? 1'b1 : 1'b0;
		assign andi = (OpCode == `andi) ? 1'b1 : 1'b0;
		assign ori = (OpCode == `ori) ? 1'b1 : 1'b0;
		assign xori = (OpCode == `xori) ? 1'b1 : 1'b0;
		assign lui = (OpCode == `lui && rs == 5'b0) ? 1'b1 : 1'b0;
		assign lb = (OpCode == `lb) ? 1'b1 : 1'b0;
		assign lh = (OpCode == `lh) ? 1'b1 : 1'b0;
		assign lw = (OpCode == `lw) ? 1'b1 : 1'b0;
		assign lbu = (OpCode == `lbu) ? 1'b1 : 1'b0;
		assign lhu = (OpCode == `lhu) ? 1'b1 : 1'b0;
		assign sb = (OpCode == `sb) ? 1'b1 : 1'b0;
		assign sh = (OpCode == `sh) ? 1'b1 : 1'b0;
		assign sw = (OpCode == `sw) ? 1'b1 : 1'b0;
		// J
		assign j = (OpCode == `j) ? 1'b1 : 1'b0;
		assign jal = (OpCode == `jal) ? 1'b1 : 1'b0;
		// Exception
		assign mfc0 = (OpCode == `COP0 && rs == 5'b0 && Shamt == 5'b0 && Funct == 6'b0) ? 1'b1 : 1'b0;
		assign mtc0 = (OpCode == `COP0 && rs == `mtc0 && Shamt == 5'b0 && Funct == 6'b0) ? 1'b1 : 1'b0;
		assign eret = (instr == `eret) ? 1'b1 : 1'b0;
	
	// Exception
	assign iseret = eret;
	assign cp0_we = mtc0;
	assign iscp0 = (mfc0 || mtc0) ? 1'b1 : 1'b0;
	assign RI_exp = (ic == `hzd_default) ? 1'b1 : 1'b0;
	
	// AT Decoder
	assign ic = (add + addu + is_and + is_nor + is_or + sll + sllv + slt + sltu + sra + srav + srl + srlv + sub + subu + is_xor) ? `hzd_cal_r : 
	            (addi + addiu + andi + lui + ori + slti + sltiu + xori) ? `hzd_cal_i :
					(lb + lbu + lh + lhu + lw) ? `hzd_load :
					(sb + sh + sw) ? `hzd_store :
					(beq + bgez + bgtz + blez + bltz + bne) ? `hzd_b :
					(j + eret) ? `hzd_j :
					(jr) ? `hzd_jr :
					(jal) ? `hzd_jal :
					(jalr) ? `hzd_jalr :
					(mfc0) ? `hzd_cp0_load :
					(mtc0) ? `hzd_cp0_store :
					(nop) ? `hzd_nop :
					`hzd_default;
	
	assign A1 = (ic == `hzd_b || (ic == `hzd_cal_i && ~lui) || (ic == `hzd_cal_r && ~sll && ~sra && ~srl) || jalr || jr || ic == `hzd_load || ic == `hzd_store) ? {1'b0, rs} :
					(ic == `hzd_cp0_load) ? {1'b1, rd} :
					6'b0;
	assign A2 = (beq || bne || ic == `hzd_cal_r || ic == `hzd_store || mtc0) ? {1'b0, rt} :
					6'b0;
	assign A3 = (ic == `hzd_cal_r || jalr) ? {1'b0, rd} :
					(ic == `hzd_cal_i || ic == `hzd_load || mfc0) ? {1'b0, rt} :
					(jal) ? 6'b011111 :
					(mtc0) ? {1'b1, rd} :
					6'b0;
	
	// Controller
	assign NPC_Sel = (ic == `hzd_nop || ic == `hzd_cal_i || ic == `hzd_cal_r || ic == `hzd_load || mfc0 || mtc0 || ic == `hzd_store) ? `npc_add4 :
	                 (j + jal) ? `npc_jump :
						  (ic == `hzd_b) ? `npc_branch :
						  (jr + jalr) ? `npc_jr :
						  `npc_default;
	assign NPCOp = (j + jal) ? `npc_ext_j :
	               (ic == `hzd_b) ? `npc_ext_b :
						`npc_ext_default;
	assign CmpOp = (beq) ? `cmp_eq :
						(bgez) ? `cmp_gez :
						(bgtz) ? `cmp_gtz :
						(blez) ? `cmp_lez :
						(bltz) ? `cmp_ltz :
						(bne) ? `cmp_ne :
						`cmp_default;
	assign ExtOp = (andi + xori + ori) ? `ext_unsigned :
	               (addi || addiu || slti || sltiu || ic == `hzd_load || ic == `hzd_store) ? `ext_signed :
						(lui) ? `ext_lui :
						`ext_default; 
	assign ALUASrc = (ic == `hzd_cal_i || (ic == `hzd_cal_r && ~sll && ~sra && ~srl) || ic == `hzd_load || ic == `hzd_store) ? `alu_a_rd1 :
							(sll + sra + srl) ? `alu_a_shamt :
							`alu_a_default;
	assign ALUBSrc = (ic == `hzd_cal_r) ? `alu_b_rd2 :
	                (ic == `hzd_cal_i || ic == `hzd_load || ic == `hzd_store) ? `alu_b_imm :
						 `alu_b_default;
	assign ALUOp = ((addi + addiu + add + addu) || ic == `hzd_load || ic == `hzd_store) ? `alu_add :
	               (sub + subu) ? `alu_sub :
						(andi + is_and) ? `alu_and : 
						(lui + ori + is_or) ? `alu_or :
						(is_nor) ? `alu_nor :
						(xori + is_xor) ? `alu_xor :
						(slti + slt) ? `alu_lt :
						(sltiu + sltu) ? `alu_ltu :
						(sll + sllv) ? `alu_sll :
						(sra + srav) ? `alu_sra :
						(srl + srlv) ? `alu_srl :
						`alu_default;
	assign BEOp = (lb + lbu + sb) ? `be_byte :
						(lh + lhu + sh) ? `be_half :
						(lw + sw + mfc0) ? `be_word :
						`be_default; 
	assign MemWrite = (ic == `hzd_store) ? 1'b1 : 1'b0;
	assign RegDst = (ic == `hzd_cal_r || jalr) ? `RegDst_A3 :
	                (ic == `hzd_cal_i || ic == `hzd_load || mfc0) ? `RegDst_A2 :
						 (jal) ? `RegDst_ra :
						 `RegDst_default;
	assign LoadExtOp = (lb + lh) ? `load_ext_signed :
								(lbu + lhu) ? `load_ext_unsigned : 
								//(lw + mfc0) ? `load_ext_default : 
								`load_ext_default;
	assign DataSrc = (ic == `hzd_cal_r || ic == `hzd_cal_i) ? `DataSrc_alu :
	                 (ic == `hzd_load || mfc0) ? `DataSrc_dm :
						  (jalr + jal) ? `DataSrc_pc4 :
						  `DataSrc_default;
	assign RegWrite = (ic == `hzd_cal_i || ic == `hzd_cal_r || ic == `hzd_load || jal || jalr || mfc0) ? 1'b1 : 1'b0;

endmodule
