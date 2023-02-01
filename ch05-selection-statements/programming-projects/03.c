/*
 * 03.c (Chapter 5, page 96, programming project 3)
 * Calculates a broker's commission
 */

#include <stdio.h>

int main(void)
{
    float commission, value, price, rival_commission;
    int n_shares;

    printf("Enter the number of shares and the price per share: ");
    scanf("%d %f", &n_shares, &price);

    value = n_shares * price;
    
    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\n", commission);

    rival_commission = n_shares < 2000 ? 33.003f : 33.002f;

    printf("Rival Commission: $%.2f\n", rival_commission);

    return 0;
}
