#!/bin/bash

# Check if a directory name is provided as an argument
if [ "$#" -ne 1 ] || [ ! -d "$1" ]; then
    echo "Usage: $0 <directory_name>"
    exit 1
fi

# Get the directory name from the argument
dir_name="$1"

# Count the number of files in the directory
file_count=$(find "$dir_name" -maxdepth 1 -type f | wc -l)

# Display the file count
echo "The number of files in $dir_name is: $file_count"

