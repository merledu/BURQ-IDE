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
