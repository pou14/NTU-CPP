#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char key = 0;
	while(key != 'q'){
		scanf(" %c", &key);
		printf("%c\n", key);
	}
	
	int i = 1;
	while (i <= 10){
		printf("%d\n", i);
		i++;
	}
	
	return 0;
}
