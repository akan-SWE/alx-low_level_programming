#!/bin/bash

# Create dynamic library
gcc -fPIC -shared *.c -o liball.so
