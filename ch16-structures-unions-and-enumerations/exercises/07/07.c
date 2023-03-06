/*
 * 07.c (Chapter 16, page 408, Exercise 7)
 * Prints return values of reduce_fraction, add_fraction, subtract_fraction,
 * multiply_fraction and divide_fraction.
 */

#include <stdio.h>
#include "fraction.h"

int main(void)
{
    printf("reduce_fraction: ");
    print_fraction(reduce_fraction((struct fraction) {3, 9}));
    printf("\n" "add_fraction: ");
    print_fraction(add_fraction(
                (struct fraction) {1, 9},
                (struct fraction) {1, 3}
                ));
    printf("\n" "subtract_fraction: ");
    print_fraction(subtract_fraction(
                (struct fraction) {1, 9},
                (struct fraction) {1, 3}
                ));
    printf("\n" "multiply_fraction: ");
    print_fraction(multiply_fraction(
                (struct fraction) {1, 9},
                (struct fraction) {1, 3}
                ));
    printf("\n" "divide_fraction: ");
    print_fraction(divide_fraction(
                (struct fraction) {1, 9},
                (struct fraction) {1, 3}
                ));

    return 0;
}
