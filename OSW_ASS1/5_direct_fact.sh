#!/bin/bash

# Function to calculate factorial recursively
factorial() {
    local n=$1

    if [ $n -eq 0 ] || [ $n -eq 1 ]; then
        echo 1
    else
        local result=$((n * $(factorial $((n - 1)))))
        echo $result
    fi
}

# Get the number from the user
read -p "Enter a number: " num

# Calculate the factorial
result=$(factorial $num)

# Display the result
echo "The factorial of $num is: $result"
