#include <stdlib.h>
#include <stdio.h>


int factorial(int n)
{
    if(n < 0)
    {
        return -1;
    }

    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main(void)
{
    int n = 3;

    printf("%d", factorial(n));

    return 0;
}
