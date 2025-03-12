#!/bin/bash

# Check if a directory name is provided as an argument
if [ "$#" -ne 1 ] || [ ! -d "$1" ]; then
    echo "Usage: $0 <directory_name>"
    exit 1
fi

# Get the directory name from the argument
dir_name="$1"

# Calculate the total size of the directory in bytes
total_size=$(du -sb "$dir_name" | cut -f1)

# Convert the total size from bytes to megabytes
total_size_mb=$(echo "scale=2; $total_size / 1048576" | bc)

# Display the total size of the directory in megabytes
echo "The total size of $dir_name is: $total_size_mb MB"

