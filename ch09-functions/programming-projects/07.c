/*
 * 07.c (Chapter 9, page 217, Programming Project 7)
 * Ask the user to enter values for x and n, call power to comput x^n,
 * and then display the value returned by the function
 */

#include <stdio.h>

int power(int x, int n);

int main(void)
{
    int x, n;

    printf("Enter values for x and n: ");
    scanf("%d%d", &x, &n);

    printf("%d", power(x, n));

    return 0;
}

int power(int x, int n)
{
    if (n == 0) {
        return 1;
    }
    if (n != 2 && n % 2 == 0) {
        return power(power(x, n / 2), 2);
    }
    return x * power(x, n - 1);
}
