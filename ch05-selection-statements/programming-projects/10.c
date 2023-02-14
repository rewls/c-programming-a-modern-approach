/*
 * 10.c (Chapter 5, page 97, programming project 10)
 * Convert a numberical grade into a letter grade
 */

#include <stdio.h>

int main(void)
{
    int numerical_grade;

    printf("Enter numerical grade: ");
    scanf("%d", &numerical_grade);

    if (numerical_grade >= 0 && numerical_grade <= 100) {
        printf("Letter grade: ");
    } else {
        printf("Error: invalid numerical grade");
    }

    switch (numerical_grade / 10) {
        case 10: case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        case 5: case 4: case 3: case 2: case 1: case 0:
            printf("F");
    }

    return 0;
}
