;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit EX_MEM : 
  module EX_MEM : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip Memwr : UInt<1>, flip Memrd : UInt<1>, flip Regwr : UInt<1>, flip MemtoReg : UInt<1>, flip Rs2 : SInt<32>, flip Rd_sel : UInt<5>, flip Alu_out : SInt<32>, Memwr_out : UInt<1>, Memrd_out : UInt<1>, Regwr_out : UInt<1>, MemtoReg_out : UInt<1>, Rs2_out : SInt<32>, Rd_sel_out : UInt<5>, Alu_out2 : SInt<32>}
    
    reg Memwr_Reg : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[EX_MEM.scala 24:32]
    Memwr_Reg <= io.Memwr @[EX_MEM.scala 25:19]
    io.Memwr_out <= Memwr_Reg @[EX_MEM.scala 26:22]
    reg Memrd_Reg : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[EX_MEM.scala 28:32]
    Memrd_Reg <= io.Memrd @[EX_MEM.scala 29:19]
    io.Memrd_out <= Memrd_Reg @[EX_MEM.scala 30:22]
    reg Regwr_Reg : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[EX_MEM.scala 32:32]
    Regwr_Reg <= io.Regwr @[EX_MEM.scala 33:19]
    io.Regwr_out <= Regwr_Reg @[EX_MEM.scala 34:22]
    reg MemtoReg_Reg : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[EX_MEM.scala 36:35]
    MemtoReg_Reg <= io.MemtoReg @[EX_MEM.scala 37:22]
    io.MemtoReg_out <= MemtoReg_Reg @[EX_MEM.scala 38:25]
    reg Rs2_Reg : SInt<32>, clock with : (reset => (reset, asSInt(UInt<32>("h00")))) @[EX_MEM.scala 40:30]
    Rs2_Reg <= io.Rs2 @[EX_MEM.scala 41:17]
    io.Rs2_out <= Rs2_Reg @[EX_MEM.scala 42:20]
    reg Rd_sel_Reg : UInt<5>, clock with : (reset => (reset, UInt<5>("h00"))) @[EX_MEM.scala 44:33]
    Rd_sel_Reg <= io.Rd_sel @[EX_MEM.scala 45:20]
    io.Rd_sel_out <= Rd_sel_Reg @[EX_MEM.scala 46:22]
    reg Alu_out_Reg : SInt<32>, clock with : (reset => (reset, asSInt(UInt<32>("h00")))) @[EX_MEM.scala 50:34]
    Alu_out_Reg <= io.Alu_out @[EX_MEM.scala 51:21]
    io.Alu_out2 <= Alu_out_Reg @[EX_MEM.scala 52:21]
    
