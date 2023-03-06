/*
 * graphics.c (Chapter 16, page 409, Exercise 10)
 */

#include <stdbool.h>  /* C99 Only */
#include "graphics.h"

int compute_area(struct rectangle r)
{
    return (r.upper_left.y - r.lower_right.y) *
           (r.lower_right.x - r.upper_left.x);
}

struct point compute_center(struct rectangle r)
{
    /* C99 Only */
    return (struct point) {
        (r.upper_left.x + r.lower_right.x) / 2,
        (r.upper_left.y + r.lower_right.y) / 2
    };
}

struct rectangle move(struct rectangle r, int x, int y)
{
    /* C99 Only */
    return (struct rectangle) {
        (struct point) {r.upper_left.x + x, r.upper_left.y + y},
        (struct point) {r.lower_right.x + x, r.lower_right.y + y}
    };
}

bool is_in(struct rectangle r, struct point p)
{
    return p.x > r.upper_left.x && p.x < r.lower_right.x &&
           p.y < r.upper_left.y && p.y > r.lower_right.y;
}
