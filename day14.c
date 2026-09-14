#include <stdio.h>

int main()
// program to print the sum of the first n odd numbers.
{
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= 2 * n - 1; i = i + 2)
    {
        sum = sum + i;
    }

    printf("%d", sum);
  //program to print the product of even numbers from 1 to n.
    int n, i, product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i = i + 2)
    {
        product = product * i;
    }

    printf("%d", product);

    return 0;
}
