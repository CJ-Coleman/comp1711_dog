#include <stdio.h>
#include <math.h>

float area (float radius)
{
    return radius * radius * 3.141;
}

int main()
{
    float radius;


    printf("input radius of circle: ");
    scanf("%f", &radius);
    printf("Area of circle with radius %f : %.3f", radius, area(radius));

    return 0;
}