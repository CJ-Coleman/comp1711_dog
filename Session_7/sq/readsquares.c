#include <stdio.h>


int main()
{
    int i;
    int looplen;

    FILE *file = fopen("squares.txt", "r");
    int bs = 100;
    char buffer[bs];
    while (fgets(buffer, bs, file))
    {
        printf("%s", buffer);
    }
    return 0;
}