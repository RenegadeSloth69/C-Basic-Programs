//Program to find the sum of digits of a number, and the check whether the number is a palindrome
#include <stdio.h>

void  palindrome(void)
{
    //Declaring Variables;
    int sum=0;
    int number;
    //int originalNumber[10];
    int reverseNumber = 0;
    int digits=0;

    //Entering Input
    printf("Enter a number: ");
    scanf("%i", &number);

    int numberCopy=number;
    int numberCopy2=number;

    //Finding number of digits in the inputted number
    do
    {
        numberCopy2=numberCopy2/10;
        digits++;
    }while(numberCopy2>0);

    //Declaring a dynamic array
    int originalNumber[digits];

    //Loop to store inputted number into an array in reverse order and find the sum
    for(int i=0; i<=digits; i++)
    {
        originalNumber[i]=number%10;
        sum = sum+originalNumber[i];
        number=number/10;
    }

    //Printing sum
    printf("\nSum is %i", sum);

    //Loop to input the digits of the inputted number to a new variable in reverse order
    for(int i=0; i<digits; i++)
    {
        reverseNumber=10*reverseNumber+originalNumber[i];
    }

    //Printing the reverse number
    printf("\nThe reverse of the given number is %i", reverseNumber);

    //Condition to validate whether the inputted number is a palindrome
    if(reverseNumber==numberCopy)
    {
        printf("\nThe entered number is a palindrome");
    }
    else
    {
        printf("\nThe entered number is not a palindrome");
    }
}
