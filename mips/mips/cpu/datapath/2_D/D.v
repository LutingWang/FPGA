`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:02:17 12/03/2018 
// Design Name: 
// Module Name:    D 
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
module D(
    input [31:0] IRD,
    input [31:0] PC4D,
    input Clk,
    input Reset,
    input FlushE,
    input [2:0] Forward_RS_D_Sel,
    input [2:0] Forward_RT_D_Sel,
    input [31:0] PC4fromE,
    input [31:0] AO,
    input [31:0] PC4fromM,
    input [31:0] MUX_RF_WD_OUT,
    output Branch,
    output [1:0] NPC_Sel,
    output [31:0] NPC,
	 output [31:0] MF_RS_D_OUT,
    output reg [31:0] IRE,
    output reg [31:0] PC4E,
    output reg [31:0] RSE,
    output reg [31:0] RTE,
    output reg [31:0] EXTE,
    input [4:0] MUX_RF_A3_OUT,
    input We,
	 input exp_in,
	 input [6:2] ExcCodeF,
	 output iseretD,
	 output reg [6:2] ExcCodeE
    );
	 
	`include "header_expint.v"
	`include "header_ind.v"
		
	wire [31:0] Rd1, Rd2, Ext, MF_RT_D_OUT;
	wire [2:0] CmpOp;
	wire [1:0] ExtOp;
	wire NPCOp;
	wire [6:2] ExcCode;
	
	always @(posedge Clk) begin
		if (Reset || exp_in) begin
			IRE = 32'b0;
			PC4E = 32'b0;
			RSE = 32'b0;
			RTE = 32'b0;
			EXTE = 32'b0;
			ExcCodeE = `ExcCode_default;
		end else if (FlushE) begin
			IRE = 32'b0;
			PC4E = PC4D;
			RSE = 32'b0;
			RTE = 32'b0;
			EXTE = 32'b0;
			ExcCodeE = `ExcCode_default;
		end else begin
			IRE = IRD;
			PC4E = PC4D;
			RSE = MF_RS_D_OUT;
			RTE = MF_RT_D_OUT;
			EXTE = Ext;
			ExcCodeE = ExcCode;
		end
	end
	
	expD EXPD (
    .ExcCodeF(ExcCodeF), 
    .IRD(IRD), 
    .ExcCodeE(ExcCode)
    );
	
	ctrl controllerD (
    .instr(IRD),
    .NPC_Sel(NPC_Sel), 
	 .NPCOp(NPCOp),
	 .CmpOp(CmpOp),
    .ExtOp(ExtOp),
	 .iseret(iseretD)
    );
	
	grf GRFD (
    .A1(IRD[`rs]), 
    .A2(IRD[`rt]), 
    .A3(MUX_RF_A3_OUT), 
    .Wd(MUX_RF_WD_OUT), 
    .We(We), 
    .Clk(Clk), 
    .Reset(Reset), 
    .Rd1(Rd1), 
    .Rd2(Rd2)
    );
	 
	cmp CMPD (
    .Rd1(MF_RS_D_OUT), 
    .Rd2(MF_RT_D_OUT), 
    .CmpOp(CmpOp), 
    .Branch(Branch)
    );
	 
	npc NPCD (
    .PC4(PC4D), 
    .I26(IRD[`instr_index]), 
    .NPCOp(NPCOp), 
    .NPC(NPC)
    );
	 
	ext EXTD (
    .ExtOp(ExtOp), 
    .Imm(IRD[`imm]), 
    .Ext(Ext)
    );
	 
	mf MF_RS_D (
    .PC4E(PC4fromE), 
    .AO(AO), 
    .PC4M(PC4fromM), 
    .Wd(MUX_RF_WD_OUT), 
    .Rd(Rd1), 
    .Forward_Sel(Forward_RS_D_Sel), 
    .MF_OUT(MF_RS_D_OUT)
    );
	 
	mf MF_RT_D (
    .PC4E(PC4fromE), 
    .AO(AO), 
    .PC4M(PC4fromM), 
    .Wd(MUX_RF_WD_OUT), 
    .Rd(Rd2), 
    .Forward_Sel(Forward_RT_D_Sel), 
    .MF_OUT(MF_RT_D_OUT)
    );

endmodule
