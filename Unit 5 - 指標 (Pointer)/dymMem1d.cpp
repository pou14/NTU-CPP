#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n = 0;
	int *score = 0;
	int i;
	int spot = 0;
	int high = 0;
	double avg = 0;
	
	scanf("%d", &n);
	score = (int *)malloc(sizeof(int)*n);

	//if n > 100 students	
	if (n > 100){
		double sum = 0;
		for(i=0; i<n; i++){
		scanf("%d", score+i);
		sum = (double)score[i]/n;
		avg += sum;
	}
	printf("avg = %.2f\n", avg);
	
	
	printf("fail:\n");
	for(i=0; i<n; i++){
		if (score[i] < 60){
			printf("%d: %d\n", i + 1, score[i]);
		}
	}
	
	
	for(i=0; i<n; i++){
		if (score[i] > high){
			spot = i+1;
			high = score[i];
		}
	}
	printf("highest:\n");
	printf("%d: %d\n", spot, high);
	free(score);
	
	} else {
		int sum = 0;
		// n less than 100 students
		for(i=0; i<n; i++){
		scanf("%d", score+i);
		sum += score[i];
		}
		avg = (double)sum/n;
		printf("avg = %.2f\n", avg);
		
		printf("fail:\n");
		for(i=0; i<n; i++){
			if (score[i] < 60){
				printf("%d: %d\n", i + 1, score[i]);
			}
		}
		
		for(i=0; i<n; i++){
			if (score[i] > high){
				spot = i+1;
				high = score[i];
			}
		}
	printf("highest:\n");	
	printf("%d: %d\n", spot, high);
	free(score);
	}	
	return 0;
}
