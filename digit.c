#include <cs50.h>
#include <stdio.h>

int main()
{
    int n = get_int("Enter number: ");
    int count = 0;
    if(n==0)
    {
        count=1;
    }
    else
    {
        while (n > 0)
    {
        n = n / 10;
        count++;
    }
    }


    printf("Digits = %d\n", count);
    return 0;
}
