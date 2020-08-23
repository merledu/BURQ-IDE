package datapath
import chisel3._
import chisel3.util.Cat
import chisel3.util.Fill
class ID_EX extends Module{
	val io=IO(new Bundle{
		val PC = Input(UInt(32.W))
		val PC4 = Input(UInt(32.W))
		val Immediate=Input(SInt(32.W))
		val rs1_in = Input(SInt(32.W))
		val rs2_in = Input(SInt(32.W))
		val rd_sel_in = Input(UInt(5.W))
		val func3_in = Input(UInt(3.W))
		val func7_in = Input(UInt(7.W))
		val ctMemWr_in = Input(UInt(1.W))
        	val ctMemRd_in = Input(UInt(1.W))
        	val ctBranch_in = Input(UInt(1.W))
        	val ctRegWr_in = Input(UInt(1.W))
        	val ctMemToReg_in = Input(UInt(1.W))
        	val ctAluOp_in = Input(UInt(3.W))
        	val ctOpA_sel_in = Input(UInt(2.W))
        	val ctOpB_sel_in = Input(UInt(1.W))
        	val ctnextPc_sel_in = Input(UInt(2.W))
		val rs1_sel_in=Input(UInt(5.W))
		val rs2_sel_in=Input(UInt(5.W))
		
		val pc_out = Output(UInt(32.W))
        	val pc4_out =Output(UInt(32.W))			
		val rs1=Output(SInt(32.W))
		val rs2=Output(SInt(32.W))
		val Immediate_out=Output(SInt(32.W))
		val func3_out = Output(UInt(3.W))
        	val func7_out = Output(UInt(7.W))
        	val rd_sel_out = Output(UInt(5.W))
		val MemWrite=Output(UInt(1.W))
		val Branch2=Output(UInt(1.W))
		val MemRead=Output(UInt(1.W))
		val RegWrite=Output(UInt(1.W))
		val MemtoReg=Output(UInt(1.W))
		val ALUoperation=Output(UInt(3.W))
		val operand_A_sel=Output(UInt(2.W))
		val operand_B_sel=Output(UInt(1.W))
		val next_PC_sel=Output(UInt(2.W))
		val rs1_sel_out=Output(UInt(5.W))
		val rs2_sel_out=Output(UInt(5.W))
})


	/*REGISTER MODULES*/
	val pcr = RegInit(0.U(32.W))
    	val pc4r = RegInit(0.U(32.W))
    	val rs1r = RegInit(0.S(32.W))
    	val rs2r = RegInit(0.S(32.W))
    	val immr = RegInit(0.S(32.W))
    	val rd_sel_r = RegInit(0.U(5.W))
	val rs1_sel_r = RegInit(0.U(5.W))
	val rs2_sel_r = RegInit(0.U(5.W))

    	val func3_r = RegInit(0.U(3.W))
    	val func7_r = RegInit(0.U(7.W))
	val MemWr_r = RegInit(0.U(1.W))
    	val MemRd_r = RegInit(0.U(1.W))
    	val Branch_r = RegInit(0.U(1.W))
    	val RegWr_r = RegInit(0.U(1.W))
    	val MemToReg_r = RegInit(0.U(1.W))
    	val AluOp_r = RegInit(0.U(3.W))
    	val OpA_sel_r = RegInit(0.U(2.W))
    	val OpB_sel_r = RegInit(0.U(2.W))
    	val nextPc_sel_r = RegInit(0.U(1.W))
	
	/*Links*/
	
    pcr := io.PC
    pc4r := io.PC4
    rs1r := io.rs1_in
    rs2r := io.rs2_in
    immr := io.Immediate
    rd_sel_r := io.rd_sel_in
    func3_r := io.func3_in
    func7_r := io.func7_in
    rs1_sel_r :=io.rs1_sel_in
    rs2_sel_r :=io.rs2_sel_in
 
    MemWr_r := io.ctMemWr_in
    MemRd_r := io.ctMemRd_in
    Branch_r := io.ctBranch_in
    RegWr_r := io.ctRegWr_in
    MemToReg_r := io.ctMemToReg_in
    AluOp_r := io.ctAluOp_in
    OpA_sel_r := io.ctOpA_sel_in
    OpB_sel_r := io.ctOpB_sel_in
    nextPc_sel_r := io.ctnextPc_sel_in

    io.pc_out := pcr
    io.pc4_out := pc4r
    io.rs1 := rs1r
    io.rs2 := rs2r
    io.Immediate_out := immr
    io.rd_sel_out := rd_sel_r
    io.func3_out := func3_r
    io.func7_out := func7_r
    io.rs1_sel_out :=rs1_sel_r
    io.rs2_sel_out :=rs2_sel_r

    io.MemWrite := MemWr_r
    io.MemRead := MemRd_r
    io.Branch2 := Branch_r
    io.RegWrite := RegWr_r
    io.MemtoReg := MemToReg_r
    io.ALUoperation := AluOp_r
    io.operand_A_sel:= OpA_sel_r
    io.operand_B_sel := OpB_sel_r
    io.next_PC_sel := nextPc_sel_r

}	
