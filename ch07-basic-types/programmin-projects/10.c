/*
 * 10.c (Chapter 7, page 158, Programming Project 10)
 * Count the number of vowels (a, e, i, o and u) in a sentence
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int count = 0;
    char ch;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        switch (toupper(ch)) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                count++;
                break;
        }
    }

    printf("Your sentence contains %d vowels.", count);

    return 0;
}
