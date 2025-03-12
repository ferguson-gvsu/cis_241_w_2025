#! /bin/bash

function test_func(){
  echo "inside the function"
  echo "You passed: $1"
  echo "You passed: $2"
  ls
}

test_func
test_func a
test_func a b
