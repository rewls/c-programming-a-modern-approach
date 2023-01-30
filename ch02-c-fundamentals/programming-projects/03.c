/*
 * 03.c (Chapter 2, page 34, Programming Projects 3)
 * Compute the volume of a sphere with inputted radius
 */

#include <stdio.h>

#define PI 3.141592

int main(void)
{
	float radius, volume;

	scanf("%f", &radius);
	volume = (4.0f / 3.0f) * PI * radius * radius * radius;

	printf("Volume: %f", volume);

	return 0;
}
