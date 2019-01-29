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

char* mystrrev2(const char *str)    //return by value
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
    mystrrev(str);
    printf("%s\n", str); //test
    return 0;
}
