#include "../Headers/Acronym.h"

int main(int argc, char *argv[])
{
    char * acronym = abbreviate("I want you to return perfect acronym!");
    printf("%s", acronym);
    free(acronym);
    return 0;
}