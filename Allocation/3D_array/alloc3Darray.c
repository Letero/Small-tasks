#include "alloc3Darray.h"
#include <stdio.h>
#include <stdlib.h>

int ***alloc3DArray(int width, int height, int depth)
{
    int ***newArray = (int ***)malloc(sizeof(int **) * width);
    for (int i = 0; i < width; ++i)
    {
        newArray[i] = (int **)malloc(sizeof(int *) * height);
        for (int j = 0; j < height; ++j)
        {
            newArray[i][j] = (int *)malloc(sizeof(int) * depth);
        }
    }
    return newArray;
}

void alloc3DArrayPtr(int ****arr, int width, int height, int depth)
{
    *arr = (int ***)malloc(sizeof(int **) * width);
    for (int i = 0; i < width; ++i)
    {
        (*arr)[i] = (int **)malloc(sizeof(int *) * height);
        for (int j = 0; j < height; ++j)
        {
            (*arr)[i][j] = (int *)malloc(sizeof(int) * depth);
        }
    }
}

void free3DArray(int ***arr, int width, int height)
{
    for (int i = 0; i < width; ++i)
    {
        for (int j = 0; j < height; ++j)
        {
            free(arr[i][j]);
        }
        free(arr[i]);
    }
    free(arr);
}

void fillArray(int ***arr, int width, int height, int depth)
{
    for (int i = 0; i < width; ++i)
    {
        for (int j = 0; j < height; ++j)
        {
            for (int k = 0; k < depth; ++k)
            {
                arr[i][j][k] = i * j * k;
            }
        }
    }
}

void printArray(int ***arr, int width, int height, int depth)
{
    for (int i = 0; i < width; ++i)
    {
        for (int j = 0; j < height; ++j)
        {
            for (int k = 0; k < depth; ++k)
            {
                printf("%d ", arr[i][j][k] = i * j * k);
            }
            puts("");
        }
        puts("");
    }
    puts("");
}

int ***allocWithOneMalloc(int width, int height, int depth)
{
}