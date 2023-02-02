/*
 * 01.c (Chapter 7, page 157, Programming Project 1)
 * Prints a table of squares using a for statement
 */

#include <stdio.h>

int main(void)
{
    long i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);

    for (i = n - 10; i <= n; i += 1) {
        printf("%20ld%20ld\n", i, i * i);
    }

    return 0;
}
