#include <stdio.h>

void palindrome2(void)
{
    //DECLARING VARIABLES
    int num, reverseNumber = 0, remainder = 0, sum=0;

    //ASKING FOR INPUT
    printf("Enter a number: ");
    scanf("%i", &num);

    int numDupe=num;
    int numDupe2=num;

    //LOOP TO REVERSE THE NUMBER
    while(numDupe != 0)
    {
        remainder = numDupe%10;
        reverseNumber = reverseNumber*10+remainder;
        numDupe = numDupe/10;
    }

    while(numDupe2 != 0)
    {
        sum = sum+(numDupe2%10);
        numDupe2=numDupe2/10;
    }

    printf("The reverse of the entered number is: %i", reverseNumber);
    printf("\nThe sum of the digits of the entered number is: %i", sum);

    if(reverseNumber==num)
    {
        printf("\nThe entered number is a palindrome");
    }
    else
    {
        printf("\nThe entered number is not a palindrome");
    }

}
