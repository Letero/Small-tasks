#include <stdio.h>
#include <limits.h>

int secondHighestValueInArray(int *array, int size)
{
    int max = array[0];
    int next = INT_MIN; //should be minimum value of int
    for (int i = 0; i < size; ++i)
    {
        if (array[i] > max)
        {
            next = max;
            max = array[i];
        }
        else if (array[i] > next && array[i] < max)
        {
            next = array[i];
        }
    }
    if (next == INT_MIN)
    {
        next = max;
    }
    return next;
}

int main()
{
    int arr[3] = {3, 1, 5};
    printf("%d\n", secondHighestValueInArray(arr, 3));
    return 0;
}