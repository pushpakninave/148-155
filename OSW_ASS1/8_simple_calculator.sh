#!/bin/bash

display_menu(){
  echo "Simple calculator:"
  echo "---------------------"
  echo "select options from below:"
  echo "1. Addition"
  echo "2. Substraction"
  echo "3. Multiplication"
  echo "4. Division"
}

calculate(){
  case $1 in
    1) result=$(echo "$2 + $3" | bc) ;;
    2) result=$(echo "$2 - $3" | bc) ;;
    3) result=$(echo "$2 * $3" | bc) ;;
    4) 
      if [ "$3" -eq 0 ]; then
        echo "Infinity"
        return
      fi 
        result=$(echo "scale=2; $2 / $3" | bc) ;;
    *) echo "Invalid option." ;;
  esac 
  echo "Result: $result"
}

while true; do
  read -p "Enter first number: " num1    
  read -p "Enter second number: " num2   
  
  display_menu

  read -p "Select an option (1-5): " option
  if [ "$option" -gt 4 ]; then
    echo "Exiting the calculator, Goodbye!"
  fi 
  

  calculate "$option" "$num1" "$num2"

  echo ""
done
