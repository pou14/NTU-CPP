#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	printf("Hello %d C++ %d\n", num1, num2);
	
	scanf("%d", &num1);
	printf("%d\n", num1);
	
	
	char ch;
	double db;
	scanf(" %c", &ch);
	scanf("%lf", &db);
	printf("This is character %c with a double %lf3", ch, db);
	return 0;
}
