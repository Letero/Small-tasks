#include "../Headers/Common.h"

#include "../Headers/alloc2Darray.h"
int main(int argc, char *argv[])
{
    int **arr = alloc2DArray(WIDTH, HEIGHT);
    //alloc2DArrayPtr(&arr, WIDTH, HEIGHT);
    fillandPrint(arr, WIDTH, HEIGHT);
    free2DArray(arr, WIDTH);
}
