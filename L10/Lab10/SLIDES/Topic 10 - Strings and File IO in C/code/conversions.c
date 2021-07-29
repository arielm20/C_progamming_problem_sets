#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
/*	char buff[] = "64.6123 beans";
	char *postbuff;
	double val = strtod(buff, &postbuff);
	printf("%s -> %e -> %s\n", buff, val, postbuff);*/
	
/*	char buff[5];
	buff[0]= '\0';
	int val = 1713;
	int check = snprintf(buff, 5, "%d", val);
	printf("%d\n", check);
	if (check >= 5) {
		return 1;
	} else {
		printf("%s\n", buff);
	}*/
	
/*	char buff1 [100] = "Text to be overwritten";
	char buff2 [100] = "Hello, World!";
	
	printf("buff1 = %s\n", buff1);
	printf("buff2 = %s\n", buff2);	
	
	printf ("%d\n", strncmp(buff1, buff2, 50));
	
	printf("buff1 = %s\n", buff1);
	printf("buff2 = %s\n", buff2);	*/
	
	int x[] = {1,2,4,5,6,7,8,9,0}
	int y[10];
	
	memcpy(y, x, 10);
}
