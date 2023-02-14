/*
 * 11.c (Chapter 6, page 124, Programming Project 11)
 * Approximates e by computing the value of 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
 * where n is an integer entered by the user
 */

#include <stdio.h>

int main(void)
{
    float e;
    int i, factorial, n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    factorial = 1;
    e = 1.0f;
    for (i = 1 ; i <= n; i++) {
        factorial *= i;
        e += 1.0f / factorial;
    }
    
    printf("Approximated e: %f", e);

    return 0;
}
