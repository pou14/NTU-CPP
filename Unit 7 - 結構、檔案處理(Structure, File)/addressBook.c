#include <stdio.h> 
#include <stdlib.h>

struct Book{
	char name[50];
	char phone[50];
	char email[50];
};

int main(){
	
	struct Book b[100];
	int n = 0, temp = 0, i;
	FILE *in;
	FILE *OUT;
	char str[50];
	char op;
	while(1){
		puts("i �[�J���"); 
		puts("l �C�X"); 
		puts("s �s��"); 
		puts("o Ū��"); 
		puts("q ���}"); 
		
		scanf(" %c", &op);
		switch(op){
			case 'i':
				puts("�[�J���...");
				printf("Name: ");
				scanf("%s", b[n].name);
				printf("Phone: ");
				scanf("%s", b[n].phone);
				printf("Email: ");
				scanf("%s", b[n].email);
				n++;
				temp++;
				printf("���J����!\n");
				break;
			case 'l':
				puts("�C�L...");
				for(i=0;i<n;i++){
					printf("No.%d:\n", i+1);
					printf("Name: %s\n", b[i].name);
                    printf("Phone: %s\n", b[i].phone);
                    printf("Email: %s\n", b[i].email);
                    printf("========================\n");
				}
				break;
			case 's':
				puts("�x�s(.txt)");              
                scanf("%s",&str);
                OUT = fopen(str,"w");
                for(i=0;i<n;i++){
                    fprintf(OUT, "%d\n",i+1);
                    fprintf(OUT, "%s\t",&b[i].name);
                    fprintf(OUT, "%s\t",&b[i].phone);
                    fprintf(OUT, "%s\n\n",&b[i].email);
                }
                fclose(OUT);
				break;
			case 'o':
                n=0;
                puts("�п�J(.txt)");
                scanf("%s",&str);
                in = fopen(str,"r");
                fscanf(in, "%d\n", &n);  
                if(in == NULL){
                	printf("File not found\n");  
				}else{	
                fclose(in);
                for(i=0;i<temp;i++){
                    printf("No.%d:\n", i+1);
                    printf("Name: %s\n",b[i].name);
                    printf("Phone: %s\n",b[i].phone);
                    printf("Email: %s\n\n",b[i].email);
                }
                }
				break;
			case 'q':
				return 0;
				break;
					
		}
		system("pause");
		system("cls");	
	}
	return 0;
} 
