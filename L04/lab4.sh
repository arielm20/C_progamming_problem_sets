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
	mkdir backup/"$FILE"
	mv "$FILE" backup
     fi
elif [ "$2" -eq 3 ] ; then
    if [ -e backup/"$FILE" ] ; then
	cp backup/"$FILE" .
	rm backup/"$FILE"
    fi
fi

#elif [ $@ -gt 3 ] ; then
   # touch excess.txt
    # loop to output each parameter on its own line in excess.txt
# fi
     
echo "Finished"
