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
	} //else if (str1 > str2){
	else if (strcmp(str1, str2) > 0){
		puts("1 > 2");
	}else if (strcmp(str1, str2) < 1){
		puts("1 < 2");
	}
	
	// str1 += str2
	strcat(str1, str2);
	puts(str1);
	puts(str2);
	
	//str2 = "I love C/C++"
	memcpy(str2, "I love C/C++", sizeof(char)*13);
	//strcpy(str2, "I love C/C++");
	puts(str2);
	
	
    return 0;
}
