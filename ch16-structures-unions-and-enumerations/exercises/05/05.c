/*
 * 05.c (Chapter 16, page 408, Exercise 5)
 * Prints return values of day_of_year and compare_dates.
 */

#include <stdio.h>
#include "date.h"

int main(void)
{
    printf("day_of_year: %d\n", day_of_year((struct date) {2, 27, 2023}));
    printf("compare_dates: %d", compare_dates(
                (struct date) {2, 25, 2023}, (struct date) {2, 27, 2023}
                ));

    return 0;
}
