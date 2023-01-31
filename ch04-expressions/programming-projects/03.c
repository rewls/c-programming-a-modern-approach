/*
 * 03.c (Chapter 4, page 71, Exercise 3)
 * Ask the user to enter a three-digit number, then prints the number with its digits reversed.
 */

#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d%1d", &a, &b, &c);

    printf("The reversal is: %d%d%d", c, b, a);

    return 0;
}
