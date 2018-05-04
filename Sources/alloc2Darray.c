#include "../Headers/Common.h"
#include "../Headers/alloc2Darray.h"


int** alloc2DArray(int width, int height)
{
    int ** arr = (int**)malloc(sizeof(int*) * width);
    for (int i = 0; i < width; ++i)
    {
        arr[i] = (int*)malloc(sizeof(int) * height);
    }
    return arr;
}

void alloc2DArrayPtr(int ***arr, int width, int height)
{
    *arr = (int**)malloc(sizeof(int*) * width);
    for (int i = 0; i < width; ++i)
    {
        (*arr)[i] = (int*)malloc(sizeof(int) * height);
    }
}

void free2DArray(int **arr, int width)
{
    if (arr == NULL)
    {
        return;
    }
    for (int i = 0; i < width; ++i)
    {
        free(arr[i]);
    }
    free (arr);
}

void fillArray(int **arr, int width, int height)
{
    if (arr == NULL)
    {
        return;
    }
    for (int i = 0; i < width; ++i)
    {
        for (int j = 0; j < height; ++j)
        {
            arr[i][j] = i * j;
        }
    }
}

void printArray(int **arr, int width, int height)
{
    for (int i = 0; i < width; ++i)
    {
        for (int j = 0; j < height; ++j)
        {
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
}

int** allocWithOneMalloc(int width, int height)
{
    int** arr = (int**)malloc(sizeof(int*) * width * sizeof(int) * height + (sizeof(int*) * width));
    int * offset = (int*)(arr + width);
    
    for (int i = 0; i < width; ++i)
    {
        arr[i] = offset + i * height; 
    }
    return arr;
}
