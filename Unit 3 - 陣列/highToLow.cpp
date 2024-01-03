#include <stdio.h>
#include <stdlib.h>

#define N 5


int main() {

	int ary[N] = {34, 12, 5 ,66 ,1};
	int i, j;
	int temp;
	for (j = N;j > 1;j--){	
		for (i = 0; i < N - 1; i++){
			if (ary[i] > ary[i+1]) {
				temp = ary[i];
				ary[i] = ary[i + 1];
				ary[i + 1] = temp;
			}
		}
	}	
	
	for (i = 0; i < N; i++){
		printf("%d ", ary[i]);
	}

	return 0;
}

