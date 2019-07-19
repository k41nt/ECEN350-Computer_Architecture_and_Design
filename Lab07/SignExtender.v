module SignExtender(BusImm, Inst);

	output reg[63:0] BusImm; 
	input [31:0] Inst; 
	//input Ctrl; 

	//wire extBit; 
	//assign #1 extBit = (Ctrl ? 1'b0 : Inst[31]); 
	//assign #1 extBit = Inst[25];
	always @(*) begin
	if (Inst[31:26]==6'b000101 || Inst[31:26]==6'b100101) //B type
		begin
			assign BusImm = {{38{Inst[25]}}, Inst[25:0] /*.2'b00*/}; 
		end
		
	else if (Inst[31:24]==8'b10110101 || Inst[31:24]==8'b10110100) //CB type
		begin
			assign BusImm = {{45{Inst[23]}}, Inst[23:5]/*, 2'b00*/};
		end
		
	else if (Inst[31:21]==11'b11111000000 || Inst[31:21]==11'b11111000010) //D type
		begin
			assign BusImm = {{55{Inst[20]}}, Inst[20:12]};
		end
		
	else if (Inst[31:21]==11'b11010011011) //R type
		begin
			assign BusImm = {{58{Inst[15]}}, Inst[15:10]};
		end
		
	else if (Inst[31:22]==10'b1001000100) //I type
		begin
			assign BusImm = {{52{Inst[21]}}, Inst[21:10]};
		end
		
		
	end
endmodule