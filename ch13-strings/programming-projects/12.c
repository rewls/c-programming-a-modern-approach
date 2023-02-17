/*
 * 12.c (Chapter 13, page 313, Programming Project 12)
 * Reverse the words in a sentence
 */

#include <stdio.h>
#include <string.h>

#define NUM_WORD 30
#define LEN_WORD 20

int main(void)
{
    char words[NUM_WORD + 1][LEN_WORD + 1], term_char, ch;
    int i;
    size_t length;

    printf("Enter a sentence: ");
    i = 0;
    do {
        scanf("%s", words[i]);
        length = strlen(words[i]);
    } while ((ch = words[i++][length - 1]) != '.' && ch != '?' && ch != '!');
    words[--i][length - 1] = '\0';
    term_char = ch;

    printf("Reversal of sentence:");
    while (i >= 0) {
        printf(" %s", words[i--]);
    }
    putchar(term_char);

    return 0;
}
