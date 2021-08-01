#include <stdio.h>

int main() {
	int y = 5;
	int* yPtr;
	// store the address of y in yPtr
	yPtr = &y;
	// You print a pointer with %p
	printf("The pointer's value is %p\n", yPtr);
	// print the value pointed to by yPtr
	printf("The value pointed to is %d\n", *yPtr);
	return 0;
}
