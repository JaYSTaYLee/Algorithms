#include <stdlib.h>
#include <stdio.h>


int fibonacci(const int n)
{
    int Fn1;
    int Fn2;
    int Fn;

    Fn1 = 0;
    Fn2 = 1;
    Fn = 0;

    for(int i = 0; i < n; ++i)
    {
        Fn = Fn1 + Fn2;
        Fn2 = Fn1;
        Fn1 = Fn;
    }

    return Fn;
}



int main(void)
{
    const int N = 20;

    for(int i = 0; i < N; ++i)
    {
        printf("%d\n", fibonacci(i));
    }

    return 0;
}
