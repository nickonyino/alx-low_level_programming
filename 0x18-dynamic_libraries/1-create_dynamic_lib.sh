#!/bin/bash

# Compile all .c files into the object files
gcc -c -Wall -Werror -fPIC *.c

# Creates all  the shared library liball.so
gcc -shared -o liball.so *.o

# Clean up all  he object files
rm *.o

