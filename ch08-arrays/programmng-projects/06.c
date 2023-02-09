/*
 * 06.c (Chapter 8, page 179, Programming Project 6)
 * Read a message entered by the user and translates it into B1FF-speak
 */

#include <stdio.h>
#include <ctype.h>

#define SIZE 100

int main(void) {
    char ch[SIZE + 1];
    int i, count;

    printf("Enter message: ");

    for (i = 0; (ch[i] = getchar()) != '\n'; i++) {
	ch[i] = toupper(ch[i]);
	switch (ch[i]) {
	    case 'A': ch[i] = '4'; break;
	    case 'B': ch[i] = '8'; break;
	    case 'E': ch[i] = '3'; break;
	    case 'I': ch[i] = '1'; break;
	    case 'O': ch[i] = '0'; break;
	    case 'S': ch[i] = '5'; break;
	}
    }
    count = i;

    printf("In B1FF-speak: ");
    for (i = 0; i < count; i++) {
	printf("%c", ch[i]);
    }
    printf("!!!!!!!!!!");

    return 0;
}
