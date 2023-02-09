/*
 * 05.c (Chapter 9, page 217, Programming Project 5)
 * Print an n * n magic square
 */

#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
    int size;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);

    char magic_square[size][size];

    create_magic_square(size, magic_square);

    print_magic_square(size, magic_square);

    return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
    int row, column, next_row, next_column, i;

    for (row = 0; row < n; row++) {
	for (column = 0; column < n; column++) {
	    magic_square[row][column] = 0;
	}
    }

    row = 0;
    column = n / 2;
    for (i = 1; i <= n * n; i++) {
	magic_square[row][column] = i;
	next_row = (n + row - 1) % n;
	next_column = (column + 1) % n;
	if (magic_square[next_row][next_column] != 0) {
	    row = (row + 1) % n;
	} else {
	    row = next_row;
	    column = next_column;
	}
    }
}

void print_magic_square(int n, char magic_square[n][n])
{
    int row, column;

    for (row = 0; row < n; row++) {
	for (column = 0; column < n; column++) {
	    printf("%5d", magic_square[row][column]);
	}
	printf("\n");
    }
}
