;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit MEM_WB : 
  module MEM_WB : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip Regwr : UInt<1>, flip MemtoReg : UInt<1>, flip Rd_sel : UInt<5>, flip data_mem_in : SInt<32>, flip Aluout : SInt<32>, Regwr_out : UInt<1>, MemtoReg_out : UInt<1>, Rd_sel_out : UInt<5>, data_mem_out : SInt<32>, Aluout_2 : SInt<32>}
    
    reg Regwr_Reg : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[MEM_WB.scala 20:32]
    Regwr_Reg <= io.Regwr @[MEM_WB.scala 21:19]
    io.Regwr_out <= Regwr_Reg @[MEM_WB.scala 22:22]
    reg MemtoReg_Reg : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[MEM_WB.scala 24:35]
    MemtoReg_Reg <= io.MemtoReg @[MEM_WB.scala 25:22]
    io.MemtoReg_out <= MemtoReg_Reg @[MEM_WB.scala 26:26]
    reg Rd_sel_Reg : UInt<5>, clock with : (reset => (reset, UInt<5>("h00"))) @[MEM_WB.scala 29:33]
    Rd_sel_Reg <= io.Rd_sel @[MEM_WB.scala 30:20]
    io.Rd_sel_out <= Rd_sel_Reg @[MEM_WB.scala 31:24]
    reg data_mem_Reg : SInt<32>, clock with : (reset => (reset, asSInt(UInt<32>("h00")))) @[MEM_WB.scala 33:35]
    data_mem_Reg <= io.data_mem_in @[MEM_WB.scala 34:22]
    io.data_mem_out <= data_mem_Reg @[MEM_WB.scala 35:25]
    reg Aluout_Reg : SInt<32>, clock with : (reset => (reset, asSInt(UInt<32>("h00")))) @[MEM_WB.scala 37:32]
    Aluout_Reg <= io.Aluout @[MEM_WB.scala 38:19]
    io.Aluout_2 <= Aluout_Reg @[MEM_WB.scala 39:21]
    
