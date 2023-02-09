/*
 * 01.c (Chapter 8, page 178, Programming Project 1)
 * Check numbers for repeated digits
 */

#include <stdio.h>
#include <stdbool.h>  /* C99 only */

#define N_DIGITS 10

int main(void)
{
    bool digit_seen[N_DIGITS] = {false}, digit_repeated[N_DIGITS] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % N_DIGITS;
        if (digit_seen[digit]) {
	    digit_repeated[digit] = true;
        } else {
	    digit_seen[digit] = true;
        }
        n /= N_DIGITS;
    }

    for (digit = 0; digit < N_DIGITS; digit++) {
	if (digit_repeated[digit] == true) {
	    break;
	}
    }

    if (digit < N_DIGITS) {
        printf("Repeated digit(s):");
        for (digit = 0; digit < N_DIGITS; digit++) {
	    if (digit_repeated[digit] == true) {
		printf(" %d", digit);
	    }
	}
	printf("\n");
    } else {
        printf("No repeated digit\n");
    }

    return 0;
}
