#include "pokemon.h"
#include <stdio.h>
#include <stdlib.h>

struct Pokemon p1,p2;

void InputData(struct Pokemon *p){
	
	scanf("%s", p ->Name);
	scanf(" %d", &p ->Lv);
	scanf(" %d", &p ->Hp);
	
}

void ShowInfo(struct Pokemon p){

	printf("Name: %s\n", p.Name);
	printf("Lv: %d\n", p.Lv);
	printf("HP: %d\n\n", p.Hp);
	
}
