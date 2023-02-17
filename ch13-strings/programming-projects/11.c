/*
 * 11.c (Chapter 13, page 312, Programming Project 11)
 */

#include <stdio.h>
#include <string.h>

#define NUM_WORD 50
#define LEN_WORD 10

double compute_average_word_length(const char *sentence);

int main(void)
{
    char word[LEN_WORD], sentence[LEN_WORD * NUM_WORD];

    printf("Enter a sentence: ");

    scanf("%s", word);
    strcpy(sentence, word);
    while (getchar() != '\n') {
        scanf("%s", word);
        strcat(strcat(sentence, " "), word);
    }

    printf("Average word length: %.1f", compute_average_word_length(sentence));

    return 0;
}

/*
 * compute_average_word_length:
 *     Calculate the average word length for a sentence.
 */
double compute_average_word_length(const char *sentence)
{
    float average = 0.0f;
    int n = 0;
    while (*sentence) {
        if (*sentence++ == ' ') {
            n++;
        } else {
            average++;
        }
    }
    n++;

    if (n > 1) {
        average /= n;
    }

    return average;
}
