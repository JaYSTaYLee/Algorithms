#include <stdlib.h>
#include <stdio.h>

void QuickSort(int arr[], const int size);
void Partition(int arr[], int lowIndex, int highIndex);

void QuickSort(int arr[], const int size)
{
    int lowIndex = 0;
    int highIndex = size - 1;

    Partition(arr, lowIndex, highIndex);
}

void Partition(int arr[], int lowIndex, int highIndex)
{
    if(lowIndex >= highIndex)
    {
        return;
    }

    int pivotIndex = (lowIndex + highIndex) / 2;
    int pivotValue = arr[pivotIndex];
    int temp;

    //Move pivot value to end of partitioned array
    temp = arr[pivotIndex];
    arr[pivotIndex] = arr[highIndex];
    arr[highIndex] = temp;

    int i = lowIndex - 1;
    int j = lowIndex;

    while(j < highIndex)
    {
        if(arr[j] < pivotValue)
        {
            ++i;

            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;

            ++j;
        }
        else
        {
            ++j;
        }
    }

    //Move pivot value to correct position of partitioned array
    temp = arr[i + 1];
    arr[i + 1] = arr[highIndex];
    arr[highIndex] = temp;

    Partition(arr, lowIndex, i + 1);
    Partition(arr, i + 2, highIndex);
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

    QuickSort(numbers, SIZE);

    PrintArray(numbers, SIZE);

    return 0;
}
