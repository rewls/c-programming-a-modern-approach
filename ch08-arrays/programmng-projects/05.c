/*
 * 05.c (Chapter 8, page 179, Programming Project 5)
 * Prints a table of compound interest
 */

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00
#define N_MONTHS 12

int main(void)
{
    int i, j, low_rate, num_years, year;
    double value[5];

    printf("Enter monthly interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year <= num_years; year++) {
        printf("%3d    ", year);
        for (i = 0; i < NUM_RATES; i++) {
            for (j = 0; j < N_MONTHS; j++) {
                value[i] += (low_rate + i) / 100.0 * value[i];
            }
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}
