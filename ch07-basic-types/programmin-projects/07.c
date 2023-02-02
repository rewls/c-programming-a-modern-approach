/*
 * 07.c (Chapter 7, page 158, Programming Project 7)
 * Add, subtract, multiply, or divide two fractions
 */

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num = 0, result_denom = 0,
	m, n, temp, gcd;
    char operator;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &operator, &num2, &denom2);

    switch (operator) {
	case '+':
	    result_num = num1 * denom2 + num2 * denom1;
	    result_denom = denom1 * denom2;
	    break;
	case '-':
	    result_num = num1 * denom2 - num2 * denom1;
	    result_denom = denom1 * denom2;
	    break;
	case '*':
	    result_num = num1 * num2;
	    result_denom = denom1 * denom2;
	    break;
	case '/':
	    result_num = num1 * denom2;
	    result_denom = denom1 * num2;
	    break;
    }

    /* Euclid`s algorithm for computing the GCD */
    m = result_num;
    n = result_denom;
    while (n != 0) {
	temp = m % n;
	m = n;
	n = temp;
    }
    gcd = m;

    result_num /= gcd;
    result_denom /= gcd;
    
    if (result_denom == 1) {
	printf("The result is %d\n", result_num);
    } else {
	printf("The result is %d/%d\n", result_num, result_denom);
    }

    return 0;
}
