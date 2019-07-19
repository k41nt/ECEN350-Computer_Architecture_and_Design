
// -----------------------------------------------------------------------------
// Copyright (c) 2014-2017 All rights reserved
// -----------------------------------------------------------------------------
// Author : Khanh Nguyen -Lab 6- ECEN 350
// File   : Mux21.v
// Create : 2017-10-31 23:32:25
// -----------------------------------------------------------------------------


module Mux21( out , in , sel ) ;
input [ 1 : 0 ] in ;
input wire sel ;
output wire out ;

wire notS; //inverse of S
wire andA; //output of and0 gate
wire andB; //output of and1 gate

/*instantite gate-level modules*/
not not0(notS, sel);
and and0(andA, notS, in[0]);
and and1(andB, sel, in[1]);
or or0(out, andA, andB);

endmodule // Mux21