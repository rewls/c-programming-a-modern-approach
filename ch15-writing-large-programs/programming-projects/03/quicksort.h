/*
 * quicksort.h (Chapter 15, page 375, Programming Project 3)
 */

#ifndef QUICKSORT_H
#define QUICKSORT_H

/*
 * quicksort:
 *     Sort an array of integers using Quicksort algorithm recursively
 */
void quicksort(int a[], int low, int high); 

/*
 * split:
 *     Return an partitioning element
 */
int split(int a[], int low, int high);

#endif
