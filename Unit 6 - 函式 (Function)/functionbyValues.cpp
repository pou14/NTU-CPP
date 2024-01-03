#include<stdio.h>
#include<stdlib.h>

void func(int c){
	int a = 77;
	int b = 88;
	printf("Before changing c = %d\n", c);
	c = 99; 
	printf("After changing c = %d \n", c);
}

int main(){
		
	int a, b, c;
	a = 10;
	b = 20; 
	c = 30;
	printf(" Before calling c = %d\n", c);
	func(c);
	printf(" After calling c = %d \n", c);
	return 0;
} 



