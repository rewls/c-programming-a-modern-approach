/*
 * 01-b.c (Chapter 12, page 275, Programming Project 1-(b))
 * Read a message, then prints the reversal of the message
 */

#include <stdio.h>

#define SIZE 100

int main(void)
{
    char message[SIZE], ch, *p;

    printf("Enter a message: ");
    p = message;
    while ((ch = getchar()) != '\n' && p < message + SIZE) {
        *p = ch;
        p++;
    }
    p--;

    printf("Reversal is: ");
    for (; p >= message; p--) {
        putchar(*p);
    }

    return 0;
}
