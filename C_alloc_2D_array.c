#include <stdio.h>
#include <stdlib.h>
#define WIDTH 5
#define HEIGHT 5

// return by value
int** alloc2DArray(int width, int height)
{
    int ** arr = (int**)malloc(sizeof(int*) * width);
    for (int i = 0; i < width; ++i)
    {
        arr[i] = (int*)malloc(sizeof(int) * height);
    }
    return arr;
}
// return by pointer
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
    for (int i = 0; i < width; ++i)
    {
        free(arr[i]);
    }
    free (arr);
}

void fillandPrint(int **arr, int width, int height)
{
    for (int i = 0; i < width; ++i)
    {
        for (int j = 0; j < height; ++j)
        {
            arr[i][j] = i * j;
        }
    }

    for (int i = 0; i < width; ++i)
    {
        for (int j = 0; j < height; ++j)
        {
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
}
// TODO:
// alloc 2d array with one malloc

int main(int argc, char *argv[])
{
    int **arr = alloc2DArray(WIDTH, HEIGHT);
    //alloc2DArrayPtr(&arr, WIDTH, HEIGHT);
    fillandPrint(arr, WIDTH, HEIGHT);
    free2DArray(arr, WIDTH);
    return 0;
}