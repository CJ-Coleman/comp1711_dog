#include <stdio.h>

int main() 
{
    char files[] = "data.txt";
    FILE *file = fopen(files, "w");
    if (file == NULL)
    {
        perror("File I/O error");
        return 1;
    }
    fprintf( file, "Hello World!");

    fclose(file);
    return 0;
}