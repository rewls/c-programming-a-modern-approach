/*
 * 06.c (Chapter 16, page 412, programming project 6)
 * Prompt the user to enter two dates and then indicates which date comes
 * earlier on the calendar.
 */

#include <stdio.h>

struct date {
    int month, day, year;
};

void print_date(struct date d);

int main(void)
{
    struct date date1, date2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &date1.month, &date1.day, &date1.year);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &date2.month, &date2.day, &date2.year);

    if (date1.year * 360 + date1.month * 30 + date1.day <
            date2.year * 360 + date2.month * 30 + date2.day) {
        print_date(date1);
        printf(" is earlier than ");
        print_date(date2);
    } else {
        print_date(date2);
        printf(" is earlier than ");
        print_date(date1);
    }

    return 0;
}

void print_date(struct date d)
{
    printf("%d/%d/%.2d", d.month, d.day, d.year);
}
