#include <stdio.h>

int main()
//program to take a number as input and print its equivalent binary representation.
{
    int n, binary[32], i = 0;

    scanf("%d", &n);

    if (n == 0)
    {
        printf("0");
        return 0;
    }

    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
  //program to check if a number is a palindrome.
    int n, original, reverse = 0, remainder;

    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if (original == reverse)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
