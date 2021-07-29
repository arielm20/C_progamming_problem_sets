#include <stdio.h>

int main () {
	char bar[2] = "foo";
	int foo[(6+6)];

	printf("%ls\n", foo);

	printf("%p\n", foo);

	printf("[");
	for (int i = 0; i < 12; i++) {
		if (i < 11) {
			printf("%d, ", foo[i]);
		} else {
			printf("%d]\n", foo[i]);
		}
	}
	printf("%c\n", bar[2]);
	printf("%d\n", bar[2]);
}
