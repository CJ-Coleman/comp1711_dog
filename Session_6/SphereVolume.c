#include <stdio.h>
#include <math.h>



float volume (float radius)
{
    return (4/3)*radius*radius*radius*3.141;
}

int main()
{
    float radius;


    printf("input radius of circle: ");
    scanf("%f", &radius);
    printf("Volume of circle with radius %f : %.3f", radius, volume(radius));

    return 0;
}