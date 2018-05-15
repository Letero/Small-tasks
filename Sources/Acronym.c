#include "../Headers/Acronym.h"
char *abbreviate(const char *phrase)
{
    char *acronym = malloc(MAX_WORDS+1 * sizeof(char));
    int length = strlen(phrase);    
    int count = 0;
    
    if (length == 0)
	{
		free(acronym);
        return NULL;
    }
	acronym[0] = phrase[0]; 
    for (int i = 1; i < length; ++i)
    {
        if (phrase[i-1] == ' ' || phrase[i-1] == '\n')
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
        if (count >= MAX_WORDS)
        {
			free(acronym);
            return NULL;
        }
    }
    acronym[MAX_WORDS] = '\n';
    return acronym;
}