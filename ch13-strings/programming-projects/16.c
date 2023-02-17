/*
 * 16.c (Chapter 13, page 313, Programming Project 16)
 * Read a message, then prints the reversal of the message
 */

#include <stdio.h>
#include <string.h>

#define LEN_MESSAGE 100

void reverse(char *message);

int main(void)
{
    char message[LEN_MESSAGE];

    printf("Enter a message: ");
    gets(message);

    reverse(message);

    printf("Reversal is: %s", message);

    return 0;
}

/*
 * reverse: Reverse message
 */
void reverse(char *message)
{
    char *p = message, *q = message + strlen(message) - 1, ch;

    for (; p < q; p++, q--) {
        ch = *p;
        *p = *q;
        *q = ch;
    }
}
