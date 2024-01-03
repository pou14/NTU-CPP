#include <stdio.h>
#include <stdlib.h>

#define N 5
#include <cstring>

int main() {

	int score[N];
	int sum = 0;
	double avg;
	
	for (int i = 0; i < N; i++){
		scanf("%d", &score[i]);
	}
	
	sum = 0;
	for (int i = 0; i < N; i++){
		sum += score[i];
	} 	

	avg = (double)sum / N;
	printf("Sum = %d\n", sum);
	printf("Avg = %.2f\n", avg);
	
	return 0;
}

