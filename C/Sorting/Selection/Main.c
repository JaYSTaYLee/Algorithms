#include <stdlib.h>
#include <stdio.h>

void SelectionSort(int arr[], const int size)
{
    int indexSmallest;
    int temp;

    for(int i = 0; i < size; i++)
    {
        indexSmallest = i;

        for(int j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[indexSmallest])
            {
                indexSmallest = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[indexSmallest];
        arr[indexSmallest] = temp;
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

    SelectionSort(numbers, SIZE);

    PrintArray(numbers, SIZE);

    return 0;
}
