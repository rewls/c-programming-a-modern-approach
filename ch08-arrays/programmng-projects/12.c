/*
 * 12.c (Chapter 8, page 180, Programming Project 12)
 * In the SCRABBLE Crossword Game, compute the value of a word by summing the values of its letters
 */

#include <stdio.h>
#include <ctype.h>

#define SIZE 26

int main(void)
{
    char ch;
    int scrabble_values[SIZE] = {1, 3, 3, 2, 1, 4,  /* A B C D E F */
                                 2, 4, 1, 8, 4, 1,  /* G H I J K L */
                                 3, 1, 1, 3, 10, 1, /* M N O P Q R */
                                 1, 1, 1, 4, 4, 8,  /* S T U V W X */
                                 4, 10},            /* Y Z */
        value = 0;

    printf("Enter a word: ");
    while ((ch = getchar()) != '\n') {
        value += scrabble_values[toupper(ch) - 'A'];
    }

    printf("Scrabble value: %d", value);

    return 0;
}
