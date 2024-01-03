#include <stdio.h>
#include <stdlib.h>

int main(){
		
	int A[5] = {11, 22, 33, 44, 55};
	int *P;
	P = A;
	int i;
	
	for(i=0;i<5;i++){
		printf("A[%d]=>%d,%d\n", i, A[i],&A[i]);
	}
	
	puts("");
	
	for(i=0;i<5;i++){
		printf("P[%d]=>%d,%d\n", i, P[i], &P[i]);
	}	
	
	puts("");
	
	for(i=0;i<5;i++){
		printf("*(P+%d)=>%d,%d\n", i, *(P+i), P+i); //&*(P+i)
	}	
	
	return 0;
}
