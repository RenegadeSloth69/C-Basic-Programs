//Program to check if the user is eligible for voting

#include <stdio.h>

void age(void)
{
    int age;

    printf("Enter your age: ");
    scanf("%i", &age);

    if(age<18)
    {
        printf("\nYou are too young too vote!! Go sit in class!!");
    }
    else
    {
        printf("\nCongrats, you are old enough to vote!!");
    }
}
