/*
 * 18.c (Chapter 13, page 313, Programming Project 18)
 * Accept a date from the user in the form mm/dd/yyyy
 * and then display it in the form month dd, yyyy,
 * where month is the name of month
 */

#include <stdio.h>

#define NUM_MONTH 12

int main(void)
{
    int month, day, year;
    const char *months[NUM_MONTH] = {"January", "February", "March",
                                    "April",   "May",      "June",
                                    "July",    "August",   "September",
                                    "October", "November", "Decenber"};

    printf("enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %s %d, %d", months[month - 1], day, year);

    return 0;
}
