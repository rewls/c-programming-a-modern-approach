/*
 * 10.c (Chapter 6, page 124, Programming Project 10)
 * Prompt the user to enter two dates and then indicates which date comes earlier on the calendar
 */

#include <stdio.h>

int main(void)
{
    int month, day, year, min_month, min_day, min_year;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    min_month = month;
    min_day = day;
    min_year = year;

    while (month != 0 || day != 0 || year != 0) {
        if (min_year * 360 + min_month * 30 - min_day > year * 365 + month * 30 + day) {
            min_year = year;
            min_day = day;
            min_month = month;
        }

        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
    }
    
    printf("%d/%d/%.2d is the earliest date", min_month, min_day, min_year);

    return 0;
}
