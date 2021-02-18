import getpass
from pathlib import Path
import re
path=Path().absolute() 
print(path)
path=str(path)
use=path
use2=path+'/newui'
use3=re.sub("/Burq","",use)
print(use)
print(use2)
print(path)

#input test.py
test_py=open(use+"/test.py","rt")
data_test_py=test_py.read()
data_test_py=data_test_py.replace('home/monis/Desktop/Burq',path)
test_py.close()
test_py=open(use+"/test.py","wt")
test_py.write(data_test_py)
test_py.close()





#input test.txt
test=open(use+"/test.txt","rt")
data_test=test.read()
data_test=data_test.replace('home/monis/Desktop/Burq',path)
test.close()
test=open(use+"/test.txt","wt")
test.write(data_test)
test.close()






#input python.py
python=open(use+"/python.py","rt")
data_python=python.read()
data_python=data_python.replace('home/monis/Desktop/Burq',path)
python.close()
python=open(use+"/python.py","wt")
python.write(data_python)
python.close()





#input autocheck.py
autocheck=open(use+"/autocheck.py","rt")
data_autocheck=autocheck.read()
data_autocheck=data_autocheck.replace('home/monis/Desktop/Burq',path)
autocheck.close()
autocheck=open(use+"/autocheck.py","wt")
autocheck.write(data_autocheck)
autocheck.close()







#input automate.py
automate=open(use+"/automate.py","rt")
data_automate=automate.read()
data_automate=data_automate.replace('home/monis/Desktop/Burq',path)
automate.close()
automate=open(use+"/automate.py","wt")
automate.write(data_automate)
automate.close()





#input automate_verilog.py
automate_verilog=open(use+"/automate_verilog.py","rt")
data_automate_verilog=automate_verilog.read()
data_automate_verilog=data_automate_verilog.replace('home/monis/Desktop/Burq',path)
automate_verilog.close()
automate_verilog=open(use+"/automate_verilog.py","wt")
automate_verilog.write(data_automate_verilog)
automate_verilog.close()





#input instructionMemory.scala
instructionMemory=open(use+"/5-stage-Pipelined-CPU/RV32i/src/main/scala/datapath/InstructionMemory.scala","rt")
data_instructionMemory=instructionMemory.read()
data_instructionMemory=data_instructionMemory.replace('home/monis/Desktop/Burq',path)
instructionMemory.close()
instructionMemory=open(use+"/5-stage-Pipelined-CPU/RV32i/src/main/scala/datapath/InstructionMemory.scala","wt")
instructionMemory.write(data_instructionMemory)
instructionMemory.close()


#input LightW.py
LightW=open(use2+"/LightW.py","rt")
data_LightW=LightW.read()
data_LightW=data_LightW.replace('home/monis/Desktop/Burq',path)
LightW.close()
LightW=open(use2+"/LightW.py","wt")
LightW.write(data_LightW)
LightW.close()







#input Extraction.py
Extraction=open(use2+"/Extraction.py","rt")
data_Extraction=Extraction.read()
data_Extraction=data_Extraction.replace('home/monis/Desktop/Burq',path)
Extraction.close()
Extraction=open(use2+"/Extraction.py","wt")
Extraction.write(data_Extraction)
Extraction.close()

#Input main.Desktop
Desktop=open(use+"/main.Desktop","rt")
data=Desktop.read()
data=data.replace('/home/monis/Desktop/Burq',path)
Desktop.close()
desktop=open(use3,"wt")
desktop.write(data)
desktop.close()



