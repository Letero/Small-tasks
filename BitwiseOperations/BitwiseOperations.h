#ifndef BITWISEOPERATIONS_H
#define BITWISEOPERATIONS_H

typedef int bool;
#define true 1
#define false 0

/* simple/basic/the most common operations: */

unsigned int setBit(unsigned int val, unsigned int pos);    // set given bit in given integer to 1
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
/**
 * print integer byte by byte using right shift operator, now represent as big endian
 * */
void printIntBigEndian(unsigned int value);
/**
 * prints integer byte by byte using union
 * */
void printIntUnionCut(unsigned int value);
/**
 * swaps middle bytes of integer
 * */
unsigned int swapInnerBytes(unsigned int value);
/**
 * swaps edge/outer bytes of integer
 * */
unsigned int swapOuterBytes(unsigned int value);
/**
 * sets bits at even positions to 0
 * */
unsigned int clearEvenBits(unsigned int value); //
/**
 * sets bits at odd positions to 0
 * */
unsigned int clearOddBits(unsigned int value);
/**
 * name of function is selfexplanatory
 * */
unsigned int swapAdjacentBits(unsigned int value);

/**
 * return amount of 1 in a given integer
 **/
unsigned int countOnes(unsigned long int value);

/*
You are given two numbers a and b where 0 ≤ a ≤ b. 
Imagine you construct an array of all the integers from a to b inclusive. 
You need to count the number of 1s in the binary representations of all the numbers in the array.
*/
unsigned int rangeBitCount(unsigned int a, unsigned int b);

/**
 * Reverse the order of the bits in a given integer.
 */
unsigned int mirrorBits(unsigned int value);

/**
 * Number of different bits in given numbers 
 */
unsigned int hammingDistance(unsigned int x, unsigned int y);

#endif // BITWISEOPERATIONS_H
