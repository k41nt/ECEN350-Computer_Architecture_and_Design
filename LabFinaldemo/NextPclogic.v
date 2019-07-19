module NextPClogic(NextPC, CurrentPC, SignExtImm64, Branch, ALUZero, Uncondbranch);
	input [63:0] CurrentPC,SignExtImm64;
	input Branch, ALUZero, Uncondbranch;
	output reg [63:0] NextPC;
	
	reg [63:0] NextPCNormal, NextPCBranch, ShiftedSignExtImm64;
	reg and1;
	
	always @(*) begin
				//going to use blocking assignment and manually add delays
				//additions with constants get a delay of 1
				//general addition has a delay of 2
				//muxes have delay of 1

				//do the logical shift left by 2 operations for SignExtImm64
				//assume the shifter has a delay of 1
				#1 ShiftedSignExtImm64 = SignExtImm64 <<2;
				
				//do the normal PC add
				//delay of 1 comes from the shifters
				NextPCNormal = CurrentPC+4;

				//do the branch PC add
				// delay equals 2 times units for sign extender plus 2 times unit for adder
				#2 NextPCBranch = CurrentPC + ShiftedSignExtImm64;

				//do the AND statement
				//AND gates has delay; done in parallel with NextPCBranch
				and1 = Branch && ALUZero;
				
				//MUX
				//MUX has delay of 1s
				#1 NextPC = ( and1 || Uncondbranch ) ? NextPCBranch : NextPCNormal;
				
			end
	
endmodule
				
	