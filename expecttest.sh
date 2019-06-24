#!/bin/bash
commit=$1
git add *
git commit -m "$commit"
expect << EOF
set timeout -1
spawn git push
expect "Username*"
send "karry520\r"
expect "Password*"
send "654123githubLKY\r"
sleep 25
interact
EOF
echo "完毕"

