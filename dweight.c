#include <stdio.h>

#include "dweight.h"

#define INCHES_PER_POUND 166

/* Computes the dimentional weight of a 12" x 10" x 8" box. */

void dweight(void)
{
	int
		height,
		length,
		width,
		weight,
		volume;

	printf("Enter height of the box: ");
	scanf_s("%d", &height);

	printf("Enter length of the box: ");
	scanf_s("%d", &length);

	printf("Enter width of the box: ");
	scanf_s("%d", &width);

	volume = height * length * width;
	weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimentional weight (pounds): %d\n", weight);
}