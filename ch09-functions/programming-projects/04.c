/*
 * 04.c (Chapter 9, page 217, Programming Project 4)
 * Test whether two words are anagrams
 */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N_ALPHABETS 26

void read_word(int counts[N_ALPHABETS]);
bool equal_array(int counts1[N_ALPHABETS], int counts2[N_ALPHABETS]);

int main(void)
{
    int counts1[N_ALPHABETS] = {0}, counts2[N_ALPHABETS] = {0};

    printf("Enter first word: ");
    read_word(counts1);
    printf("Enter second word: ");
    read_word(counts2);

    if (equal_array(counts1, counts2) == true) {
	printf("The words are anagrams.");
    } else {
	printf("The words are not anagrams.");
    }

    return 0;
}

void read_word(int counts[N_ALPHABETS])
{
    char ch;

    while ((ch = getchar()) != '\n') {
	if (isalpha((int)ch)) {
	    counts[tolower(ch) - 'a']++;
	}
    }
}

bool equal_array(int counts1[N_ALPHABETS], int counts2[N_ALPHABETS])
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++) {
	if (counts1[ch - 'a'] != counts2[ch - 'a']) {
	    break;
	}
    }

    return ch > 'z' ? true : false;
}
