/*
 * 06.c (Chapter 12, page 276, Programming Project 6)
 * Sorts an array of integers using Quicksort algorithm
 */

#include <stdio.h>

#define N 10

void quicksort(int *a, int *low, int *high);
int *split(int *low, int *high);

int main(void)
{
    int a[N], *p;

    printf("Enter %d numbers to be sorted: ", N);
    for (p = a; p < a + N; p++)
        scanf("%d", p);

    quicksort(a, a, a + N - 1);

    printf("In sorted order: ");
    for (p = a; p < a + N; p++)
        printf("%d ", *p);
    putchar('\n');

    return 0;
}

/*
 * quicksort: Sort an array of integers using Quicksort algorithm recursively
 */
void quicksort(int *a, int *low, int *high)
{
    int *middle;

    if (low >= high) return;
    middle = split(low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

/*
 * split: Return an partitioning element
 */
int *split(int *low, int *high)
{
    int part_element = *low;

    for (;;) {
        while (low < high && part_element <= *high)
            high--;
        if (low >= high) break;
        *low = *high;
        low++;

        while (low < high && *low <= part_element)
            low++;
        if (low >= high) break;
        *high = *low;
        high--;
    }
    *high = part_element;

    return high;
}
