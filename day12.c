#include <stdio.h>

int main()
//program to calculate library fine based on late days
{
    int days, fine;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 5)
    {
        fine = days * 2;
        printf("Fine Rs.%d", fine);
    }
    else if (days <= 10)
    {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine Rs.%d", fine);
    }
    else if (days <= 30)
    {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine Rs.%d", fine);
    }
    else
    {
        printf("Membership Cancelled");
    }
  //program to calculate electricity bill
  
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 5;
    }
    else if (units <= 200)
    {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300)
    {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10)
               + (units - 300) * 12;
    }

    printf("Bill: Rs.%g", bill);

    return 0;
}
