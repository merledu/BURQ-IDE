
cd ~
cd /home/monis/Desktop/Burq/riscv32/bin
export PATH=/home/monis/Desktop/Burq/riscv32/bin/:$PATH
clear

echo "Testing Output"

cd ~
sleep 0.5
echo "Verifying Output with the IDE"
sleep 0.5
sleep 0.5
cd /home/monis/Desktop/Burq/
export PATH=/home/monis/Desktop/Burq/:$PATH
python3 /home/monis/Desktop/Burq/automate_verilog.py
  
exit
$SHELL

