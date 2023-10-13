#include <stdio.h>

int main()
{
    // print the first 10 odd numbers
    int c;
    int i = 1;
    for (c = 1; c <= 10; c++)
    {
        printf("%d\n", i);
        i += 2;
    }
    
    // print even numbers from 20 to 0 in reverse order
    i = 20;
    while (i >= 0)
    {
        printf("%d\n", i);
        i -= 2;
    }
    //print first 10 squares
    for (i = 1; i < 11; i ++)
    {
        printf("%d\n", i * i);
    }
    return 0;
}