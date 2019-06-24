#!/bin/bash
commit=$1
git add *
git commit -m "$commit"
/usr/bin/expect<<-EOF
set timeout 5
spawn git push
expect {
    "Username*" {set timeout 2;send "karry520\r";exp_continue;}
    "Password*" {set timeout 5;send "654123githubLKY\r";}
}
interact
