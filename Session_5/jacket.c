#include <stdio.h>

int main()
{
    float temp;
    float threshold = 20;



    printf("input temp: ");
    scanf("%f", &temp);
    if (temp > threshold) 
        printf("Wear a jumper, not a jacket.");
    else if (temp > 10)
        printf("Wear a light jacket");
    else
        printf("Wear a thicc jacket");
        
    printf("\n");



    return 0;
}