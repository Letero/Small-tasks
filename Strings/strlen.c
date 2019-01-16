#include <stdio.h>

size_t mystrlen(const char *string) // my first draft
{
    int count = 0;
    char *temp = string;
    while (temp)
    {
        temp = string[count++];
    }
    return count - 1; //ignore \0
}

size_t proStrLen(const char *str)
{
    const char *n = str;

    for (; *n; ++n)
        ;

    return (n - str);
}

int main(int argc, char *argv[])
{
    printf("%d\n", mystrlen("Hello world!")); //test
    return 0;
}