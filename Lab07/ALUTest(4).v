`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:02:47 03/05/2009
// Design Name:   ALU
// Module Name:   E:/350/Lab8/ALU/ALUTest.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

`define STRLEN 32
module ALUTest_v;

	task passTest;
		input [64:0] actualOut, expectedOut;
		input [`STRLEN*8:0] testType;
		inout [7:0] passed;
	
		if(actualOut == expectedOut) begin $display ("%s passed", testType); passed = passed + 1; end
		else $display ("%s failed: %x should be %x", testType, actualOut, expectedOut);
	endtask
	
	task allPassed;
		input [7:0] passed;
		input [7:0] numTests;
		
		if(passed == numTests) $display ("All tests passed");
		else $display("Some tests failed");
	endtask

	// Inputs
	reg [63:0] BusA;
	reg [63:0] BusB;
	reg [3:0] ALUCtrl;
	reg [7:0] passed;

	// Outputs
	wire [63:0] BusW;
	wire Zero;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.BusW(BusW), 
		.Zero(Zero), 
		.BusA(BusA), 
		.BusB(BusB), 
		.ALUCtrl(ALUCtrl)
	);

	initial begin
		// Initialize Inputs
		BusA = 0;
		BusB = 0;
		ALUCtrl = 0;
		passed = 0;

                // Here is one example test vector, testing the ADD instruction:
		{BusA, BusB, ALUCtrl} = {64'h1234, 64'hABCD0000, 4'h2}; #40; passTest({Zero, BusW}, 64'h0ABCD1234, "ADD 0x1234,0xABCD0000", passed);
		//Reformate and add your test vectors from the prelab here following the example of the testvector above.
		//ADD tests
		{BusA, BusB, ALUCtrl} = {64'h1, 64'h1, 4'h2}; #40; passTest({Zero, BusW}, 64'h2, "ADD 0x1,0x1", passed);
		{BusA, BusB, ALUCtrl} = {64'hFA0, 64'h28, 4'h2}; #40; passTest({Zero, BusW}, 64'hFC8, "ADD 0FA0x,0x28", passed);
		{BusA, BusB, ALUCtrl} = {64'h7D0, 64'h50, 4'h2}; #40; passTest({Zero, BusW}, 64'h820, "ADD 0x7D0,0x50", passed);
		//AND TESTS
		{BusA, BusB, ALUCtrl} = {64'h0, 64'h1, 4'h0}; #40; passTest({Zero, BusW}, 64'h0, "AND 0x1,0x0", passed);	
		{BusA, BusB, ALUCtrl} = {64'hFA1, 64'h1, 4'h0}; #40; passTest({Zero, BusW}, 64'h1, "AND 0xFA1,0x1", passed);	
		{BusA, BusB, ALUCtrl} = {64'hF, 64'hA, 4'h0}; #40; passTest({Zero, BusW}, 64'hA, "AND 0xF,0xA", passed);
		//OR TESTS
		{BusA, BusB, ALUCtrl} = {64'h0, 64'h1, 4'h1}; #40; passTest({Zero, BusW}, 64'h1, "OR 0x1,0x0", passed);	
		{BusA, BusB, ALUCtrl} = {64'hFA1, 64'h1, 4'h1}; #40; passTest({Zero, BusW}, 64'hFA1, "OR 0xFA1,0x1", passed);	
		{BusA, BusB, ALUCtrl} = {64'hF, 64'hA, 4'h1}; #40; passTest({Zero, BusW}, 64'hF, "OR 0xF,0xA", passed);		
		//SUB TESTS
		{BusA, BusB, ALUCtrl} = {64'h0, 64'h0, 4'h6}; #40; passTest({Zero, BusW}, 64'h0, "SUB 0x0,0x0", passed);	
		{BusA, BusB, ALUCtrl} = {64'hFA0, 64'hFA0, 4'h6}; #40; passTest({Zero, BusW}, 64'h0, "SUB 0xFA0,0xFA0", passed);	
		{BusA, BusB, ALUCtrl} = {64'h1E, 64'h14, 4'h6}; #40; passTest({Zero, BusW}, 64'hA, "SUB 0x1E,0x14", passed);
		//PASS IN B TESTS
		{BusA, BusB, ALUCtrl} = {64'h0, 64'h1, 4'h7}; #40; passTest({Zero, BusW}, 64'h1, "PASSB 0x0,0x1", passed);	
		{BusA, BusB, ALUCtrl} = {64'hFA0, 64'h7D0, 4'h7}; #40; passTest({Zero, BusW}, 64'h7D0, "PASSB 0xFA0,0x7D0", passed);	
		{BusA, BusB, ALUCtrl} = {64'h1E, 64'hA, 4'h7}; #40; passTest({Zero, BusW}, 64'hA, "PASSB 0x1E,0xA", passed);
		//LSL TESTS
		{BusA, BusB, ALUCtrl} = {64'hA, 64'h1, 4'h3}; #40; passTest({Zero, BusW}, 64'h14, "LSL 0xA,0x1", passed);	
		{BusA, BusB, ALUCtrl} = {64'd30, 64'd1, 4'h3}; #40; passTest({Zero, BusW}, 64'h3C, "LSL 0x1E,0x1", passed);	
		{BusA, BusB, ALUCtrl} = {64'hB, 64'h1, 4'h3}; #40; passTest({Zero, BusW}, 64'h16, "LSL 0xB,0x1", passed);
		//RSL TESTS
		{BusA, BusB, ALUCtrl} = {64'h2, 64'h1, 4'h4}; #40; passTest({Zero, BusW}, 64'h1, "RSL 0x2,0x1", passed);	
		{BusA, BusB, ALUCtrl} = {64'D30, 64'h1, 4'h4}; #40; passTest({Zero, BusW}, 64'hF, "RSL 0x1E,0x1", passed);	
		{BusA, BusB, ALUCtrl} = {64'hB, 64'h1, 4'h4}; #40; passTest({Zero, BusW}, 64'h5, "RSL 0xB,0x1", passed);
		
		allPassed(passed,22);
	end
      
endmodule

