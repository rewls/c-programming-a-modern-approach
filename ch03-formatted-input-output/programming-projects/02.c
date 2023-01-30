/*
 * 02.c (Chapter 3, page 50, Programming Project 2)
 * Format product information entered by the user.
 */

#include <stdio.h>

int main(void)
{
    int item_number, purchase_month, purchase_day, purchase_year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("enter unit price: ");
    scanf("%f", &unit_price);
    printf("enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &purchase_month, &purchase_day, &purchase_year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%.2d/%.2d/%.4d",
	    item_number, unit_price, purchase_month, purchase_day, purchase_year);
    
    return 0;
}
