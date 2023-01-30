/*
 * 04.c (Chapter 2, page 33, Exercise 4)
 * Print uninitialized int and float variables
 */

#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    float f, g, h, i, j;

    printf("(int) a: %d, b: %d, c: %d, d: %d, e: %d\n", a, b, c, d, e);
    printf("(float) f: %g, g: %g, h: %g, i: %g, j: %g\n", f, g, h, i, j);
    
    return 0;
}
