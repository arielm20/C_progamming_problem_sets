#include<stdio.h>
#include"lib.c"

// void noNothing();
void a ();
void b ();

a () {
	b();	
}

void b () {
	a();
}


int main () {
	printf("%d\n", libvar);
	libvar ++;
	printf("%d\n", libvar);
	incVar();
	printf("%d\n", libvar);
}


