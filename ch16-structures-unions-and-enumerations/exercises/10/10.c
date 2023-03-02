#include <stdio.h>
#include "graphics.h"

#define PRINT_VALUE(conv, value) \
    printf(#value ": " conv "\n", value)

int main(void)
{
    struct rectangle r = {
        (struct point) {1, 5}, (struct point) {8, 2}
    };

    PRINT_VALUE("%d", compute_area(r));

    return 0;
}
