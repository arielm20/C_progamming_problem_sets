#include <stdio.h>

int main (int argc, char* argv[]) {
	printf("The number of arguments provided is %d.\n", argc);
	printf("Those arguments are: {");
	for (int i = 0; i < argc; i++) {
		printf("\"%s\"", argv[i]);
		if (i < argc-1) {
			printf(", ");
		}
	}
	printf("}\nNow leave me alone!\n\n");
}
