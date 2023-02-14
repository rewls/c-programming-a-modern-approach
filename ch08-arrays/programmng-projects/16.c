/*
 * 16.c (Chapter 8, page 181, Programming Project 16)
 * Test whether two words are anagrams
 */

#include <stdio.h>
#include <ctype.h>

#define N_ALPHABETS 26

int main(void)
{
    int track[N_ALPHABETS] = {0};
    char ch;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha((int)ch)) {
            track[tolower(ch) - 'a']++;
        }
    }
    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha((int)ch)) {
            track[tolower(ch) - 'a']--;
        }
    }

    for (ch = 'a'; ch <= 'z'; ch++) {
        if (track[ch - 'a'] != 0) {
            break;
        }
    }

    if (ch > 'z') {
        printf("The words are anagrams.");
    } else {
        printf("The words are not anagrams.");
    }

    return 0;
}
