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
sudo ./setup-tool.sh

cd ~
sudo apt-get install git
sudo apt-get install tree

  
exit
$SHELL

