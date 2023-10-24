#include <stdio.h>

int main() 
{
    char files[] = "data2.txt";
    FILE *file = fopen(files, "a");
    if (file == NULL)
    {
        perror("File I/O error");
        return 1;
    }
    fprintf( file, "a");

    fclose(file);
    return 0;
}