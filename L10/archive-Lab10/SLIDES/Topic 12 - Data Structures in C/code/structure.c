#include<stdio.h>

struct customer {
	char *name;
	char *email;
	int pinball;
} cust_def = {"None", "None", 0};

typedef struct customer Customer;

int main () { 
	Customer ma_bois[5] = {cust_def,cust_def,cust_def,cust_def,cust_def} ;
//	ma_bois[0].name = "John Boring";
//	ma_bois[0].email = "john.boring@whatever.com";
//	ma_bois[0].pinball = 100000;
	Customer ma_boi = {"Sally Plain","sally.plain@whatever.com",200000};
	printf("%s, %s, %d\n", ma_bois[0].name, ma_bois[0].email, ma_bois[0].pinball);
	
	printf("Hex\t\tUnsigned\tSigned\n");
	int value = 0xAAAAAAAA;
	printf("%x\t%u\t%d\n", value, value, value);
	value = ~value;
	printf("%x\t%u\t%d\n", value, value, value);
	value += 1;
	printf("%x\t%u\t%d\n", value, value, value);
	
	printf("%x, %x \n", -14, 25);
}
