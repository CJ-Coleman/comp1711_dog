#include <stdio.h>

float fahr_to_newton (float f_temp)
{
    return (f_temp - 32) / 5.45454555;
}
float fahr_to_celsius (float f_temp)
{
    return (f_temp - 32)/1.8;
}

float fahr_to_kelvin (float f_temp)
{
    return fahr_to_celsius(f_temp) + 273.15;
}

int main () 
{
    float fahrenheit;
    char option;

    printf ("Enter a temperature to convert in Fahrenheit:\n");
    scanf ("%f", &fahrenheit);

    printf ("\n");
    printf ("Select A to convert to Celsius\n");
    printf ("Select B to convert to Kelvin\n");
    printf("Select C to convert to Newton \n");
    printf ("Select Q to quit\n");

    scanf(" %c", &option);

    switch (option)
    {
        case 'A': printf ("Converted to degrees Celsius: %f\n", fahr_to_celsius(fahrenheit));
                  break;

        case 'B': printf ("Converted to Kelvin: %f\n", fahr_to_kelvin(fahrenheit));
                  break;

        case 'C': printf("Converted to Newton: %f\n",fahr_to_newton(fahrenheit));
                  break;

        case 'Q': break;

        default:  break;
    }

    return 0;
}