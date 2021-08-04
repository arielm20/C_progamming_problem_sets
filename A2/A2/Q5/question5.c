#include<stdio.h>
#include<string.h>
#include<stdlib.h>

float avgCSV (char* inputName){
	FILE* ptr=fopen(inputName, "rt");
    float sum, count, ave;
    float i=0;
    while(1){
        int s;
		while((s=fgetc(ptr)) != ',' && s != EOF){
            continue;
        }
        if(s == EOF){
            break;
		}
        count = sum = 0;
        while(1==fscanf(ptr, "%f%*c", &i)){
            sum += i;
            count++;
        }
        ave = (sum/count);
    }
    fclose(ptr);
    return ave;
}

int main () {
	printf("%f\n", avgCSV("multiline1.csv"));
	// Expected Value = 495.559387
	printf("%f\n", avgCSV("multiline2.csv"));
	// Expected Value = 501.607147
}
