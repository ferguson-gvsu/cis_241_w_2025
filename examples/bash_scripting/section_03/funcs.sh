#! /bin/bash

function test_func() { 
  echo "This is my function!"
  echo "First arg: $1"
  echo "Second arg: $2"
  echo "Third arg: $3"
}

test_func 
test_func a
test_func a b
test_func $1 $2

