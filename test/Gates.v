// -----------------------------------------------------------------------------
// Copyright (c) 2014-2017 All rights reserved
// -----------------------------------------------------------------------------
// Author : Khanh Nguyen -Lab 6- ECEN 350
// File   : Gates.v
// Create : 2017-10-31 23:32:25
// -----------------------------------------------------------------------------


module Gates(in,out);

	input wire [0:1] in ;
	output wire [0:2] out ;

	and and0(out[0] , in[0] , in[1] ) ;
	or or0(out[1] , in[0] , in[1] ) ;
	xor xor0(out[2] , in[0] , in[1] ) ;

endmodule
