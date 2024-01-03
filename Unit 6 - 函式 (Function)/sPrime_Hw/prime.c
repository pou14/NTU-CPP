#include "prime.h"
#include <stdio.h>
#include <stdlib.h>

int	IsPrime(int n){
	int ct = 0;
	int i;
	
	for(i = 1; i <= n; i++){
		if (n % i == 0){
			ct++;
		}
	}
	
	if (ct == 2) {
		return 1;
	}else {
		return 0;
	}
	return ct;
}


