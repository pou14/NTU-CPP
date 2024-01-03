#include "score.h"
#include <stdio.h>
#include <stdlib.h>

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
	int i;
	for(i=0;i<n;i++){
		if(P[i]>P[MP]){
			MP = i;
		}
	}
	return MP;
}
