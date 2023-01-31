/*
 * 12.c (Chapter 4, page 70, Exercise 12)
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    /* (a) */
    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d", i, j);
    printf("\n");

    /* (b) */
    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d", i, j);
    printf("\n");

    /* (c) */
    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d", i, j);
    printf("\n");

    /* (d) */
    i = 7 ;
    j = 3 + --i * 2;
    printf("%d %d", i, j);

    return 0;
}
