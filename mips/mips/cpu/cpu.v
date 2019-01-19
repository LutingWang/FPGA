`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:03:23 12/10/2018 
// Design Name: 
// Module Name:    cpu 
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
module cpu(
    input Clk,
	 input Clk2,
    input Reset,
	 input [7:2] HWInt,
	 output [3:0] Be,
	 input [31:0] PrRD,
	 output [31:2] PrAddr,
	 output [31:0] PrWD,
	 output PrWe
    );

	wire Stall;
	wire [2:0] Forward_RS_D_Sel, Forward_RT_D_Sel, Forward_RS_E_Sel, Forward_RT_E_Sel, Forward_RT_M_Sel;
	wire [31:0] Instr;
	
	datapath pipeline_dp (
    .StallF(Stall), 
    .StallD(Stall), 
    .FlushE(Stall), 
    .Forward_RS_D_Sel(Forward_RS_D_Sel), 
    .Forward_RT_D_Sel(Forward_RT_D_Sel), 
    .Forward_RS_E_Sel(Forward_RS_E_Sel), 
    .Forward_RT_E_Sel(Forward_RT_E_Sel), 
    .Forward_RT_M_Sel(Forward_RT_M_Sel), 
    .Clk(Clk), 
	 .Clk2(Clk2),
    .Reset(Reset), 
    .IRD(Instr),
	 .HWInt(HWInt),
	 .Be(Be),
	 .PrRD(PrRD),
	 .PrAddr(PrAddr),
	 .PrWD(PrWD),
	 .PrWe(PrWe)
    );
	 
	hazard pipeline_hzd (
    .Instr(Instr), 
    .Clk(Clk), 
    .Reset(Reset), 
    .stall(Stall), 
    .Forward_RS_D_Sel(Forward_RS_D_Sel), 
    .Forward_RT_D_Sel(Forward_RT_D_Sel), 
    .Forward_RS_E_Sel(Forward_RS_E_Sel), 
    .Forward_RT_E_Sel(Forward_RT_E_Sel), 
    .Forward_RT_M_Sel(Forward_RT_M_Sel)
    );

endmodule
