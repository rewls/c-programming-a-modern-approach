/*
 * 03.c (Chapter 6, page 123, Programming Project 3)
 * Ask the user to enter a fraction, then reduces the fraction to lowest terms
 */

#include <stdio.h>

int main(void)
{
    int num, denom, m, n, temp, gcd;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    n = num;
    m = denom;

    /* Euclid's algorithm for computing the GCD */
    while (n != 0) {
        temp = m % n;
        m = n;
        n = temp;
    }

    gcd = m;

    printf("In lowest terms: %d/%d", num / gcd, denom / gcd);

    return 0;
}
