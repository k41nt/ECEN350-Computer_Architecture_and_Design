`timescale 1ns / 1ps
/*
 * Module: InstructionMemory
 *
 * Implements read-only instruction memory
 * 
 */
module InstructionMemory(Data, Address);
   parameter T_rd = 20;
   parameter MemSize = 40;
   
   output [31:0] Data;
   input [63:0]  Address;
   reg [31:0] 	 Data;
   
   /*
    * ECEN 350 Processor Test Functions
    * Texas A&M University
    */
   
   always @ (Address) begin
      case(Address)

	/* Test Program 1:
	 * Program loads constants from the data memory. Uses these constants to test
	 * the following instructions: LDUR, ORR, AND, CBZ, ADD, SUB, STUR and B.
	 * 
	 * Assembly code for test:
	 * 
	 * 0: LDUR X9, [XZR, 0x0]    //Load 1 into x9
	 * 4: LDUR X10, [XZR, 0x8]   //Load a into x10
	 * 8: LDUR X11, [XZR, 0x10]  //Load 5 into x11
	 * C: LDUR X12, [XZR, 0x18]  //Load big constant into x12
	 * 10: LDUR X13, [XZR, 0x20]  //load a 0 into X13
	 * 
	 * 14: ORR X10, X10, X11  //Create mask of 0xf
	 * 18: AND X12, X12, X10  //Mask off low order bits of big constant
	 * 
	 * loop:
	 * 1C: CBZ X12, end  //while X12 is not 0
	 * 20: ADD X13, X13, X9  //Increment counter in X13
	 * 24: SUB X12, X12, X9  //Decrement remainder of big constant in X12
	 * 28: B loop  //Repeat till X12 is 0
	 * 2C: STUR X13, [XZR, 0x20]  //store back the counter value into the memory location 0x20
	 */
	

	63'h000: Data = 32'hF84003E9; //11111000010 000000000 00 11111 01001 //LDUR X9, [XZR, 0x0]    //Load 1 into x9
	63'h004: Data = 32'hF84083EA; //11111000010 000001000 00 11111 01010 //LDUR X10, [XZR, 0x8]   //Load a into x10
	63'h008: Data = 32'hF84103EB; //11111000010 000001000 00 11111 01010 //LDUR X11, [XZR, 0x10]  //Load 5 into x11
	63'h00c: Data = 32'hF84183EC; //11111000010 000010000 00 11111 01011 //LDUR X12, [XZR, 0x18]  //Load big constant into x12
	63'h010: Data = 32'hF84203ED; //11111000010 000100000 00 11111 01101 //LDUR X13, [XZR, 0x20]  //load a 0 into X13
	63'h014: Data = 32'hAA0B014A; //10101010000 01011 000000 01010 01010 //ORR X10, X10, X11  //Create mask of 0xf
	63'h018: Data = 32'h8A0A018C; //10001010000 01010 000000 01100 01100 //AND X12, X12, X10  //Mask off low order bits of big constant
	63'h01c: Data = 32'hB400008C; //10110100 0000000000000000100 01100   //CBZ X12, end  //while X12 is not 0
	63'h020: Data = 32'h8B0901AD; //10001011000 01001 000000 01101 01101 //ADD X13, X13, X9  //Increment counter in X13
	63'h024: Data = 32'hCB09018C; //11001011000 01001 000000 01100 01100 //SUB X12, X12, X9  //Decrement remainder of big constant in X12
	63'h028: Data = 32'h17FFFFFD; //000101 11111111111111111111111101    //B loop  //Repeat till X12 is 0
	63'h02c: Data = 32'hF80203ED; //11111000000 000100000 00 11111 01101 //STUR X13, [XZR, 0x20]  //store back the counter value into the memory location 0x20
	63'h030: Data = 32'hF84203ED;  //One last load to place stored value on memdbus for test checking.

	/* Add code for your tests here */

			
	default: Data = 32'hXXXXXXXX;
      endcase
   end
endmodule
