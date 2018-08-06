#include "BitwiseOperations.h"
#include <stdio.h>

/*simple operations: */
unsigned int setBit(unsigned int val, unsigned int pos) // set given bit in given integer to 1
{
    return val | (1 << pos);
}

unsigned int toggleBit(unsigned int val, unsigned int pos) // set given bit in given integer to opposite value
{
    return val ^ (1 << pos);
}

unsigned int clearBit(unsigned int val, unsigned int pos) // set given bit in given integer to 0
{
    return val & ~(1 << pos);
}

void printByte(unsigned char byte) // prints binary representation of given byte
{
    for (int i = 7; i >= 0; --i)
    {
        //printf("%d", (byte & (1 << i))?1:0);    // one way of printing
        printf("%d", ((byte >> i) & 1) ? 1 : 0); // another way of printing
    }
}

unsigned int rotateBits(unsigned int val, unsigned int howManyToRotate)
{
    return (val >> howManyToRotate) | (val << (sizeof(unsigned int) * 8 - howManyToRotate));
}

void printInt(unsigned int value)
{
    printf("| ");
    for (int i = 0; i < 4; ++i)
    {
        printByte(value >> i * 8);
        printf(" | ");
    }
    puts("");
}

void printIntBigEndian(unsigned int value)
{
    printf("| ");
    for (int i = 3; i >= 0; --i)
    {
        printByte(value >> i * 8);
        printf(" | ");
    }
    puts("");
}

void printIntUnionCut(unsigned int value)
{
    cutInt.val = value;
    for (int i = 0; i < 4; ++i)
    {
        printByte(cutInt.arr[i]);
        printf(" | ");
    }
    puts("");
}

unsigned int swapInnerBytes(unsigned int value)
{
    return (((value << 8) & 0xFF0000) | ((value >> 8) & 0xFF00)) | (value & 0xFF0000FF);
}

unsigned int swapOuterBytes(unsigned int value)
{
    return (((value << 24) & 0xFF000000) | ((value >> 24) & 0xFF)) | (value & 0xFFFF00);
}

unsigned int clearEvenBits(unsigned int value)
{
    return value & 0x55555555;
}

unsigned int clearOddBits(unsigned int value)
{
    return value & 0xAAAAAAAA;
}

bool isPowerOfTwo(unsigned int value)
{
    return value & (value - 1);
}

unsigned int swapAdjacentBits(unsigned int value)
{
    return (value << 1 & 0xAAAAAAAA) | (value >> 1 & 0x55555555);
}

unsigned int rangeBitCount(unsigned int a, unsigned int b)
{
    int counter = 0;
    for (int i = a; i <= b; ++i)
    {
        for (int j = 0; j < 32; ++j)
        {
            if (i & (1 << j))
            {
                counter++;
            }
        }
    }
    return counter;
}
