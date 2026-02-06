#include <cs50.h>
#include <stdio.h>

int main()
{
    int a = get_int("Enter first integer: ");
    int b = get_int("Enter second integer: ");

    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("Quotient: %d\n", a / b);
    printf("Remainder: %d\n", a % b);

    return 0;
}
