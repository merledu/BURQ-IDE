package riscv
import chisel3._
import chisel3.util.Cat
class ImmediateGen extends Module{
  val io = IO(new Bundle{
    val a = Input(UInt(3.W))
    val out = Output(UInt(3.W))
  })
  io.out := io.a << 1.U
}
