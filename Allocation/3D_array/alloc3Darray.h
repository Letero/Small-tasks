#ifndef ALLOC3DARRAY_H
#define ALLOC3DARRAY_H

// return allocated array by value
int ***alloc3DArray(int width, int height, int depth);
// return allocated array by pointer
void alloc3DArrayPtr(int ****arr, int width, int height, int depth);
// free allocated memory
void free3DArray(int ***arr, int width, int height);
// fill array with some values, function is used to test
void fillArray(int ***arr, int width, int height, int depth);
// print array, function is used to test
void printArray(int ***arr, int width, int height, int depth);
// alloc 2d array using one malloc function
int ***allocWithOneMalloc(int width, int height, int depth);

#endif // ALLOC3DARRAY_H