/*
 * 15.c (Chapter 8, page 180, Programming Project 15)
 * Encrypt a message using a Caesar cipher
 */

#include <stdio.h>
#include <ctype.h>

#define SIZE 80
#define N_ALPHABETS 26

int main(void)
{
    char message[SIZE], ch;
    int shift, i, count;

    printf("Enter message to be encrypted: ");
    for (i = 0; (ch = getchar()) != '\n'; i++) {
        message[i] = ch;
    }
    count = i;

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    for (i = 0; i < count; i++) {
        if (isupper(message[i])) {
            putchar(((message[i] - 'A') + shift) % N_ALPHABETS + 'A');
        } else if (islower(message[i])) {
            putchar(((message[i] - 'a') + shift) % N_ALPHABETS + 'a');
        } else {
            putchar(message[i]);
        }
    }

    return 0;
}
