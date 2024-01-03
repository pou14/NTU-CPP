#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, j;
	int cl, st;
	int **student = 0;
	double avg = 0;
	double sum = 0;
	double tavg = 0;
	
	scanf("%d", &cl);
	scanf("%d", &st);
	
	student = (int **)malloc(sizeof(int *)*cl);
	
	for(i = 0; i < cl; i++){
		student[i] = (int *)malloc(sizeof(int)*st);
	}
	
	for(i = 0; i < cl; i++){
		for(j = 0; j < st; j++){
			scanf("%d", &student[i][j]);	
		}
	}
	
	for(i = 0; i < cl; i++){
		printf("class %d\n", i + 1);
		for(j = 0; j < st; j++){
			printf(" %d: %d\n", j + 1, student[i][j]);
			sum = (double)student[i][j]/st;
			avg += sum;
		}
		tavg += avg;
		printf(" avg: %.2f\n", avg);
		sum = 0;
		avg = 0;
	}
	tavg = tavg/cl;
	printf("avg: %.2f\n", tavg);

	for(i = 0; i < cl; i++){
		free (student[i]);
	}
	free(student);
	return 0;
}
