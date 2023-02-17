/*
 * 13.c (Chapter 13, page 313, Programming Project 13)
 */

#include <stdio.h>
#include <ctype.h>

#define LEN_MESSAGE 80
#define N_ALPHABETS 26

void encrypt(char *message, int shift);

int main(void)
{
    char message[LEN_MESSAGE];
    int shift;

    printf("Enter message to be encrypted: ");
    gets(message);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    encrypt(message, shift);

    printf("Encrypted message: %s", message);

    return 0;
}

/*
 * encrypt:
 *     Encrypt a message using a Caesar cipher;
 */
void encrypt(char *message, int shift)
{
    for (; *message; message++) {
        if (isupper(*message)) {
            *message = ((*message - 'A') + shift) % N_ALPHABETS + 'A';
        } else if (islower(*message)) {
            *message = ((*message - 'a') + shift) % N_ALPHABETS + 'a';
        }
    }
}
