/*
 * 06.c (Chapter 9, page 214, Exercise 6)
 * Return the kth digit in n
 */

#include <stdio.h>

int digit(int n, int k)
{
    int i;

    for (i = 1; i < k; i++) {
	n /= 10;
    }

    return n % 10;
}

int main(void)
{
    printf("%d", digit(829, 1));

    return 0;
}
