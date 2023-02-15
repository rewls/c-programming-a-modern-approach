/*
 * 14.c (Chapter 8, page 180, Programming Project 14)
 * Reverse the words in a sentence
 */

#include <stdio.h>

#define SIZE 100

int main(void)
{
    char sentence[SIZE], term_char, ch;
    int i, j, end_word;

    printf("Enter a sentence: ");
    for (i = 0;
            (ch = getchar()) != '.' && ch != '?' && ch != '!' && i < SIZE
            ; i++) {
        sentence[i] = ch;
    }
    term_char = ch;
    i--;

    printf("Reversal of sentence: ");
    for (; i >= 0; i--) {
        end_word = i;
        for (; sentence[i] != ' ' && i >= 0; i--)
            ;
        j = i;
        do {
            j++;
            putchar(sentence[j]);
        } while (j != end_word);
        if (i > 0) {
            putchar(' ');
        }
    }
    putchar(term_char);

    return 0;
}
