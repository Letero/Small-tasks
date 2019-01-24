#include "BitwiseOperations.h"
#include <stdio.h>

int main(int argc, char *argv[])
{

    printf("%lu\n", countOnes(255));
    //printByte(0xF0);
    printIntBigEndian(13245);
    printIntBigEndian(isPowerOfTwo(0));
    //printIntBigEndian(0xFFFFFF00);
    //printIntUnionCut(0xFF050500);
    //printIntUnionCut(swapOuterBytes(0xFF050500));
}
