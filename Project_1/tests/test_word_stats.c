#include <stdio.h>
#include "text_utlis.h"
#include "word_stats.h"

int main()
{
    char s[100];
    char initials[100];
    char longest_word[100];
    read_text(s);
    // printf("%d\n", count_word(s));
    // get_initials(s,initials);
    get_longest_word(s, longest_word);
    printf("%s\n", longest_word);
    return 0;
}