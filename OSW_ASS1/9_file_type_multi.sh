#!/bin/bash

# Check if at least one argument is provided
if [ -z "$1" ]; then
    echo "Usage: $0 <file1> [file2] [file3] ..."
    exit 1
fi

# Loop through all the arguments
for file in "$@"; do
    # Check the file type
    if [ -f "$file" ]; then
        echo "$file is a regular file"
    elif [ -d "$file" ]; then
        echo "$file is a directory"
    elif [ -L "$file" ]; then
        echo "$file is a symbolic link"
    elif [ -b "$file" ]; then
        echo "$file is a block device"
    elif [ -c "$file" ]; then
        echo "$file is a character device"
    elif [ -p "$file" ]; then
        echo "$file is a named pipe"
    elif [ -S "$file" ]; then
        echo "$file is a socket"
    else
        echo "$file is of unknown type"
    fi
done

