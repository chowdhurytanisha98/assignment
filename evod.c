#include <cs50.h>
#include <stdio.h>

int main()
{
    float C = get_float("Enter temperature in Celsius: ");

    float F = (C* 9 / 5) + 32;

    printf("Fahrenheit: %f\n", F);

    return 0;
}
