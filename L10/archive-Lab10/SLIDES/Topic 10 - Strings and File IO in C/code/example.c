#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int x[] = {};
/*	printf("%%");
	printf("sizeof(short int) = %d\n", sizeof(short int));
	printf("sizeof(short) = %d\n", sizeof(short));
	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(long int) = %d\n", sizeof(long int));
	printf("sizeof(long) = %d\n", sizeof(long));
	printf("sizeof(long long int) = %d\n", sizeof(long long int));
	printf("sizeof(long long) = %d\n", sizeof(long long));

	int i = 1337;
	int size = (int)(ceil(log10(i))+1);
	char *buffer = (char*) malloc(size*sizeof(char));
	int j = snprintf(buffer, size, "%d", i);
	if (j > size) {
		printf("String was truncated!\n");
	}	
	printf("%s", buffer);
		printf("%hd\n", 0xFFF7);
	printf("%hu\n", 0xFFFF);
*/
	int i;
	scanf("!%d!", &i); 
	printf("%d\n", i);

}
