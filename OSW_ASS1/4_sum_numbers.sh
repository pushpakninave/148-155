#! /bin/bash

read -p "Enter a number to calculate sum till n: " n

echo "----"
sum=0
for((i=1;i<=n;i++))
  do
    sum=$((sum+i))
done
echo "sum is = $sum"
echo "----"
