`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:24:12 11/23/2017
// Design Name:   ALUControl
// Module Name:   ALUControl
// Project Name:  ALUControl
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALUControl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

`define AND		4'b0000
`define ORR		4'b0001
`define ADD 	4'b0010
`define SUB 	4'b0110
`define CBZ		4'b0111

`define ADDFunc  11'b10001011000
`define SUBFunc  11'b11001011000
`define ANDFunc  11'b10001010000
`define ORRFunc  11'b10101010000
`define CBZFunc  11'bXXXXXXXXXXX		

`define STRLEN 32
module ALUControlTest_v;


	task passTest;
		input [5:0] actualOut, expectedOut;
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
	reg [1:0] ALUop;
	reg [10:0] Opcode;
	reg [7:0] passed;

	// Outputs
	wire [3:0] ALUCtrl;

	// Instantiate the Unit Under Test (UUT)
	ALUControl uut (
		.ALUCtrl(ALUCtrl), 
		.ALUop(ALUop), 
		.Opcode(Opcode)
	);

	initial begin
		// Initialize Inputs
		passed = 0;
		//1
		{ALUop, Opcode} = {2'b00, `ADDFunc};
		#10
		passTest(ALUCtrl, `ADD, "ADD Instruction", passed);
		//2
		{ALUop, Opcode} = {2'b01, `CBZFunc};
		#10
		passTest(ALUCtrl, `CBZ, "CBZ Instruction", passed);
		//3
		{ALUop, Opcode} = {2'b10, `SUBFunc};
		#10
		passTest(ALUCtrl, `SUB, "SUB Instruction", passed);
		//4
		{ALUop, Opcode} = {2'b10, `ORRFunc};
		#10
		passTest(ALUCtrl, `ORR, "ORR Instruction", passed);
		//5
		{ALUop, Opcode} = {2'b10, `ADDFunc};
		#10
		passTest(ALUCtrl, `ADD, "ADD Instruction", passed);
		//6
		{ALUop, Opcode} = {2'b10, `SUBFunc};
		#10
		passTest(ALUCtrl, `SUB, "SUB Instruction", passed);
		//7
		{ALUop, Opcode} = {2'b10, `ORRFunc};
		#10
		passTest(ALUCtrl, `ORR, "ORR Instruction", passed);
		//8
		{ALUop, Opcode} = {2'b10, `ADDFunc};
		#10
		passTest(ALUCtrl, `ADD, "ADD Instruction", passed);
		//9
		{ALUop, Opcode} = {2'b10, `SUBFunc};
		#10
		passTest(ALUCtrl, `SUB, "SUB Instruction", passed);
		
		
		allPassed(passed, 9);
	end
      
endmodule