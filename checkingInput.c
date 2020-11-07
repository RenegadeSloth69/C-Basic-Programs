//Program to check whether the input in an alphabet or a number or a special character(basic code)
#include <stdio.h>

void check(void)
{
    //Declaring variables
    char a;

    //Getting Input
    printf("Enter a character: ");
    scanf("%c", &a);
    getchar();

    if((a>='A' && a<='Z') || (a>='a' && a<='z'))
    {
        printf("%c is an Alphabet", a);
    }
    else if(a>='0' && a<='9')
    {
        printf("%c is a Number", a);
    }
    else
    {
        printf("%c is a Special Character", a);
    }
}
