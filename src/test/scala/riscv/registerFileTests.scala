package riscv
import chisel3.iotesters.PeekPokeTester
class registerFileTests(c: registerFile) extends PeekPokeTester(c) {
  poke(c.io.regWrite,1)
  poke(c.io.rs1_sel,2)
  poke(c.io.rs2_sel,3)
  poke(c.io.rd_sel,4)
  poke(c.io.writeData,0)
  step(1)
  //expect(c.registers(c.io.rd),5)
  //expect(c.io.rs1,0)
  //expect(c.io.rs2,0)
}
