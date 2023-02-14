/*
 * 11.c (Chapter 7, page 158, Programming Project 11)
 * Take a first name and last name entered by the user
 * and display the last name, a comma, and the first initial
 */

#include <stdio.h>

int main(void)
{
    char first_initial, ch;

    printf("Enter a first and last name: ");
    scanf(" %c", &first_initial);

    while ((ch = getchar()) != ' ')
        ;
    while ((ch = getchar()) == ' ')
        ;

    do {
        putchar(ch);
    } while ((ch = getchar()) != '\n' && ch != ' ');

    printf(", %c", first_initial);

    return 0;
}
