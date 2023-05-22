#!/bin/bash

# Compile all .c files into position-independent code
gcc -c -Wall -Werror -fpic *.c

# Create the dynamic library liball.so from the object files
gcc -shared -o liball.so *.o

# Remove the object files
rm *.o
