/*
 * 01.c (Chapter 9, page 216, Programming Project 1)
 * Ask the user to enter a series of integers,
 * then sorts the integers by calling the function selection_sort
 */

#include <stdio.h>

#define SIZE 100

void selection_sort(int array[], int n);

int main(void)
{
    int array[SIZE], i, n;

    printf("Enter a series of integers: ");

    i = 0;
    do {
        scanf("%d", &array[i]);
        i++;
    } while (getchar() != '\n');
    n = i;

    selection_sort(array, n);

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

void selection_sort(int array[], int n)
{
    int i_max, i, temp;

    if (n <= 0) {
        return;
    }

    i_max = 0;
    for (i = 0; i < n; i++) {
        if (array[i_max] < array[i]) {
            i_max = i;
        }
    }
    temp = array[n - 1];
    array[n - 1] = array[i_max];
    array[i_max] = temp;

    selection_sort(array, n - 1);
}
