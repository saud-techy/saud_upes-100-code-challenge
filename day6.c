#include <stdio.h>
// program to input an integer and check whether it is even or odd using if–else.
int main() {
    int num;

    // Input an integer
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0) {
        printf("%d is even", num);
    } else {
        printf("%d is odd", num);
    }

    return 0;
    //program to input an integer and check whether it is positive, negative or zero using nested if–else.
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0) {
            printf("Zero");
        } else {
            printf("Positive");
        }
    } else {
        printf("Negative");
    }

    return 0;
}
