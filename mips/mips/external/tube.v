`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:45:15 12/24/2018 
// Design Name: 
// Module Name:    tube 
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
module tube(
    input [3:0] Be,
	 input Addr,
	 input [31:0] Wd,
    input We,
    input Clk,
    input Reset,
    output [31:0] Rd,
    output [7:0] digital_tube0,
    output reg [3:0] digital_tube_sel0,
    output [7:0] digital_tube1,
    output reg [3:0] digital_tube_sel1,
    output [7:0] digital_tube2,
    output digital_tube_sel2
    );
	
	`include "header_driver.v"
	`include "header_ind.v"
	
	reg [31:0] data;
	assign Rd = (Addr) ? 32'b0 : data;
	
	wire [31:0] d2display;
	assign d2display = data;
	/*assign d2display[30:0] = (data[31]) ? -data[30:0] : data[30:0];
	assign d2display[31] = 1'b0;*/
	
	wire [3:0] data_tube0, data_tube1;
	assign data_tube0 = (digital_tube_sel0 == 4'b0001) ? d2display[`nibble0] :
								(digital_tube_sel0 == 4'b0010) ? d2display[`nibble1] :
								(digital_tube_sel0 == 4'b0100) ? d2display[`nibble2] :
								(digital_tube_sel0 == 4'b1000) ? d2display[`nibble3] :
								4'b0000;
	assign data_tube1 = (digital_tube_sel1 == 4'b0001) ? d2display[`nibble4] :
								(digital_tube_sel1 == 4'b0010) ? d2display[`nibble5] :
								(digital_tube_sel1 == 4'b0100) ? d2display[`nibble6] :
								(digital_tube_sel1 == 4'b1000) ? d2display[`nibble7] :
								4'b0000;
	
	assign digital_tube0 = (data_tube0 == 4'b0000) ? `zero :
									(data_tube0 == 4'b0001) ? `one :
									(data_tube0 == 4'b0010) ? `two :
									(data_tube0 == 4'b0011) ? `three :
									(data_tube0 == 4'b0100) ? `four :
									(data_tube0 == 4'b0101) ? `five :
									(data_tube0 == 4'b0110) ? `six :
									(data_tube0 == 4'b0111) ? `seven :
									(data_tube0 == 4'b1000) ? `eight :
									(data_tube0 == 4'b1001) ? `nine :
									(data_tube0 == 4'b1010) ? `A :
									(data_tube0 == 4'b1011) ? `B :
									(data_tube0 == 4'b1100) ? `C :
									(data_tube0 == 4'b1101) ? `D :
									(data_tube0 == 4'b1110) ? `E :
									(data_tube0 == 4'b1111) ? `F :
									`zero;
	assign digital_tube1 = (data_tube1 == 4'b0000) ? `zero :
									(data_tube1 == 4'b0001) ? `one :
									(data_tube1 == 4'b0010) ? `two :
									(data_tube1 == 4'b0011) ? `three :
									(data_tube1 == 4'b0100) ? `four :
									(data_tube1 == 4'b0101) ? `five :
									(data_tube1 == 4'b0110) ? `six :
									(data_tube1 == 4'b0111) ? `seven :
									(data_tube1 == 4'b1000) ? `eight :
									(data_tube1 == 4'b1001) ? `nine :
									(data_tube1 == 4'b1010) ? `A :
									(data_tube1 == 4'b1011) ? `B :
									(data_tube1 == 4'b1100) ? `C :
									(data_tube1 == 4'b1101) ? `D :
									(data_tube1 == 4'b1110) ? `E :
									(data_tube1 == 4'b1111) ? `F :
									`zero;
	/*assign digital_tube2 = (data[31]) ? `neg : 
									`zero;*/
	assign digital_tube2 = `zero;
									
	assign digital_tube_sel2 = 1'b1;
	
	integer cnt;
	always @(posedge Clk) begin
		if (Reset) begin
			data = 32'b0;
			digital_tube_sel0 = 4'b1111;
			digital_tube_sel1 = 4'b1111;
			cnt = `cnt_init;
		end else begin
			if (We && ~Addr) begin
				if (Be == 4'b0001) data[`byte0] = Wd[`byte0];
				if (Be == 4'b0010) data[`byte1] = Wd[`byte0];
				if (Be == 4'b0100) data[`byte2] = Wd[`byte0];
				if (Be == 4'b1000) data[`byte3] = Wd[`byte0];
				if (Be == 4'b0011) data[`half0] = Wd[`half0];
				if (Be == 4'b1100) data[`half1] = Wd[`half0];
				if (Be == 4'b1111) data = Wd;
			end
			
			if (cnt <= 0) begin
				cnt = `cnt_init;
				digital_tube_sel0 = (digital_tube_sel0 == 4'b1111) ? 4'b0001 : {digital_tube_sel0[2:0], digital_tube_sel0[3]};
				digital_tube_sel1 = (digital_tube_sel1 == 4'b1111) ? 4'b0001 : {digital_tube_sel1[2:0], digital_tube_sel1[3]};
			end else cnt = cnt - 1;
		end
	end

endmodule
