/*
 * 02.c (Chapter 4, page 71, Exercise 2)
 * Ask the user to enter a three-digit number, then prints the number with its digits reversed.
 */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    printf("The reversal is: %d%d%d", n % 10, (n / 10) % 10, n / 100);

    return 0;
}
