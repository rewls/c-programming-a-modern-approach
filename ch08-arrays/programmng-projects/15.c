/*
 * 15.c (Chapter 8, page 180, Programming Project 15)
 * Encrypt a message using a Caesar cipher
 */

#include <stdio.h>

#define SIZE 80
#define N_ALPHABETS 26

int main(void)
{
    char message[SIZE], ch;
    int shift_amount, i, count;

    printf("Enter message to be encrypted: ");
    for (i = 0; (ch = getchar()) != '\n'; i++) {
        message[i] = ch;
    }
    count = i;

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    printf("Encrypted message: ");
    for (i = 0; i < count; i++) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            putchar(((message[i] - 'A') + shift_amount) % N_ALPHABETS + 'A');
        } else if (message[i] >= 'a' && message[i] <= 'z') {
            putchar(((message[i] - 'a') + shift_amount) % N_ALPHABETS + 'a');
        } else {
            putchar(message[i]);
        }
    }

    return 0;
}
