# BURQ-IDE
This Repository Contains Source Code for the Burq-ide project 


# Burq_IDE Cloning 
    
~~~
   1. To Start First Clone the library to your home directory
   2. Run the username.py to change all the paths to your local machine directory.
   3. For the Gnu-toolchain since its required to have an up-to-date version of this run Gnu-toolchain-setup.sh via terminal as ./Gnu-toolchain-setup.sh

To get all the libraries and dependencies installed for the project run this command
~~~
~~~
To install all dependencies
./dependencies.sh
~~~
~~~
It can take for both commands any where from 30min to 3hr depending on your machine and internet connection.
For pictorial view click on the thread wiki

How ever if the above does not work due to some reason then try the below wiki otherwise skip 
~~~

# Second Method


# UPDATE TO THE TERMINAL Widget
The rxvt-unicode terminal has been removed from the project because of its rescaling issue and is replaced by QTermWidget
But in order to use it some libraries and pre-compilation is required.
1. sudo -H pip3 install -U pyqt5 pyqtwebengine
2. sudo apt install python3-sip-dev python3-pyqt5
3. Then Run this,

mkdir -p /tmp/EAF && cd /tmp/EAF
git clone https://github.com/lxqt/qtermwidget  
cd qtermwidget  
mkdir build && cd build  
cmake .. -DQTERMWIDGET_BUILD_PYTHON_BINDING=ON -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_INSTALL_LIBDIR=/usr
make && sudo make install

4. But if for some reason it gives you this error
~~~
 87%] Built target qtermwidget5
Byte-compiling /tmp/EAF/qtermwidget/build/pyqt//__init__.py to /tmp/EAF/qtermwidget/build/pyqt//__pycache__/__init__.cpython-36.pyc
[ 87%] Built target __tmp_EAF_qtermwidget_build_pyqt____pycache_____init__.cpython-36.pyc
[ 89%] Generating sip/sipQTermWidgetpart0.cpp, sip/sipQTermWidgetpart1.cpp, sip/sipQTermWidgetpart2.cpp, sip/sipQTermWidgetpart3.cpp, sip/sipQTermWidgetpart4.cpp, sip/sipQTermWidgetpart5.cpp, sip/sipQTermWidgetpart6.cpp, sip/sipQTermWidgetpart7.cpp

sip: Unable to find file "QtGui/QtGuimod.sip"
pyqt/CMakeFiles/python_module_QTermWidget.dir/build.make:62: recipe for target 'pyqt/sip/sipQTermWidgetpart0.cpp' failed
make[2]: *** [pyqt/sip/sipQTermWidgetpart0.cpp] Error 1
make[2]: *** Deleting file 'pyqt/sip/sipQTermWidgetpart0.cpp'
CMakeFiles/Makefile2:179: recipe for target 'pyqt/CMakeFiles/python_module_QTermWidget.dir/all' failed
make[1]: *** [pyqt/CMakeFiles/python_module_QTermWidget.dir/all] Error 2
Makefile:129: recipe for target 'all' failed
make: *** [all] Error 2
~~~
5. Then you would need to compile it in root
# Root compilation
1. start by typing sudo -i in the terminal
2. Then execute these commands (This may take 30 to 90 minutes depending on your machine and internet connection)
~~~
sudo apt-get update && apt-get install \
    -y --no-install-recommends \
    build-essential \
    git \
    ca-certificates \
    wget \
    cmake \
    pkg-config \
    python3-dev \
    libglib2.0-dev \
    qt5-default \
    qttools5-dev

mkdir -p /tmp/EAF

cd /tmp/EAF && \
    git clone https://github.com/lxqt/lxqt-build-tools.git \
    && cd lxqt-build-tools \
    && mkdir build && cd build \
    && cmake .. \
    && make && sudo make install

cd /tmp/EAF && \
    wget https://www.riverbankcomputing.com/static/Downloads/sip/4.19.24/sip-4.19.24.tar.gz&& \
    tar xvzf sip-4.19.24.tar.gz&& \
    cd ssip-4.19.24&& \
    python3 configure.py --sip-module PyQt5.sip && \
    make && \
    sudo make install

cd /tmp/EAF && \
    wget https://www.riverbankcomputing.com/static/Downloads/PyQt5/PyQt5-5.15.2.dev2010041344.tar.gz && \
    tar xvzf PyQt5-5.15.2.dev2010041344.tar.gz && \
    cd PyQt5-5.15.2.dev2010041344 && \
    python3 configure.py --confirm-license && \
    make && \
    sudo make install

cd /tmp/EAF && \
    git clone https://github.com/lxqt/qtermwidget \
    && cd qtermwidget \
    && mkdir build && cd build \
    && cmake .. -DQTERMWIDGET_BUILD_PYTHON_BINDING=ON -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_INSTALL_LIBDIR=/lib \
    && make && sudo make install
    
~~~
3. Then after that exit root by typing exit or ctrl-z then type these commands,
~~~
cd /tmp/EAF && cd qtermwidget      
&& cd build     
&& cmake .. -DQTERMWIDGET_BUILD_PYTHON_BINDING=ON -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_INSTALL_LIBDIR=/lib     
&& make && sudo make install
~~~
4. Then you are good to go 

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
22. pip3 install sip


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


   
