#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char ch1, ch2;

	putchar('A');
	putchar(65);
	putchar(65+32);
	
	int i = 0;
	for (i = 0; i < 128; i++){
		printf("%3d: %c\n", i, i);
	}	
	
	return 0;
}
