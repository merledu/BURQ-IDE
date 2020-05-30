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


clear
clear
echo "Starting Run-Test"
echo "Code Output Saved to Output Tab"

$SHELL

