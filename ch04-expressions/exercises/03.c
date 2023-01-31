/*
 * 03.c (Chapter 4, page 69, Exercise 3)
 */

#include <stdio.h>

#define OPERAND1 8
#define OPERAND2 5

int main()
{
    printf("%d / %d = %d\n", OPERAND1, OPERAND2, OPERAND1 / OPERAND2);
    printf("%d / %d = %d\n", -OPERAND1, OPERAND2, -OPERAND1 / OPERAND2);
    printf("%d / %d = %d\n", OPERAND1, -OPERAND2, OPERAND1 / -OPERAND2);
    printf("%d / %d = %d\n", -OPERAND1, -OPERAND2, -OPERAND1 / -OPERAND2);

    return 0;
}
