#include <stdio.h>
#include "utils.h"
int main()
{
    int i;
    int looplen;

    FILE *file = fopen("squares.txt", "w");
    printf("input how many squares to input into the text file: ");
    scanf("%d", &looplen);
    for (i = 0; i <= looplen; i++)
    {
        fprintf(file, "%d\n", i*i);
    }

    return 0;
}