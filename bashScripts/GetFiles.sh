#!/bin/bash

# The list of files to find and copy
files=("0-isupper.c" "0-memset.c" "0-strcat.c" "1-isdigit.c" "1-memcpy.c" "1-strncato" "100-atoi.c" "2-strchr.c" "2-strlen.c" "2-strncpy.c" "3-islower.c" "3-puts.c" "3-strcmp.c" "3-strspn.c" "4-isalpha.c" "4-strpbrk.c" "5-strstr.c" "6-abs.c" "9-strcpy.c" "_putchar.c")

# Find all the files listed in the subdirectories of the parent directory
# and copy them into the 0x09-static_libraries folder
find .. -type f -name "$files" ! -name "*main.c" -exec cp -v {} . \;

# Find all the files with a ".c" extension excluding any "main.c" in the subdirectories of the parent directory
# and copy them into the 0x09-static_libraries folder

#find .. -type f -name "*.c" ! -name "*main.c" -exec cp -v {} . \;

# Create the main.h file
touch main.h

# Find all the main.h files in the subdirectories of the current directory
# and append their contents to the main.h file, without duplicating function prototypes
find .. -type f -name "main.h" -exec bash -c "grep -v -F -f main.h {} >> main.h" \;


find ../ -maxdepth 1 -name "main.h" -exec cat {} >> main.h \;

grep -v -x -F -f main.h main.h > dup.h
