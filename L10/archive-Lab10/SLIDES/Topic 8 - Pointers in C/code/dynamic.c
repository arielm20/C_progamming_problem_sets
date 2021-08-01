#include<stdio.h>
#include<stdlib.h>

void printArray (int* ptr, int size) {
	printf("{");
	for (int j = 0; j < size-1; j ++) { 	
		printf("%d, ",ptr[j]); 
	}
	printf("%d}\n", ptr[size-1]);
}

void reallocDemo () {
	int* ptr = (int*)malloc(5*sizeof(int));
	if (ptr == NULL) {
		printf("Runtime Error!");
		return;
	}
	for (int i = 0; i < 5 ; i ++) {
		ptr[i] = 2*i;
	}
	printf("%p before reallocation : ", ptr);
	printArray (ptr, 5);
	ptr = realloc(ptr,10*sizeof(int));
	printf("%p after reallocation : ", ptr);
	printArray (ptr, 10);
	free(ptr);
}

void mallocDemo (int n) {
	int* ptr = malloc(n*sizeof(int));
	if (ptr == NULL) {
		printf("Runtime Error - Computer failed to allocate requested memory... Maybe you should close some browser tabs!");
		return;
	}
	printf("The memory location allocated is %p\n", ptr);
	for (int i = 0; i < n ; i ++) {
		ptr[i] = i;
	}
	printf("The allocated array is : ");
	printArray (ptr, n);
	free(ptr);
	return;
}

int main() {
	reallocDemo();
//	mallocDemo(30);
}
