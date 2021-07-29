#include<stdio.h>

int main(void){
	char foo[] = "Dated Reference";
	char *fooPtr = foo;
	while (*fooPtr != '\0') {
		printf("(%c)", *fooPtr++);
	} 
	printf("\n");

	int length = sizeof(foo)/sizeof(foo[0]);
	for (int i = 0; i < length; i++) {
		printf("(%c)", *(foo+i));
	} 
	printf("\n");
	foo = foo + 2;
}

