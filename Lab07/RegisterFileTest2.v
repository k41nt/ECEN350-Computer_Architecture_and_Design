`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:13:28 03/03/2009
// Design Name:   RegisterFile
// Module Name:   E:/350/Lab7/RegisterFile/RegisterFileTest.v
// Project Name:  RegisterFile
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RegisterFile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

`define STRLEN 32
module RegisterFileTest2_v;


	task passTest;
		input [63:0] actualOut, expectedOut;
		input [`STRLEN*8:0] testType;
		inout [7:0] passed;
	
		if(actualOut == expectedOut) begin $display ("%s passed", testType); passed = passed + 1; end
		else $display ("%s failed: %d should be %d", testType, actualOut, expectedOut);
	endtask
	
	task allPassed;
		input [7:0] passed;
		input [7:0] numTests;
		
		if(passed == numTests) $display ("All tests passed");
		else $display("Some tests failed");
	endtask

	// Inputs
	reg [63:0] BusW;
	reg [4:0] RA;
	reg [4:0] RB;
	reg [4:0] RW;
	reg RegWr;
	reg Clk;
	reg [7:0] passed;

	// Outputs
	wire [63:0] BusA;
	wire [63:0] BusB;

	// Instantiate the Unit Under Test (UUT)
	RegisterFile uut (
		.BusA(BusA), 
		.BusB(BusB), 
		.BusW(BusW), 
		.RA(RA), 
		.RB(RB), 
		.RW(RW), 
		.RegWr(RegWr), 
		.Clk(Clk)
	);

	initial begin
		// Initialize Inputs
		BusW = 0;
		RA = 0;
		RB = 0;
		RW = 0;
		RegWr = 0;
		Clk = 1;
		passed = 0;
		
		#10;

		// Add stimulus here
		
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd0, 64'h0, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd1, 64'h1, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd2, 64'h2, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd3, 64'h3, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd4, 64'h4, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd5, 64'h5, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd6, 64'h6, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd7, 64'h7, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd8, 64'h8, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd9, 64'h9, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd10, 64'h10, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd11, 64'h11, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd12, 64'h12, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd13, 64'h13, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd14, 64'h14, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd15, 64'h15, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd16, 64'h16, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd17, 64'h17, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd18, 64'h18, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd19, 64'h19, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd20, 64'h20, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd21, 64'h21, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd22, 64'h22, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd23, 64'h23, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd24, 64'h24, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd25, 64'h25, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd26, 64'h26, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd27, 64'h27, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd28, 64'h28, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd29, 64'h29, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd30, 64'h30, 1'b1};#10; Clk = 0; #10; Clk = 1;
		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd0, 5'd31, 64'h31, 1'b1};#10; Clk = 0; #10; Clk = 1;


		{RA, RB, RW, BusW, RegWr} = {5'd0, 5'd1, 5'd0, 64'h0, 1'b0};//case 1
		#4;
		passTest(BusA, 64'h0, "Initial Value Check 1A", passed);
		passTest(BusB, 64'h1, "Initial Value Check 1B", passed);
		#6; Clk = 0; #10; Clk = 1;
		passTest(BusA, 64'h0, "Value Not Updated 1A", passed);
		passTest(BusB, 64'h1, "Value Stayed Same 1B", passed);
		
				
		{RA, RB, RW, BusW, RegWr} = {5'd2, 5'd3, 5'd1, 64'h1000, 1'b0}; //case 2
		#4;
		passTest(BusA, 64'h2, "Initial Value Check 2A", passed);
		passTest(BusB, 64'h3, "Initial Value Check 2B", passed);
		#6; Clk = 0; #10; Clk = 1;
		RA = 5'd1; #6; Clk = 0; #10; Clk = 1;
		passTest(BusA, 64'h1, "Value NOT Updated RW", passed);
		passTest(BusB, 64'h3, "Value Stayed Same 2B", passed);


		{RA, RB, RW, BusW, RegWr} = {5'd4, 5'd5, 5'd0, 64'h1000, 1'b1}; //case 3
		#4;
		passTest(BusA, 64'h4, "Initial Value Check 3A", passed);
		passTest(BusB, 64'h5, "Initial Value Check 3B", passed);
		#6; Clk = 0; #10; Clk = 1;
		RA = 5'd0; #6; Clk = 0; #10; Clk = 1;
		passTest(BusA, 64'h1000, "Value Updated in case 3 RW", passed);
		passTest(BusB, 64'h5, "Value Stayed Same 3B", passed);
		
		{RA, RB, RW, BusW, RegWr} = {5'd6, 5'd7, 5'd10, 64'h1010, 1'b1}; //case 4
		#4;
		passTest(BusA, 64'h6, "Initial Value Check 4A", passed);
		passTest(BusB, 64'h7, "Initial Value Check 4B", passed);
		#6; Clk = 0; #10; Clk = 1;
		RA = 5'd10; #6; Clk = 0; #10; Clk = 1;
		passTest(BusA, 64'h1010, "Value Updated in case 4 RW", passed);
		passTest(BusB, 64'h7, "Value Stayed Same 4B", passed);
		
		{RA, RB, RW, BusW, RegWr} = {5'd8, 5'd9, 5'd11, 64'h103000, 1'b1}; //case 5
		#4;
		passTest(BusA, 64'h8, "Initial Value Check 5A", passed);
		passTest(BusB, 64'h9, "Initial Value Check 5B", passed);
		#6; Clk = 0; #10; Clk = 1;
		RA = 5'd11; #6; Clk = 0; #10; Clk = 1;
		passTest(BusA, 64'h103000, "Value Updated in case 5 RW", passed);
		passTest(BusB, 64'h9, "Value Stayed Same 5B", passed);
		
		{RA, RB, RW, BusW, RegWr} = {5'd10, 5'd11, 5'd12, 64'h0, 1'b0}; //case 6
		#4;
		passTest(BusA, 64'h1010, "Initial Value Check 6A", passed);
		passTest(BusB, 64'h103000, "Initial Value Check 6B", passed);
		#6; Clk = 0; #10; Clk = 1;
		RA = 5'd12; #6; Clk = 0; #10; Clk = 1;
		passTest(BusA, 64'h12, "Value Not Updated for RW", passed);
		passTest(BusB, 64'h103000, "Value Stayed Same 6B", passed);
		
		{RA, RB, RW, BusW, RegWr} = {5'd12, 5'd13, 5'd13, 64'hABCD, 1'b1}; //case 7
		#4;
		passTest(BusA, 64'h12, "Initial Value Check 7A", passed);
		passTest(BusB, 64'h13, "Initial Value Check 7B", passed);
		#6; Clk = 0; #10; Clk = 1; 
		passTest(BusB, 64'hABCD, "Value Updated in case 7 RW", passed);
		passTest(BusA, 64'h12, "Value Stayed Same 7A", passed);
		
		{RA, RB, RW, BusW, RegWr} = {5'd14, 5'd15, 5'd14, 64'h9080009, 1'b0}; //case 8
		#4;
		passTest(BusA, 64'h14, "Initial Value Check 8A", passed);
		passTest(BusB, 64'h15, "Initial Value Check 8B", passed);
		#6; Clk = 0; #10; Clk = 1;
		passTest(BusA, 64'h14, "Value NOT Updated in case 8 RW", passed);
		passTest(BusB, 64'h15, "Value Stayed Same 8B", passed);
		

		allPassed(passed, 32);
	end
      
endmodule

