#include <stdio.h>

// Program adds a 5% tax on entered value and prints it out.

int main(void) {
  float amt;

  printf("Enter ammount in dollars & cents: ");
  scanf("%f", &amt);

  printf("With tax added: %.2f", amt + (0.05 * amt));

  return 0;
}