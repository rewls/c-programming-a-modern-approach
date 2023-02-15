/*
 * 05.c (Chapter 12, page 276, Programming Project 5)
 * Reverse the words in a sentence
 */

#include <stdio.h>

#define SIZE 100

void print_reverse(char sentence[], int n);

int main(void)
{
    char sentence[SIZE], term_char, ch, *p;

    printf("Enter a sentence: ");
    p = sentence;
    while ((ch = getchar()) != '.' && ch != '?' && ch != '!' && p < sentence + SIZE){
        *p = ch;
        p++;
    }
    term_char = ch;

    printf("Reversal of sentence: ");
    print_reverse(sentence, p - sentence);
    putchar(term_char);

    return 0;
}

/*
 * print_reverse: Print reverse words in a sentence
 */
void print_reverse(char sentence[], int n)
{
    char *p, *q, *end_word;

    for (p = sentence + (n - 1); p >= sentence; p--) {
        end_word = p;
        for (; *p != ' ' && p >= sentence; p--)
            ;
        q = p;
        do {
            q++;
            putchar(*q);
        } while (q != end_word);
        if (p > sentence) {
            putchar(' ');
        }
    }
}
