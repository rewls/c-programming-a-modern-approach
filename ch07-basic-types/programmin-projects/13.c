/*
 * 13.c (Chapter 7, page 159, Programming Project 13)
 * Calculate the average word length for a sentence
 */

#include <stdio.h>

int main(void)
{
    float average;
    int length, n;
    char ch;

    printf("Enter a sentence: ");
    n = 0;
    average = 0.0f;
    ch = getchar();
    while (ch != '\n') {
        while (ch == ' ') {
            ch = getchar();
        }
        length = 0;
        while (ch != ' ' && ch != '\n') {
            length++;
            ch = getchar();
        }
        average += length;
        n++;
    }

    if (n > 0) {
        average /= n;
    }

    printf("Average word length: %.1f", average);

    return 0;
}
