#!/bin/bash

# Use First Argument As Working Directory
WDIR="$1"
cd "$WDIR"

if [ "$2" -eq 1 ] ; then
    FILE=/Users/arielmotsenyat/Desktop/School stuff/CS1XC3/L04/file1.txt
    if test -f "$FILE"; then
    else
	
elif [ "$2" -eq 2 ] ; then
    echo "TODO Objective 2"
fi

echo "Finished"
