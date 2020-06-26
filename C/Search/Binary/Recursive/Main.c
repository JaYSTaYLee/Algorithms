#include <stdlib.h>
#include <stdio.h>


int search(int list[], int key, int lowIndex, int highIndex)
{
    if(lowIndex > highIndex)
    {
        return 1;
    }
    else
    {
        int middleIndex = (lowIndex + highIndex) / 2;
        int middleValue = list[middleIndex];

        if(key == middleValue)
        {
            return 0;
        }
        else if(key < middleValue)
        {
            return search(list, key, lowIndex, middleIndex);
        }
        else
        {
            return search(list, key, middleIndex + 1, highIndex);
        }
    }
}



int main(void)
{

    int numbers[6] = {0, 1, 2, 3, 4, 5};

    if(search(numbers, 6, 0, 5) == 0)
    {
        printf("Found");
    }
    else if(search(numbers, 6, 0, 5) == 1)
    {
        printf("Not Found");
    }

    return 0;
}
