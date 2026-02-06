#include <cs50.h>
#include <stdio.h>

int main()
{
    int n = get_int("Enter n: ");

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", 3 * i);
    }

    return 0;
}
