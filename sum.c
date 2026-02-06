#include <cs50.h>
#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %i\n", sum);

    return 0;
}
