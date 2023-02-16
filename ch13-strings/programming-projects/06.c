/*
 * 06.c (Chapter 13, page 312, Programming Project 6)
 * Checks planet names
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    char *planets[] = {"mercury", "venus", "earth",
                       "mars", "jupiter", "saturn",
                       "uranus", "neptune", "pluto"};
    char *p;
    int i, j;

    for (i = 1; i < argc; i++) {
        p = argv[i];
        while (*p++ = toupper(*p))
            ;
        for (j = 0; j < NUM_PLANETS; j++)
            if (strcmp(p, planets[j]) == 0) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}
