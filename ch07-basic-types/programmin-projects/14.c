/*
 * 14.c (Chapter 7, page 159, Programming Project 14)
 * Use Newton's method to compute the square root of a positive floating-point number
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned int x;
    double y, y_next;

    printf("Enter a positive number: ");
    scanf("%u", &x);

    y = y_next = 1;
    do {
	y = y_next;
	y_next = (y + x / y) / 2;
    } while (fabs(y - y_next) >= y * 1.0e-5);

    printf("Square root: %.5f", y);

    return 0;
}
