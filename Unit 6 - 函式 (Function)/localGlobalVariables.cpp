#include<stdio.h>
#include<stdlib.h>

int g = 10;

void func(){
	int x = 0;
	printf("func x = %d\n", x);
	printf("func g = %d\n", g);
	x = 10; 
	printf("func x = %d\n", x);
	g = 20;
	printf("func g = %d\n", g);
}

int main(){
	
	int x = 100; 
	printf("x = %d\n", x);
	printf("g = %d\n", g);
	func();
	printf("x = %d\n", x);
	printf("g = %d\n", g);
	return 0;	
}
