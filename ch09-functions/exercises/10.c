/*
 * 10.c (Chapter 9, page 215, Exercise ,10)
 * Return the following values
 */

#include <stdio.h>

#define SIZE 3

/* (a) The largest element in a */
int largest(int a[], int n)
{
    int result, i;

    result = a[0];
    for (i = 1; i < n; i++) {
        if (result < a[i]) {
            result = a[i];
        }
    }

    return result;
}

/* (b) The average of allelements in a */
double average(int a[], int n)
{
    double result;
    int i;

    result = 0.0;
    for (i = 0; i < n; i++) {
        result += a[i];
    }
    result /= n;

    return result;
}

/* (c) The number of positive elements in a */
int num_positive(int a[], int n)
{
    int result, i;

    result = 0;
    for (i = 0; i < n; i++) {
        if (a[i] >= 0) {
            result++;
        }
    }

    return result;
}

int main(void)
{
    int a[SIZE] = {1, 2, 3};

    printf("%d\n", largest(a, SIZE));
    printf("%f\n", average(a, SIZE));
    printf("%d", num_positive(a, SIZE));

    return 0;
}
