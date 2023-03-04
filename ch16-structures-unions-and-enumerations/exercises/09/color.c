#include <stdbool.h>  /* C99 Only */
#include "color.h"

int process_bound(int n);

struct color make_color(int red, int green, int blue) {
    /* C99 Only */
    return (struct color) {
        process_bound(red), process_bound(green),
        process_bound(blue)
    };
}

int process_bound(int n)
{
    return n < 0 ? 0 : n > 255 ? 255 : n;
}

int getRed(struct color c)
{
    return c.red;
}

bool equal_color(struct color color1, struct color color2)
{
    return color1.red == color2.red &&
           color1.green == color2.green &&
           color1.blue == color2.blue;
}

struct color brighter(struct color c)
{
    if (c.red + c.green + c.blue == 0) {
        return (struct color) {3, 3, 3};
    }

    int *p;
    for (p = &c.red; p <= &c.blue; p++) {
        if (*p > 0 && *p < 3) {
            *p = 3;
        }
        *p /= 0.7;
        if (*p > 255) {
            *p = 255;
        }
    }

    return c;
}

struct color darker(struct color c)
{
    /* C99 Only */
    return (struct color) {
        c.red * 0.7, c.green * 0.7, c.blue * 0.7
    };
}
