#include <stdio.h>

int main()
{
  //SUM
    int a, b, sum=0;

    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum = %d", sum);
    //ADDITION SUBTRACTION MULTIPLICATION DIVISION
    float a, b;
    float c = a / b;
    printf("enter two numbers");
    scanf("%f %f", &a, &b);

    printf("Sum=%f, Diff=%f, Product=%f, Quotient=%f",
           a + b, a - b, a * b, a / b);

    return 0;
}
