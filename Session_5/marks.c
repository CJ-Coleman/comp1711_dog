#include <stdio.h>

int main()
{
    int mark;
    int total;
    int i;
    int grade;
    float percentage;
    char grade;
    printf("input score: ");
    scanf("%f",&mark);

    printf("input total: ");
    scanf("%f", &total);

    percentage = (mark / total) * 100;

    return 0;
}