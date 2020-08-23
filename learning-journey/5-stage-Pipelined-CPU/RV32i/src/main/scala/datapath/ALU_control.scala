package datapath 
import chisel3._
import chisel3.util.Cat

class ALU_control extends Module{
	val io=IO(new Bundle{
		val Aluop=Input(UInt(3.W))
		val Func7=Input(UInt(7.W))
		val Func3=Input(UInt(3.W))
		val control=Output(UInt(5.W))
		
			
	})
		io.control:="b00000".U
		when (io.Aluop==="b000".U){
			when(io.Func7 === "b0000001".U){
				io.control:="b01001".U
			}.otherwise{
				io.control:=Cat(0.U,io.Func7,io.Func3)
			}
		}.elsewhen(io.Aluop === "b100".U){
			io.control:="b00000".U
		}.elsewhen(io.Aluop ==="b101".U){
			io.control:="b00000".U
		}.elsewhen(io.Aluop ==="b001".U){
		when(io.Func3 === "b101".U){
			io.control:=Cat("b0".U,io.Func7,io.Func3)
		}.otherwise{
		io.control := Cat("b0".U,"b0".U,io.Func3)
}
}
		.elsewhen(io.Aluop ==="b010".U){
			io.control:=Cat("b10".U,io.Func3)
		}.elsewhen(io.Aluop ==="b011".U){
			io.control:="b11111".U
		}.elsewhen(io.Aluop ==="b110".U){
			io.control:="b00000".U
		
		}.otherwise {
        io.control := DontCare
    }
}
		
		
