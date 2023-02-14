/*
 * 12.c (Chapter 7, page 158, Programming Project 12)
 * Evaluate an expression
 */

#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    float result, operand;
    char operator;

    printf("Enter an expression: ");
    scanf("%f", &result);
    while ((operator = getchar()) != '\n') {
        scanf("%f", &operand);
        switch (operator) {
            case '+':
                result += operand;
                break;
            case '-':
                result -= operand;
                break;
            case '*':
                result *= operand;
                break;
            case '/':
                result /= operand;
                break;
        }
    }

    printf("value of expression: %.1f", result);

    return 0;
}
