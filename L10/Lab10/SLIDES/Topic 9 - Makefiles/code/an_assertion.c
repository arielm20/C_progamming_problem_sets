#include <stdio.h>
#include <assert.h>

int main () {
	char buff[50];
	printf("Enter the letter x... or else! ");
	scanf("%s", buff);
	assert(buff[0] == 'x');
	printf("Good job!\n");
}
