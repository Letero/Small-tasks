#include "../Headers/Acronym.h"
char *abbreviate(const char *phrase)
{
    char *acronym = malloc(20*sizeof(char));
    int length = strlen(phrase);
    int count = 0;
    
    if (length == 0)
        return NULL;
    acronym[0] = phrase[0]; 

    for (int i = 1; i < length; ++i)
    {
        if (phrase[i-1] == ' ')
        {
            ++count;
            if (phrase[i] > 'a' || phrase[i] < 'z')
            {
                acronym[count] = phrase[i]-32;
            }
            else
            {
               acronym[count] = phrase[i];
            }
        }
    }
    return acronym;
}