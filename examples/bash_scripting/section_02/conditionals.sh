#! /bin/bash

age=$1
double_age=$((2*age))

echo "The age is: $age"
echo "Double the age is: ${double_age}"


if [ $age -ge 65 ]
then 
  echo "You're clear for retirement."
elif [ $age -ge 60 ]
then
  echo "You're getting close!"
else
  echo "gg loser"
fi


if (( $age >= 65 ))
then 
  echo "You're clear for retirement again"
fi

