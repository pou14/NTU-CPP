#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, m, i, j, ans;
	scanf("%d", &n);
	scanf("%d", &m);	

	for (i = 1; i < n + 1; i ++){
		for (j = 1; j < m + 1; j++){
			ans = i * j;
			printf("%d*%d=%2d ", i, j, ans);
		}
		printf("\n");
	}

}
