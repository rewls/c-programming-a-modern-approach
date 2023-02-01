/*
 * 02.c (Chapter 6, page 122, Programming Project 2)
 * Ask the user to enter two integers, then calculates and displays their greatest common divisor (GCD)
 */

#include <stdio.h>

int main(void)
{
    int m, n, temp, gcd;

    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    /* Euclid`s algorithm for computing the GCD */
    while (n != 0) {
	temp = m % n;
	m = n;
	n = temp;
    }

    gcd = m

    printf("Greatest common divisor: %d", gcd);

    return 0;
}
