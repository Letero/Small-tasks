#include "Common.h"
/* simple/basic/the most common operations: */
unsigned int setBit(unsigned int val, unsigned int pos);        // set given bit in given integer to 1
unsigned int toggleBit(unsigned int val, unsigned int pos);     // set given bit in given integer to opposite value
unsigned int clearBit(unsigned int val, unsigned int pos);      // set given bit in given integer to 0
void printByte(unsigned char byte);  // prints binary representation of given byte
void printInt(unsigned int value);           // prints integer byte by byte using right shift operator, default little endian

/* fun with bitwise operations */
union                   
{
    char arr[4];
    int val;
} cutInt;
void printIntBigEndian(unsigned int value);  // print integer byte by byte using right shift operator, now represent as big endian

void printIntUnionCut(unsigned int value);    // prints integer byte by byte using union
unsigned int swapInnerBytes(unsigned int x);
unsigned int swapOuterBytes(unsigned int x);
unsigned int clearEvenBits(unsigned int x);
unsigned int clearOddBits(unsigned int x);