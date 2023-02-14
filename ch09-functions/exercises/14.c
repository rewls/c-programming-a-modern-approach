/*
 * 14.c (Chapter 9, page 215, Exercise 14)
 * Evaluate a chess position
 */

#include <stdio.h>
#include <stdbool.h>

bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i ++) {
        if (a[i] == 0) {
            return true;
        }
    }

    return false;
}

int main(void)
{
    printf("%u", has_zero((int []){1, 1, 1}, 3));

    return 0;
}
