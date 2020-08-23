// See LICENSE.txt for license details.
package datapath

import chisel3.iotesters.{Driver, TesterOptionsManager}
import utils.TutorialRunner

object Launcher {
  val examples = Map(
	"InstructionTypeDecode" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new InstructionTypeDecode(), manager) {
          (c) => new InstructionTypeDecodeTests(c)
        }
      },"control_decode" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new control_decode(), manager) {
          (c) => new control_decodeTests(c)
        }
      },"ALU_control" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new ALU_control(), manager) {
          (c) => new ALU_controlTests(c)
        }
      },"ImmediateGeneration" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new ImmediateGeneration(), manager) {
          (c) => new immediategenerationTests(c)
        }
      },"alu" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new alu(), manager) {
          (c) => new aluTests(c)
        }
	},"reg_32" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new reg_32(), manager) {
          (c) => new reg_32Tests(c)
        }
	},"control" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new control(), manager) {
          (c) => new controlTests(c)
        }
	}/*,"Top" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Top(), manager) {
          (c) => new TopTests(c)
        }
	}*/,"Jalr" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Jalr(), manager) {
          (c) => new JalrTests(c)
        }
	},"PC" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new PC(), manager) {
          (c) => new PCTests(c)
        }
	},"InstructionMemory" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new InstructionMemory(), manager) {
          (c) => new InstructionMemoryTests(c)
        }
	},"Top2" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Top2(), manager) {
          (c) => new Top2Tests(c)
        }
	},"MEM_WB" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new MEM_WB(), manager) {
          (c) => new MEM_WBTests(c)
        }
	},"ID_EX" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new ID_EX(), manager) {
          (c) => new ID_EXTests(c)
        }
	},"IF_DEC" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new IF_DEC(), manager) {
          (c) => new IF_DECTests(c)
        }
	},"EX_MEM" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new EX_MEM(), manager) {
          (c) => new EX_MEMTests(c)
        }
	},"DataMemory" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new DataMemory(), manager) {
          (c) => new DataMemoryTests(c)
        }
	},"Forwarding" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Forwarding(), manager) {
          (c) => new ForwardingTests(c)
        }
	},"HazardDetect" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new HazardDetect(), manager) {
          (c) => new HazardDetectTests(c)
        }
	},"branchlogic" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new branchlogic(), manager) {
          (c) => new branchlogicTests(c)
        }
	},"branchforward" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new branchforward(), manager) {
          (c) => new branchforwardTests(c)
        }
	},"structdetect" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new structdetect(), manager) {
          (c) => new structdetectTests(c)
        }
	}
  )
  def main(args: Array[String]): Unit = {
    TutorialRunner("examples", examples, args)
  }
}

