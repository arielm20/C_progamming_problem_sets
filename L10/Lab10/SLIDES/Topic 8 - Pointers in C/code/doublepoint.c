#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 10;
	int m = 12;

	int **foo = (int**)malloc(n*sizeof(int*));
	void *bar = &foo;
	printf("%p\n", bar);
	bar++;
	printf("%p\n", bar);
	for (int i = 0; i < n; i++) {
		foo[i] = malloc(m*sizeof(int));
		printf("foo[%d] = %p", i, foo[i]);
	}
	
	for (int i = 0; i < n; i++) {
		free(foo[i]);
	}
	
	free(foo);

}
