#include <stdio.h>

#define _USE_MATH_DEFINES

#include <math.h>

float volOfSphere() {
  int radius;
  float factor = 4.0f / 3.0f;

  printf("Enter the radius of Sphere: ");
  scanf_s("%d", &radius);

  return factor * M_PI * radius * radius * radius;
}

int main(void) { printf("Volume of Sphere is: %f", volOfSphere()); }