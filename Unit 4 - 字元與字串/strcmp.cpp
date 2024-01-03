#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[80];
	char str2[80];
	
	gets(str1);
	gets(str2);
	
	//if (str1 == str2){
	if(strcmp(str1, str2) == 0){
		puts("1 == 2");
	} else if (str1 > str2){
		puts("1 > 2");
	} else if (str1 < str2){
		puts("1 < 2");
	}
    return 0;
}
