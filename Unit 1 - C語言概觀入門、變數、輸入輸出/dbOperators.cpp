#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double a, b, ansa, anss, ansm, ansd;
	
	scanf("%lf%lf", &a, &b);
	
	ansa = a + b;
	anss = a - b; 
	ansm = a * b;
	ansd = a / b;
	printf("%.2f + %.2f = %.2f\n", a, b, ansa);
	printf("%.2f - %.2f = %.2f\n", a, b, anss);
	printf("%.2f * %.2f = %.2f\n", a, b, ansm);
	printf("%.2f / %.2f = %.2f\n", a, b, ansd);
	return 0;
}
