#include <stdio.h>

int main()
{
    float temp;

    printf("input temperature: ");
    scanf("%f", &temp);

    if (temp >= -10 && temp <= 40)
        printf("within range of -10 and 40 degrees Celsius");
    else
        printf("not within range of -10 and 40 degrees Celsius");

    return 0;
}