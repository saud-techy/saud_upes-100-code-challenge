#include <stdio.h>

int main()
//Write a program to input a year and check whether it is a leap year or not using conditional statements.
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("Leap year\n");
    }
    else if (year % 100 == 0)
    {
        printf("Not a leap year\n");
    }
    else if (year % 4 == 0)
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    
  //Write a program to input a character and check whether it is a vowel or consonant using if–else.

    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }

    return 0;
}
