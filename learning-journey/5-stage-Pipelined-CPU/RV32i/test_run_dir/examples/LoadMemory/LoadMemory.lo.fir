circuit LoadMemory : @[:@2.0]
  module LoadMemory : @[:@3.2]
    input clock : Clock @[:@4.4]
    input reset : UInt<1> @[:@5.4]
    input io_wrAddr : UInt<8> @[:@6.4]
    input io_wrData : SInt<32> @[:@6.4]
    input io_MemoryWrite : UInt<1> @[:@6.4]
    input io_MemoryRead : UInt<1> @[:@6.4]
    output io_Data : SInt<32> @[:@6.4]
  
    mem mem : @[LoadMemory.scala 17:28:@9.4]
      data-type => SInt<32>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => _T_23
      writer => _T_20
      read-under-write => undefined
    node _T_19 = eq(io_MemoryWrite, UInt<1>("h1")) @[LoadMemory.scala 19:36:@10.4]
    node _GEN_0 = validif(_T_19, io_wrAddr) @[LoadMemory.scala 19:43:@11.4]
    node _GEN_1 = validif(_T_19, clock) @[LoadMemory.scala 19:43:@11.4]
    node _GEN_2 = mux(_T_19, UInt<1>("h1"), UInt<1>("h0")) @[LoadMemory.scala 19:43:@11.4]
    node _GEN_3 = validif(_T_19, UInt<1>("h1")) @[LoadMemory.scala 19:43:@11.4]
    node _GEN_4 = validif(_T_19, io_wrData) @[LoadMemory.scala 19:43:@11.4]
    node _T_22 = eq(io_MemoryRead, UInt<1>("h1")) @[LoadMemory.scala 23:35:@15.4]
    node _GEN_5 = validif(_T_22, io_wrAddr) @[LoadMemory.scala 23:42:@16.4]
    node _GEN_6 = validif(_T_22, clock) @[LoadMemory.scala 23:42:@16.4]
    node _GEN_7 = mux(_T_22, UInt<1>("h1"), UInt<1>("h0")) @[LoadMemory.scala 23:42:@16.4]
    node _GEN_8 = mux(_T_22, mem._T_23.data, asSInt(UInt<1>("h0"))) @[LoadMemory.scala 23:42:@16.4]
    io_Data <= _GEN_8 @[LoadMemory.scala 16:24:@8.4 LoadMemory.scala 24:32:@18.6]
    mem._T_23.addr <= _GEN_5 @[LoadMemory.scala 24:42:@17.6]
    mem._T_23.en <= _GEN_7 @[LoadMemory.scala 17:28:@9.4 LoadMemory.scala 24:42:@17.6]
    mem._T_23.clk <= _GEN_6 @[LoadMemory.scala 24:42:@17.6]
    mem._T_20.addr <= _GEN_0 @[:@12.6]
    mem._T_20.en <= _GEN_2 @[LoadMemory.scala 17:28:@9.4 :@12.6]
    mem._T_20.clk <= _GEN_1 @[:@12.6]
    mem._T_20.data <= _GEN_4 @[:@13.6]
    mem._T_20.mask <= _GEN_3 @[:@12.6 :@13.6]
