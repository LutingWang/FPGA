`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:12:00 11/25/2018 
// Design Name: 
// Module Name:    RegDst 
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
module MUX_RF_A3(
    input [4:0] A3,
    input [4:0] A2,
    input [1:0] RegDst,
    output [4:0] RegDstOut
    );

	`include "header_ctrl.v"

	assign RegDstOut = (RegDst == `RegDst_A3) ? A3 :
					(RegDst == `RegDst_A2) ? A2 :
					(RegDst == `RegDst_ra) ? 5'b11111 :
					5'b00000;

endmodule

module MUX_ALU_A(
    input [31:0] Rd1,
	 input [31:0] Shamt,
	 input ALUSrc,
	 output [31:0] ALUSrcOut
	 );
	 
	`include "header_ctrl.v"
	
	assign ALUSrcOut = (ALUSrc == `alu_a_shamt) ? Shamt : Rd1;
	 
endmodule

module MUX_ALU_B(
    input [31:0] Rd2,
	 input [31:0] Ext,
	 input ALUSrc,
	 output [31:0] ALUSrcOut
	 );
	 
	`include "header_ctrl.v"
	
	assign ALUSrcOut = (ALUSrc == `alu_b_imm) ? Ext : Rd2;
	 
endmodule

module MUX_RF_WD(
    input [31:0] C,
	 input [31:0] Dout,
	 input [31:0] PC,
	 input [1:0] DataSrc,
	 output [31:0] DataSrcOut
	 );
	 
	`include "header_ctrl.v"
	`include "header_debug.v"
	 
	assign DataSrcOut = (DataSrc == `DataSrc_alu) ? C :
								(DataSrc == `DataSrc_dm) ? Dout : 
								(DataSrc == `DataSrc_pc4) ? PC :
								`debug_data_mux;

endmodule

module MUX_PC(
	 input [31:0] add4,
	 input [31:0] NPC,
	 input [31:0] mf,
	 input [1:0] NPC_Sel,
	 input Branch,
	 output [31:0] MUX_PC_OUT
	 );
	 
	`include "header_ctrl.v"
	`include "header_debug.v"
	
	assign MUX_PC_OUT = (NPC_Sel == `npc_add4) ? add4 :
								(NPC_Sel == `npc_jump) ? NPC :
								(NPC_Sel == `npc_branch) ? ((Branch == 1'b1) ? NPC : add4) :
								(NPC_Sel == `npc_jr) ? mf :
								`debug_pc_mux;

endmodule

