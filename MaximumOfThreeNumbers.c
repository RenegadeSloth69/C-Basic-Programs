//Program to find maximum of three numbers
#include <stdio.h>

void maximum(void)
{
    //Declaring variables
    int a, b, c;

    //Getting input of three numbers
    printf("Enter the first number: ");
    scanf("%i", &a);

    printf("Enter the second number: ");
    scanf("%i", &b);

    printf("Enter the third number: ");
    scanf("%i", &c);

    if(a>b && a>c)
    {
        printf("The first number, %i, is the greatest of them all", a);
    }

    if(c>b && c>a)
    {
        printf("The third number, %i, is the greatest of them all", c);
    }

    if(b>a && b>c)
    {
        printf("The second number, %i, is the greatest of them all", b);
    }
}
