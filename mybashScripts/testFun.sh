#!/bin/bash

# The list of characters to search for in main.h
files=("_isupper" "_memset" "*_strcat" "_isdigit" "*_memcpy" "*_strncat" "_atoi" "*_strchr" "_strlen" "_strncpy" "_islower" "_puts" "_strcmp" "_strspn" "_isalpha" "_strpbrk" "_strstr" "_abs" "_strcpy" "_putchar")

# The destination file
_output="main.h"

# Iterate over the list of files
for file in "${files[@]}"
do
    # Search for lines in main.h that contain the string from the list
    lines=$(grep -n -r "$file" --exclude-dir='.git' ../)

    # Check if any lines were found
    if [ -n "$lines" ]
    then
        # If lines were found, append them to the destination file
        echo "$lines" >> "$_output"
    fi
done
