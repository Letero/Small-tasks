#include <iostream>
#include <cstdlib>
#define WIDTH 5
#define HEIGHT 5

int** alloc2DArray(int width, int height) //ret by value
{
    int ** arr = new int*[width];
    for (int i = 0; i < width; ++i)
    {
        arr[i] = new int[height];
    }
    return arr;
}

void alloc2DArrayPtr(int ***arr, int width, int height) // ret by pointer
{
    *arr = new int*[width];
    for (int i = 0; i < width; ++i)
    {
        (*arr)[i] = new int[height];
    }
}

void alloc2DArrayRef(int** &arr, int width, int height) // ret by reference
{
    arr = new int*[width];
    for (int i = 0; i < width; ++i)
    {
        arr[i] = new int[height];
    }
}

void fillandPrint(int** arr, int width, int height)
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
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void free2DArray(int** arr, int width)
{
    for (int i = 0; i < width; ++i)
    {
        delete [] arr[i];
    }
    delete [] arr;
}

int main(int argc, char *argv[])
{
    int **arr;
    alloc2DArrayRef(arr, WIDTH, HEIGHT);
    fillandPrint(arr, WIDTH, HEIGHT);
    free2DArray(arr, WIDTH);
    return 0;
}