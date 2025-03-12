#!/bin/bash

# Check if exactly one argument is provided
if [ "$#" -eq 0 ]; then
    echo "Error: Usage - ./9_file_type_checker.sh [file 1] [file 2] ... ."
    exit 1
fi
for file in "$@"
    do
        if [ ! -e "$file" ]
        then
            echo "$file: no such file in dir."
        fi
        # Get the file type
        file_type=$(file -b "$1")
        # Print the file type
        echo "The file type of '$1' is: $file_type"
    done
