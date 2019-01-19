`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:47:10 12/04/2018 
// Design Name: 
// Module Name:    datapath 
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
module datapath(
    input StallF,
    input StallD,
    input FlushE,
    input [2:0] Forward_RS_D_Sel,
    input [2:0] Forward_RT_D_Sel,
    input [2:0] Forward_RS_E_Sel,
    input [2:0] Forward_RT_E_Sel,
    input [2:0] Forward_RT_M_Sel,
    input Clk,
	 input Clk2,
    input Reset,
    output [31:0] IRD,
	 input [7:2] HWInt,
	 output [3:0] Be,
	 input [31:0] PrRD,
	 output [31:2] PrAddr,
	 output [31:0] PrWD,
	 output PrWe
    );

	`include "header_ctrl.v"
	`include "header_ind.v"
	
	wire EXLSet, iseretD, cp0_we;
	wire [6:2] ExcCodeF, ExcCodeE, ExcCodeM, ExcCode;
	wire [31:0] EPC, D2write, Dread_exp;
	
	wire RegWrite, PrWeDM;
	assign PrWe = (PrWeDM && ~EXLSet) ? 1'b1 : 1'b0;
	
	wire [31:0] PC4D;
	wire [31:0] IRE, PC4E, RSE, RTE, EXTE;
	wire [31:0] IRM, PC4M, AOM, RTM;
	wire [31:0] IRW, PC4W, AOW, DRW;
	
	wire [31:0] NPC, MF_RS_D_OUT, MUX_RF_WD_OUT;
	wire [4:0] MUX_RF_A3_OUT;
	wire [1:0] NPC_Sel;
	wire Branch;
	
	wire [31:0] MF_EPC_OUT;
	assign MF_EPC_OUT = (IRD == `eret && IRM[`OpCode] == `COP0 && IRM[`rs] == `mtc0 && {1'b1, IRM[`rd]} == `cp0_epc) ?
								D2write : EPC; 
	
	exception EXP (
    .Clk(Clk), 
    .Reset(Reset), 
    .IRM(IRM), 
    .D2write(D2write), 
    .PC4M(PC4M), 
    .IRW(IRW), 
    .ExcCode(ExcCode), 
    .HWInt(HWInt), 
    .EXLSet(EXLSet), 
    .EPC(EPC), 
    .Dread(Dread_exp)
    );
	
	F f (
    .NPC(NPC), 
    .NPC_Sel(NPC_Sel), 
    .Branch(Branch), 
	 .MF_RS_D_OUT(MF_RS_D_OUT),
    .Clk(Clk), 
	 .Clk2(Clk2),
    .Reset(Reset), 
    .StallF(StallF), 
    .StallD(StallD), 
    .IRD(IRD), 
    .PC4D(PC4D),
	 .exp_in(EXLSet),
	 .iseretD(iseretD),
	 .EPC(MF_EPC_OUT),
	 .ExcCodeF(ExcCodeF)
    );
	 
	D d (
    .IRD(IRD), 
    .PC4D(PC4D), 
    .Clk(Clk), 
    .Reset(Reset), 
    .FlushE(FlushE), 
    .Forward_RS_D_Sel(Forward_RS_D_Sel), 
    .Forward_RT_D_Sel(Forward_RT_D_Sel), 
    .PC4fromE(PC4E), 
    .AO(AOM), 
    .PC4fromM(PC4M), 
    .MUX_RF_WD_OUT(MUX_RF_WD_OUT), 
    .Branch(Branch), 
    .NPC_Sel(NPC_Sel), 
    .NPC(NPC), 
	 .MF_RS_D_OUT(MF_RS_D_OUT),
    .IRE(IRE), 
    .PC4E(PC4E), 
    .RSE(RSE), 
    .RTE(RTE), 
    .EXTE(EXTE), 
    .MUX_RF_A3_OUT(MUX_RF_A3_OUT), 
    .We(RegWrite),
	 .exp_in(EXLSet),
	 .ExcCodeF(ExcCodeF),
	 .iseretD(iseretD),
	 .ExcCodeE(ExcCodeE)
    );
	 
	E e (
    .IRE(IRE), 
    .PC4E(PC4E), 
    .RSE(RSE), 
    .RTE(RTE), 
    .EXTE(EXTE), 
    .Clk(Clk), 
    .Reset(Reset), 
    .IRM(IRM), 
    .PC4M(PC4M), 
    .AOM(AOM), 
    .RTM(RTM), 
    .Forward_RS_E_Sel(Forward_RS_E_Sel), 
    .Forward_RT_E_Sel(Forward_RT_E_Sel), 
    .AO(AOM), 
    .PC4fromM(PC4M), 
    .MUX_RF_WD_OUT(MUX_RF_WD_OUT),
	 .exp_in(EXLSet),
	 .ExcCodeE(ExcCodeE),
	 .ExcCodeM(ExcCodeM)
    );
	 
	M m (
    .IRM(IRM), 
    .PC4M(PC4M), 
    .AOM(AOM), 
    .RTM(RTM), 
    .Clk(Clk), 
	 .Clk2(Clk2),
    .Reset(Reset), 
    .IRW(IRW), 
    .PC4W(PC4W), 
    .AOW(AOW), 
    .DRW(DRW), 
    .Forward_RT_M_Sel(Forward_RT_M_Sel), 
    .MUX_RF_WD_OUT(MUX_RF_WD_OUT),
	 .D2write(D2write),
	 .Dread_exp(Dread_exp),
	 .exp_in(EXLSet),
	 .ExcCodeM(ExcCodeM),
	 .ExcCode(ExcCode),
	 .Be(Be),
	 .PrRD(PrRD),
	 .PrAddr(PrAddr),
	 .PrWD(PrWD),
	 .PrWe(PrWeDM)
    );
	 
	W w (
    .IRW(IRW), 
    .PC4W(PC4W), 
    .AOW(AOW), 
    .DRW(DRW), 
    .MUX_RF_A3_OUT(MUX_RF_A3_OUT), 
    .MUX_RF_WD_OUT(MUX_RF_WD_OUT), 
    .RegWrite(RegWrite)
    );

endmodule
