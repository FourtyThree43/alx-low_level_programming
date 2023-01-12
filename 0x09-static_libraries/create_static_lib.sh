#!/bin/bash

# This script compiles all C files in the current directory using GCC,
# and creates a static library called liball.a

# Compile all C files with gcc with the following flags
# -Wall:  Enable all compiler's warning messages
# -pedantic:  Issue all the warnings demanded by strict ISO C and ISO C++
# -Werror: Treat all warnings as errors
# -Wextra: Enable extra warning flags not turned on by -Wall
# -c: Compile the source files, but do not link. 
gcc -Wall -pedantic -Werror -Wextra -c *.c

# The ar command creates, modifies, and extracts from archives. 
# -r: insert the files into the archive
# -c: create the archive if it doesn't exist
# ar -rc liball.a *.o 
ar -rc liball.a *.o

# ranlib is used to generate an index to the contents of an archive
# liball.a is the name of the archive
ranlib liball.a
