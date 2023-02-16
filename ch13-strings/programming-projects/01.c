/*
 * 01.c (Chapter 13, page 311, Programming Project 1)
 * Find the "smallest" and "largest" in a series of words.
 */

#include <stdio.h>
#include <string.h>

#define MAX_LEN 20 

int main(void)
{
    char smallest_word[MAX_LEN] = "", largest_word[MAX_LEN] = "", temp[MAX_LEN];

    printf("Enter word: ");
    scanf("%s", temp);
    strcpy(smallest_word, strcpy(largest_word, temp));
    while (strlen(temp) != 4) {
        printf("Enter word: ");
        scanf("%s", temp);
        if (strcmp(temp, smallest_word) < 0) {
            strcpy(smallest_word, temp);
        }
        if (strcmp(temp, largest_word) > 0) {
            strcpy(largest_word, temp);
        }
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}
