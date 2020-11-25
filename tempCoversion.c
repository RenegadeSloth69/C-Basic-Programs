//Program to convert celsius to fahrenheit and vice versa

#include <stdio.h>

void temp(void)
{
    //Declaring variables
    char selection;
    float temperature=0;
    float temperature_new=0;

    //Asking for input
    printf("1. Celsius to Fahrenheit");
    printf("\n2. Fahrenheit to Celsius");
    printf("\nEnter your selection: ");
    scanf("%c", &selection);
    getchar();

    if(selection=='1')
    {
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &temperature);

        temperature_new = (temperature * 1.8)+32;

        printf("\n%.2f in Fahrenheit is %.2f ", temperature, temperature_new);
    }
    else if(selection=='2')
    {
        printf("\nEnter the temperature in Fahrenheit: ");
        scanf("%f", &temperature);

        temperature_new = (temperature-32)*(0.5555);

        printf("\n%.2f in Celsius is %.2f ", temperature, temperature_new);

    }
    else
    {
        printf("\nINVALID INPUT!!");
    }
}
