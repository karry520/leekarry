#!/bin/bash
commit=$1
git add *
git commit -m "$commit"
expect << EOF
spawn git push
expect {
    "Username*" {set timeout 2;send "karry520\r";exp_continue;}
    "Password*" {set timeout 5;send "654123githubLKY\r";}
}
interact
EOF
echo "完毕"

