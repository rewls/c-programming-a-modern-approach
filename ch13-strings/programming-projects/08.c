/*
 * 08.c (Chapter 13, page 312, Programming Project 8)
 */

#include <stdio.h>
#include <ctype.h>

#define LEN_WORD 100

int compute_scrabble_value(const char *word);

int main(void)
{
    char ch, word[LEN_WORD];
    int i;

    printf("Enter a word: ");
    i = 0;
    while ((ch = getchar()) != '\n') {
        word[i++] = ch;
    }

    printf("Scrabble value: %d", compute_scrabble_value(word));

    return 0;
}

/*
 * compute_scrabble_value:
 *     In the SCRABBLE Crossword Game,
 *     compute the value of a word by summing the values of its letters
 */
int compute_scrabble_value(const char *word)
{
    int value = 0;

    while (*word) {
        switch (toupper(*word++)) {
            case 'D': case 'G':
                value += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                value += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                value += 4;
                break;
            case 'K':
                value += 5;
                break;
            case 'J': case 'X':
                value += 8;
                break;
            case 'Q': case 'Z':
                value += 10;
                break;
            default:
                value++;
                break;
        }
    }

    return value;
}
