#include <stdio.h>

/*simple operations: */
int setBit(int val, int pos)        // set given bit in given integer to 1
{
    return val | (1 << pos);
}

int toggleBit(int val, int pos)     // set given bit in given integer to opposite value
{
    return val ^ (1 << pos);
}

int clearBit(int val, int pos)      // set given bit in given integer to 0
{
    return val & ~(1 << pos);
}


void printByte(unsigned char byte)  // prints binary representation of given byte
{
    for (int i = 7; i >= 0; --i)
    {
        printf("%d", (byte & (1 << i))?1:0);
    }
}

/*  */

void printInt(int value)            // prints integer byte by byte using right shift operation
{
    for (int i = 0; i < 4; ++i)
    {
        printByte(value >> i*8);
    }
    puts("");
}

union
{
    char arr[4];
    int val;
} cutInt;

void printIntUnionCut(int value)    // prints integer byte by byte using union
{

    cutInt.val = value;
    for (int i = 0; i < 4; ++i)
    {
        printByte(cutInt.arr[i]);
    }
    puts("");
}

int swapInnerBytes(int x)
{
    return (((x << 8) & 0xFF0000) | ((x >> 8) & 0xFF00)) | (x & 0xFF0000FF);
}

int swapOuterBytes(int x)
{
    return ((((x << 24) & 0xFF000000) | ((x >> 24) & 0xFF))) | (x & 0xFFFF00);
}

int clearEvenBits(int x)         //
{
    return x & 0x55555555;
}

int clearOddBits(int x)
{
    return x & 0xAAAAAAAA;
}


int main(int argc, char *argv[])
{
    printInt(0xFFFFFF00);
    //printInt(0xFF0000FF);
    //printIntUnionCut(0xFF050500);
    //printIntUnionCut(swapOuterBytes(0xFF050500));
}