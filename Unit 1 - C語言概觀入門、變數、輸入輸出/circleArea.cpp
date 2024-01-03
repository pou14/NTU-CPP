#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int r1, r2;
	double pi = 3.141592653589793;
	scanf("%d%d", &r1, &r2);
	double ans1 = (double)(r1 * r1 * pi);
	double ans2 = (double)(r2 * r2 * pi);
	double diff = ans2 - ans1;
	printf("%.2lf", diff);
	
	return 0;
}
