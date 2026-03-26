#include <stdio.h>
#include <string.h>
#include "word_stats.h"
#include "word_cleaner.h"

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

void get_initials(char *s, char *d)
{
    char *p = s;
    char *t = d;
    char last = ' ';
    while (*p != '\0') {
        if (last == ' ') {
            *t = *p;
            t++;
        }
        last = *p;
        p++;
    }
    *t = '\0';
}

void get_longest_word(char *s, char *d)
{
    char word[MAXLINE][MAXLINE];
    char *p = s;
    int row, col, i, index;
    int length, max_length = 0;
    for (row = 0;;row++) {
        col = 0;
        while (*p != ' ' && *p != '\0') {
            word[row][col++] = *p;
            p++;
        }
        word[row][col] = '\0';

        if (*p == '\0') {
            break;
        } else {
            p++;
        }
    }

    for (i = 0; i <= row; i++) {
        length = strlen(word[i]);

        if (length > max_length) {
            max_length = length;
            index = i;
        }
    }
    strcpy(d, word[index]);
}