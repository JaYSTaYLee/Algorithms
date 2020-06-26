#include <stdlib.h>
#include <stdio.h>


int fibonacci(const int s, const int n, const int Fn1, const int Fn2)
{
    int Fn;

    Fn = Fn1 + Fn2;

    if(s == n)
    {
        return Fn;
    }
    else
    {
        return fibonacci(s + 1, n, Fn, Fn1);
    }
}



int main(void)
{
    const int N = 20;

    for(int i = 0; i < N; ++i)
    {
        printf("%d\n", fibonacci(0, i, 0, 1));
    }

    return 0;
}
