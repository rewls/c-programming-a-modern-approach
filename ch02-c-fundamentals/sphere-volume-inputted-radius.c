/* sphere-volume-with-inputted-radius.c (Chapter 2, Programming Projects, page 34, number 3) */
/* Compute the volume of a sphere with inputtedradius  */

#include <stdio.h>
/* To use <math.h>, compile with option -lm */
#include <math.h>

int main(void)
{
	float radius, volume;

	scanf("%f", &radius);
	volume = (4.0f / 3.0f) * powf(radius, 3.0f);

	printf("Volume: %f", volume);

	return 0;
}
