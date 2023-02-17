/*
 * 02-b.c (Chapter 12, page 275, Programming Project 2-(b))
 * Read a message, then checks whether it's a palindrome
 * (the letters in the message are the same from left to right as from right to left)
 */

#include <stdio.h>
#include <ctype.h>  /* isalpha, tolower */
#include <stdbool.h>  /* C99 Only */

#define SIZE 100

bool is_palindrome(char *message, int n);

int main(void)
{
    char message[SIZE], ch, *p;

    printf("Enter a message: ");

    p = message;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            *p = tolower(ch);
            p++;
        }
    }

    if (is_palindrome(message, p - message)) {
        printf("Palindrome");
    } else {
        printf("Not a palindrome");
    }

    return 0;
}

/*
 * is_palindrome: return true if message is a palindrom,
 *                return false if it's not
 */
bool is_palindrome(char *message, int n)
{
    char *p, *q;

    for (p = message, q = message + (n - 1); p < q; p++, q--) {
        if (*p != *q) {
            return false;
        }
    }

    return true;
}
