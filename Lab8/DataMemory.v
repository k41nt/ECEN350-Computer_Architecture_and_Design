`timescale 1ns / 1ps

module DataMemory(
	output [63:0] ReadData,
	input [63:0] Address,
	input [63:0] WriteData,
	input MemoryRead,
	input MemoryWrite,
	input Clock
);

// ReadData needs to be a reg to be driven in the ALWAYS block
reg [63:0] ReadData;

//  Memory
reg [63:0] SavedData [255:0];

// Reading data
always @ (posedge Clock) begin
	if (MemoryRead) ReadData<= #20  SavedData[Address];
end

// Writing data
always @ (negedge Clock) begin
	if (MemoryWrite) SavedData[Address]<= #20 WriteData;
end

endmodule