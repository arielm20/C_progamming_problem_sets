#include<stdio.h>

int main() {
	FILE* fh = fopen("clients.txt", "r");
	int buff1;
	char buff2[100];
	float buff3;
	while (!feof(fh)) {
		fscanf(fh, "%d - %s %f ^", &buff1, buff2, &buff3);
		printf("%.5s -> (%f, %d) \n", buff2, buff3, buff1);
	}
}
