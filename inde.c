#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter a number: ");

    n++;
    printf("After increment: %d\n", n);

    n--;
    printf("After two decrements: %d\n", n);

    return 0;
}
