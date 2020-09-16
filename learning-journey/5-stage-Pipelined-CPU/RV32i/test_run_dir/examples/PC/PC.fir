;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit PC : 
  module PC : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip input : UInt<32>, pc : UInt<32>, pc4 : UInt<32>}
    
    reg pc1 : UInt<32>, clock with : (reset => (reset, UInt<32>("h00"))) @[PC.scala 12:32]
    pc1 <= io.input @[PC.scala 13:20]
    node _T_14 = add(pc1, UInt<3>("h04")) @[PC.scala 14:28]
    node _T_15 = tail(_T_14, 1) @[PC.scala 14:28]
    io.pc4 <= _T_15 @[PC.scala 14:23]
    io.pc <= pc1 @[PC.scala 15:22]
    
