#include <stdio.h>

int main()
{
    int n, i;
    int a, b, hcf = 1;

    //Write a program to print all factors of a given number.
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors: ");

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }

    // Write a program to find the HCF (GCD) of two numbers.
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF = %d", hcf);

    return 0;
}
