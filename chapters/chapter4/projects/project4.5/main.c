/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void) {
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;

  unsigned long long upc;

  printf("Enter the first 11 digits of a UPC: ");
  scanf_s("%llu", &upc);

  d = upc / (unsigned long long)10000000000LL;
  int group1 = (upc % (unsigned long long)10000000000LL) / 100000;

  i1 = group1 / 10000;
  i2 = (group1 % 10000) / 1000;
  i3 = (group1 % 1000) / 100;
  i4 = (group1 % 100) / 10;
  i5 = group1 % 10;

  int group2 = (upc % (unsigned long long)100000LL);

  j1 = group2 / 10000;
  j2 = (group2 % 10000) / 1000;
  j3 = (group2 % 1000) / 100;
  j4 = (group2 % 100) / 10;
  j5 = group2 % 10;

  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;

  total = 3 * first_sum + second_sum;

  printf("Check digit: %d\n", 9 - ((total - 1) % 10));
  printf("Check digit (another approach - shouldn't work): %d\n",
         10 - (total % 10));
  printf("Check digit (another another approach - maybe works?): %d\n",
         (10 - (total % 10)) % 10);
  return 0;
}
