#include <stdio.h>

int main () 
{
    float base;
    float height;
    printf("Input base: ");
    scanf("%f", &base);
    printf("Input height: ");
    scanf("%f ", &height);
    float area = base*height;
    printf("Area = %f", area);
}