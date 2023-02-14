/*
 * 01.c (Chapter 5, page 95, programming project 1)
 * Calculate how many digits a number contains
 */

#include <stdio.h>

int main(void) 
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The number %d has %d digits", n,
            n >= 1000 ? 4 :
            n >= 100 ? 3 :
            n >= 10 ? 2 : 1);

    return 0;
}
