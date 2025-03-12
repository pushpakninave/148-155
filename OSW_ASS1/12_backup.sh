#!/bin/bash

# Get the current directory
current_dir=$(pwd)

# Get the user's home directory
home_dir=$(eval echo ~$USER)

# Create the backup directory if it doesn't exist
backup_dir="$home_dir/backup_files"
if [ ! -d "$backup_dir" ]; then
    mkdir "$backup_dir"
fi

# Copy all files from the current directory to the backup directory
cp -r "$current_dir"/* "$backup_dir"

echo "Files from $current_dir have been backed up to $backup_dir."

