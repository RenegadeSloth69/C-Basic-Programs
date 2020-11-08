//Program to check whether the input is an alphanumeric character
#include <stdio.h>
#include <ctype.h>

void alnums(void)
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);
    getchar();

    if(isalnum(c))
    {
        printf("The entered character is an alphanumeric character");
    }
    else
        printf("The entered character is not an alphanumeric character");
}
