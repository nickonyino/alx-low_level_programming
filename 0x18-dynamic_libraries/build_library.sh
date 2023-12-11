#!/bin/bash

# Compile all .c files into object files
gcc -c -Wall -Werror -fPIC *.c

# Create the shared library liball.so
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o
