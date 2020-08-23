package datapath 
import chisel3._
class Top extends Module{
	val io=IO(new Bundle{
		val instruction=Output(UInt(32.W))			
		val reg_out=Output(SInt(32.W))
		val branch=Output(UInt(1.W))
		val branch2=Output(UInt(1.W))
		
	})
		
		/*val control = Module(new control())
		val register = Module(new reg_32())
		val alu = Module(new alu())
		val alucontrol = Module(new ALU_control())
		val immediate = Module(new ImmediateGeneration())
		val PC=Module(new PC())
		val instmem=Module(new InstructionMemory())
		val DataMemory=Module(new DataMemory())*/
		
		io.instruction:=0.U
		io.reg_out:=0.S
		io.branch:=0.U
		io.branch2:=0.U
		/*PC.io.input:= 0.U

		instmem.io.wrAddr:=PC.io.pc(11,2)
		io.instruction:=instmem.io.rdData

		control.io.opcode:=io.instruction(6,0)
		immediate.io.Instruction :=io.instruction
		immediate.io.PC:=PC.io.pc
		
		alucontrol.io.Aluop := control.io.ALUoperation
		alu.io.Aluop:=alucontrol.io.control
		alucontrol.io.Func7:=io.instruction(30)
		alucontrol.io.Func3:=io.instruction(14,12)
		
		register.io.rs1_sel:=io.instruction(19,15)
		register.io.rs2_sel:=io.instruction(24,20)
		register.io.rd_sel:=io.instruction(11,7)
		register.io.regwrite:=control.io.RegWrite

		alu.io.A :=register.io.rs1
		when(control.io.operand_B_sel===1.U){
			val b23 = immediate.io.I_Immediate.asSInt		
			alu.io.B:=b23
		}.otherwise
		{
			alu.io.B:=register.io.rs2
		}		

		register.io.WriteData := alu.io.x
		io.reg_out := register.io.WriteData

		io.branch:=control.io.Branch2
		io.branch2:=alu.io.AluBranch
		when(control.io.operand_A_sel===2.U){
			alu.io.A:=PC.io.pc4.asSInt
		}.elsewhen(control.io.operand_A_sel===0.U){
			alu.io.A:=register.io.rs1
		}
	/*JALR*/when (control.io.next_PC_sel===1.U){
			when(io.branch ===1.U & io.branch2 === 1.U){
				PC.io.input:=immediate.io.SB_Immediate.asUInt
			}.otherwise{
				PC.io.input:= PC.io.pc + 4.U
			}
		}.elsewhen(control.io.next_PC_sel===3.U){
				val JALR=Module(new Jalr()) 
				JALR.io.A:=register.io.rs1
				JALR.io.B:=immediate.io.I_Immediate
				PC.io.input:=JALR.io.x.asUInt
		}.elsewhen(control.io.next_PC_sel===2.U){
			PC.io.input:=immediate.io.UJ_Immediate.asUInt
			
		}.elsewhen(control.io.next_PC_sel===0.U){
			PC.io.input:=PC.io.pc4
		}				
			when(control.io.extend_sel===2.U){
			PC.io.input:=PC.io.pc4
			alu.io.A:=register.io.rs1
			alu.io.B:=immediate.io.S_Immediate
		}
			when(control.io.extend_sel===1.U){
				when(control.io.operand_A_sel===3.U){
					when(control.io.operand_B_sel===1.U){
						alu.io.A:=register.io.rs1
						alu.io.B:=immediate.io.U_Immediate
							when(control.io.MemtoReg===1.U){
								register.io.WriteData:=alu.io.x
							}
						}
					}
				}
			
						
		

		DataMemory.io.wrAddr:=alu.io.x(9,2)
		DataMemory.io.wrData:=register.io.rs2
		DataMemory.io.MemRead:=control.io.MemRead
		DataMemory.io.MemWrite:=control.io.MemoryWrite
		when(control.io.MemtoReg ===1.U){		
			register.io.WriteData:=DataMemory.io.Data
		}.elsewhen(control.io.MemtoReg ===0.U){	
			register.io.WriteData:=alu.io.x
		}*/
}
