//Program to check whether inputted number is an armstrong number

#include <stdio.h>

void armstrong(void)
{
    //Declaring variables
    int num=0;
    int calc=0;

    //Asking for input
    printf("Enter a number: ");
    scanf("%i", &num);

    int numDupe=num;

    while(num>0)
    {
        calc = calc+((num%10)*(num%10)*(num%10));
        num=num/10;
    }

    if(calc==numDupe)
    {
        printf("\nThe entered number is an Armstrong number");
    }
    else
    {
        printf("\nThe entered number is not an Armstrong number");
    }
}
