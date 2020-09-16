circuit IF_DEC : @[:@2.0]
  module IF_DEC : @[:@3.2]
    input clock : Clock @[:@4.4]
    input reset : UInt<1> @[:@5.4]
    input io_input : UInt<32> @[:@6.4]
    output io_pc : UInt<32> @[:@6.4]
    output io_pc4 : UInt<32> @[:@6.4]
    output io_rdData : UInt<32> @[:@6.4]
  
    mem mem : @[IF_DEC.scala 28:28:@24.4]
      data-type => UInt<32>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => _T_27
      read-under-write => undefined
    reg pc1 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), pc1) @[IF_DEC.scala 12:32:@8.4]
    reg pc2 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), pc2) @[IF_DEC.scala 13:32:@10.4]
    reg pc4r : UInt<32>, clock with :
      reset => (UInt<1>("h0"), pc4r) @[IF_DEC.scala 14:33:@12.4]
    node _T_20 = add(pc1, UInt<3>("h4")) @[IF_DEC.scala 16:26:@15.4]
    node _T_21 = tail(_T_20, 1) @[IF_DEC.scala 16:26:@16.4]
    node wrAddr = bits(pc2, 21, 2) @[IF_DEC.scala 26:31:@21.4]
    reg instr : UInt<32>, clock with :
      reset => (UInt<1>("h0"), instr) @[IF_DEC.scala 27:34:@22.4]
    node _T_26 = bits(wrAddr, 9, 0) @[IF_DEC.scala 30:33:@25.4]
    io_pc <= pc2 @[IF_DEC.scala 18:22:@19.4]
    io_pc4 <= pc4r @[IF_DEC.scala 19:23:@20.4]
    io_rdData <= instr @[IF_DEC.scala 32:26:@28.4]
    pc1 <= io_input @[IF_DEC.scala 12:32:@9.4 IF_DEC.scala 15:20:@14.4]
    pc2 <= pc1 @[IF_DEC.scala 13:32:@11.4 IF_DEC.scala 17:20:@18.4]
    pc4r <= _T_21 @[IF_DEC.scala 14:33:@13.4 IF_DEC.scala 16:21:@17.4]
    instr <= mem._T_27.data @[IF_DEC.scala 27:34:@23.4 IF_DEC.scala 30:22:@27.4]
    mem._T_27.addr <= _T_26 @[IF_DEC.scala 30:33:@26.4]
    mem._T_27.en <= UInt<1>("h1") @[IF_DEC.scala 28:28:@24.4 IF_DEC.scala 30:33:@26.4]
    mem._T_27.clk <= clock @[IF_DEC.scala 30:33:@26.4]
