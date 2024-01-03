#include<stdio.h>
#include<stdlib.h>

void hello(int n){
	for(int i = 0; i < n; i++){
		printf("Hello\n");
	}
	//return;
}

int main(){
	
	int x;
	scanf("%d", &x);
	hello(x);
	puts("Before calling Function");
	hello(5);
	puts("After calling Function");
	hello(3);
	return 0;
} 



