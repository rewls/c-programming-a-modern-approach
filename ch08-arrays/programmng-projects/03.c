/*
 * 03.c (Chapter 8, page 178, Programming Project 3)
 * Checks numbers for repeated digits
 */

#include <stdio.h>
#include <stdbool.h>   /* C99 only */

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit])
                break;
            digit_seen[digit] = true;
            n /= 10;
        }
        if (n > 0)
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");

        printf("Enter a number: ");
        scanf("%ld", &n);
    }

    return 0;
}
