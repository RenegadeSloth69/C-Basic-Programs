#include <stdio.h>

void fibonocci(void)
{
    int n, i, a, b, c;
    printf("Enter a limit: ");
    scanf("%i", &n);

    i=2;
    a=0;
    b=1;

    printf("%i\n%i\n", a, b);

    while(i<=n)
    {
        c=a+b;
        printf("%i \n", c);
        a=b;
        b=c;
        i++;
    }

}
