#include <stdlib.h>
#include <stdio.h>

void InsertionSort(int arr[], const int size)
{
    int temp;
    int j;

    for(int i = 0; i < size; ++i)
    {
        j = i;
        while(j > 0)
        {
            if(arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            --j;
        }
    }
}

void PrintArray(const int arr[], const int size)
{
    printf("[");

    for(int i = 0; i < size; i++)
    {
        if(i == size - 1)
        {
            printf("%d", arr[i]);
            break;
        }
        else
        {
            printf("%d, ", arr[i]);
        }
    }

    printf("]\n");
}

int main(void)
{
    const int SIZE = 10;

    int numbers[SIZE] = {0, 2, 4, 6, 8, 1, 3, 5, 7, 9};

    PrintArray(numbers, SIZE);

    InsertionSort(numbers, SIZE);

    PrintArray(numbers, SIZE);

    return 0;
}
