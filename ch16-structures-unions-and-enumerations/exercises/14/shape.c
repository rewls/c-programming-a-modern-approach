#include <math.h>
#include "shape.h"

#define PI 3.141592

float compute_area(struct shape s)
{
    if (s.shape_kind == RECTANGLE) {
        return s.u.rectangle.height * s.u.rectangle.width;
    }

    return PI * powf(s.u.circle.radius, 2.0f);
}

struct shape move(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;

    return s;
}


