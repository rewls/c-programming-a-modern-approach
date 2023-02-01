/*
 * 05.c (Chapter 5, page 96, programming project 5)
 * Ask the user to enter the amount of taxable income, then display the tax due
 */

#include <stdio.h>

int main(void)
{
    float income, tax = 0.0f;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    tax = income <= 750.0f ? income * 0.01f :
	  income <= 2250.0f ? 7.5f + (income - 750.0f) * 0.02f :
	  income <= 3750.0f ? 37.5f + (income - 2250.0f) * 0.03f :
	  income <= 5250.0f ? 82.5f + (income - 3750.0f) * 0.04f :
	  income <= 7000.0f ? 142.5 + (income - 5250.0f) * 0.05f :
	  230.0f + (income - 7000.f) * 0.06f;

    printf("The tax due: %f", tax);
	
    return 0;
}
