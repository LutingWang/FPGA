`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:50:50 12/03/2018 
// Design Name: 
// Module Name:    npc 
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
module npc(
    input [31:0] PC4,
    input [25:0] I26,
    input NPCOp,
    output [31:0] NPC
    );
	 
	`include "header_ctrl.v"
	`include "header_debug.v"
	 
	assign NPC = (NPCOp == `npc_ext_j) ? {PC4[31:28], I26[25:0], 2'b00} :
						(NPCOp == `npc_ext_b) ? PC4 + {{14{I26[15]}}, I26[15:0], 2'b00} :
						`debug_npc;

endmodule
