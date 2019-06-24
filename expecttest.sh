#!/bin/bash
commit=$1
git add *
git commit -m "$commit"
/usr/bin/expect<<-EOF
set timeout 5
spawn git push
expect {
    "Username*"{send "karry520\r";exp_continue}
    "Password*"{send "654123githubLKY\r"}
}
interact
expect eof
EOF
