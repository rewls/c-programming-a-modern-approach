/*
 * 06.c (Chapter 7, page 158, Programming Project 6)
 * Print the values of
 * sizeof(int), sizeof(short), sizeof(long), sizeof(float), sizeof(double), sizeof(long double)
 */

#include <stdio.h>

int main(void)
{
    printf("sizeof(int): %zu\n", sizeof(int));
    printf("sizeof(short): %zu\n", sizeof(short));
    printf("sizeof(long): %zu\n", sizeof(long));
    printf("sizeof(float): %zu\n", sizeof(float));
    printf("sizeof(double): %zu\n", sizeof(double));
    printf("sizeof(long double): %zu\n", sizeof(long double));

    return 0;
}
