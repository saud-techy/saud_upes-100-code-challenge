#include <stdio.h>

int main()
{
    int a, b, max;

    // Write a program to find the LCM of two numbers.


    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            printf("%d", max);
            break;
        }

        max++;
    }

    int n, digit, sum = 0;

    // Write a program to find the sum of digits of a number.
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("%d", sum);

    return 0;
}
