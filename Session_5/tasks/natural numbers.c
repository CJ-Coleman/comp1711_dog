#include <stdio.h>

int main()
{
    int num;

    printf("input number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("number is positive");
    else if (num < 0)
        printf("number is negative");
    else
        printf("number is 0");
    
    return 0;
}