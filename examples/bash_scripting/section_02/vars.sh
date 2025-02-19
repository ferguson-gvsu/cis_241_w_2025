#! /bin/bash

echo "We were passed $# arguments"
echo "They are: $*"

echo "This is a test!"
echo "The 0th arg is $0"
echo "The 1st arg is $1"
echo "The 2nd arg is $2"
echo "The 10th arg is ${10}"

msg="This is a test"
echo "$msg"

msg="The message is: $msg + some additional info"
echo "$msg"

age=72
echo "Age is $age"
age=$(( age * 2 % 100 ))
echo "Age is $age"
echo "$((age+=2))"
echo "Age is $age"
age=$((age+1))

str=foo
echo "${str}backup.txt"


