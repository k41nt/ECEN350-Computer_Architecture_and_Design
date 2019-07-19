// -----------------------------------------------------------------------------
// Copyright (c) 2014-2017 All rights reserved
// -----------------------------------------------------------------------------
// Author : Khanh Nguyen -Lab 6- ECEN 350
// File   : Decode24.v
// Create : 2017-10-31 23:32:25
// -----------------------------------------------------------------------------


module Decode24( out , in ) ;
input [ 1 : 0 ] in ;
output reg [ 3 : 0 ] out ;

always @(in)
   begin
                case(in)
                    2'b00: out = 4'b0001;
                    2'b01: out = 4'b0010;
                    2'b10: out = 4'b0100;
                    2'b11: out = 4'b1000;
						  default out=4'b0000;
                endcase
   end
        
endmodule