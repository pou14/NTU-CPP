#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double n1, n2, ans;
	char op;
	scanf("%lf", &n1);
	scanf("%lf", &n2);
	scanf(" %c", &op);
	
	switch (op){
		case '+':
			ans = n1 + n2;
			break;
			case '-':
			ans = n1 - n2;
			break;
		case '*':
			ans = n1 * n2;
			break;
		case '/':
			ans = n1 / n2;
			break;
		default:
			printf("Incorrect Operator\n");
			return 0;
	}
	
	printf("%.2f %c %.2f = %.2f\n",
	n1, op, n2, ans);
	return 0;
}
