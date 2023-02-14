/*
 * 04.c (Chapter 9, page 214, Exercise 4)
 * Return the day of the year specified by the three arguments
 */

#include <stdio.h>

#define N_MONTHS 12

int day_of_year(int month, int day, int year)
{
    int day_of_month[N_MONTHS] = {31, 28, 31, 30, 31, 30,
                                  31, 31, 30, 31, 30, 31},
        n_days, i;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        day_of_month[2 - 1]++;
    }

    n_days = 0;
    for (i = 1; i < month; i++) {
        n_days += day_of_month[i - 1]; 
    }
    n_days += day;

    return n_days;
}

int main(void)
{
    printf("%d", day_of_year(2, 9, 2023));

    return 0;
}
