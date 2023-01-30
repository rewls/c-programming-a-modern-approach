/*
 * 04.c (Chapter 2, page 34, Programming Project 4)
 * Compute 5% tax
 */

#include <stdio.h>

#define RATIO_TAX .05f

int main(void)
{
	float money;

	printf("Enter an amount: ");
	scanf("%f", &money);
	printf("With tax added: $%.2f", money * (1.0f + RATIO_TAX));

	return 0;
}
