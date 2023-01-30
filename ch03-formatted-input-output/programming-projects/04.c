/*
 * 04.c (Chapter 3, page 50, Programming Project 4)
 * Accept a telephone number and display the number
 */

#include <stdio.h>

int main(void)
{
    int first, second, third;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &first, &second, &third);

    printf("You entered %d.%d.%d", first, second, third);

    return 0;
}
