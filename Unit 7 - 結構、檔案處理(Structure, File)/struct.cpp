#include <stdio.h> 
#include <stdlib.h>

struct Pokemon{
	
	char name[80];
	int Lv;
	int Hp;
	
};

int main(){
	
	struct Pokemon p1, p2 = {"Fly", 20, 18};
	
	scanf("%s", p1.name);
	scanf("%d", &p1.Lv);
	scanf("%d", &p1.Hp);
	printf("Name: %s\n", p1.name);
	printf("Level: %d\n", p1.Lv);
	printf("HP: %d\n", p1.Hp);
	
/*	scanf("%s", p2.name);
	scanf("%d", &p2.Lv);
	scanf("%d", &p2.Hp);
*/
	printf("Name: %s\n", p2.name);
	printf("Level: %d\n", p2.Lv);
	printf("HP: %d\n", p2.Hp);
	
	
	
	return 0;
} 
