/*
 * 06.c (Chapter 10, page 239, Programming Project 6)
 * Evaluate RPN expressions
 */

#include <stdbool.h>  /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
void push(int i);
bool is_full(void);
void stack_overflow(void);
int pop(void);
bool is_empty(void);
void stack_underflow(void);

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
