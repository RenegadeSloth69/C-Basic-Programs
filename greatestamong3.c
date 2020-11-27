#include <stdio.h>

void greatest(void)
{
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%i %i %i", &n1, &n2, &n3);

    if (n1 >= n2) {
        if (n1 >= n3)
            printf("%i is the largest number.", n1);
        else
            printf("%i is the largest number.", n3);
    } else {
        if (n2 >= n3)
            printf("%i is the largest number.", n2);
        else
            printf("%i is the largest number.", n3);
    }
}
