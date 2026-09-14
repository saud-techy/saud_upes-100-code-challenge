// program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t;
    float si, ci;

    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;
    ci = p * pow((1 + r / 100), t) - p;

    printf("Simple Interest=%.0f, Compound Interest=%.2f", si, ci);

  //program to input time in seconds and convert it to hours:minutes:seconds format.

    int totalSeconds, hours, minutes, seconds;

    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%d:%d:%d", hours, minutes, seconds);

    return 0;
}
