#include <cs50.h>
#include <stdio.h>

int main()
{
    int n = get_int("Enter n: ");
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d\n", fact);

    return 0;
}
