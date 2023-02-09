/*
 * 09.c (Chapter 8, page 179, Programming Project 9)
 * Generate a "random walk" across a 10 * 10 array.
 */

#include <stdio.h>
#include <stdlib.h>  /* srand(), rand() */
#include <time.h>  /* time() */

#define SIZE 10
#define N_DIRECTIONS 4

int main(void)
{
    char walk[SIZE][SIZE];
    int current_row, current_column, next_row, next_culumn, direction, block_count,
	i, j;
    const int offset_row[N_DIRECTIONS] = {-1, 0, 1, 0},
	  offset_column[N_DIRECTIONS] = {0, 1, 0, -1};
    char ch;

    for (i = 0; i < SIZE; i++) {
	for (j = 0; j < SIZE; j++) {
	    walk[i][j] = '.';
	}
    }

    srand((unsigned) time(NULL));
    current_row = 0;
    current_column = 0;
    ch = 'A';
    block_count = 0;
    while (ch <= 'Z') {
	walk[current_row][current_column] = ch;
	direction = rand() % 4;
	next_row = current_row + offset_row[direction];
	next_culumn = current_column + offset_column[direction];
	if (next_row < SIZE && next_row >= 0
		&& next_culumn < SIZE && next_culumn >= 0
		&& walk[next_row][next_culumn] == '.') {
	    current_row = next_row;
	    current_column = next_culumn;
	    ch++;
	    block_count = 0;
	} else {
	    block_count++;
	}
	if (block_count >= N_DIRECTIONS) {
	    for (i = 0; i < N_DIRECTIONS; i++) {
		next_row = current_row + offset_row[i];
		next_culumn = current_column + offset_column[i];
		if (next_row < SIZE && next_row >= 0
			&& next_culumn < SIZE && next_culumn >= 0
			&& walk[next_row][next_culumn] == '.') {
		    break;
		}
	    }
	    if (i == N_DIRECTIONS) {
		break;
	    }
	}
    }

    for (i = 0; i < SIZE; i++)  {
	for (j = 0; j < SIZE; j++) {
	    printf("%c ", walk[i][j]);
	}
	printf("\n");
    }

    return 0;
}
