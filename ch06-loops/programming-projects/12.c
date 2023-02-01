/*
 * 12.c (Chapter 6, page 124, Programming Project 12)
 * Continue adding terms until the current term becomes less than epsilon,
 * where epsilon is a small (floating-point) number entered by the user
 */

#include <stdio.h>

int main(void)
{
    float e, epsilon, term;
    int i, factorial;

    printf("Enter an small number: ");
    scanf("%f", &epsilon);
 
    factorial = 1;
    e = term = 1.0f;
    for (i = 1; term > epsilon; i++) {
	factorial *= i;
	term = 1.0f / factorial;
	e += term;
    }
    
    printf("Approximated e: %f", e);

    return 0;
}
