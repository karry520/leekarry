#!/bin/bash
commit=$1
git add *
sleep 2
git commit -m "$commit"
sleep 2
expect << EOF
set timeout 60
spawn git push
expect "Username*"
send "karry520\r"
expect "Password*"
send "654123githubLKY\r"
sleep 30
interact
EOF
echo "完毕"

