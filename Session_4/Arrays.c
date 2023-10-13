#include <stdio.h>

int main()
{
    int n = 10;
    int array [n];
    int i;

    for (i = 0; i < n; i++) 
    {
        array[i] = i;
    }

    for (i = 0; i < n ; i++)
    {
        printf("array[%d]= %d\n",i, array[i]);

    }

    
// print hello forwards and backwards
    int x = 5;
    char word[] = "Hello";

    printf("%s\n", word);
    for (i = 5; i > -1; i--)
    {
        printf("%c\n", word[i]);
    }
    printf("\n");


    return 0;
}