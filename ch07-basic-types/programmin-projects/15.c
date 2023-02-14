/*
 * 15.c (Chapter 7, page 159, Programming Project 15)
 * Compute the factorial of a positive integer
 */

#include <stdio.h>

int main(void)
{
    unsigned int n, i;
    double factorial;

    printf("Enter a positive integer: ");
    scanf("%u", &n);

    factorial = 1;
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d: %f", n, factorial);

    return 0;
}
