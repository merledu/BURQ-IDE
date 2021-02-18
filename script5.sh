
cd /home/monis/Desktop/Burq/riscv32/bin
export PATH=/home/monis/Desktop/Burq/riscv32/bin/:$PATH
clear

echo "Compilation Started !!"


sleep 0.5
echo "Compiling Sources from editor !!"
sleep 0.5
sleep 0.5
cd /home/monis/Desktop/Burq/
export PATH=/home/monis/Desktop/Burq/:$PATH
gcc test.c
./a.out > output.txt
python3 /home/monis/Desktop/Burq/autocheck.py
  
exit
$SHELL

