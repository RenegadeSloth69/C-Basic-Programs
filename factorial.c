//PROGRRAM TO FIND THE FACTORIAL OF A GIVEN NUMBER

#include <stdio.h>

void factorials(void)
{
    //DECLARING VARIABLES
    int num, factorial=1;

    //ASKING FOR INPUT
    printf("Enter a number: ");
    scanf("%i", &num);

    //LOOP TO FIND FACTORIAL
    for(int i=1; i<=num; i++)
    {
        factorial=factorial*i;
    }

    //PRINTING OUTPUT
    printf("\nThe factorial of %i is %i", num, factorial);
}
