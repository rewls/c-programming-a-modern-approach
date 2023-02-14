/*
 * 13.c (Chapter 9, page 215, Exercise 13)
 * Evaluate a chess position
 */

#include <stdio.h>

#define SIZE 8

int evaluate_position(char board[SIZE][SIZE])
{
    int i, j, difference;

    difference = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            switch (board[i][j]) {
                case 'Q':
                    difference += 9;
                    break;
                case 'R':
                    difference += 5;
                    break;
                case 'B': case 'N':
                    difference += 3;
                    break;
                case 'P':
                    difference++;
                    break;
                case 'q':
                    difference -= 9;
                    break;
                case 'r':
                    difference -= 5;
                    break;
                case 'b': case 'n':
                    difference -= 3;
                    break;
                case 'p':
                    difference--;
                    break;
            }
        }
    }

    return difference;
}
