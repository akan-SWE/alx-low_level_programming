#!/bin/bash

# compile and assemble into object file
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c


# add all the object files to the library
ar rcs liball.a *.o

# generate index to the object files
ranlib liball.a
