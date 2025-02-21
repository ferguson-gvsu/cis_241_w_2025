#! /bin/bash

age=$1
echo "Age is: $age"
echo "Double age is: $((2 * age))"

if [ $age -ge 65 ] 
then
  echo "You're ready to retire"
elif [ $age -ge 60 ]
then
  echo "You're getting close!"
else 
  echo "gg loser"
fi


if (( $age >= 65 )) 
then
  echo "You're ready to retire again"
fi
