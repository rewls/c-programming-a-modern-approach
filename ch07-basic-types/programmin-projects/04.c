/*
 * 04.c (Chapter 7, page 157, Programming Project 4)
 * Prints a table of squares using a for statement
 */

#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter phone number: ");

    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'Y') {
            printf("%d", (ch - 'A') / 3 + 2);
        } else {
            putchar(ch);
        }
    }

    return 0;
}
