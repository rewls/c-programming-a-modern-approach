/*
 * 09.c (Chapter 13, page 312, Programming Project 9)
 */

#include <stdio.h>
#include <ctype.h>

#define LEN_SENTENCE 100

int compute_vowel_count(const char *sentence);

int main(void)
{
    char sentence[LEN_SENTENCE];

    printf("Enter a sentence: ");
    gets(sentence);

    printf("Your sentence contains %d vowels.", compute_vowel_count(sentence));

    return 0;
}

/*
 * compute_vowel_count:
 *     Count the number of vowels (a, e, i, o and u) in a sentence
 */
int compute_vowel_count(const char *sentence)
{
    int count = 0;

    while (*sentence) {
        switch (*sentence++) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            case 'a': case 'e': case 'i': case 'o': case 'u':
                count++;
                break;
        }
    }

    return count;
}
