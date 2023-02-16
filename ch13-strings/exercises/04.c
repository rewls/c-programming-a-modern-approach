/*
 * 04.c (Chapter 13, page 308, Exercise 4)
 */

#include <stdio.h>
#include <ctype.h>

#define SIZE 10

int read_line(char str[], int n);

int main(void)
{
    char str1[SIZE], str2[SIZE];

    read_line(str1, SIZE - 1);
    read_line(str2, SIZE - 1);

    puts(str1);
    puts(str2);

    return 0;
}

/*
 * read_line: (a) Skip white space before beginning to store input characters.
 *            (b) Stop reading at the first whitezspace character.
 *            (c) Stop reading at the first new-line character,
 *                then store the new-line character in the string.
 *            (d) Leabe behind characters that it doesn't have room to store.
 */
int read_line(char str[], int n)
{
    int ch, i = 0;

    /* (a) */
    while (isspace(ch = getchar()))
        ;
    /* (b), (d) */
    do {
        str[i++] = ch;
    } while (i < n && !isspace(ch = getchar()));
    /* (c) */
    str[i] = ch == '\n' ? '\n' : '\0';

    return i;
}
