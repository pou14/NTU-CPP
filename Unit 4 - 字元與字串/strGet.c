#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100];
    char str2[100];
    
    puts("This is my string1");
    puts("");
    puts("This is my string2");

    //gets(str1);
    scanf("%s", str1);
    fflush(stdin);
    puts(str1);
    
    gets(str2);
    puts(str2);
    return 0;
}
