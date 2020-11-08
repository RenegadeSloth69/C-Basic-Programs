//Program to check whether the entered character is a number

#include <stdio.h>
#include <ctype.h>

void digits(void)
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);
    getchar();

    if(isdigit(c))
    {
        printf("The entered character is a digit");
    }
    else
    {
        printf("The entered character is not a digit");
    }
}
