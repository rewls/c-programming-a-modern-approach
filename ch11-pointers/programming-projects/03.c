/*
 * 03.c (Chapter 11, page 256, Programming Project 3)
 * Ask the user to enter a fraction, then reduces the fraction to lowest terms
 */

#include <stdio.h>

void reduce(int numerator, int denominator,
        int *reduced_numerator,
        int *reduced_denominator);
int compute_gcd(int m, int n);

int main(void)
{
    int numerator, denominator, reduced_numerator, reduced_denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

    printf("In lowest terms: %d/%d", reduced_numerator, reduced_denominator);

    return 0;
}

/*
 * reduce: Reduce the fraction to lowest terms
 */
void reduce(int numerator, int denominator,
        int *reduced_numerator,
        int *reduced_denominator)
{
    int gcd;

    gcd = compute_gcd(numerator, denominator);
    *reduced_numerator = numerator / gcd;
    *reduced_denominator = denominator / gcd;
}

/*
 * compute_gcd: Compute GCD using Euclid's algorithm
 */
int compute_gcd(int m, int n)
{
    int temp;

    while (n != 0) {
        temp = m % n;
        m = n;
        n = temp;
    }

    return m;
}
