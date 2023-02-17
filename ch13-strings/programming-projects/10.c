/*
 * 10.c (Chapter 13, page 312, Programming Project 10)
 */

#include <stdio.h>
#include <string.h>

#define LEN_NAME 50

void reverse_name(char *name);

int main(void)
{
    char first_name[LEN_NAME / 2], last_name[LEN_NAME / 2], name[LEN_NAME];

    printf("Enter a first and last name: ");
    scanf("%s%s", first_name, last_name);

    sprintf(name, "%s %s", first_name, last_name);

    reverse_name(name);

    puts(name);

    return 0;
}

/*
 * reverse_name:
 *     Take a first name and last name entered by the user
 *     and display the last name, a comma, and the first initial
 */
void reverse_name(char *name)
{
    char first_initial_str[4];

    sprintf(first_initial_str, ", %c", name[0]);

    int i = 0;
    while (name[i++] != ' ')
        ;

    int j = 0;
    while (name[j++] = name[i++])
        ;
    
    strcat(name, first_initial_str);
}
