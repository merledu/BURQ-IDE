;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit InstructionMemory : 
  module InstructionMemory : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip wrAddr : UInt<32>, rdData : UInt<32>}
    
    cmem mem : UInt<32>[1024] @[InstructionMemory.scala 13:28]
    node _T_11 = bits(io.wrAddr, 9, 0) @[InstructionMemory.scala 14:36]
    read mport _T_12 = mem[_T_11], clock @[InstructionMemory.scala 14:36]
    io.rdData <= _T_12 @[InstructionMemory.scala 14:26]
    
