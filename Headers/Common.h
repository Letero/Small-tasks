#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>  // standard in/out library
#include <stdlib.h> // standard C library

//check error macro test

/*#define CHECK(LINE, EXPECTED)                                  \    
    {                                                          \
        int rc = LINE;                                         \
        if (rc != EXPECTED)                                    \
            ut_abort(__FILE__, __LINE__, #LINE, rc, EXPECTED); \
    }

//void ut_abort(char *file, int ln, char *line, int rc, int exp);

void ut_abort(char *file, int ln, char *line, int rc, int exp)
{
    fprintf(stderr, "%s line %d\n'%s': expected %d, got %d\n",
            file, ln, line, exp, rc);
    exit(1);
}*/


#endif //COMMON_H
