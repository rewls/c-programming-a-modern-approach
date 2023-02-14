/*
 * 11.c (Chapter 8, page 178, Exercise 11)
 * Print checke board
 */

#include <stdio.h>

#define SIZE 8

int main(void)
{
    char checker_board[SIZE][SIZE];
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            checker_board[i][j] = (i + j) % 2 == 0 ? 'B' : 'R';
        }
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%c ", checker_board[i][j]);
        }
        printf("\n");
    }

    return 0;
}
