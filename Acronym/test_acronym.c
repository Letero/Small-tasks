#include "Acronym.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  char *acronym = abbreviate("I want you to return perfect acronym!");
  printf("%s", acronym);
  char *acronym1 = abbreviate("Jary Kon\n");
  printf("\n%s\n", acronym1);
  free(acronym);
  free(acronym1);
  return 0;
}