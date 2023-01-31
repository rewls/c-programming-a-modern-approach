/*
 * 11.c (Chapter 4, page 70, Exercise 11)
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    /* a */
    i = 1;
    printf("%d ", i++ - 1);
    printf("%d", i);
    printf("\n");

    /* b */
    i = 10; j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d", i, j);
    printf("\n");

    /* c */
    i = 7; j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d", i, j);
    printf("\n");

    /* d */
    i = 3; j = 4; k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d", i, j, k);

    return 0;
}
