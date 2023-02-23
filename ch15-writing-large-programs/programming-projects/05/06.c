/*
 * 05.c (Chapter 15, page 375, Programming Project 5)
 * Evaluate RPN expressions
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
    char ch;
    int operand1, operand2;

    printf("Enter an RPN expression: ");
    scanf(" %c", &ch);
    for (;;) {
        switch (ch) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                push(ch - '0');
                break;
            case '+':
                push(pop() + pop());
                break;
            case '-':
                operand2 = pop();
                operand1 = pop();
                push(operand1 - operand2);
                break;
            case '*':
                push(pop() * pop());
                break;
            case '/':
                operand2 = pop();
                operand1 = pop();
                push(operand1 / operand2);
                break;
            case '=':
                printf("Value of expression: %d\n", pop());
                make_empty();
                printf("Enter an RPN expression: ");
                break;
            default:
                exit(EXIT_FAILURE);
        }
        scanf(" %c", &ch);
    }

    return 0;
}
