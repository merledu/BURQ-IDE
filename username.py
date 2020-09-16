import getpass
username = getpass.getuser()
print(username)
use="/home/"+username+"/learning-journey"
use2="/home/"+username+"/Desktop/Burq/newui"

#input script 2
script2=open(use+"/script2.sh","rt")
data2=script2.read()
data2=data2.replace('monis',username)
script2.close()
print(data2)
script_2=open(use+"/script2.sh","wt")
script_2.write(data2)
script_2.close()

#input script 5
script5=open(use+"/script5.sh","rt")
data5=script5.read()
data5=data5.replace('monis',username)
script5.close()
print(data5)
script_5=open(use+"/script5.sh","wt")
script_5.write(data5)
script_5.close()

#input script 6
script6=open(use+"/script6.sh","rt")
data6=script6.read()
data6=data6.replace('monis',username)
script6.close()
print(data6)
script_6=open(use+"/script6.sh","wt")
script_6.write(data6)
script_6.close()

#input script 7
script7=open(use+"/script7.sh","rt")
data7=script7.read()
data7=data7.replace('monis',username)
script7.close()
print(data7)
script_7=open(use+"/script7.sh","wt")
script_7.write(data7)
script_7.close()

#input test.py
test_py=open(use+"/test.py","rt")
data_test_py=test_py.read()
data_test_py=data_test_py.replace('monis',username)
test_py.close()
test_py=open(use+"/test.py","wt")
test_py.write(data_test_py)
test_py.close()

#input test.txt
test=open(use+"/test.txt","rt")
data_test=test.read()
data_test=data_test.replace('monis',username)
test.close()
test=open(use+"/test.txt","wt")
test.write(data_test)
test.close()

#input python.py
python=open(use+"/python.py","rt")
data_python=python.read()
data_python=data_python.replace('monis',username)
python.close()
python=open(use+"/python.py","wt")
python.write(data_python)
python.close()

#input autocheck.py
autocheck=open(use+"/autocheck.py","rt")
data_autocheck=autocheck.read()
data_autocheck=data_autocheck.replace('monis',username)
autocheck.close()
autocheck=open(use+"/autocheck.py","wt")
autocheck.write(data_autocheck)
autocheck.close()

#input automate.py
automate=open(use+"/automate.py","rt")
data_automate=automate.read()
data_automate=data_automate.replace('monis',username)
automate.close()
automate=open(use+"/automate.py","wt")
automate.write(data_automate)
automate.close()

#input automate_verilog.py
automate_verilog=open(use+"/automate_verilog.py","rt")
data_automate_verilog=automate_verilog.read()
data_automate_verilog=data_automate_verilog.replace('monis',username)
automate_verilog.close()
automate_verilog=open(use+"/automate_verilog.py","wt")
automate_verilog.write(data_automate_verilog)
automate_verilog.close()

#input instructionMemory.scala
instructionMemory=open(use+"/5-stage-Pipelined-CPU/RV32i/src/main/scala/datapath/InstructionMemory.scala","rt")
data_instructionMemory=instructionMemory.read()
data_instructionMemory=data_instructionMemory.replace('monis',username)
instructionMemory.close()
instructionMemory=open(use+"/5-stage-Pipelined-CPU/RV32i/src/main/scala/datapath/InstructionMemory.scala","wt")
instructionMemory.write(data_instructionMemory)
instructionMemory.close()

#input LightW.py
LightW=open(use2+"/LightW.py","rt")
data_LightW=LightW.read()
data_LightW=data_LightW.replace('monis',username)
LightW.close()
LightW=open(use2+"/LightW.py","wt")
LightW.write(data_LightW)
LightW.close()

#input Extraction.py
Extraction=open(use2+"/Extraction.py","rt")
data_Extraction=Extraction.read()
data_Extraction=data_Extraction.replace('monis',username)
Extraction.close()
Extraction=open(use2+"/Extraction.py","wt")
Extraction.write(data_Extraction)
Extraction.close()
