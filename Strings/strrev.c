#include <stdio.h>
#include <mystring.h>

void reverseV1(char *str)
{
    unsigned int len = strlen((const char *)str);
    char temp;

    for (int i = 0, j = len - 1; i < j; ++i, --j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void reverseV2(char* str)
{
    int len = strlen(str);
    char tmp;
    
    for(int i = 0; i < len/2; i++)
    {
        tmp = str[i];
        str[i] = str[l-i-1];
        str[l-i-1] = tmp;
    }
}


char* reverseV3(const char *str)    //return by value
{
    int len = strlen(str);
    char *arr = malloc(sizeof(char) * len);
    for (int i = 0, j = len - 1; i < len; ++i, --j)
    {
        arr[i] = str[j];
    }
    return arr;
}

int main(int argc, char *argv[])
{
    char str[7] = "Hello!";
    reverseV2(str);
    printf("%s\n", str); //test
    return 0;
}
