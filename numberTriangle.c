//Program to print a number triangle

#include <stdio.h>

void pattern(void)
{
    //DECLARING VARIABLES
    int limit, num=1;

    //ASKING FOR INPUT
    printf("Enter the limit: ");
    scanf("%i", &limit);

    //LOOP
    for(int i=0; i<=limit; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%i ", j);
        }
        printf("\n");
    }
}
