`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:19:43 10/31/2017
// Design Name:   Gates
// Module Name:   /home/ugrads/k/k41nt/ECEN350/Lab06/GatesTest.v
// Project Name:  Lab06
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Gates
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module GatesTest;

	// Inputs
	reg [0:1] in;

	// Outputs
	wire [0:2] out;

	// Instantiate the Unit Under Test (UUT)
	Gates uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#0 in=0;
		#10 in=2'b01 ;
		#10 in=2'b10 ;
		#10 in=2'b11 ;
	end
      
endmodule

