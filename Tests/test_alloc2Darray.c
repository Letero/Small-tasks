#include "../Headers/alloc2Darray.h"

#define WIDTH 5
#define HEIGHT 5
int main(int argc, char *argv[])
{
   // int **arr = alloc2DArray(WIDTH, HEIGHT);
    int **arr = allocWithOneMalloc(WIDTH, HEIGHT);
    //alloc2DArrayPtr(&arr, WIDTH, HEIGHT);
    fillArray(arr, WIDTH, HEIGHT);
    printArray(arr, WIDTH, HEIGHT);

    free2DArray(arr, WIDTH);
}
