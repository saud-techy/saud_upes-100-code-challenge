#include <stdio.h>
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
