#!/bin/bash

FILES="./testing/*"
for f in $FILES; do
    if [[ $f != *.output ]] ; then
	./tuxquest < $f > $f.test
    fi
done
