#ifndef GRAPHICS_H
#define GRAPHICS_H

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

#endif
