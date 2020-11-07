//Program to find the tax to payed based on income, using switch case(sloppy code due to switch)
#include <stdio.h>

void tax(void)
{
    //Declaring variables
    int grossPay, n;
    float tax;

    //Asking input
    printf("What is your gross pay?: ");
    scanf("%i", &grossPay);

    if(grossPay<2000)
    {
        n = 1;
    }
    else if(grossPay>=2000 && grossPay<4000)
    {
        n = 2;
        tax = grossPay*0.03;
    }
    else if(grossPay>=4000 && grossPay<5000)
    {
        n = 3;
        tax = grossPay*0.05;
    }
    else if(grossPay>=5000)
    {
        n = 4;
        tax = grossPay*0.08;
    }

    switch(n)
    {
    case 1:
        printf("Pay no taxes");
        break;
    case 2:
        printf("Your tax is %f", tax);
        break;
    case 3:
        printf("Your tax is %f", tax);
        break;
    case 4:
        printf("Your tax is %f", tax);
        break;
    }
}
