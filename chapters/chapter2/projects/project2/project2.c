#include <stdio.h>

float volOfSphere() {
  int radius;
  float factor = 4.0f / 3.0f;
  float M_PI = 3.14f;

  printf("Enter the radius of Sphere: ");
  scanf("%d", &radius);

  return factor * M_PI * radius * radius * radius;
}

int main(void) { printf("Volume of Sphere is: %f", volOfSphere()); }