module LoadMemory(
  input         clock,
  input         reset,
  input  [7:0]  io_wrAddr,
  input  [31:0] io_wrData,
  input         io_MemoryWrite,
  input         io_MemoryRead,
  output [31:0] io_Data
);
  reg [31:0] mem [0:1023]; // @[LoadMemory.scala 17:36]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_28_data; // @[LoadMemory.scala 17:36]
  wire [9:0] mem__T_28_addr; // @[LoadMemory.scala 17:36]
  wire [31:0] mem__T_20_data; // @[LoadMemory.scala 17:36]
  wire [9:0] mem__T_20_addr; // @[LoadMemory.scala 17:36]
  wire  mem__T_20_mask; // @[LoadMemory.scala 17:36]
  wire  mem__T_20_en; // @[LoadMemory.scala 17:36]
  wire [9:0] _T_26; // @[LoadMemory.scala 24:42]
  wire  _GEN_9; // @[LoadMemory.scala 23:42]
  reg [9:0] mem__T_28_addr_pipe_0;
  reg [31:0] _RAND_1;
  wire  _GEN_13;
  assign mem__T_28_addr = mem__T_28_addr_pipe_0;
  assign mem__T_28_data = mem[mem__T_28_addr]; // @[LoadMemory.scala 17:36]
  assign mem__T_20_data = io_wrData;
  assign mem__T_20_addr = {{2'd0}, io_wrAddr};
  assign mem__T_20_mask = 1'h1;
  assign mem__T_20_en = io_MemoryWrite;
  assign _T_26 = {{2'd0}, io_wrAddr}; // @[LoadMemory.scala 24:42]
  assign _GEN_9 = io_MemoryRead ? io_MemoryRead : 1'h0; // @[LoadMemory.scala 23:42]
  assign io_Data = io_MemoryRead ? $signed(mem__T_28_data) : $signed(32'sh0); // @[LoadMemory.scala 16:24 LoadMemory.scala 24:32]
  assign _GEN_13 = _GEN_9;
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    mem[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  mem__T_28_addr_pipe_0 = _RAND_1[9:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if(mem__T_20_en & mem__T_20_mask) begin
      mem[mem__T_20_addr] <= mem__T_20_data; // @[LoadMemory.scala 17:36]
    end
    if (_GEN_13) begin
      mem__T_28_addr_pipe_0 <= _T_26;
    end
  end
endmodule
