#! /bin/bash

read -p "Please enter the value of rows to print the pattern: " n
echo "----"
for((i=1;i<=$n;i++))
  do
    for((j=1;j<=i;j++))
    do
      echo -n "* "
    done
    echo
  done
echo "----"
