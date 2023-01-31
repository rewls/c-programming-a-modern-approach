/*
 * 04.c (Chapter 4, page 71, Exercise 4)
 * Read an integer entered by the user and display it in octal
 */

#include <stdio.h>

int main(void)
{ 
    int n;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);

    printf("In octal, your number is: %d%d%d%d%d",
	    n / 8 / 8 / 8 / 8 % 8, n / 8 / 8 / 8 % 8, n / 8 / 8 % 8, n / 8 % 8, n % 8);

    return 0;
}
