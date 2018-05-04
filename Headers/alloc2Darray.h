#include "../Headers/Common.h"
// return allocated array by value
int** alloc2DArray(int width, int height);
// return allocated array by pointer
void alloc2DArrayPtr(int ***arr, int width, int height);
// free allocated memory
void free2DArray(int **arr, int width);
// fill array with some values, function is used to test
void fillArray(int **arr, int width, int height);
// print array, function is used to test
void printArray(int **arr, int width, int height);
// alloc 2d array using one malloc function
int** allocWithOneMalloc(int width, int height);