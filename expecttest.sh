#!/bin/bash
commit=$1
git add *
git commit -m "$commit"
/usr/bin/expect<<-EOF
set timeout 2
spawn git push
expect "Username:"
send "karry520\r"
expect "Password"
send "654123githubLKY\r"
interact 
