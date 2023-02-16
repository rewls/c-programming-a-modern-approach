/*
 * 05.c (Chapter 13, page 312, Programming Project 5)
 * Add up its command-line arguments, which are assumed to be integers
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum, i;

    sum = 0;
    for (i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }

    printf("Total: %d", sum);

    return 0;
}
