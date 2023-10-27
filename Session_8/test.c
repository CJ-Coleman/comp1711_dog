#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num[10] = "123456789";
    int val;

    val = atoi(num);
    printf("%d", val);

    return 0;
}