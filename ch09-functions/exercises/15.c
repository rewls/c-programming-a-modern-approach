/*
 * 15.c (Chapter 9, page 216, Exercise 15)
 * Find the median of three numbers
 */

#include <stdio.h>

double median(double x, double y, double z)
{
    int median;

    if (x <= y) {
        if (y <= z) {
            median = y;
        } else if (x <= z) {
            median = z;
        } else {
            median = x;
        }
    } else {
        if (z <= y) {
            median = y;
        } else if (x <= z) {
            median = x;
        } else {
            median = z;
        }
    }

    return median;
}

int main(void)
{
    printf("%f", median(2.0, 1.0, 3.0));

    return 0;
}
