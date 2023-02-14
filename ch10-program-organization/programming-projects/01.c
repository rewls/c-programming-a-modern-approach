/*
 * 01.c (Chapter 10, page 238, Programming Project 1)
 * Ask the user to enter a series of parentheses and/or braces,
 * then indicate whether or not they're properly nested
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void push(char ch);
char pop(void);	    
bool is_empty(void);
bool is_full(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    char ch;

    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n') {
	switch (ch) {
	    case '(': case '{':
		push(ch);
		break;
	    case ')': case '}':
		pop();
		break;
	}
    }

    if (is_empty()) {
	printf("Parentheses/braces are nested properly");
    } else {
	printf("Parentheses/braces are not nested properly");
    }
	
    return 0;
}
    
void push(char ch)
{
    if (is_full()) {
	stack_overflow();
    } else {
	contents[top++] = ch;
    }
}

char pop(void)
{
    if (is_empty()) {
	stack_underflow();
    } else {
	return contents[--top];
    }
}   

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void stack_overflow(void)
{
    printf("Stack overflow");
    exit(0);
}

void stack_underflow(void)
{
    printf("Parentheses/braces are not nested properly");
    exit(0);
}	    
