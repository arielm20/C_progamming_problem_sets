#include<stdio.h>

int main(void){
	int foo[] = {0,1,2,3,4};
	short int bar[] = {0.0,1.0,2.0,3.0,4.0};
	printf("-----------------\n");
	for (int i = 0; i < 5; i++) {
		printf("&foo[%d] = %p\n", i, &foo[i]);
	}
	printf("-----------------\n");
	for (int i = 0; i < 5; i++) {
		printf("&bar[%d] = %p\n", i, &bar[i]);
	}
}
