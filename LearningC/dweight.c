#include "dweight.h"

/* Computes the dimentional weight of a 12" x 10" x 8" box. */

void dweight(void)
{
	int
		height = 8,
		length = 12,
		width = 10,
		weight = 10,
		volume = height * length * width;


	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimentional weight (pounds): %d\n", (volume + 165) / 166);
}