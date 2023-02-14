/*
 * 02.c (Chapter 9, page 217, Programming Project 2)
 * Ask the user to enter the amount of taxable income, then display the tax due
 */

#include <stdio.h>

float compute_tax(float income);

int main(void)
{
    float income;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    printf("The tax due: %f", compute_tax(income));

    return 0;
}

float compute_tax(float income)
{
    return income <= 750.0f ? income * 0.01f :
           income <= 2250.0f ? 7.5f + (income - 750.0f) * 0.02f :
           income <= 3750.0f ? 37.5f + (income - 2250.0f) * 0.03f :
           income <= 5250.0f ? 82.5f + (income - 3750.0f) * 0.04f :
           income <= 7000.0f ? 142.5 + (income - 5250.0f) * 0.05f :
           230.0f + (income - 7000.f) * 0.06f;
}
