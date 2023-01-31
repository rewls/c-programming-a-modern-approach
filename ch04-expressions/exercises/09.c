/*
 * 09.c (Chapter 4, page 69, Exercise 9)
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    /* (a) */
    i = 7; j = 8;
    i *= j + 1;
    printf("%d %d", i, j);
    printf("\n");

    /* (b) */
    i = j = k = 1;
    i += j += k;
    printf("%d %d %d", i, j, k);
    printf("\n");

    /* (c) */
    i = 1; j = 2; k = 3;
    i -= j -= k;
    printf("%d %d %d", i, j, k);
    printf("\n");
  
    /* (d) */
    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("%d %d %d", i, j, k);

    return 0;
}
