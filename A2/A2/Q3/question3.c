#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int simpleParse(const char *exp){
	int i;
	int result = 0;
	for (i=0;exp[i]!='\0';i++){
		if (exp[i]==' '){
			continue;
		}else if (exp[i]=='+'){
			int add = atoi(&exp[i-2])+atoi(&exp[i+2]);
			result += add;
		}else if(exp[i]=='-'){
			int subtract = atoi(&exp[i-2])-atoi(&exp[i+2]);
			result -= subtract;
		}else if(exp[i]=='*'){
			int multiply = atoi(&exp[i-2])*atoi(&exp[i+2]);
			result *= multiply;
		}else if(exp[i]=='/'){
			int divide = atoi(&exp[i-2])/atoi(&exp[i+2]);
			result /= divide;
		}else if(exp[i]=='\%'){
			int remainder = atoi(&exp[i-2])%atoi(&exp[i+2]);
			result %= remainder;
		}
	}
	return result;
}

int main() {
    char exp1[] = "2 + 2";
    printf("%s = %d\n", exp1, simpleParse(exp1));
	//Expected Value = 4
    char exp2[] = "3 + 7 - 4 * 1";
	printf("%s = %d\n", exp2, simpleParse(exp2));
	// Expected Value = 6
    char exp3[] = "9 * 13 / 2 + 18 * 110 - 812 \% 97 + 3";
   	printf("%s = %d\n", exp3, simpleParse(exp3));
	//Expected Value = 2005
    
}

