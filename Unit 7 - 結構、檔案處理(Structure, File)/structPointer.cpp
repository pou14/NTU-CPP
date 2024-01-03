#include <stdio.h> 
#include <stdlib.h>

struct Pokemon{
	
	char name[80];
	int Lv;
	int Hp;
	
};

int main(){
	
	struct Pokemon p1 = {"Fly", 20, 18};
	struct Pokemon *p2;
	p2 = &p1;
	//*p2 == p1
	
	printf("Name: %s\n", (*p2).name);
	printf("Level: %d\n", (*p2).Lv);
	printf("HP: %d\n", p2->Hp);
	

	
	return 0;
} 
