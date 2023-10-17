#include <stdio.h>



int main()
{
    int num;

    printf("input number: ");
    scanf("%d", &num);

    if (num % 4 == 0 && num % 5 == 0)
        printf("divisible by both 4 and 5");
    else
        printf("not divisible by both 4 and 5");


    return 0;
}