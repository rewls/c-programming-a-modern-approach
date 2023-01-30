/* 05.c (Chapter 2, page 34, Programming Project 5) */
/* Compute value of the polynomial */

#include <stdio.h>

int main(void)
{
	float x;

	scanf("%f", &x);
	printf("Value of polynomial: %f",
		3.0f * x * x * x * x * x + 2.0f * x * x * x * x
		- 5.0f * x * x * x - x * x + 7.0f * x - 6.0f);

	return 0;
}
