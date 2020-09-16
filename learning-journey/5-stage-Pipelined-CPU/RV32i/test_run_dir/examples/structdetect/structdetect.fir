;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit structdetect : 
  module structdetect : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip rs1_sel : UInt<5>, flip rs2_sel : UInt<5>, flip mem_wb_regwrite : UInt<1>, flip mem_wb_rd_sel : UInt<5>, fwd_rs1 : UInt<1>, fwd_rs2 : UInt<1>}
    
    node _T_18 = eq(io.mem_wb_regwrite, UInt<1>("h01")) @[structdetect.scala 16:27]
    node _T_19 = eq(io.mem_wb_rd_sel, io.rs1_sel) @[structdetect.scala 16:56]
    node _T_20 = and(_T_18, _T_19) @[structdetect.scala 16:35]
    when _T_20 : @[structdetect.scala 16:72]
      io.fwd_rs1 <= UInt<1>("h01") @[structdetect.scala 17:16]
      skip @[structdetect.scala 16:72]
    else : @[structdetect.scala 18:16]
      io.fwd_rs1 <= UInt<1>("h00") @[structdetect.scala 19:16]
      skip @[structdetect.scala 18:16]
    node _T_24 = eq(io.mem_wb_regwrite, UInt<1>("h01")) @[structdetect.scala 22:27]
    node _T_25 = eq(io.mem_wb_rd_sel, io.rs2_sel) @[structdetect.scala 22:55]
    node _T_26 = and(_T_24, _T_25) @[structdetect.scala 22:35]
    when _T_26 : @[structdetect.scala 22:71]
      io.fwd_rs2 <= UInt<1>("h01") @[structdetect.scala 23:16]
      skip @[structdetect.scala 22:71]
    else : @[structdetect.scala 24:16]
      io.fwd_rs2 <= UInt<1>("h00") @[structdetect.scala 25:16]
      skip @[structdetect.scala 24:16]
    
