#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int simpleParse(const char *exp);

int main() {
    char exp1[] = "2 + 2";
    printf("%s = %d\n", exp1, simpleParse(exp1));
	// Expected Value = 4
    char exp2[] = "3 + 7 - 4 * 1";
	printf("%s = %d\n", exp2, simpleParse(exp2));
	// Expected Value = 6
    char exp3[] = "9 * 13 / 2 + 18 * 110 - 812 \% 97 + 3";
   	printf("%s = %d\n", exp3, simpleParse(exp3));
	// Expected Value = 2005
    
}

