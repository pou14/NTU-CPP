#include <stdio.h> 
#include <stdlib.h>

#define N 3
struct Employee
{
    char Name[20];
    char Phone[11];
    int id;
};
typedef struct Employee emp;

int main(){
	
	emp p[N];
	int i;
	int qid;
	
	for(i=0;i<N;i++){
		scanf("%s", p[i].Name);
		scanf("%s", p[i].Phone);
		scanf("%d", &p[i].id);
	}
	
	scanf("%d", &qid);
	int flag = 0;
	
	for(i=0;i<N;i++){
		if (qid == p[i].id) {
			puts("found");
			printf("Name: %s\n", p[i].Name);
			printf("Phone: %s\n", p[i].Phone);
			printf("ID: %d\n", p[i].id);
			flag = 1;
		}
	 }
	if (flag == 0){
		puts("not found");
	}
	
	
	return 0;
} 
