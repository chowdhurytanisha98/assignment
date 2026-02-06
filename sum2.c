#include <cs50.h>
#include <stdio.h>

int main()
{
    int n = get_int("Enter n: ");
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
