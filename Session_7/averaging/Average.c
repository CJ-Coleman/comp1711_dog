#include <stdio.h>

int main()
{
    int counter = 0;
    float total = 0;

    FILE *file = fopen("numbers.dat", "r+");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    int buffer_size = 100;
    char line_buffer[buffer_size];

    while (fgets(line_buffer, buffer_size, file) != NULL) {
        total += line_buffer[counter];
        counter++;
        
    }
    printf("total: %f", total);
    printf("counter: %d", counter);
    total = total / counter;
    printf("average of all numbers within the dat file is: %f", total);
    fprintf(file, "%f\n", total);







    return 0;
}