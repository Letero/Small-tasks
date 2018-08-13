#include "Acronym.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *abbreviate(const char *phrase)
{

    char *acronym = (char *)calloc(MAX_WORDS + 1 * sizeof(char), 1);
    int flag = 1;
    int i = 0;

    while (*phrase)
    {
        if (phrase[0] == ' ')
        {
            flag = 1;
        }

        if (flag && phrase[0] != ' ')
        {
            if (phrase[0] >= 97)
            {
                acronym[i++] = phrase[0] - 32;
            }
            else
            {
                acronym[i++] = phrase[0];
            }
            flag = 0;
        }
        ++phrase;
    }
    acronym[i] = '\n';
    return acronym;
}