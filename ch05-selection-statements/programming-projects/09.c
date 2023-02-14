/*
 * 09.c (Chapter 5, page 97, programming project 9)
 * Prompt the user to enter two dates and then indicates which date comes earlier on the calendar
 */

#include <stdio.h>

int main(void)
{
    int month1, day1, year1, month2, day2, year2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if (year1 * 360 + month1 * 30 + day < year2 * 360 + month2 * 30 + day2) {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
    } else {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
    }

    return 0;
}
