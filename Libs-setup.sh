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
$SHELL

