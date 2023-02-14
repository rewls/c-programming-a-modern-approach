/*
 * 05.c (Chapter 9, page 214, Exercise 5)
 * Return the number of digits in n
 */

#include <stdio.h>

int num_digits(int n)
{
    int n_digits;

    for (n_digits = 0; n > 0; n_digits++) {
        n /= 10;
    }

    return n_digits;
}

int main(void) 
{
    printf("%d", num_digits(123));

    return 0;
}
