/* sphere-volume-with-specified-radius.c (Chapter 2, Programming Projects, page 34, number 2) */
/* Compute the volume of a sphere with specified radius  */

#include <stdio.h>
/* To use <math.h>, compile with option -lm */
#include <math.h>

int main(void)
{
	float radius = 10.0f, volume;

	volume = (4.0f / 3.0f) * powf(radius, 3.0f);

	printf("Volume: %f", volume);

	return 0;
}
