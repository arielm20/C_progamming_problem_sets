#!/bin/bash

# Use First Argument As Working Directory
WDIR="$1"
cd "$WDIR"
if [ $# = 3 ] ; then
    FILE="$3"
else
    FILE=file1.txt
fi
if [ "$2" -eq 1 ] ; then
     if [ ! -e "$FILE" ] ; then
	touch "$FILE"     
        echo "$USER" > "$FILE"
     fi
elif [ "$2" -eq 2 ] ; then
     if [ -e "$FILE" ] ; then
	mkdir backup
	mv "$FILE" backup
     fi
elif [ "$2" -eq 3 ] ; then
    if [ -e backup/"$FILE" ] ; then
	cp backup/"$FILE" .
	rm backup/"$FILE"
    fi
fi
if [ $# -gt 3 ] ; then
    touch excess.txt
    for i in "${@:4}" ; do
	echo "$i" >> excess.txt
    done
fi
     
echo "Finished"
