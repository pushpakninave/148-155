#!/bin/bash

# Get the current directory
current_dir=$(pwd)

# Loop through all .txt files in the current directory
for file in *.txt; do
    # Get the current timestamp
    timestamp=$(date +"%Y%m%d_%H%M%S")

    # Construct the new filename
    new_filename="${file%.*}_$timestamp.txt"

    # Rename the file
    mv "$file" "$new_filename"

    echo "Renamed $file to $new_filename"
done

