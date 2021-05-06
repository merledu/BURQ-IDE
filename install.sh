#!/bin/bash
#define password 

cd ~
sudo update-alternatives --install /usr/bin/python python /usr/bin/python3 10
sudo apt install python3-pip
sudo apt-get install make
sudo apt-get install build-essential
sudo apt-get install pyqt5-dev
sudo apt-get install gcc 
sudo apt-get install g++
sudo apt-get install glibc-devel
sudo apt-get -y install gcc-multilib libc6-i386
sudo apt-get install cmake
sudo apt-get install python3-pyqt5  
sudo apt-get install python-dev python3-dev
sudo apt-get install pyqt5-dev-tools
sudo apt-get install qttools5-dev-tools
sudo apt-get install qt5-default
sudo apt-get install -y qt5-default
sudo apt-get install qttools5-dev
sudo apt-get install -y sip-dev
pip3 install PyQt5
pip3 install PyQt5-sip
pip3 install sip
cd ~
mkdir -p /tmp/EAF

cd /tmp/EAF 
git clone https://github.com/lxqt/lxqt-build-tools.git 
cd lxqt-build-tools 
mkdir build 
cd build 
cmake .. 
make 
sudo make install
cd ~

cd /tmp/EAF
git clone https://github.com/lxqt/qtermwidget 
cd qtermwidget 
mkdir build
cd build 
cmake .. -DQTERMWIDGET_BUILD_PYTHON_BINDING=ON -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_INSTALL_LIBDIR=/lib 
make 
sudo make install
sleep (0.5)
exit
