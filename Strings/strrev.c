#include <stdio.h>
#include <string.h>

void mystrrev(unsigned char *str)
{
    unsigned int len = strlen((const char*)str);
    unsigned char temp;
    
    for (int i = 0, j = len-1; i < j; ++i, --j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main(int argc, char *argv[])
{
    unsigned char str[7] = "Hello!";
    mystrrev(str);
    printf("%s\n", str); //test
    return 0;
}