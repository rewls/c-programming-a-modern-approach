/*
 * 02.c (Chapter 9, page 214, Exercise 2)
 * Return 1 if both x and y fall between 0 and n - 1, inclusive.
 */

#include <stdio.h>

int check(int x, int y, int n)
{
    return x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1;
}

int main(void)
{
    printf("%d", check(1, 5, 3));
    return 0;
}
