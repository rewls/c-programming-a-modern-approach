/*
 * 07.c (Chapter 13, page 312, Programming Project 7)
 * Ask the user for a two-digit number, then print the English word for the number
 */

#include <stdio.h>

int main(void)
{
    int one_digit, ten_digit;
    char *tens[] = {"", "", "twenty", "thirty", "forty",
                    "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *ten_word[] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
                        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *ones[] = {"", "-one", "-two", "-three", "-four",
                    "-five", "-six", "-seven", "-eight", "-nine"};

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &ten_digit, &one_digit);

    printf("You entered the number ");

    if (ten_digit == 1) {
        printf("%s", ten_word[one_digit]);
    } else {
        printf("%s%s", tens[ten_digit], ones[one_digit]);
    }
    putchar('.');
                    
    return 0;
}
