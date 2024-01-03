#include <stdio.h>
#include <stdlib.h>

#define STU 2
#define PRD 3
#define SUB 2

int main() {

	int ary[STU][PRD][SUB]={1,2,3,4,5,6,7,8,9,10,11,12};
	int i, j, k;
	
	for (i = 0; i < STU; i++){
		printf("class %d\n", i+1);
		
		for(j = 0; j < PRD; j++){
			printf(" PRD %d:\n", j+1);
				for (k =0; k < SUB; k++){
					printf("  sub %d: ", k+1);
					printf("%d\n", ary[i][j][k]);					
				}

		}
	}
	return 0;
}

