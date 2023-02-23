/*
 * stack.c (Chapter 15, page 375, Programming Project 5)
 */

#include <stdbool.h>  /* C99 only */
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

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
