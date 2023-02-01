/*
 * 04.c (Chapter 5, page 96, programming project 4)
 * Ask the user to enter a wind speed (in knots), then display the corresponding desctiption
 */

#include <stdio.h>

int main(void)
{
    int wind_speed;

    printf("Enter a wind speed (in knots): ");
    scanf("%d", &wind_speed);

    if (wind_speed < 1) {
	printf("Calm");
    } else if (wind_speed < 4) {
	printf("Light air");
    } else if (wind_speed < 28) {
	printf("Breeze");
    } else if (wind_speed < 48) {
	printf("Gale");
    } else if (wind_speed < 64) {
	printf("Storm")
    } else {
	printf("Hurricane");
    }

    return 0;
}
