/*
 * 10.c (Chapter 16, page 409, Exercise 10)
 * Prints return values of compute_area, compute_center, move and is_in.
 */

#include <stdio.h>
#include "graphics.h"

#define PRINT_VALUE(conv, ...) \
    printf(#__VA_ARGS__ ": " conv "\n", __VA_ARGS__)

int main(void)
{
    struct rectangle r = {
        (struct point) {1, 5}, (struct point) {8, 2}
    };

    PRINT_VALUE("%d, %d", r.upper_left.x, r.upper_left.y);
    PRINT_VALUE("%d, %d", r.lower_right.x, r.lower_right.y);
    PRINT_VALUE("%d", compute_area(r));
    PRINT_VALUE("%d, %d", compute_center(r).x, compute_center(r).y);
    PRINT_VALUE("%d, %d", move(r, 1, 2).upper_left.x, move(r, 1, 2).upper_left.y);
    PRINT_VALUE("%d, %d", move(r, 1, 2).lower_right.x, move(r, 1, 2).lower_right.y);
    PRINT_VALUE("%d", is_in(r, (struct point) {2, 4}));
    PRINT_VALUE("%d", is_in(r, (struct point) {2, 6}));

    return 0;
}
