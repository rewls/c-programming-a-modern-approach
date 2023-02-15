/*
 * 01-a.c (Chapter 12, page 275, Programming Project 1-(a))
 * Read a message, then prints the reversal of the message
 */

#include <stdio.h>

#define SIZE 100

int main(void)
{
    char message[SIZE], ch;
    int i;

    printf("Enter a message: ");
    i = 0;
    while ((ch = getchar()) != '\n' && i < SIZE) {
        message[i] = ch;
        i++;
    }
    i--;

    printf("Reversal is: ");
    for (; i >= 0; i--) {
        putchar(message[i]);
    }

    return 0;
}
