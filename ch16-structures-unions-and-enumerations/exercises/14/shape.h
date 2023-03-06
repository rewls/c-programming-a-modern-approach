#ifndef SHAPE_H
#define SHAPE_H

#define RECTANGLE 0
#define CIRCLE 1

struct point {
    int x, y;
};

struct shape {
    int shape_kind;  /* RECTANGLE or CIRCLE */
    struct point center;
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
};

/*
 * compute_area:
 *     Computes the area of s. If s.shape_kind is invalid value, returns -1.
 */
float compute_area(struct shape s);

/*
 * move:
 *     Moves s by x units in the x direction nad y units in the y direction,
 *     returning the modified version of s.
 */
struct shape move(struct shape s, int x, int y);

/*
 * scale:
 *     Scales s by a factor of c, returning the modified version of s.
 *     If s.shape_kind is invalid value, returns -1
 */
struct shape scale(struct shape s, int c);

#endif
