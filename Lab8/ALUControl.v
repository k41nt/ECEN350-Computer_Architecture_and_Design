`timescale 1ns / 1ps

module ALUControl(
	output [3:0] ALUCtrl,
	input  [1:0] ALUop,
	input  [10:0] Opcode
);

reg [3:0] out;

always @ (ALUop, Opcode) begin
	if (ALUop == 2'b10) 
		case (Opcode)
			
			// AND
			11'b10001010000: out <= 4'b0000;

			// OR
			11'b10101010000: out <= 4'b0001;

			// ADD (signed)
			11'b10001011000: out <= 4'b0010;

			// SUB (signed)
			11'b11001011000: out <= 4'b0110;
			
		endcase

	else if (ALUop == 2'b00)
		out <= 4'b0010;
	else if (ALUop == 2'b01)
		out <= 4'b0111;
		
end

 assign #2 ALUCtrl = out;

endmodule