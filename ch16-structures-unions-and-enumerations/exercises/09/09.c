#include <stdio.h>
#include "color.h"

#define PRINT_VALUE(conv, ...) \
    printf(#__VA_ARGS__ ": " conv "\n", __VA_ARGS__)

int main(void)
{
    struct color c = make_color(-1, 1, 256);

    PRINT_VALUE("%d, %d", getRed(c), c.blue);
    PRINT_VALUE("%d", equal_color(c, (struct color) {0, 1, 255}));

    c = brighter((struct color) {0, 0, 0});
    PRINT_VALUE("%d, %d, %d", c.red, c.green, c.blue);
    c = brighter((struct color) {1, 3, 230});
    PRINT_VALUE("%d, %d, %d", c.red, c.green, c.blue);
    c = darker((struct color) {100, 100, 100});
    PRINT_VALUE("%d, %d, %d", c.red, c.green, c.blue);

    return 0;
}
