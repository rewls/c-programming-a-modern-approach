#include "graphics.h"

int compute_area(struct rectangle r)
{
    return (r.upper_left.y - r.lower_right.y) *
           (r.lower_right.x - r.upper_left.x);
}
