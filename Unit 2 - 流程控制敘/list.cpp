#include <stdio.h>
#include <stdlib.h>

#define N 5
#include <cstring>

int main() {

	int ary1[N] = {11, 22, 33, 44, 55};
	int ary2[N] = {0};
	//ary2 = ary1;
	//ary2[0] = ary1[0];
	memcpy(ary2, ary1, sizeof(int)*N);
	
	for (int i = 0; i < N; i++){
		printf("%d ", ary1[i]);
	}	
	printf("\n");
	
	for (int i = 0; i < N; i++){
		printf("%d ", ary2[i]);
	} 	
	printf("\n");
	return 0;
}

