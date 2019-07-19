`timescale 1ns / 1ps

module SignExtender_tb;
	reg [31:0] Inst;
	wire [63:0] Extended;
	reg [63:0] expected_out;
	SignExtender uut(.BusImm(Extended),
					 .Inst(Inst));

	task passTest;
		input[63:0] actualOut, expectedOut;
		if(actualOut == expectedOut)
		begin
			$display ("%0t - Test Passed.", $time);
			$display ("actualOut - %B", actualOut);
			$display ("expectedOut - %B", expectedOut);
			$display (" ");
		end
		else
		begin
			$display ("%0t - Test Failed.", $time);
			$display ("actualOut - %B", actualOut);
			$display ("expectedOut - %B", expectedOut);
			$display (" ");
		end
	endtask
	
	initial 
	begin
		Inst = 0;
		expected_out = 64'b0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000;
		//#1 Inst = 32'b000101_01_0101_0101_0101_0101_0101_0101;
		
		/* Testing B Type Instructions */
		#1 Inst = {6'b000101, 26'b01_0101_0101_0101_0101_0101_0101};
		//expected_out = 64'b0000_0000_0000_0000_0000_0000_0000_0000_0000_01_0101_0101_0101_0101_0101_0101_00;
		expected_out = {{36{1'b0}}, 26'b01_0101_0101_0101_0101_0101_0101, 2'b00};
		#1 passTest(Extended, expected_out);
		//#1 Inst = 32'b100101_10_1010_1010_1010_1010_1010_1010;
		#1 Inst = {6'b100101, 26'b10_1010_1010_1010_1010_1010_1010};
		//expected_out = 64'b1111_1111_1111_1111_1111_1111_1111_1111_1111_10_1010_1010_1010_1010_1010_1010_00;
		expected_out = {{36{1'b1}}, 26'b10_1010_1010_1010_1010_1010_1010, 2'b00};
		#1 passTest(Extended, expected_out);
		
		/* Testing CB Instructions */
		//#1 Inst = 32'b10110101_101_1010_1010_1010_1010_00000;
		#1 Inst = {8'b1011_0101, 19'b101_1010_1010_1010_1010, 5'b0_0000};
		//expected_out = 64'b1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_111_101_1010_1010_1010_1010_00;
		expected_out = {{43{1'b1}}, 19'b101_1010_1010_1010_1010, 2'b00};
		#1 passTest(Extended, expected_out);
		
		/* Testing D Type Instructions */
		//#1 Inst = 32'b111_1100_0000_0_1010_1010_00_0_0000_0_0000;
		#1 Inst = {11'b111_1100_0000, 9'b0_1010_1010, 2'b00, 5'b0_0000, 5'b0_0000};
		//expected_out = 64'b0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_1010_1010;
		expected_out = {{55{1'b0}}, 9'b0_1010_1010};
		#1 passTest(Extended, expected_out);
		//#1 Inst = 32'b111_1100_0010_1_0101_0101_00_0_0000_0_0000;
		#1 Inst = {11'b111_1100_0010, 9'b1_0101_0101, 2'b00, 5'b00000, 5'b00000};
		//expected_out = 64'b1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_0101_0101;
		expected_out = {{55{1'b1}}, 9'b1_0101_0101};
		#1 passTest(Extended, expected_out);
		
		/* Testing R Type Instructions */
        #1 Inst = {11'b110_1001_1011, 5'b00000, 6'b000100, 5'b10011, 5'b01011};
        //expected_out = 64'b0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0100;
        expected_out = {{58{1'b0}}, 6'b000100};
        #1 passTest(Extended, expected_out);
        
        /* Testing I Type Instructions */
        #1 Inst = {10'b1001000100, 12'b000000000001, 5'b01001, 5'b01001};
        //expected_out = 64'b0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0001;
        expected_out = {{63{1'b0}}, 1'b1};
        #1 passTest(Extended, expected_out);
        
		$finish;
	end
		
		
		
		
endmodule