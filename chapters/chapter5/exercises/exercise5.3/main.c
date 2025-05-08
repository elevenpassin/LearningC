#include <stdio.h>

void a(void) {
  int i = 3, j = 4, k = 5;

  printf("%d\n", i < j || ++j < k); // (i < j) || ((++j) < k)
  printf("%d %d %d", i, j, k);
}

void b(void) {
  int i = 7, j = 8, k = 9;
  printf("%d\n", i - 7 && j++ < k); // (i - 7) && ((j++) < k)
  printf("%d %d %d", i, j, k);
}

void c(void) {
  int i = 7, j = 8, k = 9;
  printf("%d ", (i = j) || (j = k));
  printf("%d %d %d", i, j, k);
}

void d(void) {
  int i = 1, j = 1, k = 1;

  printf("%d ", ++i || ++j && ++k); // (++i) || ((++j) && (++k))
  printf("%d %d %d", i, j, k);
}

int main(void) {
  // a();
  // b();
  // c();
  // d();
}
