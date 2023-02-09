/*
 * 02.c (Chapter 8, page 178, Exercise 2)
 * Print a table showing how many times each digit appears in the number
 */

#include <stdio.h>

#define N_DIGITS 10

int main(void)
{
    int digit_count[N_DIGITS] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % N_DIGITS;
        digit_count[digit]++;
        n /= N_DIGITS;
    }

    printf("Digit:      ");
    for (digit = 0; digit < N_DIGITS; digit++) {
	printf("%3d", digit);
    }
    printf("\n");

    printf("Occurrences:");
    for (digit = 0; digit < N_DIGITS; digit++) {
	printf("%3d", digit_count[digit]);
    }

    return 0;
}
