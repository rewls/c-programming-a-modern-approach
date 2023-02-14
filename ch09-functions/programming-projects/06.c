/*
 * 06.c (Chapter 9, page 217, Programming Project 6)
 * Ask the user to enter a value for x,
 * call the function to compute the value of the polynomial,
 * and then display the value returned by the function
 */

#include <stdio.h>

int compute_polynomial(int x);

int main(void)
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("%d", compute_polynomial(x));

    return 0;
}

int compute_polynomial(int x)
{
    return 3 * x * x * x * x * x + 2 * x * x * x * x 
           - 5 * x * x * x - x * x + 7 * x - 6;
}
