/*
 * 09.c (Chapter 6, page 123, Programming Project 9)
 * Calculates remaining balance on a loan after monthly payments
 */

#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_interest_rate, monthly_payment;
    int n_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter the number of payments: ");
    scanf("%d", &n_payments);

    monthly_interest_rate = interest_rate / 12;

    for (int i = 1; i <= n_payments; i++) {
	loan *= 1 + (monthly_interest_rate / 100);
	loan -= monthly_payment;
	printf("Balance remaining after payment %d: $%.2f\n", i, loan);
    }

    return 0;
}
