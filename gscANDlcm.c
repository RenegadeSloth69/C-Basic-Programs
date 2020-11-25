//Program to find the GCD and LCM of two integers

#include <stdio.h>

void calc(void)
{
    //DECLARING VARIABLES
    int num1, num2, gcd, lcm, numerator, denominator, rem;

    //ASKING FOR TWO INPUTS
    printf("Enter the first number: ");
    scanf("%i", &num1);

    printf("\nEnter the second number: ");
    scanf("%i", &num2);

    //CODITIONS TO ASSIGN VALUES TO NUMERATOR AND DENOMINATOR
    if(num1>num2)
    {
        numerator=num1;
        denominator=num2;
    }
    else
    {
        numerator=num2;
        denominator=num1;
    }
    //CALCULATING REMAINDER
    rem = numerator%denominator;

    //LOOP FOR CALCULATION
    while(rem!=0)
    {
        numerator=denominator;
        denominator=rem;
        rem=numerator%denominator;
    }
    gcd = denominator;
    lcm = (num1*num2)/gcd;

    //PRINTING THE RESULTS
    printf("\nThe GCD of the two numbers is %i and the LCM is %i", gcd, lcm);
}
