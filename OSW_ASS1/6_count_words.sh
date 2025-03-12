#!/bin/bash
# Write a shell script named `count_words.sh` that takes a filename as input and counts the number of words in that file.
read -p "Enter file name: " filename

if [ -f "$filename" ]; then
  word_count=$(wc -w < "$filename")
  echo "The number of words in $filename is: $word_count"
else
  echo "File with $filename not found!"
fi
