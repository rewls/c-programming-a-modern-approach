/*
 * 03.c (Chapter 9, page 214, Exercise 3)
 * Calculate the greatest common divisor of the integers m and n
 */

#include <stdio.h>
 
int gcd(int m, int n)
{
    int temp;

    while (n != 0) {
        temp = m % n;
        m = n;
        n = temp;
    }

    return m;
}

int main(void)
{
    printf("%d", gcd(9, 6));

    return 0;
}
