#include <stdio.h>

int main()
{
    int a = 5;
    int b = 2;
    printf("a = %d, b = %d\n", a, b);

    // swap the values
    int temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d\n", a, b);
    return 0;
}