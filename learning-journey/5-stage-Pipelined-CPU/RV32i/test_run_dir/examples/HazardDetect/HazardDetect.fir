;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit HazardDetect : 
  module HazardDetect : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip if_id_inst : UInt<32>, flip id_ex_memread : UInt<1>, flip id_ex_rd_sel : UInt<5>, flip if_id_pc_in : UInt<32>, flip current_pc_in : UInt<32>, inst_forward : UInt<1>, pc_forward : UInt<1>, ctrl_forward : UInt<1>, inst_out : UInt<32>, pc_out : UInt<32>, current_pc_out : UInt<32>}
    
    node rs1_sel = bits(io.if_id_inst, 19, 15) @[HazardDetect.scala 18:30]
    node rs2_sel = bits(io.if_id_inst, 24, 20) @[HazardDetect.scala 19:30]
    node _T_28 = eq(io.id_ex_memread, UInt<1>("h01")) @[HazardDetect.scala 20:25]
    node _T_29 = eq(io.id_ex_rd_sel, rs1_sel) @[HazardDetect.scala 20:57]
    node _T_30 = eq(io.id_ex_rd_sel, rs2_sel) @[HazardDetect.scala 20:90]
    node _T_31 = or(_T_29, _T_30) @[HazardDetect.scala 20:70]
    node _T_32 = and(_T_28, _T_31) @[HazardDetect.scala 20:36]
    when _T_32 : @[HazardDetect.scala 20:105]
      io.inst_forward <= UInt<1>("h01") @[HazardDetect.scala 21:23]
      io.pc_forward <= UInt<1>("h01") @[HazardDetect.scala 22:21]
      io.ctrl_forward <= UInt<1>("h01") @[HazardDetect.scala 23:23]
      io.inst_out <= io.if_id_inst @[HazardDetect.scala 24:19]
      io.pc_out <= io.if_id_pc_in @[HazardDetect.scala 25:17]
      io.current_pc_out <= io.current_pc_in @[HazardDetect.scala 26:25]
      skip @[HazardDetect.scala 20:105]
    else : @[HazardDetect.scala 28:16]
      io.inst_forward <= UInt<1>("h00") @[HazardDetect.scala 29:21]
      io.pc_forward <= UInt<1>("h00") @[HazardDetect.scala 30:19]
      io.ctrl_forward <= UInt<1>("h00") @[HazardDetect.scala 31:21]
      io.inst_out <= io.if_id_inst @[HazardDetect.scala 32:17]
      io.pc_out <= io.if_id_pc_in @[HazardDetect.scala 33:15]
      io.current_pc_out <= io.current_pc_in @[HazardDetect.scala 34:23]
      skip @[HazardDetect.scala 28:16]
    
