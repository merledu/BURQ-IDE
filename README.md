# BURQ-IDE
This Repository Contains Source Code for the Burq-ide project 

First some prerequesties
1. sudo apt-get install gtkwave
2. sudo apt-get install git
3. sudo apt-get install make
4. sudo apt-get update
5. sudo apt-get upgrade
6. sudo apt-get install gcc # not cross
7. sudo apt-get install g++
8. sudo apt-get install make
9. sudo apt-get install bison
10. sudo apt-get install flex
11. sudo apt-get install gawk
12. sudo apt-get install libgmp3-dev
13. sudo apt-get install libmpfr-dev libmpfr-doc libmpfr4 libmpfr4-dbg #This may or maynot work as the mirror seems missing
14. sudo apt-get install mpc
15. sudo apt-get install texinfo # optional
16. sudo apt-get install libcloog-isl-dev # optional
17. sudo apt-get install build-essential      #This may or maynot work as the mirror seems missing
18. sudo apt-get install glibc-devel        #This may or maynot work as the mirror seems missing
19. sudo apt-get -y install gcc-multilib libc6-i386       #This may or maynot work as the mirror seems missing
20. sudo apt install Zlib             #This may or maynot work as the mirror seems missing
21. sudo apt-get install tree
22. sudo apt-get install sip
23. sudo apt-get install QScintilla

## Cloning the GCC COMPILER

1. open your terminal and write cd ~
2. write sudo -i and write your password now you are on your root directory
3. Now create a folder by using mkdir build the go to the directory using the command cd /build.
4 .Now write another command on terminal git clone --recursive https://github.com/riscv/riscv-gnu-toolchain it will take half an hour approx or maybe more depending on your machine and internet connection.
5. after cloning riscv-gnu-toolchain a folder name as riscv-gnu-toolchain created in your root director no go to in that folder by using this command cd /build/riscv-gnu-toolchain/
6. Now create another folder or directory inside riscv-gnu-toolchain folder by using this command mkdir build now go inside this folder by writing cd build.
7. Now write this command on your command line ../configure --prefix=/opt/riscv32 --with-arch=rv32im --with-abi=ilp32 it will take few minutes.
8. Now type make on your command line it will take more than half an hour or more depending on your machine.
9. after running the make command you have to make sure that the files or directory i am providing you below must be in your PC you can check it by writing ls $ ls build-binutils-newlib build-gcc-newlib-stage2 build-newlib config.log install-newlib-nano scripts build-gcc-newlib-stage1 build-gdb-newlib build-newlib-nano config.status Makefile stamps make sure these 12 directory must be in your pc.
10. Now finally write this command on your command line tree -L 3 -d

# Congratulations! you are done with your cloning process.
Now lets start for the burq_ide cloneing process

# Burq_IDE Cloning 
    
~~~1. To Start First Clone the library to your home directory
   2. Then Take the learning-journey folder inside the directory and paste it in the home directory 
   3. Then open the learning journey folder and do the following steps.
   4. change the path names in script 1,2,3 from farooq to your username.
   5. change the path name in the instructionmemory file in src/main/scala/datapath.
   
