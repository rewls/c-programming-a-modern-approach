/*
 * 02.c (Chapter 5, page 96, programming project 2)
 * Ask the user for a 24-hour time, then display the time in 12-hour form
 */

#include <stdio.h>

int main(void)
{
    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    printf("Equivalent 12-hour time: %d:%.2d ", hours % 12 == 0 ? 12 : hours % 12, minutes);

    if (hours >= 12) {
	printf("PM");
    } else {
	printf("AM");
    }

    return 0;
}
