#include<stdio.h>
#include<stdlib.h>

void displayImage(const char *filename) {
	// QUESTION 2 GOES HERE!
	fwrite(filename, sizeof(const char), 100, stdout);
}
