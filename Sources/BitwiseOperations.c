#include "../Headers/Common.h"
#include "../Headers/BitwiseOperations.h"

/*simple operations: */
unsigned int setBit(unsigned int val, unsigned int pos)        // set given bit in given integer to 1
{
    return val | (1 << pos);
}

unsigned int toggleBit(unsigned int val, unsigned int pos)     // set given bit in given integer to opposite value
{
    return val ^ (1 << pos);
}

unsigned int clearBit(unsigned int val, unsigned int pos)      // set given bit in given integer to 0
{
    return val & ~(1 << pos);
}


void printByte(unsigned char byte)  // prints binary representation of given byte
{
    for (int i = 7; i >= 0; --i)
    {
        //printf("%d", (byte & (1 << i))?1:0);    // one way of printing
        printf("%d", ( (byte >> i) & 1) ?1:0);    // another way of printing
    }
}



void printInt(unsigned int value) 
{
    printf("| ");
    for (int i = 0; i < 4; ++i)
    {
        printByte(value >> i*8);
        printf(" | ");
    }
    puts("");
}

void printIntBigEndian(unsigned int value)
{
    printf("| ");
    for (int i = 3; i >= 0; --i)
    {
        printByte(value >> i*8);
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

unsigned int swapInnerBytes(unsigned int x)
{
    return (((x << 8) & 0xFF0000) | ((x >> 8) & 0xFF00)) | (x & 0xFF0000FF);
}

unsigned int swapOuterBytes(unsigned int x)
{
    return ((((x << 24) & 0xFF000000) | ((x >> 24) & 0xFF))) | (x & 0xFFFF00);
}

unsigned int clearEvenBits(unsigned int x)         //
{
    return x & 0x55555555;
}

unsigned int clearOddBits(unsigned int x)
{
    return x & 0xAAAAAAAA;
}