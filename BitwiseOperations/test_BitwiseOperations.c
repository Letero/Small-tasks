#include "BitwiseOperations.h"

int main(int argc, char *argv[])
{

    //printByte(0xF0);
    printIntBigEndian(13245);
    printIntBigEndian(rotateBits(13245, 16));
    //printIntBigEndian(0xFFFFFF00);
    //printIntUnionCut(0xFF050500);
    //printIntUnionCut(swapOuterBytes(0xFF050500));
}
