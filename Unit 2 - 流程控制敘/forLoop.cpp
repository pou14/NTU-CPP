#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int total = 0;
	for (int i = 0; i <= 10; i++){
		total += i;
		printf("i = %d, t = %d\n", i, total);
	}
	printf("%d\n", total);
	return 0;
}
