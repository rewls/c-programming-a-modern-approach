/*
 * 11.c (Chapter 9, page 215, Exercise ,11)
 * Compute GPA
 */

#include <stdio.h>

float compute_GPA(char grades[], int n)
{
    float gpa;
    int i;

    gpa = 0.0f;
    for (i = 0; i < n; i++) {
	if (grades[i] != 'F') {
	    gpa += 4 - (grades[i] - 'A');
	}
    }
    gpa /= n;

    return gpa;
}

int main(void)
{
    printf("%f", compute_GPA((char []){'A', 'B', 'C', 'D', 'F'}, 5));

    return 0;
}
