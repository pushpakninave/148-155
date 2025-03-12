#!/bin/bash

read -p "Enter the length of password to generate (more than size 8): " size;

if [ $size -lt 8 ]; then
  echo "Password length cannot be less than 8"
else
  password=$(tr -dc 'a-zA-Z0-9!@#$%^&*()_' < /dev/urandom | fold -w $size | head -n 1)
  echo "Password generated: $password"
fi

<<comments
tr -> translates or deletes characters.
-d -> flag to delete
c -> selects characters not specified in quotes but since we are using d so eventually it selects characters specified in the set.
< dev/urandom -> redirects random data from /dev/urandom to the tr command.
fold -> shortens long lines to smaller ones
-w $size -> it specifies size of the folded lines set to password length
head -n 1 -> this outputs only the first line of the input
comments
