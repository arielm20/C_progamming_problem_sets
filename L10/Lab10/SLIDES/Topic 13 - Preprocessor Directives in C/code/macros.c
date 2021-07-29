// A syntactically correct C program: 
#include<stdio.h>

#define BEGIN (){
#define TWICE(x) x x
#define INT_PRINT(x) printf("%d\n", x);
#define AREA(x,y) ((x)*(y))

int main BEGIN
	if (1 == 1) {
		INT_PRINT(AREA(8,10));
TWICE(})


void debugprint() {
	#if DEBUG 
	printf("whatever");
	#endif 
}

// */

