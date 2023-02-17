/*
 * 17.c (Chapter 13, page 313, Programming Project 17)
 * Read a message, then checks whether it's a palindrome
 * (the letters in the message are the same from left to right as from right to left)
 */

#include <stdio.h>
#include <ctype.h>  /* isalpha, tolower */
#include <stdbool.h>  /* C99 Only */
#include <string.h>

#define LEN_MESSAGE 100

bool is_palindrome(const char *message);

int main(void)
{
    char message[LEN_MESSAGE];

    printf("Enter a message: ");
    gets(message);

    if (is_palindrome(message)) {
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
bool is_palindrome(const char *message)
{
    char message_alpha[LEN_MESSAGE] = "", *p, *q;

    p = message_alpha;
    for (; *message; message++) {
        if (isalpha(*message)) {
            *p++ = tolower(*message);
        }
    }

    p = message_alpha;
    q = message_alpha + strlen(message_alpha) - 1;
    for (; p < q && *p == *q; p++, q--)
        ;
    if (p >= q) {
        return true;
    }

    return false;
}
