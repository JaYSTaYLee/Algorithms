#include <stdlib.h>
#include <stdio.h>


int search(int list[], int key, int lowIndex, int highIndex)
{
    int middleIndex = (lowIndex + highIndex) / 2;
    int middleValue = list[middleIndex];

    while(lowIndex <= highIndex)
    {
        if(key == middleValue)
        {
            return 0;
        }
        else if(key < middleValue)
        {
            highIndex = middleIndex;
        }
        else
        {
            lowIndex = middleIndex + 1;
        }

        middleIndex = (lowIndex + highIndex) / 2;
        middleValue = list[middleIndex];
    }

    return 1;
}



int main(void)
{

    int numbers[6] = {0, 1, 2, 3, 4, 5};

    if(search(numbers, 5, 0, 5) == 0)
    {
        printf("Found");
    }
    else if(search(numbers, 6, 0, 5) == 1)
    {
        printf("Not Found");
    }

    return 0;
}
