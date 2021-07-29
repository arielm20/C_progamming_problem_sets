#include <stdio.h>

int main(void) {
	int a = 7;
	int *aPtr = &a;

	printf("a = %d\n", a);
	printf("&a = %p\n", &a);
	printf("aPtr = %p\n", aPtr);
	printf("*aPtr = %d\n", *aPtr);
	printf("Generating a memory address and then dereferencing it\nleaves you where you started.\n");
	printf("*&a = %d\n", *&a);
	printf("The other way around causes an actual compiler error...\n");
//	printf("&*a = %d", &*a);
}
	
