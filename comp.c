#include <cs50.h>
#include <stdio.h>

int main()
{
    int a = get_int("Enter first number: ");
    int b = get_int("Enter second number: ");

    if (a > b)
    {
        printf("Larger: %d\n", a);
    }
    else if (b > a)
    {
        printf("Larger: %d\n", b);
    }
    else
    {
        printf("Equal\n");
    }

    return 0;
}
