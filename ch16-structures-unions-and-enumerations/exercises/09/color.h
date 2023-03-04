#ifndef COLOR_H
#define COLOR_H

#include <stdbool.h>  /* C99 Only */

struct color {
    int red;
    int green;
    int blue;
};

/*
 * make_color:
 *     Returns a color structure
 *     containing the specified red, green, and blue values.
 *     If any argument is less than zero,
 *     the corresponding member of the structure
 *     will contain zero instead.
 *     If any argument is greater than 255,
 *     the corresponding member of the structure will contain 255.
 */
struct color make_color(int red, int green, int blue);

/*
 * getRed:
 *     Returns the value of c's red member
 */
int getRed(struct color c);

/*
 * equal_color:
 *     Returns true if the corresponding members
 *     of color1 and color2 are equal.
 */
bool equal_color(struct color color1, struct color color2);

/*
 * brighter:
 *     Returns a color structure that represents
 *     a brighter version of the color c.
 *     the structure is identical to c,
 *     except that each member has been divided by 0.7
 *     (with the result truncated to an integer).
 *     If all members of c are zero, the function returns
 *     a color whose members all have the value 3.
 *     If any member of c is greater than 0 but less than 3,
 *     it is replaced by 3 before the division by 0.7
 *     If dividing by 0.7 causes a member to exceed 255,
 *     it is reduced to 255.
 */
struct color brighter(struct color c);

/*
 * darker:
 *     Returns a color structure that represents 
 *     a darker version of the color c.
 *     The structure is identical to c,
 *     except that each member has been multiplied by 0.7
 *     (with the result truncated to an integer).
 */
struct color darker(struct color c);

#endif
