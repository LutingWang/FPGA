`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:20:31 12/12/2018 
// Design Name: 
// Module Name:    timer 
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
module timer(
    input [1:0] Addr,
    input [31:0] Wd,
    input We,
	 input Clk,
	 input Reset,
    output [31:0] Rd,
    output IRQ
    );
	 
	`include "header_debug.v"

	`define IDLE 2'b00
	`define LOAD 2'b01
	`define CNT 2'b10
	`define INT 2'b11
	
	reg [1:0] state;
	//ctrl
	reg IM, Enable;
	reg [2:1] Mode;
	//preset
	reg [31:0] preset;
	//count
	reg [31:0] count;
	
	reg IR = 0;
	
	assign Rd = (Addr == 2'b00) ? {28'b0, IM, Mode, Enable} :
						(Addr == 2'b01) ? preset :
						(Addr == 2'b10) ? count :
						`debug_timer;
	
	assign IRQ = (IR && IM) ? 1'b1 : 1'b0;
	
	initial begin
		{IM, Mode, Enable} = 4'b0;
		preset = 32'b0;
		count = 32'b0;
		state = `IDLE;
		IR = 0;
	end
	always @(posedge Clk) begin
		if (Reset) begin
			IR = 0;
			{IM, Mode, Enable} = 4'b0;
			preset = 32'b0;
			count = 32'b0;
		end else if (We) begin
			case (Addr)
				2'b00: {IM, Mode, Enable} = Wd[3:0];
				2'b01: preset = Wd;
			endcase
		end else begin
			case(state)
				`IDLE: begin
					if (Enable) begin
						IR = 0;
						state = `LOAD;
					end
				end
				`LOAD: begin
					count = preset;
					state = `CNT;
				end
				`CNT: begin
					count = count - 1;
					if (Enable == 1'b0) state = `IDLE;
					else if (count == 1'b0) begin
						IR = 1;
						state = `INT;
					end
				end
				`INT: begin
					if (Mode == 2'b01) begin
						IR = 0;
						//Enable = 1;
					end
					if (Mode == 2'b00) Enable = 0;
					state = `IDLE;
				end
			endcase
		end
	end

endmodule
