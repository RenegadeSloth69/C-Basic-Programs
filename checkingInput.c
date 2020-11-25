//Program to check whether the input in an alphabet or a number or a special character(basic code).
//And to change the case if the inputted character is an alphabet
#include <stdio.h>
#include <ctype.h>

void check(void)
{
    //Declaring variables
    char ch;

    //Getting Input
    printf("Enter a character: ");
    scanf("%c", &ch);
    getchar();

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        printf("%c is an Alphabet. ", ch);
        if(ch>='A' && ch<='Z')
        {
            printf("The alphabet %c will be represented in lowercase as %c", ch, tolower(ch));
        }

        else
        {
            printf("The alphabet %c will be represented in uppercase as %c", ch, toupper(ch));
        }
    }
    else if(ch>='0' && ch<='9')
    {
        printf("%c is a Number", ch);
    }
    else
    {
        printf("%c is a Special Character", ch);
    }
}
