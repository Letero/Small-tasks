#include <stdio.h>
#include <mystring.h>

void mystrrev(char *str)
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

void mystrrev2(unsigned char *str)
{
    unsigned int len = strlen((const char *)str);
    unsigned char temp;
    
    for (int i = 0, j = len - 1; i < j; ++i, --j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main(int argc, char *argv[])
{
    char str[7] = "Hello!";
    mystrrev(str);
    printf("%s\n", str); //test
    return 0;
}
