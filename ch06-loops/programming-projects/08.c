/*
 * 08.c (Chapter 6, page 123, Programming Project 8)
 * Print a one-month calendar.
 */

#include <stdio.h>

int main(void)
{
    int n_days, start_day, i, j;

    printf("Enter number of days in month: ");
    scanf("%d", &n_days);
    printf("Enter starting day of the week (1= Sun, 7=Sat): ");
    scanf("%d", &start_day);

    for (j = 1; j < start_day; j++) {
        printf("   ");
    }

    for (i = 1; i <= n_days; i++) {
        printf("%2d ", i);
        if ((i + start_day - 1) % 7 == 0) {
            printf("\n");
        }
    }

    return 0;
}
