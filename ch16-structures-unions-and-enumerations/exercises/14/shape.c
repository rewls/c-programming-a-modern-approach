/*
 * shape.c (Chapter 16, page 411, Exercise 14)
 */

#include <math.h>
#include "shape.h"

#define PI 3.141592

float compute_area(struct shape s)
{
    switch (s.shape_kind) {
	case RECTANGLE:
	    return s.u.rectangle.height * s.u.rectangle.width;
	case CIRCLE:
	    return PI * powf(s.u.circle.radius, 2.0f);
    }

    return -1;
}

struct shape move(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;

    return s;
}

struct shape scale(struct shape s, int c)
{
    switch (s.shape_kind) {
	case RECTANGLE:
	    s.u.rectangle.height *= c;
	    s.u.rectangle.width *= c;
	case CIRCLE:
	    s.u.circle.radius *= c;
    }

    return s;
}
