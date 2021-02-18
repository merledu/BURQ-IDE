`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/22/2019 11:37:36 AM
// Design Name: 
// Module Name: clock_wizard
// Project Name: 
// Target Devices: 
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


module clock_wizard
(
    input clock_in,     // input clock on FPGA
    output logic clock  // output clock after dividing the input clock by divisor
);

logic [31:0] counter=32'd0;
localparam DIVISOR = 32'd100000000;
// The frequency of the output clk_out
//  = The frequency of the input clk_in divided by DIVISOR
// For example: Fclk_in = 50Mhz, if you want to get 1Hz signal to blink LEDs
// You will modify the DIVISOR localparam value to 32'd50.000.000
// Then the frequency of the output clk_out = 50Mhz/50.000.000 = 1Hz
always @(posedge clock_in)
begin
 counter <= counter + 32'd1;
 if(counter>=(DIVISOR-1))
  counter <= 32'd0;
end

assign clock = (counter<DIVISOR/2)?1'b0:1'b1;

endmodule: clock_wizard