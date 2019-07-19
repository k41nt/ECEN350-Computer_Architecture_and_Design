`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:13:01 11/23/2017
// Design Name:   ALUControl
// Module Name:   C:/Academic/Fall 2017/ECEN 350/Lab8/ALUTest.v
// Project Name:  Lab8
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

module ALUTest;

	// Inputs
	reg [1:0] ALUop;
	reg [10:0] Opcode;

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
		ALUop = 0;
		Opcode = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

