#include <stdlib.h>
#include <stdio.h>


int LinearSearch(const int numbers[], int size, int key)
{
    for(int i = 0; i < size; ++i)
    {
        if(key == numbers[i])
        {
            return 0;
        }
    }
    return 1;
}


int main(void)
{
    return 0;
}
