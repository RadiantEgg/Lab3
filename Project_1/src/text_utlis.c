#include <stdio.h>
#include <ctype.h>
#include "text_utlis.h"


void read_text(char *s)
{
    char c, last;
    char *p = s;
    int in_text = 0;

    while ((c = getchar()) != '\n') {
        if (!in_text) {
            if (c == ' ')
                continue;
            else 
                in_text = 1;
        }

        if (c != ' ' || last != ' ') {
            *p = c;
            p++;
            
            last = c;
        }
    }

    if (last == ' ') {
        *(p--) = '\0';
    } else {
        *p = '\0';
    }
}