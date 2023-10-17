#include <stdio.h>

int main()
{
    int loop = 10;
    while (loop != -1)
    {
        printf("input number");
        scanf("%d", &loop);
        if (loop >= 0 && loop <= 100)
            printf("within the confines of this dimension.");
        else if (loop != -1)
            printf("broken the laws of this universe. Apologies.");
        else
            printf("one has chosen to break free of the chains known as spacetime and explore that which is unknown. (you input -1)");
    }






    return 0;
}