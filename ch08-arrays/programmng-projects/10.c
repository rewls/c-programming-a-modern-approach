/*
 * 10.c (Chapter 8, page 180, Programming Project 10)
 * Ask the user to enter the amount of taxable income, then display the tax due
 */

#include <stdio.h>

#define SIZE 8

int main(void)
{
    const int departure_times[SIZE] = {8 * 60, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47,
				   14 * 60, 15 * 60 + 45, 19 * 60, 21 * 60 + 45},
	  arrival_times[SIZE] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60,
				 16 * 60 + 8 , 17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58};
    int hour, minute, time, i, temp;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    time = hour * 60 + minute;

    for (i = 0; i + 1 < SIZE; i++) {
	if (time < departure_times[i] + (departure_times[i + 1] - departure_times[i]) / 2) {
	    break;
	}
    }

    printf("Closest departure time is %d:%.2d %c.m., ",
	    (temp = departure_times[i] / 60 % 12) == 0 ? 12 : temp, departure_times[i] % 60, 
	    departure_times[i] < 12 * 60 ? 'a' : 'p');
    printf("arriving at %d:%.2d %c.m.",
	    (temp = arrival_times[i] / 60 % 12) == 0 ? 12 : temp, arrival_times[i] % 60, 
	    arrival_times[i] < 12 * 60 ? 'a' : 'p');

    return 0;
}
