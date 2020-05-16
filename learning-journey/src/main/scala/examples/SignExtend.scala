package examples
import chisel3._
import chisel3.util.Cat
import chisel3.util.Fill
class SignExtend extends Module{
  val io = IO(new Bundle{
    val ins = Input(UInt(32.W))
    val out = Output(UInt(32.W))
  })
  val imm = io.ins(31,20)
  io.out := Cat( Fill(20,imm(11)), imm )
}
