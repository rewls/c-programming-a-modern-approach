/*
 * 06.c (Chapter 2, page 34, Programming Projects 6)
 * Compute value of the polynomial with Horner's Rule
 */

#include <stdio.h>

int main(void)
{
	float x;

	scanf("%f", &x);
	printf("Value of polynomial: %f",
		(((((3.0f * x + 2.0f) * x - 5.0f)
		* x - 1.0f) * x + 7.0f) * x - 6.0f));

	return 0;
}
