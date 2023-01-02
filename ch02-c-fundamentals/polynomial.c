/* polynomial.c (Chapter 2, Programming Projects, page 34, number 5) */
/* Compute value of the polynomial */

#include <stdio.h>
/* To use <math.h>, compile with option -lm */
#include <math.h>

int main(void)
{
	float x;

	scanf("%f", &x);
	printf("Value of polynomial: %f",
			3.0f * powf(x, 5.0f) + 2.0f * powf(x, 4.0f)
			- 5.0f * powf(x, 3.0f) - powf(x, 2.0f) + 7 * x - 6);

	return 0;
}
