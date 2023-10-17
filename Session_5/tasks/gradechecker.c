#include <stdio.h>

int main()
{
    int grade;

    printf("input grade: ");
    scanf("%d", &grade);

    if (grade >= 70 && grade <= 100)
        printf("distinction");
    else if (grade >= 50 && grade < 70)
        printf("pass");
    else if (grade >= 0 && grade < 50)
        printf("fail");
    else
        printf("invalid grade");
    
    return 0;
}