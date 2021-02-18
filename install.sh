#!/bin/bash
#define password 

cd ~
sudo apt install python3-pip
sudo apt-get install make
sudo apt-get install gcc 
sudo apt-get install g++
sudo apt-get install glibc-devel
sudo apt-get -y install gcc-multilib libc6-i386
sudo apt-get install cmake
sudo apt-get install python3-pyqt5  
sudo apt-get install python-dev python3-dev
sudo apt-get install pyqt5-dev-tools
sudo apt-get install qttools5-dev-tools
sudo apt-get install -y qt5-default
sudo apt-get install qttools5-dev
sudo apt-get install -y sip-dev
sudo dpkg -i /home/virtual/Desktop/Burq/lxqt-build-tools_0.7.0-0ubuntu1_all.deb
pip3 install PyQt5-sip
cd ~
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
sleep (0.5)
exit
