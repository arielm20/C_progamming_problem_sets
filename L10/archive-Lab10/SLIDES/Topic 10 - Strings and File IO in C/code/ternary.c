#include <stdio.h>

int main() {
	int x = B1 ? ( B2 ? 8 : 9) : 7;

	if (B1) {
		if (B2) { 
			x = 8
		} else {
			x = 9
		}
	} else {
		x = 7
	}

	x = B1 ? 7 : ( B2 ? 8 : 9);

	if (B1) {
		x = 7
	} else if (B2) { 
		x = 8
	} else {
		x = 9
	}	
}
