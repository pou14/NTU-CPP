#include <stdio.h>
#include <stdlib.h>

#define STU 5
#define PRD 3

int main() {

	int ary[STU][PRD];
	int i, j;
	int sum;
	double avg;
	
	for (i = 0; i < STU; i++){
		for(j = 0; j < PRD; j++){
			scanf("%d", &ary[i][j]);
		}
	}
	
	int MaxAvg = 0;
	int MaxPo = 0;
	double avgf = 0;
	for (i = 0; i < STU; i++){
		printf("student %d\n", i+1);
		sum = 0;
		for(j = 0; j < PRD; j++){
			printf(" %d: ", j+1);
			printf("%d\n", ary[i][j]);
			sum += ary[i][j];
		}
		avg = 0;
		avg = (double)sum / PRD;
		printf(" sum: %d\n", sum);
		printf(" avg: %.2f\n", avg);
			if (avg > MaxAvg){
				MaxAvg = avg;
				avgf = avg;
				MaxPo = i + 1;
			}
	}
	sum = 0;
	for (i = 0; i < STU; i++){
		for(j = 0; j < PRD; j++){
		sum += ary[i][j];
		}
	}
	avg = 0;
	avg = (double)sum / (PRD * STU);
	printf("total: %d, ", sum);
	printf("avg: %.2f", avg);
	printf("\nhighest avg: student %d: %.2f", MaxPo, avgf);
	return 0;
}

