#include<stdio.h>
#include<stdlib.h>

int sum(int n);

int main(){
	
	int x;
	scanf("%d", &x);
	
	//int result = sum(x);
	printf("%d\n",  sum(x));
	sum(x);	
	return 0;
} 

int sum(int n){
	//scanf("%d", &n);
	int total = 0; 
	for(int i=0; i<=n; i++){
		total += i;
	}
	return total;
}

