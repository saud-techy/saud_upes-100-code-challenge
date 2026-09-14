#include <stdio.h>

int main()

{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase alphabet\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase alphabet\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special character\n");
    }
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("Largest is %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Largest is %d\n", b);
    }
    else
    {
        printf("Largest is %d\n", c);
    }

    return 0;
}
