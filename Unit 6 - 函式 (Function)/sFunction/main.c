#include <stdio.h>
#include <stdlib.h>
#include "score.h"
#include "score.c" 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){

	//int score[5] = {11, 22, 33, 44, 55};
	int *score, n;
	int i;
	scanf("%d", &n);
	score = (int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d", score+i);
	}
	
	avg(5, score);
	printf("avg = %.2f\n", avg(n, score));
	int MPos = maxScore(n,score);
	printf("%d: %d\n", MPos + 1, score[MPos]);
	return 0;	
}
