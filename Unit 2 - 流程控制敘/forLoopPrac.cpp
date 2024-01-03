#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, n;
	int total = 0;
	scanf("%d", &n);
	for (i = 0; i <= n; i++){
		total += i;
		printf("%d ", i);
		if (i < n){
			printf("+ ");
		}
	}
	printf("= %d\n", total);
	return 0;
}
