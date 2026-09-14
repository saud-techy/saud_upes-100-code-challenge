#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are real and different: %g, %g\n", root1, root2);
    }
    else if (d == 0)
    {
        root1 = -b / (2 * a);

        printf("Roots are real and same: %g\n", root1);
    }
    else
    {
        printf("Roots are complex\n");
    }
  
    int percentage;

    printf("Enter percentage: ");
    scanf("%d", &percentage);

    if (percentage >= 90 && percentage <= 100)
    {
        printf("Grade A");
    }
    else if (percentage >= 80)
    {
        printf("Grade B");
    }
    else if (percentage >= 70)
    {
        printf("Grade C");
    }
    else if (percentage >= 60)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
