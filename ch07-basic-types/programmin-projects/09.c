/*
 * 09.c (Chapter 7, page 158, Programming Project 9)
 * Ask the user for a 12-hour time, then display the time in 24-hour form
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, minute;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &ch);
    
    hour = hour % 12 + (toupper(ch) == 'P') * 12;

    printf("Equivalent 24-hour time: %d:%.2d", hour, minute);

    return 0;
}
