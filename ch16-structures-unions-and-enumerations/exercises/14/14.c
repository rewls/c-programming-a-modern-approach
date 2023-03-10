/*
 * 14.c (Chapter 16, page 411, Exercise 14)
 * Prints return values of compute_area and move.
 */

#include <stdio.h>
#include "shape.h"

#define PRINT_VALUE(conv, ...) \
    printf(#__VA_ARGS__ ": " conv "\n", __VA_ARGS__)

int main(void)
{
    struct shape s = {RECTANGLE, {0, 0}, {.rectangle = {2, 3}}};

    PRINT_VALUE("%f", compute_area(s));

    s.shape_kind = CIRCLE;
    s.u.circle.radius = 1;
    PRINT_VALUE("%f", compute_area(s));

    s = move(s, 1, 2);
    PRINT_VALUE("%d, %d", s.center.x, s.center.y);

    s = scale(s, 2);
    PRINT_VALUE("%d", s.u.circle.radius);

    return 0;
}
