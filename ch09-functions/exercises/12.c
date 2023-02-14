/*
 * 12.c (Chapter 9, page 215, Exercise 12)
 * Compute GPA
 */

#include <stdio.h>

#define SIZE 3

double inner_product(double a[], double b[], int n) {
    int result, i;

    result = 0;
    for (i = 0; i < n; i++) {
        result += a[i] * b[i];
    }

    return result;
}

int main(void)
{
    double a[SIZE] = {1.0, 2.0, 3.0};

    printf("%f", inner_product(a, a, SIZE));

    return 0;
}
