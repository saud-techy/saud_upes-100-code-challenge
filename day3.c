#include <stdio.h>

int main() {
    int c, f;

    scanf("%d", &c);

    f = (c * 9 / 5) + 32;

    printf("Fahrenheit=%d", f);
    int a, b, temp;

    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: %d %d", a, b);

    return 0;
}
