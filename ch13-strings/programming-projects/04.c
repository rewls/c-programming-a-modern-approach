/*
 * 04.c (Chapter 13, page 312, Programming Project 4)
 * Echo its command-line arguments in reverse order
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    for (i = argc - 1; i > 0; i--) {
        printf("%s ", argv[i]);
    }

    return 0;
}
