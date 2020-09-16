module BindsTo_0_InstructionMemory(
  input         clock,
  input         reset,
  input  [31:0] io_wrAddr,
  output [31:0] io_rdData
);

initial begin
  $readmemh("/home/monis/Desktop/Ghaznavi-Core-master/Ghaznavi/5st.txt", InstructionMemory.mem);
end
                      endmodule

bind InstructionMemory BindsTo_0_InstructionMemory BindsTo_0_InstructionMemory_Inst(.*);