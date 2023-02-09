/*
 * 01.c (Chapter 9, page 214, Exercise 1)
 * Compute the area of a triangle
 */

#include <stdio.h>

double triangle_area(int base, int height)
{
    double product;
    product = base * height;
    return product / 2;
}

int main(void)
{
    printf("%f", triangle_area(1.0, 1.0));

    return 0;
}
