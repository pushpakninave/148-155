#! /bin/bash

read -p "Enter a number to calculate factorial: " n

fact(){
  local n=$1
  if [ $n -eq 0 ] || [ $n -eq 1 ]; then
    echo 1
  else
    echo $((n * $(fact $((n - 1)))))
  fi
}

echo "----"
echo "Factorial of $n is $(fact $n)"
echo "----"
