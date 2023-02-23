/*
 * line.c (Chapter 15, page 375, Programming Project 1)
 */

#include <stdio.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60

char line[MAX_LINE_LEN+1];
int line_len = 0;
int num_words = 0;

void clear_line(void)
{
    line[0] = '\0';
    line_len = 0;
    num_words = 0;
}

void add_word(const char *word)
{
    if (num_words > 0) {
        line[line_len] = ' ';
        line[line_len+1] = '\0';
        line_len++;
    }
    strcat(line, word);
    line_len += strlen(word);
    num_words++;
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
    int extra_spaces, spaces_to_insert, num_more_spaces, i, j;
    /* status 0: end wider gaps, 1: beginning wider gaps */
    static int status = 0;

    extra_spaces = MAX_LINE_LEN - line_len;
    spaces_to_insert = extra_spaces / (num_words - 1);
    num_more_spaces = extra_spaces - spaces_to_insert * (num_words - 1);
    for (i = 0; i < line_len; i++) {
        if (line[i] != ' ')
            putchar(line[i]);
        else {
            switch (status) {
                case 0:
                    if (num_words - 1 > num_more_spaces)
                        break;
                /* FALL THROUGH */
                case 1:
                    if (num_more_spaces-- > 0) {
                        putchar(' ');
                        extra_spaces--;
                    }
            }
            for (j = 1; j <= spaces_to_insert + 1; j++)
                putchar(' ');
            extra_spaces -= spaces_to_insert;
            num_words--;
        }
    }
    putchar('\n');
    status = !status;
}

void flush_line(void)
{
    if (line_len > 0)
        puts(line);
}
