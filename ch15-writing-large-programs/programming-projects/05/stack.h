/*
 * stack.h (Chapter 15, page 375, Programming Project 5)
 */

#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

extern int contents[];
extern int top;

void make_empty(void);
void push(int i);
bool is_full(void);
void stack_overflow(void);
int pop(void);
bool is_empty(void);
void stack_underflow(void);

#endif 
