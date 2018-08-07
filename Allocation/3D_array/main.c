#include "alloc3Darray.h"

#define WIDTH 5
#define HEIGHT 5
#define DEPTH 5

int main(int argc, char *argv[])
{
    // int **arr = alloc2DArray(WIDTH, HEIGHT);
    int ***arr = allocWithOneMalloc(WIDTH, HEIGHT, DEPTH);
    //alloc2DArrayPtr(&arr, WIDTH, HEIGHT);
    fillArray(arr, WIDTH, HEIGHT, DEPTH);
    printArray(arr, WIDTH, HEIGHT, DEPTH);

    free3DArray(arr, WIDTH, HEIGHT);
}
