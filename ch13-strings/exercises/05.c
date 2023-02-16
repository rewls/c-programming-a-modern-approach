/*
 * 05.c (Chapter 13, page 309, Exercise 5)
 */

#include <stdio.h>
#include <ctype.h>

#define SIZE 100

void capitalize_a(char str[]);
void capitalize_b(char *str);

int main(void)
{
    char str1[SIZE], str2[SIZE];

    scanf("%s", str1);
    scanf("%s", str2);

    capitalize_a(str1);
    capitalize_b(str2);

    puts(str1);
    puts(str2);
    
    return 0;
}

/*
 * capitalize: Capitalize all letters in its argument.
 *             The argument will be a null-terminated string
 *             containing arbitrary characters, not just letters.
 */

/* (a) */
void capitalize_a(char str[])
{
    int i;

    for (i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

/* (b) */
void capitalize_b(char *str)
{
    while (*str++ = toupper(*str))
        ;
}
