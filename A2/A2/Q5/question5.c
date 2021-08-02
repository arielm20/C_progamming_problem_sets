#include<stdio.h>
#include<string.h>
#include<stdlib.h>

float avgCSV (char* inputName);

int main () {
	printf("%f\n", avgCSV("multiline1.csv"));
	// Expected Value = 523.899109
	printf("%f\n", avgCSV("multiline2.csv"));
	// Expected Value = 506.371246
}
