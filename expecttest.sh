#!/bin/bash
commit=$1
git add *
git commit -m "$commit"
/usr/bin/expect<<-EOF
set timeout 2
spawn git push
expect "username:"
send "karry520\r"
expect "password"
send "654123githubLKY\r"
interact 
