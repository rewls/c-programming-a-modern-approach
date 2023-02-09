/*
 * 17.c (Chapter 8, page 181, Programming Project 17)
 * Print an n * n magic square
 */

#include <stdio.h>

int main(void)
{
    int size, i, row, column, next_row, next_column;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);

    int magic_array[size][size];

    for (row = 0; row < size; row++) {
	for (column = 0; column < size; column++) {
	    magic_array[row][column] = 0;
	}
    }

    row = 0;
    column = size / 2;
    for (i = 1; i <= size * size; i++) {
	magic_array[row][column] = i;
	next_row = (size + row - 1) % size;
	next_column = (column + 1) % size;
	if (magic_array[next_row][next_column] != 0) {
	    row = (row + 1) % size;
	} else {
	    row = next_row;
	    column = next_column;
	}
    }

    for (row = 0; row < size; row++) {
	for (column = 0; column < size; column++) {
	    printf("%5d", magic_array[row][column]);
	}
	printf("\n");
    }

    return 0;
}
