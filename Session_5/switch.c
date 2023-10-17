#include <stdio.h>

int main()
{

    int label = 0;
    switch (label)
    {
        case 0:
            print("label is 0");
            break;
        case 1:
            print("label is 1");
            break;
        case 2:
            print("label is 2");
            break;
        default:
            print("unkown label");
            break;

    };

    return 0;
}