/*
 * 05.c (Chapter 8, page 177, Exercise 5)
 * Print first 40 Fibonacci numbers
 */

#include <stdio.h>

#define SIZE 40

int main(void)
{
    int fib_numbers[SIZE] = {0, 1}, i;

    for (i = 2; i < SIZE; i++) {
	fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
    }

    for (i = 0; i < SIZE; i++) {
	printf("%d ", fib_numbers[i]);
    }

    return 0;
}
