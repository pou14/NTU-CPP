#include <stdio.h>
#include <stdlib.h>


void printAry(int n, int *P);
double avg(int n, int *P);
int maxScore(int n, int *P);

int main(){

 //int score[5] = {11, 22, 33, 44, 55};
	int *score, n;
	scanf("%d", &n);
	score = (int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++){
		scanf("%d", score+i);
	}
	
	avg(5, score);
	printf("avg = %.2f\n", avg(n, score));
	int MPos = maxScore(n,score);
	printf("%d: %d\n", MPos + 1, score[MPos]);
	return 0;	
}

double avg(int n, int *P){
	
	int sum = 0;
	int i;
	for(i=0;i<n;i++){
		sum += P[i];
	} 
	return (double)sum/n;
}

int maxScore(int n, int *P){
	
	int MP = 0;
	for(int i=0;i<n;i++){
		if(P[i]>P[MP]){
			MP = i;
		}
	}
	return MP;
}

