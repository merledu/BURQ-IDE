package datapath
import chisel3._

class branchlogic extends Module {
  val io = IO(new Bundle {
    	val rs1_in = Input(SInt(32.W))
    	val rs2_in = Input(SInt(32.W))
    	val func3_in = Input(UInt(3.W))
    	val branch=Input(UInt(1.W))
	
    	val output_x = Output(UInt(1.W))
    	val branch2 = Output(UInt(1.W))	
	
	
  })

	io.output_x := 0.U 
	
	io.branch2:=io.branch
	
  	
		when(io.func3_in === "b000".U) {
   			when(io.rs1_in === io.rs2_in) {
      				io.output_x := 1.U
    			}.otherwise{
				io.output_x:=0.U
			}
  		}.elsewhen(io.func3_in === "b001".U) {
    			when(io.rs1_in =/= io.rs2_in) {
      				io.output_x := 1.U
    			}.otherwise{
				io.output_x:=0.U
			} 
  		}.elsewhen(io.func3_in === "b100".U) {
    			when(io.rs1_in < io.rs2_in) {
      				io.output_x := 1.U
    			}.otherwise{
				io.output_x:=0.U
			} 
  		}.elsewhen(io.func3_in === "b101".U) {
    			when(io.rs1_in >= io.rs2_in)  {
      				io.output_x := 1.U
    			}.otherwise{
				io.output_x:=0.U
			} 
  		}.elsewhen(io.func3_in === "b110".U) {
    			when(io.rs1_in.asUInt < io.rs2_in.asUInt) {
      				io.output_x := 1.U
    			}.otherwise{
				io.output_x:=0.U
			} 
  		}.elsewhen(io.func3_in === "b111".U) {
    			when(io.rs1_in.asUInt >= io.rs2_in.asUInt) {
      				io.output_x := 1.U
    			}.otherwise{
				io.output_x:=0.U
			} 
  		}.otherwise{
			io.output_x:=0.U
		}	
	

}
