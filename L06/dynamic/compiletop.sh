#!/bin/bash

PATH=/Users/arielmotsenyat/Desktop/School stuff/CS1XC3/CS1XC3/L06/dynamic/
if [[ $1 = '$PATH' ]] ; then
    gcc -L. -Wl,-rpath='$PATH' -Wall -o test top.c  -lLab6Part5
elif [[ $1 -eq 0 ]] ; then
    echo "Please provide the path to the shared library file in order to compile the code"
fi
