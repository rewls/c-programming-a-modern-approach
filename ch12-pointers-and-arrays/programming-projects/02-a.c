/*
 * 02-a.c (Chapter 12, page 275, Programming Project 2-(a))
 * Read a message, then checks whether it's a palindrome
 * (the letters in the message are the same from left to right as from right to left)
 */

#include <stdio.h>
#include <ctype.h>  /* isalpha, tolower */
#include <stdbool.h>  /* C99 Only */

#define SIZE 100

bool is_palindrome(char message[], int n);

int main(void)
{
    char message[SIZE], ch;
    int i;

    printf("Enter a message: ");

    i = 0;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            message[i] = tolower(ch);
            i++;
        }
    }

    if (is_palindrome(message, i)) {
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
bool is_palindrome(char message[], int n)
{
    int i;

    for (i = 0; i <= (n - 1) / 2; i++) {
        if (message[i] != message[(n - 1) - i]) {
            return false;
        }
    }

    return true;
}
