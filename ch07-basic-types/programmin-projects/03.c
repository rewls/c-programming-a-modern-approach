/*
 * 03.c (Chapter 7, page 157, Programming Project 3)
 * Sums a series of numbers (using double variables)
 */

#include <stdio.h>

int main(void)
{
    double n, sum = 0.0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0.0) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %f\n", sum);

    return 0;
}
