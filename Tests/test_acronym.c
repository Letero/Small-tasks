#include "../Headers/Acronym.h"

int main(int argc, char *argv[])
{
  //  char * acronym = abbreviate("I want you to return perfect acronym!");
    //printf("%s", acronym);
    char * acronym1 = abbreviate("I a q w e r t y u i o p a s d f q w\n");
    printf("\n%s\n", acronym1);
   // free(acronym);
    free(acronym1);
    return 0;
}