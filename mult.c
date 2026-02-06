#include <cs50.h>
#include <stdio.h>

int main()
{
    int n = get_int("Enter n: ");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
