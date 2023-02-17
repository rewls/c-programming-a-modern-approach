/*
 * 14.c (Chapter 13, page 313, Programming Project 14)
 */

#include <stdbool.h>  /* C99 Only */
#include <stdio.h>
#include <ctype.h>

#define LEN_WORD 50
#define N_ALPHABETS 26

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
    char word1[LEN_WORD], word2[LEN_WORD];

    printf("Enter first word: ");
    scanf("%s", word1);
    printf("Enter second word: ");
    scanf("%s", word2);

    if (are_anagrams(word1, word2)) {
        printf("The words are anagrams.");
    } else {
        printf("The words are not anagrams.");
    }

    return 0;
}

/*
 * are_anagrams:
 *     Test whether two words are anagrams.
 */
bool are_anagrams(const char *word1, const char *word2)
{
    int track[N_ALPHABETS] = {0}, i;

    for (; *word1; word1++) {
        if (isalpha(*word1)) {
            track[toupper(*word1) - 'A']++;
        }
    }

    for (; *word2; word2++) {
        if (isalpha(*word2)) {
            track[toupper(*word2) - 'A']--;
        }
    }

    for (i = 0; i < N_ALPHABETS && !track[i]; i++)
        ;

    if (i == N_ALPHABETS) {
        return true;
    }

    return false;
}
