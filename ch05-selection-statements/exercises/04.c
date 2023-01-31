/*
 * 04.c (Chapter 5, page 94, Exercise 4)
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    i = 1;
    j = 0;

    printf("%d", i < j ? -1 :
	         i > j ? 1 : 0);

    return 0;
}
