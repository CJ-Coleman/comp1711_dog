#include <stdio.h>

int main ()  /* smooth brackets = parameters, funky brackets = content of function*/
{
    int num, num2;
    num = 10;
    num2 = 20;
    printf("Insert a number: ");
    scanf("%d", &num);
    printf("num = %d, num2 = %d\n"
    , num, num2);
    return 0;
} 