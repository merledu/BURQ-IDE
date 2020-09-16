;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit LoadMemory : 
  module LoadMemory : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip wrAddr : UInt<8>, flip wrData : SInt<32>, flip MemoryWrite : UInt<1>, flip MemoryRead : UInt<1>, Data : SInt<32>}
    
    io.Data <= asSInt(UInt<1>("h00")) @[LoadMemory.scala 16:24]
    cmem mem : SInt<32>[1024] @[LoadMemory.scala 17:28]
    node _T_19 = eq(io.MemoryWrite, UInt<1>("h01")) @[LoadMemory.scala 19:36]
    when _T_19 : @[LoadMemory.scala 19:43]
      write mport _T_20 = mem[io.wrAddr], clock
      _T_20 <= io.wrData
      skip @[LoadMemory.scala 19:43]
    node _T_22 = eq(io.MemoryRead, UInt<1>("h01")) @[LoadMemory.scala 23:35]
    when _T_22 : @[LoadMemory.scala 23:42]
      read mport _T_23 = mem[io.wrAddr], clock @[LoadMemory.scala 24:42]
      io.Data <= _T_23 @[LoadMemory.scala 24:32]
      skip @[LoadMemory.scala 23:42]
    
