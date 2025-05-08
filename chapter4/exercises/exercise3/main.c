#include <stdio.h>

int main(void) {
  printf("%d", 8 / 5);   // C89: 1 or 2
  printf("%d", -8 / 5);  // C89: -1 or -2
  printf("%d", 8 / -5);  // C89: 1 or 2
  printf("%d", -8 / -5); // C89: -1 or -2
}