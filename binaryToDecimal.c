//Program to convert binary number to decimal
#include <stdio.h>
#include <math.h>

void binaryToDecimal(void)
{
    //Declaring common variables
    int binaryNumber;
    int digits=0;
    int sum=0;

    //Asking for input
    printf("Enter the binary number: ");
    scanf("%i", &binaryNumber);

    //Creating copies of inputted value
    int binaryNumberCopy=binaryNumber;
    int binaryNumberCopy2=binaryNumber;
    int binaryNumberCopy3=binaryNumber;

    //Loop to find number of digits in the entered value
    do
    {
        binaryNumberCopy=binaryNumberCopy/10;
        digits++;
    }while(binaryNumberCopy>0);

    digits=digits-1;
    int originalNumber[digits];//Declaring an array

    //Saving the entered value into an array in reverse order
    for(int i=0; i<=digits; i++)
    {
        originalNumber[i]=binaryNumberCopy2%10;
        binaryNumberCopy2=binaryNumberCopy2/10;
    }

    //Converting binary number into decimal form
    for(int i=1; i<=digits; i++)
    {
        sum=sum+(pow(2,i) * originalNumber[i]);
    }

    //Final conversion and storing into a variable
    int decimalNumber=sum+(1*originalNumber[0]);

    //Printing output
    printf("The decimal equivalent of %i is %i", binaryNumberCopy3, decimalNumber);
}
