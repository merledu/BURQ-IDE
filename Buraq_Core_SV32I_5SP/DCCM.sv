`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: MERL
// Engineer: 
// 
// Create Date: 12/21/2019 09:46:29 AM
// Design Name: BSV32I_SSC
// Module Name: Memory
// Project Name: BURAQ
// Target Devices: Arty A7 35T
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module DCCM#(
parameter DataWidth=32,
parameter AddrWidth=10
)
(   
    input  clock,
    input  readEn,                               
    input  writeEn,                             //B is Data Memory
    input  [2:0]func_3,
    input  [DataWidth-1:0]DataIn,
    input  [AddrWidth-1:0]Address,
    output logic [DataWidth-1:0]DataOut
);

localparam MEM_DEPTH = 2**AddrWidth;

logic [8-1:0]memory[0:MEM_DEPTH-1];
    
/*DATA MEMORY*/
always @ (posedge clock)begin
    if (writeEn)begin
        if (func_3 == 3'b000)begin            //sb//
	     memory[Address] <= DataIn[7:0];
        end
        if (func_3 == 3'b001)begin            //sh//
             memory[Address]   <= DataIn[7:0];
             memory[Address+1] <= DataIn[15:8];
        end
        if (func_3 == 3'b010)begin
	     memory[Address]    <= DataIn[7:0];     //sw//
             memory[Address+1]  <= DataIn[15:8];
             memory[Address+2]  <= DataIn[23:16];
             memory[Address+3]  <= DataIn[31:24];
        end
    end		
end         

always @(*) begin
    if (readEn)begin
	if (func_3 == 3'b000 || func_3 == 3'b100)begin             //lb//
            DataOut[7:0]  = memory[Address];
         end
         if (func_3 == 3'b001 || func_3 == 3'b101)begin            //lh//
	    DataOut[7:0]  = memory[Address];
            DataOut[15:8] = memory[Address+1];
         end
         if (func_3 == 3'b010)begin                                //lw//
            DataOut[7:0]   = memory[Address];  
            DataOut[15:8]  = memory[Address+1]; 
            DataOut[23:16] = memory[Address+2]; 
            DataOut[31:24] = memory[Address+3]; 
         end
     end            
end
endmodule: DCCM