/*
 * 07.c (Chapter 8, page 179, Programming Project 7)
 * Read a 5 * 5 array of integers and then prints the row sums and the column sums
 */

#include <stdio.h>

#define SIZE 5

int main(void)
{
    /* array[i][SIZE]: row total, array[SIZE][j]: column total */
    int array[SIZE + 1][SIZE + 1] = {0}, i, j;

    for (i = 0; i < SIZE; i++) {
        printf("Enter row %d: ", i);
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &array[i][j]);
            array[i][SIZE] += array[i][j] * (1.0f / SIZE);
            array[SIZE][j] += array[i][j] * (1.0f / SIZE);
        }
    }

    printf("Row totals:");
    for (i = 0; i < SIZE; i++) {
        printf(" %d", array[i][SIZE]);
    }
    printf("\n");

    printf("Column totals:");
    for (i = 0; i < SIZE; i++) {
        printf(" %d", array[SIZE][i]);
    }

    return 0;
}
