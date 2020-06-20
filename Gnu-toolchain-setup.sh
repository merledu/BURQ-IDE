#!/bin/bash
#define password 
export TERM=xterm
export pass = "your-root-password"
spawn ssh root@remotehost 

# detect password prompt
expect "*?assword:*"

# send $password
send -- "$pass\r"

#return 
send -- "\r"
expect eof


cd ~
sudo apt-get install git
sudo apt-get install tree
sudo -i
mkdir build
sleep 0.5
cd build
git clone --recursive https://github.com/riscv/riscv-gnu-toolchain
cd riscv-gnu-toolchain
sleep 0.5
mkdir build
sleep 0.5
cd build
../configure --prefix=/opt/riscv32 --with-arch=rv32im --with-abi=ilp32
sleep 0.5
make
sleep 0.5
ls build-binutils-newlib build-gcc-newlib-stage2 build-newlib config.log install-newlib-nano scripts build-gcc-newlib-stage1 build-gdb-newlib build-newlib-nano config.status
sleep 0.5
tree -L 3 -d
logout
  
exit
$SHELL

