`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: MERL
// Engineer: 
// 
// Create Date: 12/21/2019 04:40:34 PM
// Design Name: BSV32I_SSC
// Module Name: Fetch
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


module Fetch#(
parameter DataWidth=32,
parameter AddrWidth=10
)
(
    input clock,
    input reset,
    input [1:0]next_PC_sel,
    input Branch,flush,
    input [DataWidth-1:0]Branch_target,
    input [DataWidth-1:0]Jal_target,
    input [DataWidth-1:0]Jalr_target,
    output [AddrWidth-1:0]Inst_mem_address,
    output logic [DataWidth-1:0]PC_OUT 
);

logic [DataWidth-1:0]PC_reg;
logic [DataWidth-1:0]PC;
initial PC_reg=32'h0000_0000;

always @ (posedge clock)begin
    if (reset)
        PC_reg <= 32'b0;  
    else begin
        if (next_PC_sel == 2'b10) begin               //JAL
            PC_reg <=  Jal_target;
	end
        else if (next_PC_sel == 2'b11)begin           //JALR
            PC_reg <=  Jalr_target;
	end
        else if (next_PC_sel == 2'b01) begin     //Branch
                  if (Branch == 1'b1) begin
                      PC_reg <= Branch_target;
		  end
                  else begin
                      PC_reg <= PC_reg + 32'd4;
		  end 
        end
        else if (next_PC_sel == 2'b00)begin      // PC + 4           
                  PC_reg <= PC_reg + 32'd4;
        end
	else begin
		  PC_reg <= PC_reg + 32'd4;
	end
    end
end

assign PC = PC_reg;
assign Inst_mem_address  = PC[11:2];
///////////////////////////////////////////////////////////
    always@(posedge clock)begin
        if(flush)begin
            PC_OUT <= 32'd0;
        end
	else if(reset)begin
	    PC_OUT <= 32'd0;
	end
        else begin
            PC_OUT <= PC;
        end    
    end  

endmodule:Fetch
