`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:50:42 12/27/2018
// Design Name:   mips
// Module Name:   C:/Users/ThinkPad/Documents/ISE/FPGA/mips/mips_tb.v
// Project Name:  test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mips_tb;

	// Inputs
	reg clk_in;
	reg sys_rstn;
	reg uart_rxd;
	reg [7:0] dip_switch0;
	reg [7:0] dip_switch1;
	reg [7:0] dip_switch2;
	reg [7:0] dip_switch3;
	reg [7:0] dip_switch4;
	reg [7:0] dip_switch5;
	reg [7:0] dip_switch6;
	reg [7:0] dip_switch7;
	reg [7:0] user_key;

	// Outputs
	wire uart_txd;
	wire [31:0] led_light;
	wire [7:0] digital_tube0;
	wire [3:0] digital_tube_sel0;
	wire [7:0] digital_tube1;
	wire [3:0] digital_tube_sel1;
	wire [7:0] digital_tube2;
	wire digital_tube_sel2;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk_in(clk_in), 
		.sys_rstn(sys_rstn), 
		.uart_rxd(uart_rxd), 
		.uart_txd(uart_txd), 
		.dip_switch0(dip_switch0), 
		.dip_switch1(dip_switch1), 
		.dip_switch2(dip_switch2), 
		.dip_switch3(dip_switch3), 
		.dip_switch4(dip_switch4), 
		.dip_switch5(dip_switch5), 
		.dip_switch6(dip_switch6), 
		.dip_switch7(dip_switch7), 
		.user_key(user_key), 
		.led_light(led_light), 
		.digital_tube0(digital_tube0), 
		.digital_tube_sel0(digital_tube_sel0), 
		.digital_tube1(digital_tube1), 
		.digital_tube_sel1(digital_tube_sel1), 
		.digital_tube2(digital_tube2), 
		.digital_tube_sel2(digital_tube_sel2)
	);

	initial begin
		// Initialize Inputs
		
		
		clk_in = 0;
		sys_rstn = ~1;
		uart_rxd = 0;
		dip_switch0 = ~4;
		dip_switch1 = ~2;
		dip_switch2 = ~3;
		dip_switch3 = ~8'h80;
		dip_switch4 = ~2;
		dip_switch5 = ~8;
		dip_switch6 = ~0;
		dip_switch7 = ~8'h80;
		user_key = ~0;

		#600; sys_rstn = ~0; 
		#2000; user_key = ~1;
		
		/* // timer
		clk_in = 0;
		sys_rstn = ~1;
		uart_rxd = 0;
		dip_switch0 = ~1;
		dip_switch1 = ~2;
		dip_switch2 = ~3;
		dip_switch3 = ~16;
		dip_switch4 = ~0;
		dip_switch5 = ~0;
		dip_switch6 = ~0;
		dip_switch7 = ~0;
		user_key = ~0;

		#600; sys_rstn = ~0;
		#1000;
		dip_switch0 = ~4;
		dip_switch1 = ~2;
		dip_switch2 = ~3;
		dip_switch3 = ~16'h80; */
		
		/*// uart
		clk_in = 0;
		sys_rstn = ~1;
		uart_rxd = 1;

		#600; sys_rstn = ~0; 
#3230; uart_rxd = 0; 
#3200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#800; uart_rxd = 1; 
#1600; uart_rxd = 0; 
#800; uart_rxd = 1; 
#800; uart_rxd = 0; 
#800; uart_rxd = 1; 
#800; uart_rxd = 0; 
#800; uart_rxd = 1; 
#800; uart_rxd = 0; 
#1600; uart_rxd = 1; 
#1600; uart_rxd = 0; 
#800; uart_rxd = 1; 
#800; uart_rxd = 0; 
#2400; uart_rxd = 1; 
#1600; uart_rxd = 0; 
#800; uart_rxd = 1; 
#1600; uart_rxd = 0; 
#800; uart_rxd = 1; 
#800; uart_rxd = 0; 
#2400; uart_rxd = 1; 
#1600; uart_rxd = 0; 
#800; uart_rxd = 1; 
#1600; uart_rxd = 0; 
#800; uart_rxd = 1; 
#800; uart_rxd = 0; 
#800; uart_rxd = 1; 
#3200; uart_rxd = 0; 
#800; uart_rxd = 1; 
#1600; uart_rxd = 0; 
#800; uart_rxd = 1; 
#800; uart_rxd = 0; 
#2400; uart_rxd = 1; 
#1600; uart_rxd = 0; 
#800; uart_rxd = 1; 
#800; uart_rxd = 0; 
#1600; uart_rxd = 1; 
#800; uart_rxd = 0; 
#4800; uart_rxd = 1; 
#800; uart_rxd = 0; 
#1600; uart_rxd = 1; 
#800; uart_rxd = 0; 
#800; uart_rxd = 1; 
#2400; uart_rxd = 0; 
#800; uart_rxd = 1; 
#2400; uart_rxd = 0; 
#800; uart_rxd = 1; 
#800; uart_rxd = 0; 
#800; uart_rxd = 1; 
#3200; uart_rxd = 0; 
#800; uart_rxd = 1; 
#1600; uart_rxd = 0; 
#800; uart_rxd = 1; 
#800; uart_rxd = 0; 
#1600; uart_rxd = 1; 
#800; uart_rxd = 0; 
#1600; uart_rxd = 1; 
#2400; uart_rxd = 0; 
#800; uart_rxd = 1; 
#800; uart_rxd = 0; 
#2400; uart_rxd = 1; 
#1600; uart_rxd = 0; 
#800; uart_rxd = 1; 
#1600; uart_rxd = 0; 
#800; uart_rxd = 1; 
#800; uart_rxd = 0; 
#2400; uart_rxd = 1; 
#800; uart_rxd = 0; 
#1600; uart_rxd = 1; 
#1600; uart_rxd = 0; 
#800; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0; 
#7200; uart_rxd = 1; 
#800; uart_rxd = 0;*/
	end
	
	always #20 clk_in = ~clk_in;
      
endmodule

