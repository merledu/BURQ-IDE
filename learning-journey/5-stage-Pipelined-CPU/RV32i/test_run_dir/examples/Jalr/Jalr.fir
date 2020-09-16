;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit Jalr : 
  module Jalr : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip A : SInt<32>, flip B : SInt<32>, x : SInt<32>}
    
    node _T_11 = add(io.A, io.B) @[Jalr.scala 15:28]
    node _T_12 = tail(_T_11, 1) @[Jalr.scala 15:28]
    node ab = asSInt(_T_12) @[Jalr.scala 15:28]
    node _T_14 = and(ab, asSInt(UInt<33>("h0fffffffe"))) @[Jalr.scala 16:27]
    node bc = asSInt(_T_14) @[Jalr.scala 16:27]
    io.x <= bc @[Jalr.scala 17:21]
    
