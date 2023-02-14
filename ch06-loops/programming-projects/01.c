/*
 * 01.c (Chapter 6, page 122, Programming Project 1)
 * Find the largest in a series of numbers entered by the user
 */

#include <stdio.h>

int main(void)
{
    float n, max = 0.0f;

    do {
        printf("Enter a number: ");
        scanf("%f", &n);
        if (max < n) {
            max = n;
        }
    } while (n > 0);

    printf("The largest number entered was %.2f", max);

    return 0;
}
