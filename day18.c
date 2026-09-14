#include <stdio.h>

int main()
//program to check if a number is an Armstrong number.
{
    int n, original, remainder, sum = 0;

    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;
    }

    if (original == sum)
        printf("Armstrong");
    else
        printf("Not Armstrong");
//program to check if a number is an Armstrong number.
    int n, i, count = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}
