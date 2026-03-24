#include <stdio.h>
#include "text_utlis.h"
#include "word_stats.h"

int main()
{
    char s[100];
    read_text(s);
    printf("%d\n", count_word(s));
    return 0;
}