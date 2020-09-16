#!/bin/bash
#define password 
export TERM=xterm



cd ~
sudo apt-get install git
sudo apt-get install tree

  
exit


cd ~
echo "started installing libraries"
sudo apt-get install gtkwave
sudo apt-get install git
sudo apt-get install make
sudo apt-get update
sudo apt-get upgrade
sudo apt-get install gcc # not cross
sudo apt-get install g++
sudo apt-get install make
sudo apt-get install bison
sudo apt-get install flex
sudo apt-get install gawk
sudo apt-get install libgmp3-dev
sudo apt-get install libmpfr-dev libmpfr-doc libmpfr4 libmpfr4-dbg #This may or maynot work as the mirror seems missing
sudo apt-get install mpc
sudo apt-get install texinfo # optional
sudo apt-get install libcloog-isl-dev # optional
sudo apt-get install build-essential #This may or maynot work as the mirror seems missing
sudo apt-get install glibc-devel #This may or maynot work as the mirror seems missing
sudo apt-get -y install gcc-multilib libc6-i386 #This may or maynot work as the mirror seems missing
sudo apt install Zlib #This may or maynot work as the mirror seems missing
sudo apt-get install tree
sudo apt-get install sip
pip3 install sip
sleep 1
sudo -H pip3 install -U pyqt5 pyqtwebengine
sudo apt install python3-sip-dev python3-pyqt5
sudo ./qtermwidget-setup.sh
sleep 1
cd /tmp/EAF && cd qtermwidget      
&& cd build     
&& cmake .. -DQTERMWIDGET_BUILD_PYTHON_BINDING=ON -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_INSTALL_LIBDIR=/lib     
&& make && sudo make install
exit

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
    wget https://www.riverbankcomputing.com/static/Downloads/sip/4.19.19/sip-4.19.19.tar.gz && \
    tar xvzf sip-4.19.19.tar.gz && \
    cd sip-4.19.19 && \
    python3 configure.py --sip-module PyQt5.sip && \
    make && \
    sudo make install

cd /tmp/EAF && \
    wget https://www.riverbankcomputing.com/static/Downloads/PyQt5/5.13.2/PyQt5-5.13.2.tar.gz && \
    tar xvzf PyQt5-5.13.2.tar.gz && \
    cd PyQt5-5.13.2 && \
    python3 configure.py --confirm-license && \
    make && \
    sudo make install

cd /tmp/EAF && \
    git clone https://github.com/lxqt/qtermwidget \
    && cd qtermwidget \
    && mkdir build && cd build \
    && cmake .. -DQTERMWIDGET_BUILD_PYTHON_BINDING=ON -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_INSTALL_LIBDIR=/lib \
    && make && sudo make install

exit

cd ~
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
exit


