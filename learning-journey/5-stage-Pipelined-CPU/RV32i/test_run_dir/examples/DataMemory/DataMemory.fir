;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit DataMemory : 
  module DataMemory : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip wrAddr : UInt<8>, flip wrData : SInt<32>, flip MemRead : UInt<1>, Data : SInt<32>, flip MemWrite : UInt<1>}
    
    io.Data <= asSInt(UInt<1>("h00")) @[DataMemory.scala 15:24]
    cmem mem : SInt<32>[1024] @[DataMemory.scala 16:28]
    node _T_19 = eq(io.MemWrite, UInt<1>("h01")) @[DataMemory.scala 18:33]
    when _T_19 : @[DataMemory.scala 18:40]
      write mport _T_20 = mem[io.wrAddr], clock
      _T_20 <= io.wrData
      skip @[DataMemory.scala 18:40]
    node _T_22 = eq(io.MemRead, UInt<1>("h01")) @[DataMemory.scala 21:32]
    when _T_22 : @[DataMemory.scala 21:39]
      read mport _T_23 = mem[io.wrAddr], clock @[DataMemory.scala 22:42]
      io.Data <= _T_23 @[DataMemory.scala 22:32]
      skip @[DataMemory.scala 21:39]
    
