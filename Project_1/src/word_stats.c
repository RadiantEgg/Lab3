#include <stdio.h>
#include "word_stats.h"

int count_word(char *s)
{
    int count = 0;
    char *p = s;
    while (*p != '\0') {
        if (*p == ' ')
            count++;
        p++;
    }
    return count + 1;
}