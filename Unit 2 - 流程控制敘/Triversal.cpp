#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int ary1[5];
	
	for (int i = 0; i < 5; i++){
		scanf("%d", &ary1[i]);
	}
	
	for (int i = 0; i < 5; i++){
		printf("%d ", ary1[i]);
	}	
	
	cout << "Hey";
	return 0;
}

