#include <stdio.h>

int main()
{
    int option;

    printf("input option between 0 and 4: ");
    scanf("%d", &option);
    switch (option)
    {
        case 0:
            printf("option 0");
            break;
        case 1:
            printf("option 1");
            break;
        case 2:
            printf("option 2");
            break;
        case 3:
            printf("option 3");
            break;
        case 4:
            printf("option 4");
            break;
        default:
            printf("unkown option");
            break;

    };






    return 0;
}