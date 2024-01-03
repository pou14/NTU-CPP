#include <stdio.h>
#include <stdlib.h>

#define CLS 2
#define STU 3

int main() {

	int ary[CLS][STU];
	int i, j;
	int sum;
	double avg;
	
	for (i = 0; i < CLS; i++){
		//printf("class %d:\n", i+1);
		for(j = 0; j < STU; j++){
		//	printf(" %d: ", j+1);
			scanf("%d", &ary[i][j]);
		}
	}
	
	for (i = 0; i < CLS; i++){
		printf("class %d\n", i+1);
		sum = 0;
		for(j = 0; j < STU; j++){
			printf(" %d: ", j+1);
			printf("%d\n", ary[i][j]);
			sum += ary[i][j];
		}
		avg = 0;
		avg = (double)(sum / (STU));
		
		printf(" sum: %d\n", sum);
		printf(" avg: %.2f\n", avg);
	}
	sum = 0;
	for (i = 0; i < CLS; i++){
		for(j = 0; j < STU; j++){
		sum += ary[i][j];
		}

	}
	avg = 0;
	avg = (double)(sum / (STU * CLS));
	
	printf("total: %d, ", sum);
	printf("avg: %.2f", avg);
	return 0;
}

