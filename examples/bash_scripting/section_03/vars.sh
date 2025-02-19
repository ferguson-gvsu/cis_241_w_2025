#! /bin/bash

echo "Hello world!"

echo "Number of arguments: $#"
echo "They are: $*"

echo "The 0th argument is $0"
echo "The 1st argument is $1"
echo "The 2nd argument is $2"
echo "The 10th argument is ${10}"

age=72
msg="This is a test"

echo "Age is: $age"
echo 'Age is: $age'

filename=out
echo "$filenamebackup"
echo "${filename}backup"

num_lines=$(wc -l < vars.sh)
echo "This file has ${num_lines} lines"

echo "Twice the number of lines is: $(( num_lines * 2 ))"
echo "The square number of lines is: $(( num_lines ** 2 ))"
echo "The square number of lines is (mod 100): $(( num_lines ** 2 % 100))"

echo "Increment num_lines: $((++num_lines))"
echo "This file has ${num_lines} lines"
