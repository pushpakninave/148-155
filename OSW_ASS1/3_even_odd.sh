#! /bin/bash

read -p "Enter a number to check even or odd: " n
echo "----"

if [ $((n%2)) -eq 0 ]; then
   echo "$n is even"
else
  echo "$n is odd"
fi
echo "----"
