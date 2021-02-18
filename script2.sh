

cd /home/monis/Desktop/Burq/riscv32/bin
export PATH=/home/monis/Desktop/Burq/riscv32/bin/:$PATH
clear


riscv32-unknown-elf-gcc /home/monis/Desktop/Burq/test.c -o /home/monis/Desktop/Burq/test | gcc /home/monis/Desktop/Burq/test.c 2> /home/monis/Desktop/Burq/meralog.txt 
sleep 0.5
riscv32-unknown-elf-objdump -d /home/monis/Desktop/Burq/test >/home/monis/Desktop/Burq/test.txt
sleep 0.5
python3 /home/monis/Desktop/Burq/python.py
sleep 0.5
echo "Compilation Completed !!"
exit
$SHELL

