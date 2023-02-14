/*
 * 11.c (Chapter 8, page 180, Programming Project 11)
 * Ask the user to enter the amount of taxable income, then display the tax due
 */

#include <stdio.h>

#define SIZE 15

int main(void)
{
    char phone_number_numeric[SIZE], ch;
    int i, count;

    printf("Enter phone number: ");

    for (i = 0; (ch = getchar()) != '\n'; i++) {
        if (ch >= 'A' && ch <= 'Y') {
            phone_number_numeric[i] = (ch - 'A') / 3 + '2';
        } else {
            phone_number_numeric[i] = ch;
        }
    }
    count = i;

    printf("In numeric form: ");
    for (i = 0; i < count; i++) {
        printf("%c", phone_number_numeric[i]);
    }

    return 0;
}
