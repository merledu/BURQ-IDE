;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit IF_DEC : 
  module IF_DEC : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip input : UInt<32>, pc : UInt<32>, pc4 : UInt<32>, rdData : UInt<32>}
    
    reg pc1 : UInt, clock @[IF_DEC.scala 12:32]
    pc1 <= UInt<32>("h00") @[IF_DEC.scala 12:32]
    reg pc2 : UInt, clock @[IF_DEC.scala 13:32]
    pc2 <= UInt<32>("h00") @[IF_DEC.scala 13:32]
    reg pc4r : UInt, clock @[IF_DEC.scala 14:33]
    pc4r <= UInt<32>("h00") @[IF_DEC.scala 14:33]
    pc1 <= io.input @[IF_DEC.scala 15:20]
    node _T_20 = add(pc1, UInt<3>("h04")) @[IF_DEC.scala 16:26]
    node _T_21 = tail(_T_20, 1) @[IF_DEC.scala 16:26]
    pc4r <= _T_21 @[IF_DEC.scala 16:21]
    pc2 <= pc1 @[IF_DEC.scala 17:20]
    io.pc <= pc2 @[IF_DEC.scala 18:22]
    io.pc4 <= pc4r @[IF_DEC.scala 19:23]
    node wrAddr = bits(pc2, 21, 2) @[IF_DEC.scala 26:31]
    reg instr : UInt, clock @[IF_DEC.scala 27:34]
    instr <= UInt<32>("h00") @[IF_DEC.scala 27:34]
    cmem mem : UInt<32>[1024] @[IF_DEC.scala 28:28]
    node _T_26 = bits(wrAddr, 9, 0) @[IF_DEC.scala 30:33]
    read mport _T_27 = mem[_T_26], clock @[IF_DEC.scala 30:33]
    instr <= _T_27 @[IF_DEC.scala 30:22]
    io.rdData <= instr @[IF_DEC.scala 32:26]
    
