#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter n: ");
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            count++;
        }
    }

    printf("Count = %d\n", count);

    return 0;
}
