/*
 * 05.c (Chapter 6, page 123, Programming Project 5)
 * Calculate how many digits a number contains
 */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The reversal is: ");

    do {
        printf("%d", n % 10);
        n /= 10;
    } while (n > 0);

    return 0;
}
