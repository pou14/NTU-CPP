#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, i, j;
	scanf("%d", &n);	
	for (i = 0; i < n; i ++){
		for (j = 0; j < n; j++){
			printf("* ");
		}
		printf("\n");
	}

}
