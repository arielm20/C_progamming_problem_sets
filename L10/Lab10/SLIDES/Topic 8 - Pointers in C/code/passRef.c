#include <stdio.h>

void cubeByReference(int *nPtr);

int main(void) {
	int num = 5;
	printf("num = %d\n", num);
	cubeByReference(&num);
	printf("num = %d\n", num);
}

void cubeByReference(int *nPtr){
	*nPtr = *nPtr * *nPtr * *nPtr;
}
