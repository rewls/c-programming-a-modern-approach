/*
 * 03.c (Chapter 9, page 217, Programming Project 3)
 * Generate a "random walk" across a 10 * 10 array.
 */

#include <stdio.h>
#include <stdlib.h>  /* srand(), rand() */
#include <time.h>  /* time() */
#include <stdbool.h> 

#define SIZE 10
#define N_DIRECTIONS 4

void generate_random_walk(char walk[SIZE][SIZE]);
void print_array(char walk[SIZE][SIZE]);

int main(void)
{
    char walk[SIZE][SIZE];

    srand((unsigned) time(NULL));

    generate_random_walk(walk);

    print_array(walk);

    return 0;
}

void generate_random_walk(char walk[SIZE][SIZE])
{
    int current_row, current_column, next_row, next_culumn, direction,
	i, j;
    const int offset_row[N_DIRECTIONS] = {-1, 0, 1, 0},
	      offset_column[N_DIRECTIONS] = {0, 1, 0, -1};
    bool block[N_DIRECTIONS] = {false};
    char ch;

    for (i = 0; i < SIZE; i++) {
	for (j = 0; j < SIZE; j++) {
	    walk[i][j] = '.';
	}
    }

    current_row = 0;
    current_column = 0;
    ch = 'A';
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
	    for (i = 0; i < N_DIRECTIONS; i++) {
		block[i] = false;
	    }
	} else {
	    block[direction] = true;
	    for (i = 0; i < N_DIRECTIONS; i++) {
		if (block[i] == false) {
		    break;
		}
	    }
	    if (i == N_DIRECTIONS) {
		break;
	    }
	}
    }
}

void print_array(char walk[SIZE][SIZE])
{
    int i, j;

    for (i = 0; i < SIZE; i++)  {
	for (j = 0; j < SIZE; j++) {
	    printf("%c ", walk[i][j]);
	}
	putchar('\n');
    }
}
