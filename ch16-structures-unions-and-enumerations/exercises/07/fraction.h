#ifndef FRACTION_H
#define FRACTION_H

struct fraction {
    int numerator, denominator;
};

/*
 * print_fraction:
 *     Prints the fraction in the form numerator/denominator.
 */
void print_fraction(struct fraction f);
/*
 * reduce_fraction:
 *     Reduces the fraction to lowest terms.
 */
struct fraction reduce_fraction(struct fraction f);
/*
 * compute_gcd:
 *     Computes the GCD using Euclid's algorithm.
 */
int compute_gcd(struct fraction f);
/*
 * add_fraction:
 *     Adds the fractions f1 and f2.
 */
struct fraction add_fraction(struct fraction f1, struct fraction f2);
/*
 * subtract_fraction:
 *     Subtracts the fraction f2 from the fraction f1.
 */
struct fraction subtract_fraction(struct fraction f1, struct fraction f2);
/*
 * multiply_fraction:
 *     Multiply the fractions f1 and f2.
 */
struct fraction multiply_fraction(struct fraction f1, struct fraction f2);
/*
 * divide_fraction:
 *     Divide the fraction f1 by the fraction f2.
 */
struct fraction divide_fraction(struct fraction f1, struct fraction f2);

#endif
