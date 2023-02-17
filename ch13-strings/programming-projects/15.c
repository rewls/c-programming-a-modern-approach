/*
 * 15.c (Chapter 13, page 313, Programming Project 15)
 */

#include <stdbool.h>  /* C99 Only */
#include <stdio.h>
#include <ctype.h>  /* isspace, isdigit */
#include <stdlib.h>  /* exit */

#define LEN_EXPRESSION 100
#define STACK_SIZE 100

int contents[STACK_SIZE];
int top;

int evaluate_RPN_expression(const char *expression);
void make_empty(void);
void push(int i);
bool is_full(void);
void stack_overflow(void);
int pop(void);
bool is_empty(void);
void stack_underflow(void);

int main(void)
{
    char expression[LEN_EXPRESSION];

    for (;;) {
        printf("Enter an RPN expression: ");
        gets(expression);

        printf("Value of expression: %d\n", evaluate_RPN_expression(expression));
    }

    return 0;
}

/* 
 * evaluate_RPN_expression:
 *     Evaluate RPN expressions
 */
int evaluate_RPN_expression(const char *expression)
{
    int operand;

    make_empty();

    for (;;expression++) {
        if (*expression == '=') {
            return pop();
        }
        if (isspace(*expression)) {
            continue;
        }
        if (isdigit(*expression)) {
            push(*expression - '0');
            continue;
        }
        switch (*expression) {
            case '+':
                push(pop() + pop());
                break;
            case '-':
                operand = pop();
                push(pop() - operand);
                break;
            case '*':
                push(pop() * pop());
                break;
            case '/':
                operand = pop();
                push(pop() / operand);
                break;
            default:
                exit(EXIT_FAILURE);
        }
    }
}

void make_empty(void)
{
    top = 0;
}

void push(int i)
{
    if (is_full()) {
        stack_overflow();
    } else {
        contents[top] = i;
        top++;
    }
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void stack_overflow(void)
{
    printf("Expression is too complex");
    exit(EXIT_FAILURE);
}

int pop(void)
{
    if (is_empty()) {
        stack_underflow();
    }
    top--;
    return contents[top];
}

bool is_empty(void)
{
    return top == 0;
}

void stack_underflow(void)
{
    printf("Not enough operands in expression");
    exit(EXIT_FAILURE);
}
