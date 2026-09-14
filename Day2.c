#include <stdio.h>
//area and perimeter of a rectangle
int main()
{
    int length, breadth, area, perimeter;

    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area=%d, Perimeter=%d", area, perimeter);
//area and circumference of a cirle
    float radius, area, circumference;
    const float PI = 3.14159;

    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area=%.2f, Circumference=%.2f", area, circumference);

    return 0;
}
