/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char ch;
    scanf( " %c", &ch);
    
    if (ch >= '0' && ch <= '9'){
        printf("It's a number");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("it's a lowercase letter");
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("It's a capital letter");
    } else {
        printf("It's a other symbols");
    }

    return 0;
}
