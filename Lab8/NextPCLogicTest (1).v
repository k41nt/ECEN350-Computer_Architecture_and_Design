`define STRLEN 32
module NextPClogicTest_v;


	task passTest;
		input [3:0] actualOut, expectedOut;
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
	reg [63:0] CurrentPC;
	reg [63:0] SignExtImm64;
	reg Branch;
	reg ALUZero;
	reg Uncondbranch;
	reg [7:0] passed;

	// Outputs
	wire [63:0] NextPC;

	// Instantiate the Unit Under Test (UUT)

	NextPClogic uut( .NextPC (NextPC),  .CurrentPC (CurrentPC),  .SignExtImm64 (SignExtImm64),  .Branch (Branch),  .ALUZero (ALUZero),  .Uncondbranch (Uncondbranch));

	initial begin

		// Initialize Inputs
	   passed=0;
		CurrentPC = 0;
		SignExtImm64 = 0;
		Branch = 0;
		ALUZero = 0;
		Uncondbranch = 0;

                #50 {CurrentPC, SignExtImm64, Branch, ALUZero, Uncondbranch} = {64'b0, 64'b1, 1'b0, 1'b0, 1'b0};
		#50 $display("Test case 1, CurrentPC = %b, SignExtImm64 = %b, Branch = %b, ALUZero = %b, Uncondbranch = %b", CurrentPC, SignExtImm64, Branch, 					ALUZero, Uncondbranch);
                #50 passTest(NextPC, 64'b100, "Test Case 1", passed);

                #50 {CurrentPC, SignExtImm64, Branch, ALUZero, Uncondbranch} = {64'b1000, 64'b10, 1'b1, 1'b0, 1'b0};
                #50 $display("Test case 2, CurrentPC = %b, SignExtImm64 = %b, Branch = %b, ALUZero = %b, Uncondbranch = %b", CurrentPC, SignExtImm64, Branch, 					ALUZero, Uncondbranch);
                #50 passTest(NextPC, 64'b1100, "Test Case 2", passed);

                #50 {CurrentPC, SignExtImm64, Branch, ALUZero, Uncondbranch} = {64'b1000, 64'b10, 1'b1, 1'b1, 1'b0};
                #50 $display("Test case 3, CurrentPC = %b, SignExtImm64 = %b, Branch = %b, ALUZero = %b, Uncondbranch = %b", CurrentPC, SignExtImm64, Branch, 					ALUZero, Uncondbranch);
                #50 passTest(NextPC, 64'b10000, "Test Case 3", passed);

                #50 {CurrentPC, SignExtImm64, Branch, ALUZero, Uncondbranch} = {64'b1000, 64'b10, 1'b1, 1'b1, 1'b1};
                #50 $display("Test case 4, CurrentPC = %b, SignExtImm64 = %b, Branch = %b, ALUZero = %b, Uncondbranch = %b", CurrentPC, SignExtImm64, Branch, 					ALUZero, Uncondbranch);
                #50 passTest(NextPC, 64'b10000, "Test Case 4", passed);

                #50 {CurrentPC, SignExtImm64, Branch, ALUZero, Uncondbranch} = {64'b1000, 64'b10, 1'b1, 1'b0, 1'b1};
                #50 $display("Test case 5, CurrentPC = %b, SignExtImm64 = %b, Branch = %b, ALUZero = %b, Uncondbranch = %b", CurrentPC, SignExtImm64, Branch, 					ALUZero, Uncondbranch);
                #50 passTest(NextPC, 64'b10000, "Test Case 5", passed);

                #50 {CurrentPC, SignExtImm64, Branch, ALUZero, Uncondbranch} = {64'b1000, 64'b10, 1'b0, 1'b1, 1'b1};
                #50 $display("Test case 6, CurrentPC = %b, SignExtImm64 = %b, Branch = %b, ALUZero = %b, Uncondbranch = %b", CurrentPC, SignExtImm64, Branch, 					ALUZero, Uncondbranch);
                #50 passTest(NextPC, 64'b10000, "Test Case 6", passed);

                #50 {CurrentPC, SignExtImm64, Branch, ALUZero, Uncondbranch} = {64'b1000, 64'b10, 1'b0, 1'b0, 1'b1};
                #50 $display("Test case 7, CurrentPC = %b, SignExtImm64 = %b, Branch = %b, ALUZero = %b, Uncondbranch = %b", CurrentPC, SignExtImm64, Branch, 					ALUZero, Uncondbranch);
                #50 passTest(NextPC, 64'b10000, "Test Case 7", passed);

		#50 allPassed(passed, 7);

	end
      
endmodule

