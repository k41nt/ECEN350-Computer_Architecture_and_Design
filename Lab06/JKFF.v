// -----------------------------------------------------------------------------
// Copyright (c) 2014-2017 All rights reserved
// -----------------------------------------------------------------------------
// Author : Khanh Nguyen -Lab 6- ECEN 350
// File   : JKFF.v
// Create : 2017-10-31 23:32:25
// -----------------------------------------------------------------------------


module JK( out , j , k , clk , reset ) ;
input wire j , k , clk , reset ;
output wire out ;

wire w1,w2,q_bar, notreset;
not nota(notreset,reset);
nand #2 n1(w1,j,clk,q_bar);
nand #2 n2(w2,k,clk,out);
nand #2 n3(out,q_bar,w1);
nand #2 n4(q_bar,out,notreset,w2);

endmodule