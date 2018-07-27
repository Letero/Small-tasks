#ifndef BITWISEOPERATIONS_H
#define BITWISEOPERATIONS_H

typedef int bool;
#define true 1
#define false 0

/* simple/basic/the most common operations: */
unsigned int
setBit(unsigned int val, unsigned int pos);                 // set given bit in given integer to 1
unsigned int toggleBit(unsigned int val, unsigned int pos); // set given bit in given integer to opposite value
unsigned int clearBit(unsigned int val, unsigned int pos);  // set given bit in given integer to 0
void printByte(unsigned char byte);                         // prints binary representation of given byte
void printInt(unsigned int value);                          // prints integer byte by byte using right shift operator, default little endian

/* fun with bitwise operations */
union // this union is used to "cut" integer into bytes
{
    char arr[4];
    int val;
} cutInt;

unsigned int rotateBits(unsigned int val, unsigned int howManyToRotate); // rotate bits in given int

bool isPowerOfTwo(unsigned int value);
void printIntBigEndian(unsigned int value);      // print integer byte by byte using right shift operator, now represent as big endian
void printIntUnionCut(unsigned int value);       // prints integer byte by byte using union
unsigned int swapInnerBytes(unsigned int value); // swaps middle bytes of integer
unsigned int swapOuterBytes(unsigned int value);
unsigned int clearEvenBits(unsigned int value); // sets bits at even positions to 0
unsigned int clearOddBits(unsigned int value);  // sets bits at odd positions to 0

#endif // BITWISEOPERATIONS_H
