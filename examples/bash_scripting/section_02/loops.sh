#! /bin/bash

echo "Hardcoded ints"
for x in 1 2 3 4 5
do
  echo "Currently: $x"
done


echo "Hardcoded chars"
for x in "a" "b" "c"
do
  echo "Currently: $x"
done

echo "Ranges"
for x in {0..10}
do
  echo "Currently: $x"
done

echo "Ranges with step"
for x in {0..100..10}
do
  echo "Currently: $x"
done

echo "????"
for x in $@
do
  echo "Currently: $x"
done

echo "seq"
for x in $(seq 0 10)
do
  echo "Currently: $x"
done

echo "Iterating over a command result"
for x in $(ls)
do
  echo "Currently: $x"
done

declare -a map
map[foo]=5
echo "${map[foo]}"
