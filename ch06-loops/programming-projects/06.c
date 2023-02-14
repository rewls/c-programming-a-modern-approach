/*
 * 06.c (Chapter 6, page 123, Programming Project 6)
 * Prompt the user to enter a number n, then print all even squares between 1 and n
 */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 2; i * i <= n; i += 2) {
        printf("%d\n", i * i);
    }

    return 0;
}
