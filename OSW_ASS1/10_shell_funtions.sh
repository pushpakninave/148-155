#!/bin/bash

# Function to concatenate two strings
concat_strings() {
    local str1="$1"
    local str2="$2"
    echo "$str1$str2"
}

# Function to find the length of a string
get_string_length() {
    local str="$1"
    echo "${#str}"
}

# Function to compare two strings
compare_strings() {
    local str1="$1"
    local str2="$2"
    if [ "$str1" == "$str2" ]; then
        echo "Strings are equal"
    else
        echo "Strings are not equal"
    fi
}

# Function to check if a string is a palindrome
is_palindrome() {
    local str="$1"
    local reversed_str=$(echo "$str" | rev)
    if [ "$str" == "$reversed_str" ]; then
        echo "The string is a palindrome"
    else
        echo "The string is not a palindrome"
    fi
}

# Function to print a string in reverse order
print_reverse() {
    local str="$1"
    echo "$str" | rev
}
concat_strings "Hello" "World"
get_string_length "Anthropic"
compare_strings "Anthropic" "anthropic"
is_palindrome "racecar"
print_reverse "Anthropic"

