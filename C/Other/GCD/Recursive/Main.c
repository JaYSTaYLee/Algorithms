#include <stdlib.h>
#include <stdio.h>


int gcd(const int num1, const int num2)
{
    if(num1 == num2)
    {
        return num1;
    }
    else
    {
        if(num1 < num2)
        {
            return gcd(num2 - num1, num1);
        }
        else
        {
            return gcd(num1 - num2, num2);
        }
    }
}


int main(void)
{
    printf("%d", gcd(12,8));

    return 0;
}
