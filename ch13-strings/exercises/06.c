/*
 * 06.c (Chapter 13, page 309, Exercise 6)
 */

#include <stdio.h>

#define SIZE 100

void censor(char *str);

int main(void)
{
    char str[SIZE];

    scanf("%s", str);

    censor(str);

    puts(str);

    return 0;
}

/*
 * censor: Modify a string by replacing every occurrence of foo by xxx.
 */
void censor(char *str)
{
    while (str[0]) {
        if (str[0] == 'f' && str[1] == 'o' && str[2] == 'o') {
            str[0] = str[1] = str[2] = 'x';
        }
        str++;
    }
}
