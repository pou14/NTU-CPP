#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[5];
	char b[5];
	int A = 0;
	int B = 0;
	scanf(" %s", a);
	
	while(A != 4){
		scanf(" %s", b);
		
			for(int i = 0; i < 4; i++){
				for(int j = 0; j < 4; j++){
					if(a[i] == b[j]){
						if(i == j){
							A++;
							break;
						}else
							B++;
					}
				}	
			}
		if(strcmp(a, b) == 0){
			printf("4A0B\nYou Win!");
			return 0;
		}else{
			printf("%dA%dB\n", A, B);
		}
		A = 0;
		B = 0;
	}	
		
    return 0;
}

