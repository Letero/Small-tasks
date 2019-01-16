#include <stdio.h>
#include <string.h>

/**
 * [in] char *dest - this will be returned with copied value
 * [in] const char *src - source, const because we don't want to change it
 * [return] pointer to begining of string - thanks to that we can use nested calls, 
 * for example: printf("%s\n", strcpy(dst, src));
 * with void it is impossible
 */
char *mystrcpy(char *dest, const char *src)
{
    for (size_t i = 0; src[i] != '\0'; ++i)
    {
        dest[i] = src[i];
    }

    return dest;
}
/**
 * [in] char *dest - this will be returned with copied value
 * [in] const char *src - source, const because we don't want to change it
 * [in] int no - number of characters to copy
 * [return] pointer to begining of string - thanks to that we can use nested calls, 
 * for example: printf("%s\n", strcpy(dst, src));
 * with void it is impossible
 */
char *mystrncpy(char *dest, const char *src, int no)
{
    size_t i = 0;
    for (i = 0; i < no && src[i] != '\0'; ++i)
    {
        dest[i] = src[i];
    }
    // If the length of src is less than n,
    // mystrncpy() writes additional null bytes to dest to ensure that a total of n bytes are written.
    for (; i < no; ++i)
    {
        dest[i] = '\0';
    }
    return dest;
}

int main()
{
    const char *test = "hehe\0";
    char new[5]; // no point of allocating memory for testing
    strncpy(new, test, 2);
    printf("Source = %s, copied = %s\n", test, new);
    return 0;
}