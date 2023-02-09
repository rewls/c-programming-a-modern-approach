/*
 * 13.c (Chapter 8, page 180, Programming Project 13)
 * Take a first name and last name entered by the user
 * and display the last name, a comma, and the first initial
 */

#include <stdio.h>

#define SIZE 20

int main(void)
{
    char first_initial, last_name[SIZE];
    int i, count;

    printf("Enter a first and last name: ");
    scanf(" %c", &first_initial);

    while (getchar() != ' ')
	;
    while ((last_name[0] = getchar()) == ' ')
	;

    i = 0;
    while (last_name[i] != '\n' && last_name[i] != ' ') {
	i++;
	last_name[i] = getchar();
    }
    count = i;

    printf("You entered the name: ");
    for (i = 0; i < count; i++) {
	printf("%c", last_name[i]);
    }
    printf(", %c", first_initial);

    return 0;
}
