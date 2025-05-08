#include <stdio.h>

void a(void) {
  int i = 2, j = 3;

  int k = i * j == 6;
  // k = ((i * j) == 6);

  printf("%d", k);
}

void b(void) {
  int i = 5, j = 10, k = 1;

  printf("%d", k > i < j); // (k > i) < j
}

void c(void) {
  int i = 3, j = 2, k = 1;

  printf("%d", i < j == j < k); // (i < j) == (j < k)
}

void d(void) {
  int i = 3, j = 4, k = 5;

  printf("%d", i % j + i < k); // ((i % j) + i) < k
}

int main(void) {
  // a();
  // b();
  // c();
  // d();
}
