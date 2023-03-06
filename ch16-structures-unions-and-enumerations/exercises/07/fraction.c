/*
 * fraction.c (Chapter 16, page 408, Exercise 7)
 */

#include <stdio.h>
#include "fraction.h"

void print_fraction(struct fraction f)
{
    printf("%d/%d", f.numerator, f.denominator);
}

struct fraction reduce_fraction(struct fraction f)
{
    int gcd = compute_gcd(f);

    /* C99 Only */
    return (struct fraction) {f.numerator / gcd, f.denominator / gcd};
}

int compute_gcd(struct fraction f)
{
    int temp;

    while (f.denominator != 0) {
        temp = f.numerator % f.denominator;
        f.numerator = f.denominator;
        f.denominator = temp;
    }

    return f.numerator;
}

struct fraction add_fraction(struct fraction f1, struct fraction f2)
{
    /* C99 Only */
    return reduce_fraction((struct fraction) {
            f1.numerator * f2.denominator + f2.numerator * f1.denominator,
            f1.denominator * f2.denominator
            });
}

struct fraction subtract_fraction(struct fraction f1, struct fraction f2)
{
    /* C99 Only */
    return reduce_fraction((struct fraction) {
            f1.numerator * f2.denominator - f2.numerator * f1.denominator,
            f1.denominator * f2.denominator
            });
}

struct fraction multiply_fraction(struct fraction f1, struct fraction f2)
{
    /* C99 Only */
    return reduce_fraction((struct fraction) {
            f1.numerator * f2.numerator, f1.denominator * f2.denominator
            });
}

struct fraction divide_fraction(struct fraction f1, struct fraction f2)
{
    /* C99 Only */
    return reduce_fraction((struct fraction) {
            f1.numerator * f2.denominator, f1.denominator / f2.numerator
            });
}
