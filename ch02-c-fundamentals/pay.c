/* pay.c (Chapter 2, Programming Projects, page 34, number 7) */
/* Pay using the smallest number of $20, $10, $5, and $1 bils */

#include <stdio.h>

int main(void)
{
	int money;
	printf("Enter a dolloar amount: ");
	scanf("%d", &money);
	printf("$20 bills: %d\n", money / 20);
	money -= (money / 20) * 20;
	printf("$10 bills: %d\n", money / 10);
	money -= (money / 10) * 10;
	printf(" $5 bills: %d\n", money / 5);
	money -= (money / 5) * 5;
	printf(" $1 bills: %d", money / 1);

	return 0;
}
