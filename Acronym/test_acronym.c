#include "Acronym.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  char *acronym = abbreviate("T e s t i n g 2 0 w o r d s m a x i m u m");
  printf("%s", acronym);
  char *acronym1 = abbreviate("Jary Kon\n");
  printf("\n%s\n", acronym1);
  free(acronym);
  free(acronym1);
  return 0;
}