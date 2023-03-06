/*
 * graphics.h (Chapter 16, page 409, Exercise 10)
 */

#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <stdbool.h>  /* C99 Only */

struct point {
    int x, y;
};

struct rectangle {
    struct point upper_left, lower_right;
};

/*
 * compute_area:
 *     Computes the area of r
 */
int compute_area(struct rectangle r);

/*
 * compute_center:
 *     Computes the center of r, returning it as a point value.
 *     If either the x or y coordinate of the center isn't an integer,
 *     store its truncated value in the point structure.
 */
struct point compute_center(struct rectangle r);

/*
 * move:
 *     Moves r by x units in the x direction and y units in the y direction,
 *     returning the modified version of r.
 */
struct rectangle move(struct rectangle r, int x, int y);

/*
 * is_in:
 *     Determines whether a point p lies within r, returning true or false.
 */
bool is_in(struct rectangle r, struct point p);

#endif
