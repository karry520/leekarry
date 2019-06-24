#!/bin/bash
commit=$1
git add *
git commit -m "$commit"
expect << EOF
spawn git push
expect {
    "Username*" {set timeout 10;send "karry520\r";exp_continue;}
    "Password*" {set timeout 10;send "654123githubLKY\r";}
}
interact
EOF
echo "完毕"

