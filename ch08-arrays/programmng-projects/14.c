/*
 * 14.c (Chapter 8, page 180, Programming Project 14)
 * Reverse the words in a sentence
 */

#include <stdio.h>

#define SIZE 100

int main(void)
{
    char words[SIZE] = {0}, term_char, ch;
    int i, j, count;

    printf("Enter a sentence: ");
    for (i = 0; (ch = getchar()) != '.' && ch != '?' && ch != '!'; i++) {
        words[i] = ch;
    }
    term_char = ch;
    count = i;

    printf("Reversal of sentence: ");
    for (i = count - 1; i >= 0; i--) {
        ch = words[i];
        for (j = i; words[j] != ' ' && j >= 0; j--)
            ;
        i = j;
        do {
            j++;
            printf("%c", words[j]);
        } while (words[j] != ch);
        if (i > 0) {
            printf(" ");
        }
    }
    printf("%c", term_char);

    return 0;
}
