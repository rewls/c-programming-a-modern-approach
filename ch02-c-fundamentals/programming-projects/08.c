/*
 * 08.c (Chapter 2, page 34, Programming Project 8)
 * Calculates remaining balance on a loan after monthly payments
 */

#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_interest_rate = interest_rate / 12;
    loan *= 1 + (monthly_interest_rate / 100);
    loan -= monthly_payment;
    printf("Balance remaining after first payment: $%.2f\n", loan);
    loan *= 1 + (monthly_interest_rate / 100);
    loan -= monthly_payment;
    printf("Balance remaining after second payment: $%.2f\n", loan);
    loan *= 1 + (monthly_interest_rate / 100);
    loan -= monthly_payment;
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}
