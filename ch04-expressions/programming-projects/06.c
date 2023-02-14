/*
 * 06.c (Chapter 4, page 71, Exercise 6)
 * Computes a European Article Number check digit
 */

#include <stdio.h>

int main(void)
{
    int first, second, third, fourth, fifth, sixth,
        seventh, eighth, ninth, tenth, eleventh, twelfth,
        first_sum, second_sum, total;

    printf("Enter the first 11 digits of a EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d %1d%1d%1d%1d%1d%1d",
            &first, &second, &third, &fourth, &fifth, &sixth,
            &seventh, &eighth, &ninth, &tenth, &eleventh, &twelfth);

    first_sum = second + fourth + sixth + eighth + tenth + twelfth;
    second_sum = first + third + fifth + seventh + ninth + eleventh;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
