#include <stdio.h>

int main()
//program to implement a basic calculator
{
    int a, b;
    char op;

    printf("Enter two numbers and operator: ");
    scanf("%d %d %c", &a, &b, &op);

    switch(op)
    {
        case '+':
            printf("%d", a + b);
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '*':
            printf("%d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("%d", a / b);
            else
                printf("Division by zero not possible");
            break;

        case '%':
            if (b != 0)
                printf("%d", a % b);
            else
                printf("Division by zero not possible");
            break;

        default:
            printf("Invalid operator");
    }
  //program to print numbers from 1 to n.

    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
