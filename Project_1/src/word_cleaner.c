#include <stdio.h>
#include "word_cleaner.h"
#include "text_utlis.h"
#include "word_stats.h"

void run_word_cleaner(void)
{
    int word_cnt;
    char line[MAXLINE];
    char initials[MAXLINE];
    char longest_word[MAXLINE];

    getline(line);

    word_cnt = count_word(line);
    printf("%d\n", word_cnt);

    get_initials(line, initials);
    printf("%s\n", initials);

    get_longest_word(line, longest_word);
    printf("%s\n", longest_word);
    
}
