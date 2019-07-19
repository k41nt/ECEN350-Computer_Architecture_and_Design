`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:47:33 03/02/2009
// Design Name:   JK
// Module Name:   E:/350/Lab6/JK/JKTest.v
// Project Name:  JK
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: JK
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

`define STRLEN 15
module JKTest_v;

	task passTest;
		input actualOut, expectedOut;
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
	reg j;
	reg k;
	reg clk;
	reg reset;
	
	reg [7:0] passed;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	JK uut (
		.out(out), 
		.j(j), 
		.k(k), 
		.clk(clk),
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		j = 0;
		k = 0;
		clk = 0;
		reset = 1;
		passed = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		// Add stimulus here
		reset = 0;
		
		#90; j=1; k=0; #7; clk = 1; #3; clk = 0; #90; passTest(out, 1, "Set", passed);
		#90; j=1; k=1; #7; clk = 1; #3; clk = 0; #90; passTest(out, 0, "Toggle 1", passed);
		#90; j=0; k=0; #7; clk = 1; #3; clk = 0; #90; passTest(out, 0, "Hold 1", passed);
		#90; j=1; k=1; #7; clk = 1; #3; clk = 0; #90; passTest(out, 1, "Toggle 2", passed);
		#90; j=0; k=0; #7; clk = 1; #3; clk = 0; #90; passTest(out, 1, "Hold 2", passed);
		#90; j=0; k=1; #7; clk = 1; #3; clk = 0; #90; passTest(out, 0, "Reset", passed);
		
		#90; allPassed(passed, 6);
	end
      
endmodule
