circuit InstructionMemory : @[:@2.0]
  module InstructionMemory : @[:@3.2]
    input clock : Clock @[:@4.4]
    input reset : UInt<1> @[:@5.4]
    input io_wrAddr : UInt<32> @[:@6.4]
    output io_rdData : UInt<32> @[:@6.4]
  
    mem mem : @[InstructionMemory.scala 13:28:@8.4]
      data-type => UInt<32>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => _T_12
      read-under-write => undefined
    node _T_11 = bits(io_wrAddr, 9, 0) @[InstructionMemory.scala 14:31:@9.4]
    io_rdData <= mem._T_12.data @[InstructionMemory.scala 14:26:@11.4]
    mem._T_12.addr <= _T_11 @[InstructionMemory.scala 14:31:@10.4]
    mem._T_12.en <= UInt<1>("h1") @[InstructionMemory.scala 13:28:@8.4 InstructionMemory.scala 14:31:@10.4]
    mem._T_12.clk <= clock @[InstructionMemory.scala 14:31:@10.4]
