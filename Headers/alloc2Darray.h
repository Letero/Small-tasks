#include "../Headers/Common.h"
#define WIDTH 5
#define HEIGHT 5

// return allocated array by value
int** alloc2DArray(int width, int height);
// return allocated array by pointer
void alloc2DArrayPtr(int ***arr, int width, int height);
// free allocated memory
void free2DArray(int **arr, int width);
// fill array with some values and print those, this function is used to test other ones
void fillandPrint(int **arr, int width, int height);
