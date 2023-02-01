/*
 * 07.c (Chapter 5, page 96, programming project 7)
 * Find the largest and smallest of four integers entered by the user
 */

#include <stdio.h>

int main(void)
{
    int a, b, c, d, max1, min1, max2, min2, max, min;

    printf("Enter four integers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    max1 = min1 = a;

    if (a < b) {
	max1 = b;
    } else {
	min1 = b;
    }

    max2 = min2 = c;

    if (c < d) {
	max2 = d;
    } else {
	min2 = d;
    }

    max = max1;
    min = min1;

    if (max1 < max2) {
	max = max2;
    }
    if (min1 > min2) {
	min = min2;
    }

    printf("Largest: %d\n", max);
    printf("Smallest: %d", min);

    return 0;
}
